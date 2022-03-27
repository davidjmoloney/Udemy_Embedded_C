

#include<stdint.h>
#include<stdio.h>


/*
 * Here we use a clever trick of c to quickly write to entities of struct variable
 * For this the variables must be allocated with bitfields
 */


//A union will only use as much memory as its longest part -
// - in this case it uses 32 bits as packetValue and the struct packetFields both use 32 bits
// - if we write our 32 bit input packet to the union as packetValue this will write directly into all 32bits of the memory
// - we can then access the bitfields using their relative names as defined in the struct section of the union

union Packet
{
	uint32_t packetValue;

	struct
	{
		uint32_t crc			:2;
		uint32_t status			:1;
		uint32_t payload		:12;
		uint32_t bat			:3;
		uint32_t sensor			:3;
		uint32_t longAddr		:8;
		uint32_t shortAddr		:2;
		uint32_t addrMode		:1;
	}packetFields;	//because this is a nested struct we can define it like this - its name won't change or be defined elsewhere

};


int main(void)
{

   union Packet packet;
   printf("Enter the 32bit packet value:");
   scanf("%X",&packet.packetValue);			//takes input from user

   //we can print each sub-entity of the struct within the union like this
   printf("crc      :%#x\n",packet.packetFields.crc);	//prints crc of the packetField struct within the packet Union
   printf("status   :%#x\n",packet.packetFields.status);
   printf("payload  :%#x\n",packet.packetFields.payload);
   printf("bat      :%#x\n",packet.packetFields.bat);
   printf("sensor   :%#x\n",packet.packetFields.sensor);
   printf("longAddr :%#x\n",packet.packetFields.longAddr);
   printf("shortAddr:%#x\n",packet.packetFields.shortAddr);
   printf("addrMode :%#x\n",packet.packetFields.addrMode);

   printf("Size of union is %I64u\n",sizeof(packet));



   while(getchar() != '\n');
   getchar();

   return 0;

}












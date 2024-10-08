#pragma once

namespace Big
{
	using Void = std::uint32_t;
	using Any = std::uint32_t;
	using Hash = std::uint32_t;
	using Entity = std::int32_t;
	using Player = std::int32_t;
	using FireId = std::int32_t;
	using Ped = Entity;
	using Vehicle = Entity;
	using Cam = std::int32_t;
	using CarGenerator = std::int32_t;
	using Group = std::int32_t;
	using Train = std::int32_t;
	using Object = Entity;
	using Pickup = Object;
	using Weapon = std::int32_t;
	using Interior = std::int32_t;
	using Blip = std::int32_t;
	using Texture = std::int32_t;
	using TextureDict = std::int32_t;
	using CoverPoint = std::int32_t;
	using Camera = std::int32_t;
	using TaskSequence = std::int32_t;
	using ColourIndex = std::int32_t;
	using Sphere = std::int32_t;
	using ScrHandle = std::int32_t;

#pragma pack(push, 1)
	struct Vector2
	{
		float x{};
		float y{};
	};
#pragma pack(pop)

#pragma pack(push, 1)
	typedef struct
	{
		float x;
		DWORD _paddingx;
		float y;
		DWORD _paddingy;
		float z;
		DWORD _paddingz;
	} Vector3;
#pragma pack(pop)
#pragma pack(push, 1)
	typedef struct
	{
		float x;
		float y;
		float z;
	} Vector3_t;
#pragma pack(pop)
	struct Blip_t {
	public:
		__int32 iID; //0x0000 
		__int8 iID2; //0x0004 
		char _0x0005[3];
		BYTE N000010FB; //0x0008 (80 = moves with player, some values will turn icon into map cursor and break it)
		char _0x0009[7];
		Vector3 coords;
		char _0x001C[6];
		BYTE bFocused; //0x0022   (Focused? 0100 0000)
		char _0x0023[5];
		char* szMessage; //0x0028 If not null, contains the string of whatever the blip says when selected.
		char _0x0030[16];
		int iIcon; //0x0040
		char _0x0044[4];
		DWORD dwColor; //0x0048 (Sometimes works?)
		char _0x004C[4];
		float fScale; //0x0050 
		__int16 iRotation; //0x0054 Heading
		BYTE bInfoIDType; //0x0056 GET_BLIP_INFO_ID_TYPE
		BYTE bZIndex; //0x0057 
		BYTE bDisplay; //0x0058  Also Visibility 0010
		BYTE bAlpha; //0x0059
	};//Size=0x005A

	struct BlipList {
	public:
		Blip_t* m_Blips[1500]; //0x0000 

	};//Size=0x2F18

#pragma pack(push, 1)
	struct Color
	{
		std::uint8_t r{ 255 };
		std::uint8_t g{ 255 };
		std::uint8_t b{ 255 };
		std::uint8_t a{ 255 };
	};
#pragma pack(pop)
}

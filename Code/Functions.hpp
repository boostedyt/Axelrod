#pragma once
#include "Common.hpp"
#include "Types.hpp"

namespace Big {
	//----------------\
	// FUNCTIONS	   |
	//----------------/

	extern bool Godmode;
	extern bool Invisible;
	extern bool SuperJump;
	extern bool NeverWanted;
	extern bool FireBreath;
	extern bool noragdoll;
	extern bool Extremejump;
	extern bool Fastrun;
	extern bool HandTrails;
	extern bool FootTrails;
	extern bool SlideRun;
	extern bool NoClip;

	inline float handscale{ 0.5f };
	inline float handred{ 255.f };
	inline float handgreen{ 0.f };
	inline float handblue{ 0.f };
	inline float footred{ 255.f };
	inline float footgreen{ 0.f };
	inline float footblue{ 0.f };


	void FunctionsOnTick();

	//=================
	// PED FUNCTIONS
	//=================

	Ped ClonePed(Ped ped);
	Ped CreatePed(const char* PedName, Vector3 SpawnCoordinates, int ped_type, bool network_handle);

	//Animations
	void LoadAnim(const char* dict);
	void playAnimation(Ped ped, bool loop, const char* dict, const char* anim);

	//SKINS
	bool applyChosenSkin(std::string skinName);

	//CONTROL
	void RequestControlOfEnt(Entity entity);

	//FORCE
	void ApplyForceToEntity(Entity e, float x, float y, float z);

	//NEARBY PEDS
	std::set<Ped> getNearbyPeds();
	void update_nearby_peds(Ped playerPed, int count);

	//VEHICLE
	bool get_vehicle_keyboard_result(uint32_t* outModel);

	//little one-line function called '$' to convert $TRING into a hash-key:
	Hash $(std::string str);

	//Converts Radians to Degrees
	float degToRad(float degs);

	//quick function to get-coords-of-entity:
	Vector3 coordsOf(Entity entity);

	//quick function to get distance between 2 points:
	float distanceBetween(Vector3 A, Vector3 B);

	//quick "get random int in range 0-x" function:
	int rndInt(int start, int end);

	//TELEPORTATION
	Vector3 get_blip_marker();
	void teleport_to_marker();
	void teleport_to_objective();
	void teleport_to_coords(Entity e, Vector3 coords);

	//KEYBOARD
	std::string show_keyboard(const char* title_id, const char* prepopulated_text);

	//VECTOR/FLOAT
	Vector3 rot_to_direction(Vector3* rot);
	Vector3 add(Vector3* vectorA, Vector3* vectorB);
	Vector3 multiply(Vector3* vector, float x);
	float get_distance(Vector3* pointA, Vector3* pointB);
	float get_vector_length(Vector3* vector);

	//NOTIFICATION
	void notifyBottom(const char* fmt, ...);
	void notifyBottom(std::string str);
	void notifyMap(const char* fmt, ...);
	void notifyMap(std::string str);
	void notifyCenter(const char* fmt, ...);
	void notifyCenter(std::string str);
	void update_status_text();
	void notifyleft(const char* msg);
	void notify_Custom(const char* Head_txt, const char* fmt, ...);
	void notify_Original(const char* fmt, ...);
	void notify_Red(const char* fmt, ...);
	void notify_Green(const char* fmt, ...);

	// Header
	extern bool HeaderImage;
	const char* Add_Strings(const char* string1, const char* string2);
	std::string Documents_Patha();

	//DRAWING FUNCTIONS
	void draw_rect(float A_0, float A_1, float A_2, float A_3, int A_4, int A_5, int A_6, int A_7);
	void draw_menu_line(std::string caption, float lineWidth, float lineHeight, float lineTop, float lineLeft, float textLeft, bool active, bool title, bool rescaleText = true);

	enum eBone
	{
		SKEL_ROOT = 0x0,
		SKEL_Pelvis = 0x2e28,
		SKEL_L_Thigh = 0xe39f,
		SKEL_L_Calf = 0xf9bb,
		SKEL_L_Foot = 0x3779,
		SKEL_L_Toe0 = 0x83c,
		IK_L_Foot = 0xfedd,
		PH_L_Foot = 0xe175,
		MH_L_Knee = 0xb3fe,
		SKEL_R_Thigh = 0xca72,
		SKEL_R_Calf = 0x9000,
		SKEL_R_Foot = 0xcc4d,
		SKEL_R_Toe0 = 0x512d,
		IK_R_Foot = 0x8aae,
		PH_R_Foot = 0x60e6,
		MH_R_Knee = 0x3fcf,
		RB_L_ThighRoll = 0x5c57,
		RB_R_ThighRoll = 0x192a,
		SKEL_Spine_Root = 0xe0fd,
		SKEL_Spine0 = 0x5c01,
		SKEL_Spine1 = 0x60f0,
		SKEL_Spine2 = 0x60f1,
		SKEL_Spine3 = 0x60f2,
		SKEL_L_Clavicle = 0xfcd9,
		SKEL_L_UpperArm = 0xb1c5,
		SKEL_L_Forearm = 0xeeeb,
		SKEL_L_Hand = 0x49d9,
		SKEL_L_Finger00 = 0x67f2,
		SKEL_L_Finger01 = 0xff9,
		SKEL_L_Finger02 = 0xffa,
		SKEL_L_Finger10 = 0x67f3,
		SKEL_L_Finger11 = 0x1049,
		SKEL_L_Finger12 = 0x104a,
		SKEL_L_Finger20 = 0x67f4,
		SKEL_L_Finger21 = 0x1059,
		SKEL_L_Finger22 = 0x105a,
		SKEL_L_Finger30 = 0x67f5,
		SKEL_L_Finger31 = 0x1029,
		SKEL_L_Finger32 = 0x102a,
		SKEL_L_Finger40 = 0x67f6,
		SKEL_L_Finger41 = 0x1039,
		SKEL_L_Finger42 = 0x103a,
		PH_L_Hand = 0xeb95,
		IK_L_Hand = 0x8cbd,
		RB_L_ForeArmRoll = 0xee4f,
		RB_L_ArmRoll = 0x1470,
		MH_L_Elbow = 0x58b7,
		SKEL_R_Clavicle = 0x29d2,
		SKEL_R_UpperArm = 0x9d4d,
		SKEL_R_Forearm = 0x6e5c,
		SKEL_R_Hand = 0xdead,
		SKEL_R_Finger00 = 0xe5f2,
		SKEL_R_Finger01 = 0xfa10,
		SKEL_R_Finger02 = 0xfa11,
		SKEL_R_Finger10 = 0xe5f3,
		SKEL_R_Finger11 = 0xfa60,
		SKEL_R_Finger12 = 0xfa61,
		SKEL_R_Finger20 = 0xe5f4,
		SKEL_R_Finger21 = 0xfa70,
		SKEL_R_Finger22 = 0xfa71,
		SKEL_R_Finger30 = 0xe5f5,
		SKEL_R_Finger31 = 0xfa40,
		SKEL_R_Finger32 = 0xfa41,
		SKEL_R_Finger40 = 0xe5f6,
		SKEL_R_Finger41 = 0xfa50,
		SKEL_R_Finger42 = 0xfa51,
		PH_R_Hand = 0x6f06,
		IK_R_Hand = 0x188e,
		RB_R_ForeArmRoll = 0xab22,
		RB_R_ArmRoll = 0x90ff,
		MH_R_Elbow = 0xbb0,
		SKEL_Neck_1 = 0x9995,
		SKEL_Head = 0x796e,
		IK_Head = 0x322c,
		FACIAL_facialRoot = 0xfe2c,
		FB_L_Brow_Out_000 = 0xe3db,
		FB_L_Lid_Upper_000 = 0xb2b6,
		FB_L_Eye_000 = 0x62ac,
		FB_L_CheekBone_000 = 0x542e,
		FB_L_Lip_Corner_000 = 0x74ac,
		FB_R_Lid_Upper_000 = 0xaa10,
		FB_R_Eye_000 = 0x6b52,
		FB_R_CheekBone_000 = 0x4b88,
		FB_R_Brow_Out_000 = 0x54c,
		FB_R_Lip_Corner_000 = 0x2ba6,
		FB_Brow_Centre_000 = 0x9149,
		FB_UpperLipRoot_000 = 0x4ed2,
		FB_UpperLip_000 = 0xf18f,
		FB_L_Lip_Top_000 = 0x4f37,
		FB_R_Lip_Top_000 = 0x4537,
		FB_Jaw_000 = 0xb4a0,
		FB_LowerLipRoot_000 = 0x4324,
		FB_LowerLip_000 = 0x508f,
		FB_L_Lip_Bot_000 = 0xb93b,
		FB_R_Lip_Bot_000 = 0xc33b,
		FB_Tongue_000 = 0xb987,
		RB_Neck_1 = 0x8b93,
		IK_Root = 0xdd1c
	};
}
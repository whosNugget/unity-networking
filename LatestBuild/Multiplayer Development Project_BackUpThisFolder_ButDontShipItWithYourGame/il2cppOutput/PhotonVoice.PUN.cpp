#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15;
// Photon.Pun.IPunPrefabPool
struct IPunPrefabPool_tB2C028CC90B18EE2C8E70A6502A14FC36319E974;
// Photon.Pun.PhotonStream
struct PhotonStream_t3E8F04756FBB266F05C8D10E0801F8CA9099B98E;
// Photon.Pun.PhotonView
struct PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B;
// Photon.Pun.ServerSettings
struct ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9;
// Photon.Realtime.AppSettings
struct AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3;
// Photon.Realtime.Player
struct Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202;
// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED;
// Photon.Realtime.RegionHandler
struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF;
// Photon.Realtime.Room
struct Room_t5DFC39DD6736A2641374564EC6C31352BE33000D;
// Photon.Realtime.RoomOptions
struct RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906;
// Photon.Realtime.SupportLogger
struct SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895;
// Photon.Voice.AudioInChangeNotifier
struct AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF;
// Photon.Voice.AudioInEnumerator
struct AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t1D30C76AF63F7484497DB0D027B8FD6737E4A90E;
// Photon.Voice.IAudioOut`1<System.Single>
struct IAudioOut_1_t970939371843C52599AA57F5D2829329D4B0B757;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78;
// Photon.Voice.LocalVoice
struct LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501;
// Photon.Voice.PUN.PhotonVoiceNetwork
struct PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4;
// Photon.Voice.PUN.PhotonVoiceNetwork[]
struct PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD;
// Photon.Voice.PUN.PhotonVoiceView
struct PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073;
// Photon.Voice.PhotonTransportProtocol
struct PhotonTransportProtocol_tC28AB26BC8A7E28111FEBC8D5A43E2387AA5E1A6;
// Photon.Voice.Unity.Recorder
struct Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2;
// Photon.Voice.Unity.Recorder[]
struct RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29;
// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD;
// Photon.Voice.Unity.RemoteVoiceLink[]
struct RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552;
// Photon.Voice.Unity.Speaker
struct Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00;
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7;
// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421;
// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B;
// Photon.Voice.VoiceClient
struct VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t493827AC88A51FAD8E238895D807BE12DB2231D7;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t5D4A1E6474457B8E2EC008E3E59C92FC98FA823B;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_t77792EF62E1B24D9666BCB178534B67CA61B5310;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_t00F3470888C13838BFB255D624661D152DA0DAF7;
// System.Action`1<System.Single[]>
struct Action_1_tF14E2B60916B5AA685432504A9BC1036ED6AAB84;
// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player>
struct Action_2_tC270082FD863C6EB0B0BB17C204142E668D0EAE6;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t287B0AC534E8F7AB09FED48BBC6EC3765D21F5F7;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2;
// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch>
struct Dictionary_2_t91F14575E46ABD7E975C202BBE0C4E35E4881256;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.PhotonView>
struct Dictionary_2_t89490FDA0056B9CB27C64F1AC70088C69FCCD8E0;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t4C6D33FABCBD1DB81282694D8D44BB868F80DC07;
// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t6E27AC44864B4226A2559E7B6015F6BA370E2787;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tAAE8BF32F260E5939A1EAF05F4C38C7841B64300;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t3865379B96850AA393B5EE78E06D1C7BBC9A0AD4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t3FCE145AF9BA644CB9338C4194BD1B4BD0052AB1;
// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker>
struct Func_4_tEF305166C6FB281C7E7CB286979ECE7182F073CD;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04F35B025276E30DC03BE2651A4FBB56783E3F74;
IL2CPP_EXTERN_C String_t* _stringLiteral06AEC3D9BEA47D5D92E42D1EF19294AD1A8F1905;
IL2CPP_EXTERN_C String_t* _stringLiteral0D13F37077842D0BB4FC5CFEE53CEC6CA8DFAAAE;
IL2CPP_EXTERN_C String_t* _stringLiteral106FF8DF5BE6DEFDCC35263B30E15FCCF1814B9D;
IL2CPP_EXTERN_C String_t* _stringLiteral10EDFC61403592A98B7F925D12F314EFB7DBD734;
IL2CPP_EXTERN_C String_t* _stringLiteral18216E1A6E00460B4ECBB733639D9C31F85E97A2;
IL2CPP_EXTERN_C String_t* _stringLiteral1E7ADF72F362F3F2E72B6354555CBDFDBE49F447;
IL2CPP_EXTERN_C String_t* _stringLiteral21CCFE9ABBE9D120348ECB78B7691CCD47E95122;
IL2CPP_EXTERN_C String_t* _stringLiteral23896082EC3C669EF2957E3E73BE3C289ECE27A5;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
IL2CPP_EXTERN_C String_t* _stringLiteral309623DDE35C26EA5DE6AD7667A8844FB7CAE5AD;
IL2CPP_EXTERN_C String_t* _stringLiteral31B99131DBDDEECF048EE3FC5A15B37B4D44AA51;
IL2CPP_EXTERN_C String_t* _stringLiteral328A4AC6A43A69BA94637489F3F434BA81528293;
IL2CPP_EXTERN_C String_t* _stringLiteral3F8535D86296716D9653082C2F2EE83FFCA98C1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4A0D362DB2C6034DB3912361148E95FCE1C5FF49;
IL2CPP_EXTERN_C String_t* _stringLiteral4AEC5D0A8B19CED88792A4A0C1E652F4023683E8;
IL2CPP_EXTERN_C String_t* _stringLiteral4DDA0650A80D3109C34D432C3D601594792A5F91;
IL2CPP_EXTERN_C String_t* _stringLiteral5334A4986B4101A55ECE89D20B7565FA13E41080;
IL2CPP_EXTERN_C String_t* _stringLiteral566C5EFE968CCB8CE294612E9E45CE21DD0FA32C;
IL2CPP_EXTERN_C String_t* _stringLiteral5954C2C87CDF50F48ACB1B74FD178C392C89836D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B503DD91722DF4ED702558A0E928CD3EE2337EA;
IL2CPP_EXTERN_C String_t* _stringLiteral63F79FBF8E5C1F96B56E76CF36DE876ECBAEBD98;
IL2CPP_EXTERN_C String_t* _stringLiteral659FDE37473DF9AA2CBEA17772D31299CE88B76E;
IL2CPP_EXTERN_C String_t* _stringLiteral65B5E1AE8CE0BF9D80E544ED193A29F8A6A44B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D;
IL2CPP_EXTERN_C String_t* _stringLiteral73E6E9D670A048F2E14DD5988DFFAD1B20FF648C;
IL2CPP_EXTERN_C String_t* _stringLiteral75F9821A1234C161239E13FB36EACBA40E8E246A;
IL2CPP_EXTERN_C String_t* _stringLiteral7FAA8C2CFC660379AA1B01E30147EED55E7A2C17;
IL2CPP_EXTERN_C String_t* _stringLiteral8E530B927252616AD302E5C5767BAC31BC4B2CA4;
IL2CPP_EXTERN_C String_t* _stringLiteral998856FDB6D0E7D835BFB6B0C158B9C9D6CFEA95;
IL2CPP_EXTERN_C String_t* _stringLiteral99FA66344D96F03C594A6CB247BEA2D6A645032B;
IL2CPP_EXTERN_C String_t* _stringLiteral9C61899B949B2D4F67ADFA851F6C4EB36EF486C5;
IL2CPP_EXTERN_C String_t* _stringLiteral9C68AAD7D96E8465A6F05111D3B5756FC67964D1;
IL2CPP_EXTERN_C String_t* _stringLiteralAC6245040DDDB79C89627649385DF638418FE097;
IL2CPP_EXTERN_C String_t* _stringLiteralADCE69FA7EA785E7A89BB3867AE3D3D4352FDF24;
IL2CPP_EXTERN_C String_t* _stringLiteralB37FFF908125130F56A56D1974666976BC2AFBF7;
IL2CPP_EXTERN_C String_t* _stringLiteralB5083CEF31CEC886DF3A1A3E3B0534866ECD2FDD;
IL2CPP_EXTERN_C String_t* _stringLiteralB798C81B1F9A4DB6CD38375CB8546CC5D9EFE9FF;
IL2CPP_EXTERN_C String_t* _stringLiteralB7B95F3541119DF8EA2776778EE25DB82EAA62D7;
IL2CPP_EXTERN_C String_t* _stringLiteralBD01C27668E25804634FE2DB653D74E31C210314;
IL2CPP_EXTERN_C String_t* _stringLiteralBDDB3EE59AE867681A03D395EC30053BEA62A044;
IL2CPP_EXTERN_C String_t* _stringLiteralC591FAC36EFA5AAA2ADC3A6C1B68421515E19958;
IL2CPP_EXTERN_C String_t* _stringLiteralC5C56EDCC0F6D409B0636CB5961515F77CC2D628;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B7C8DA88CCBCF65600EE6DC5C27F14DDB60D61;
IL2CPP_EXTERN_C String_t* _stringLiteralCC51CFF425880135E42D143F06A116BC9EB7583A;
IL2CPP_EXTERN_C String_t* _stringLiteralD4EBD4FF8072845C6A2A560EC823A016C4C28F35;
IL2CPP_EXTERN_C String_t* _stringLiteralDB819AFE4EEEA32F24C0F7987DE297C387F889A5;
IL2CPP_EXTERN_C String_t* _stringLiteralDCBC25AC6B1BA95AF40AD31A2D8B7B2B4DC71594;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCADCBBE419CCAE4AC7EBA4834FBCD938BDA676;
IL2CPP_EXTERN_C String_t* _stringLiteralE06B7B9BEFC884CC7C8BD80369C5969E34A8B2BE;
IL2CPP_EXTERN_C String_t* _stringLiteralE0FE4E5682EF21449FDECD9E058FA50A26A835DD;
IL2CPP_EXTERN_C String_t* _stringLiteralE4C533B15434B7D996B0D964614944468A5752E6;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA29156E21B1B4445B12199AF3B0B27F2D1F749;
IL2CPP_EXTERN_C String_t* _stringLiteralF03F5C1453A920CDE8753E116A1726241704D5B7;
IL2CPP_EXTERN_C String_t* _stringLiteralF43489200336B9A13299F94CF5DE179F7D5A24B7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D86EFDE99359C1B7EE08CC88C853610C7D0208;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8482B1D651A8184302BC0D56CAD9A4F1756626;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mC65C535AD9E8EBDA08D65E47000C0D249B8FACB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B_m347A176252862D6CD26E7E6B5E9EAF8F4159273B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073_m85F96A4641A342F37F194C17D2852470C80197C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_mF71ACBC40EE042B1D052818BD12BA8EE9459D4F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_mFF5358493B5D0784AABB52FECC4998EE7B9243B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_m321BAB3537195B87A500D7487488CCE9A28CE357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_m599EF283A21FB137CD672152EDB55633B7704CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_m5DF217C2F16F38A14739B8A7AED4435423F970C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_m3C9C5137A0C2E201175D1F3B141AE027D82A52A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC1125413603A2AE4190EF3FA864F4AF9F04076C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC628CD963B65DADDA9B99A3C5213B4CF0ACCB2D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_mCD705990068274836AD48840368E41684EF9DABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m06469FA3DADBD6D1062DF136967EC0376ECD5C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonVoiceNetwork_OnPunStateChanged_m077FDB02AF33EB5BD01CAC51D5FAF38185FD45FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_Awake_m8D74D9A9ABC271D5728D38A4AE72AA9D7AC09D89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_CheckLateLinking_mEB76F1C333AED46B23FE8653626C22827B28B6B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_ConnectAndJoinRoom_mFFA7A315C0AFF4A13A7154C481B99BB0018120DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_ConnectOrJoin_m3591500847FAADE0DD39640A286C2115AE7AFD7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_Connect_mC33E89D3268DD57A0C34C7556A46692EAD019392_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_Disconnect_mA93AA739DA28DCE0B0071975865B5A14B4B76EF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_FollowPun_mF4CB0F0860829913FFDF19CCFCB37C215AA4EC68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_GetVoiceRoomName_m5509B80BAF542F7A68E4F12755F967341987D214_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_JoinRoom_m0D00556858D2D4C8616BE2CD1B805F0E0D30F075_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_OnDestroy_m8F54658059C11E42C9DCB903A59896D2AEB3A0E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_OnDisable_m91E553401E272480067E3D6E26303A25B7B7418F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_OnEnable_mA47E1743EB899A08711BA99C58221B12684F9EAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_OnPunStateChanged_m077FDB02AF33EB5BD01CAC51D5FAF38185FD45FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_SimpleSpeakerFactory_m6F35DF8293E84E8E035CA2E08F2DD8E3AC88023C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork__cctor_mD69D24261AB42747A67AF2749B67FAAB4963997E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork__ctor_m7272E5F9E75C472001001D60D370FDCF4B559623_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceNetwork_set_Instance_mA2B966412F15BC8D16E4FCC022EB5E6450C070C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_Awake_mEF5E2630B53E80D89CDD718DC5A01D0033110401_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_CheckLateLinking_m6D386CC4A35A1960E1FC24B478C6A83754D2E806_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_Init_m9ECD445B6B7C5E3EB70F4BA71B2995105A9560C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_SetupRecorderInUse_m5C225EC31F5AE63C451947A785A8F11EE05074B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_SetupRecorder_m64A4AC906B3F7284B1F081AAAC399B25053C8571_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_SetupRecorder_m6E91745AD3BAA9285FFE9CB1930C19FF3291F558_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_SetupSpeakerInUse_m91CB24ACF94FAC95E04CF3346CF5D600A7D77C0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_SetupSpeaker_m495EADEB42321564E855B3F0F4185FE810F910C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_SetupSpeaker_m9D79DCA700DDCC68C8D2C9E9E93FE72794A9E179_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_Setup_m6680D9FF71196EBA50E56E3DB40B19B31B7C580E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_set_RecorderInUse_m298F4DFC08684E620AB4A060259192D8AB0F5D46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhotonVoiceView_set_SpeakerInUse_mBE93E3440BAFF4657D5033A8146F59A11B38CCE0_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD;
struct RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29;
struct SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t0BDB9D34CF6BA3CF0430B8A1ED8E6782DE2284FA 
{
public:

public:
};


// System.Object


// Photon.Realtime.EnterRoomParams
struct  EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// System.Boolean Photon.Realtime.EnterRoomParams::CreateIfNotExists
	bool ___CreateIfNotExists_5;
	// System.Boolean Photon.Realtime.EnterRoomParams::RejoinOnly
	bool ___RejoinOnly_6;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___ExpectedUsers_7;

public:
	inline static int32_t get_offset_of_RoomName_0() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___RoomName_0)); }
	inline String_t* get_RoomName_0() const { return ___RoomName_0; }
	inline String_t** get_address_of_RoomName_0() { return &___RoomName_0; }
	inline void set_RoomName_0(String_t* value)
	{
		___RoomName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomName_0), (void*)value);
	}

	inline static int32_t get_offset_of_RoomOptions_1() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___RoomOptions_1)); }
	inline RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * get_RoomOptions_1() const { return ___RoomOptions_1; }
	inline RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 ** get_address_of_RoomOptions_1() { return &___RoomOptions_1; }
	inline void set_RoomOptions_1(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * value)
	{
		___RoomOptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomOptions_1), (void*)value);
	}

	inline static int32_t get_offset_of_Lobby_2() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___Lobby_2)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_Lobby_2() const { return ___Lobby_2; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_Lobby_2() { return &___Lobby_2; }
	inline void set_Lobby_2(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___Lobby_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lobby_2), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerProperties_3() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___PlayerProperties_3)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_PlayerProperties_3() const { return ___PlayerProperties_3; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_PlayerProperties_3() { return &___PlayerProperties_3; }
	inline void set_PlayerProperties_3(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___PlayerProperties_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerProperties_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameServer_4() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___OnGameServer_4)); }
	inline bool get_OnGameServer_4() const { return ___OnGameServer_4; }
	inline bool* get_address_of_OnGameServer_4() { return &___OnGameServer_4; }
	inline void set_OnGameServer_4(bool value)
	{
		___OnGameServer_4 = value;
	}

	inline static int32_t get_offset_of_CreateIfNotExists_5() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___CreateIfNotExists_5)); }
	inline bool get_CreateIfNotExists_5() const { return ___CreateIfNotExists_5; }
	inline bool* get_address_of_CreateIfNotExists_5() { return &___CreateIfNotExists_5; }
	inline void set_CreateIfNotExists_5(bool value)
	{
		___CreateIfNotExists_5 = value;
	}

	inline static int32_t get_offset_of_RejoinOnly_6() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___RejoinOnly_6)); }
	inline bool get_RejoinOnly_6() const { return ___RejoinOnly_6; }
	inline bool* get_address_of_RejoinOnly_6() { return &___RejoinOnly_6; }
	inline void set_RejoinOnly_6(bool value)
	{
		___RejoinOnly_6 = value;
	}

	inline static int32_t get_offset_of_ExpectedUsers_7() { return static_cast<int32_t>(offsetof(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942, ___ExpectedUsers_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_ExpectedUsers_7() const { return ___ExpectedUsers_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_ExpectedUsers_7() { return &___ExpectedUsers_7; }
	inline void set_ExpectedUsers_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___ExpectedUsers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpectedUsers_7), (void*)value);
	}
};


// Photon.Realtime.RoomInfo
struct  RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___customProperties_1)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___expectedUsers_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}
};


// Photon.Realtime.RoomOptions
struct  RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_12;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_5() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___cleanupCacheOnLeave_5)); }
	inline bool get_cleanupCacheOnLeave_5() const { return ___cleanupCacheOnLeave_5; }
	inline bool* get_address_of_cleanupCacheOnLeave_5() { return &___cleanupCacheOnLeave_5; }
	inline void set_cleanupCacheOnLeave_5(bool value)
	{
		___cleanupCacheOnLeave_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomProperties_6)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomPropertiesForLobby_7), (void*)value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___Plugins_8)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugins_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CSuppressRoomEventsU3Ek__BackingField_9)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_9() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return &___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_9(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CPublishUserIdU3Ek__BackingField_10)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_10() const { return ___U3CPublishUserIdU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_10() { return &___U3CPublishUserIdU3Ek__BackingField_10; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_10(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CDeleteNullPropertiesU3Ek__BackingField_11)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_11() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_11(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_broadcastPropsChangeToAll_12() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___broadcastPropsChangeToAll_12)); }
	inline bool get_broadcastPropsChangeToAll_12() const { return ___broadcastPropsChangeToAll_12; }
	inline bool* get_address_of_broadcastPropsChangeToAll_12() { return &___broadcastPropsChangeToAll_12; }
	inline void set_broadcastPropsChangeToAll_12(bool value)
	{
		___broadcastPropsChangeToAll_12 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct  List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389, ____items_1)); }
	inline RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* get__items_1() const { return ____items_1; }
	inline RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389_StaticFields, ____emptyArray_5)); }
	inline RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Photon.Realtime.Room
struct  Room_t5DFC39DD6736A2641374564EC6C31352BE33000D  : public RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9 * ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CLoadBalancingClientU3Ek__BackingField_13)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_U3CLoadBalancingClientU3Ek__BackingField_13() const { return ___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return &___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_13(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isOffline_14() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___isOffline_14)); }
	inline bool get_isOffline_14() const { return ___isOffline_14; }
	inline bool* get_address_of_isOffline_14() { return &___isOffline_14; }
	inline void set_isOffline_14(bool value)
	{
		___isOffline_14 = value;
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___players_15)); }
	inline Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9 * get_players_15() const { return ___players_15; }
	inline Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9 ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9 * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16)); }
	inline bool get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() const { return ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return &___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline void set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(bool value)
	{
		___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t88D433895B07AE9EB31E0F34FC262179ACE45C3D 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t88D433895B07AE9EB31E0F34FC262179ACE45C3D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t47E84DB42FD6F15046A870127EDABC67C73683E1 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t47E84DB42FD6F15046A870127EDABC67C73683E1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// POpusCodec.Enums.SamplingRate
struct  SamplingRate_t735D84DD78387B1793CB9732810868253837D45B 
{
public:
	// System.Int32 POpusCodec.Enums.SamplingRate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SamplingRate_t735D84DD78387B1793CB9732810868253837D45B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ConnectMethod
struct  ConnectMethod_tF523329BB0368506F7C6271AC6184A9F27E41308 
{
public:
	// System.Int32 Photon.Pun.ConnectMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectMethod_tF523329BB0368506F7C6271AC6184A9F27E41308, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.OwnershipOption
struct  OwnershipOption_t45BCF7BD7E980B42D2C78A671E82AB78E3D73097 
{
public:
	// System.Int32 Photon.Pun.OwnershipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnershipOption_t45BCF7BD7E980B42D2C78A671E82AB78E3D73097, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PunLogLevel
struct  PunLogLevel_t4A6EF1499A00201A7593ACEF6CC7D36C865D0583 
{
public:
	// System.Int32 Photon.Pun.PunLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PunLogLevel_t4A6EF1499A00201A7593ACEF6CC7D36C865D0583, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ViewSynchronization
struct  ViewSynchronization_tD026A6A289A4BF5263BF25B0EF79AB614E93D08B 
{
public:
	// System.Int32 Photon.Pun.ViewSynchronization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewSynchronization_tD026A6A289A4BF5263BF25B0EF79AB614E93D08B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AuthModeOption
struct  AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829 
{
public:
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientState
struct  ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282 
{
public:
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.DisconnectCause
struct  DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.EncryptionMode
struct  EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3 
{
public:
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.JoinType
struct  JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0 
{
public:
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ServerConnection
struct  ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68 
{
public:
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Codec
struct  Codec_tD177CC2C38203F5AB2E612E0E36F2DA1CB222D0C 
{
public:
	// System.Int32 Photon.Voice.Codec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Codec_tD177CC2C38203F5AB2E612E0E36F2DA1CB222D0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.OpusCodec_FrameDuration
struct  FrameDuration_t4A833A0BFF0F703BF3D14D530E47962EFF84B010 
{
public:
	// System.Int32 Photon.Voice.OpusCodec_FrameDuration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameDuration_t4A833A0BFF0F703BF3D14D530E47962EFF84B010, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder_InputSourceType
struct  InputSourceType_t530745A5DA72DF113DFED34F92D350C7F916D31D 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder_InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t530745A5DA72DF113DFED34F92D350C7F916D31D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder_MicType
struct  MicType_t446950D741BCAFC62F5A0CAE012104A82DF643F8 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder_MicType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MicType_t446950D741BCAFC62F5A0CAE012104A82DF643F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder_SampleTypeConv
struct  SampleTypeConv_t6D07030A6F68BF5E784A41B0EE96E34EACF71C4D 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder_SampleTypeConv::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SampleTypeConv_t6D07030A6F68BF5E784A41B0EE96E34EACF71C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Photon.Pun.PhotonNetwork
struct  PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A  : public RuntimeObject
{
public:

public:
};

struct PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields
{
public:
	// System.String Photon.Pun.PhotonNetwork::gameVersion
	String_t* ___gameVersion_1;
	// Photon.Realtime.LoadBalancingClient Photon.Pun.PhotonNetwork::NetworkingClient
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___NetworkingClient_2;
	// System.Int32 Photon.Pun.PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_3;
	// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::photonServerSettings
	ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9 * ___photonServerSettings_5;
	// Photon.Pun.ConnectMethod Photon.Pun.PhotonNetwork::ConnectMethod
	int32_t ___ConnectMethod_7;
	// Photon.Pun.PunLogLevel Photon.Pun.PhotonNetwork::LogLevel
	int32_t ___LogLevel_8;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForVectorSynchronization
	float ___PrecisionForVectorSynchronization_9;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForQuaternionSynchronization
	float ___PrecisionForQuaternionSynchronization_10;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForFloatSynchronization
	float ___PrecisionForFloatSynchronization_11;
	// System.Boolean Photon.Pun.PhotonNetwork::offlineMode
	bool ___offlineMode_12;
	// Photon.Realtime.Room Photon.Pun.PhotonNetwork::offlineModeRoom
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___offlineModeRoom_13;
	// System.Boolean Photon.Pun.PhotonNetwork::automaticallySyncScene
	bool ___automaticallySyncScene_14;
	// System.Int32 Photon.Pun.PhotonNetwork::sendFrequency
	int32_t ___sendFrequency_15;
	// System.Int32 Photon.Pun.PhotonNetwork::serializationFrequency
	int32_t ___serializationFrequency_16;
	// System.Boolean Photon.Pun.PhotonNetwork::isMessageQueueRunning
	bool ___isMessageQueueRunning_17;
	// System.Double Photon.Pun.PhotonNetwork::frametime
	double ___frametime_18;
	// System.Int32 Photon.Pun.PhotonNetwork::frame
	int32_t ___frame_19;
	// System.Diagnostics.Stopwatch Photon.Pun.PhotonNetwork::StartupStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___StartupStopwatch_20;
	// System.Single Photon.Pun.PhotonNetwork::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_21;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_22;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_23;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Pun.PhotonNetwork::PrefabsWithoutMagicCallback
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ___PrefabsWithoutMagicCallback_24;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::SendInstantiateEvHashtable
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___SendInstantiateEvHashtable_25;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendInstantiateRaiseEventOptions
	RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * ___SendInstantiateRaiseEventOptions_26;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::allowedReceivingGroups
	HashSet_1_t6E27AC44864B4226A2559E7B6015F6BA370E2787 * ___allowedReceivingGroups_27;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::blockedSendingGroups
	HashSet_1_t6E27AC44864B4226A2559E7B6015F6BA370E2787 * ___blockedSendingGroups_28;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::photonViewList
	Dictionary_2_t89490FDA0056B9CB27C64F1AC70088C69FCCD8E0 * ___photonViewList_29;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipRequestEv
	Action_2_tC270082FD863C6EB0B0BB17C204142E668D0EAE6 * ___OnOwnershipRequestEv_30;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferedEv
	Action_2_tC270082FD863C6EB0B0BB17C204142E668D0EAE6 * ___OnOwnershipTransferedEv_31;
	// System.Byte Photon.Pun.PhotonNetwork::currentLevelPrefix
	uint8_t ___currentLevelPrefix_32;
	// System.Boolean Photon.Pun.PhotonNetwork::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_33;
	// Photon.Pun.IPunPrefabPool Photon.Pun.PhotonNetwork::prefabPool
	RuntimeObject* ___prefabPool_36;
	// System.Boolean Photon.Pun.PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_37;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> Photon.Pun.PhotonNetwork::monoRPCMethodsCache
	Dictionary_2_t4C6D33FABCBD1DB81282694D8D44BB868F80DC07 * ___monoRPCMethodsCache_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Photon.Pun.PhotonNetwork::rpcShortcuts
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___rpcShortcuts_39;
	// System.Boolean Photon.Pun.PhotonNetwork::RunRpcCoroutines
	bool ___RunRpcCoroutines_40;
	// UnityEngine.AsyncOperation Photon.Pun.PhotonNetwork::_AsyncLevelLoadingOperation
	AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * ____AsyncLevelLoadingOperation_41;
	// System.Single Photon.Pun.PhotonNetwork::_levelLoadingProgress
	float ____levelLoadingProgress_42;
	// System.Type Photon.Pun.PhotonNetwork::typePunRPC
	Type_t * ___typePunRPC_43;
	// System.Type Photon.Pun.PhotonNetwork::typePhotonMessageInfo
	Type_t * ___typePhotonMessageInfo_44;
	// System.Object Photon.Pun.PhotonNetwork::keyByteZero
	RuntimeObject * ___keyByteZero_45;
	// System.Object Photon.Pun.PhotonNetwork::keyByteOne
	RuntimeObject * ___keyByteOne_46;
	// System.Object Photon.Pun.PhotonNetwork::keyByteTwo
	RuntimeObject * ___keyByteTwo_47;
	// System.Object Photon.Pun.PhotonNetwork::keyByteThree
	RuntimeObject * ___keyByteThree_48;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFour
	RuntimeObject * ___keyByteFour_49;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFive
	RuntimeObject * ___keyByteFive_50;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSix
	RuntimeObject * ___keyByteSix_51;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSeven
	RuntimeObject * ___keyByteSeven_52;
	// System.Object Photon.Pun.PhotonNetwork::keyByteEight
	RuntimeObject * ___keyByteEight_53;
	// System.Object[] Photon.Pun.PhotonNetwork::emptyObjectArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___emptyObjectArray_54;
	// System.Type[] Photon.Pun.PhotonNetwork::emptyTypeArray
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___emptyTypeArray_55;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::removeFilter
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___removeFilter_56;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::ServerCleanDestroyEvent
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___ServerCleanDestroyEvent_57;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::ServerCleanOptions
	RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * ___ServerCleanOptions_58;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcFilterByViewId
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___rpcFilterByViewId_59;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::OpCleanRpcBufferOptions
	RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * ___OpCleanRpcBufferOptions_60;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcEvent
	Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * ___rpcEvent_61;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::RpcOptionsToAll
	RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * ___RpcOptionsToAll_62;
	// System.Int32 Photon.Pun.PhotonNetwork::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_63;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamOut
	PhotonStream_t3E8F04756FBB266F05C8D10E0801F8CA9099B98E * ___serializeStreamOut_64;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamIn
	PhotonStream_t3E8F04756FBB266F05C8D10E0801F8CA9099B98E * ___serializeStreamIn_65;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::serializeRaiseEvOptions
	RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * ___serializeRaiseEvOptions_66;
	// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork_RaiseEventBatch,Photon.Pun.PhotonNetwork_SerializeViewBatch> Photon.Pun.PhotonNetwork::serializeViewBatches
	Dictionary_2_t91F14575E46ABD7E975C202BBE0C4E35E4881256 * ___serializeViewBatches_67;
	// Photon.Realtime.RegionHandler Photon.Pun.PhotonNetwork::_cachedRegionHandler
	RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ____cachedRegionHandler_72;

public:
	inline static int32_t get_offset_of_gameVersion_1() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___gameVersion_1)); }
	inline String_t* get_gameVersion_1() const { return ___gameVersion_1; }
	inline String_t** get_address_of_gameVersion_1() { return &___gameVersion_1; }
	inline void set_gameVersion_1(String_t* value)
	{
		___gameVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkingClient_2() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___NetworkingClient_2)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_NetworkingClient_2() const { return ___NetworkingClient_2; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_NetworkingClient_2() { return &___NetworkingClient_2; }
	inline void set_NetworkingClient_2(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___NetworkingClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkingClient_2), (void*)value);
	}

	inline static int32_t get_offset_of_MAX_VIEW_IDS_3() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___MAX_VIEW_IDS_3)); }
	inline int32_t get_MAX_VIEW_IDS_3() const { return ___MAX_VIEW_IDS_3; }
	inline int32_t* get_address_of_MAX_VIEW_IDS_3() { return &___MAX_VIEW_IDS_3; }
	inline void set_MAX_VIEW_IDS_3(int32_t value)
	{
		___MAX_VIEW_IDS_3 = value;
	}

	inline static int32_t get_offset_of_photonServerSettings_5() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___photonServerSettings_5)); }
	inline ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9 * get_photonServerSettings_5() const { return ___photonServerSettings_5; }
	inline ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9 ** get_address_of_photonServerSettings_5() { return &___photonServerSettings_5; }
	inline void set_photonServerSettings_5(ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9 * value)
	{
		___photonServerSettings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonServerSettings_5), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectMethod_7() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___ConnectMethod_7)); }
	inline int32_t get_ConnectMethod_7() const { return ___ConnectMethod_7; }
	inline int32_t* get_address_of_ConnectMethod_7() { return &___ConnectMethod_7; }
	inline void set_ConnectMethod_7(int32_t value)
	{
		___ConnectMethod_7 = value;
	}

	inline static int32_t get_offset_of_LogLevel_8() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___LogLevel_8)); }
	inline int32_t get_LogLevel_8() const { return ___LogLevel_8; }
	inline int32_t* get_address_of_LogLevel_8() { return &___LogLevel_8; }
	inline void set_LogLevel_8(int32_t value)
	{
		___LogLevel_8 = value;
	}

	inline static int32_t get_offset_of_PrecisionForVectorSynchronization_9() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___PrecisionForVectorSynchronization_9)); }
	inline float get_PrecisionForVectorSynchronization_9() const { return ___PrecisionForVectorSynchronization_9; }
	inline float* get_address_of_PrecisionForVectorSynchronization_9() { return &___PrecisionForVectorSynchronization_9; }
	inline void set_PrecisionForVectorSynchronization_9(float value)
	{
		___PrecisionForVectorSynchronization_9 = value;
	}

	inline static int32_t get_offset_of_PrecisionForQuaternionSynchronization_10() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___PrecisionForQuaternionSynchronization_10)); }
	inline float get_PrecisionForQuaternionSynchronization_10() const { return ___PrecisionForQuaternionSynchronization_10; }
	inline float* get_address_of_PrecisionForQuaternionSynchronization_10() { return &___PrecisionForQuaternionSynchronization_10; }
	inline void set_PrecisionForQuaternionSynchronization_10(float value)
	{
		___PrecisionForQuaternionSynchronization_10 = value;
	}

	inline static int32_t get_offset_of_PrecisionForFloatSynchronization_11() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___PrecisionForFloatSynchronization_11)); }
	inline float get_PrecisionForFloatSynchronization_11() const { return ___PrecisionForFloatSynchronization_11; }
	inline float* get_address_of_PrecisionForFloatSynchronization_11() { return &___PrecisionForFloatSynchronization_11; }
	inline void set_PrecisionForFloatSynchronization_11(float value)
	{
		___PrecisionForFloatSynchronization_11 = value;
	}

	inline static int32_t get_offset_of_offlineMode_12() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___offlineMode_12)); }
	inline bool get_offlineMode_12() const { return ___offlineMode_12; }
	inline bool* get_address_of_offlineMode_12() { return &___offlineMode_12; }
	inline void set_offlineMode_12(bool value)
	{
		___offlineMode_12 = value;
	}

	inline static int32_t get_offset_of_offlineModeRoom_13() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___offlineModeRoom_13)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_offlineModeRoom_13() const { return ___offlineModeRoom_13; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_offlineModeRoom_13() { return &___offlineModeRoom_13; }
	inline void set_offlineModeRoom_13(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___offlineModeRoom_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offlineModeRoom_13), (void*)value);
	}

	inline static int32_t get_offset_of_automaticallySyncScene_14() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___automaticallySyncScene_14)); }
	inline bool get_automaticallySyncScene_14() const { return ___automaticallySyncScene_14; }
	inline bool* get_address_of_automaticallySyncScene_14() { return &___automaticallySyncScene_14; }
	inline void set_automaticallySyncScene_14(bool value)
	{
		___automaticallySyncScene_14 = value;
	}

	inline static int32_t get_offset_of_sendFrequency_15() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___sendFrequency_15)); }
	inline int32_t get_sendFrequency_15() const { return ___sendFrequency_15; }
	inline int32_t* get_address_of_sendFrequency_15() { return &___sendFrequency_15; }
	inline void set_sendFrequency_15(int32_t value)
	{
		___sendFrequency_15 = value;
	}

	inline static int32_t get_offset_of_serializationFrequency_16() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___serializationFrequency_16)); }
	inline int32_t get_serializationFrequency_16() const { return ___serializationFrequency_16; }
	inline int32_t* get_address_of_serializationFrequency_16() { return &___serializationFrequency_16; }
	inline void set_serializationFrequency_16(int32_t value)
	{
		___serializationFrequency_16 = value;
	}

	inline static int32_t get_offset_of_isMessageQueueRunning_17() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___isMessageQueueRunning_17)); }
	inline bool get_isMessageQueueRunning_17() const { return ___isMessageQueueRunning_17; }
	inline bool* get_address_of_isMessageQueueRunning_17() { return &___isMessageQueueRunning_17; }
	inline void set_isMessageQueueRunning_17(bool value)
	{
		___isMessageQueueRunning_17 = value;
	}

	inline static int32_t get_offset_of_frametime_18() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___frametime_18)); }
	inline double get_frametime_18() const { return ___frametime_18; }
	inline double* get_address_of_frametime_18() { return &___frametime_18; }
	inline void set_frametime_18(double value)
	{
		___frametime_18 = value;
	}

	inline static int32_t get_offset_of_frame_19() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___frame_19)); }
	inline int32_t get_frame_19() const { return ___frame_19; }
	inline int32_t* get_address_of_frame_19() { return &___frame_19; }
	inline void set_frame_19(int32_t value)
	{
		___frame_19 = value;
	}

	inline static int32_t get_offset_of_StartupStopwatch_20() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___StartupStopwatch_20)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_StartupStopwatch_20() const { return ___StartupStopwatch_20; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_StartupStopwatch_20() { return &___StartupStopwatch_20; }
	inline void set_StartupStopwatch_20(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___StartupStopwatch_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartupStopwatch_20), (void*)value);
	}

	inline static int32_t get_offset_of_MinimalTimeScaleToDispatchInFixedUpdate_21() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___MinimalTimeScaleToDispatchInFixedUpdate_21)); }
	inline float get_MinimalTimeScaleToDispatchInFixedUpdate_21() const { return ___MinimalTimeScaleToDispatchInFixedUpdate_21; }
	inline float* get_address_of_MinimalTimeScaleToDispatchInFixedUpdate_21() { return &___MinimalTimeScaleToDispatchInFixedUpdate_21; }
	inline void set_MinimalTimeScaleToDispatchInFixedUpdate_21(float value)
	{
		___MinimalTimeScaleToDispatchInFixedUpdate_21 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubId_22() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___lastUsedViewSubId_22)); }
	inline int32_t get_lastUsedViewSubId_22() const { return ___lastUsedViewSubId_22; }
	inline int32_t* get_address_of_lastUsedViewSubId_22() { return &___lastUsedViewSubId_22; }
	inline void set_lastUsedViewSubId_22(int32_t value)
	{
		___lastUsedViewSubId_22 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubIdStatic_23() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___lastUsedViewSubIdStatic_23)); }
	inline int32_t get_lastUsedViewSubIdStatic_23() const { return ___lastUsedViewSubIdStatic_23; }
	inline int32_t* get_address_of_lastUsedViewSubIdStatic_23() { return &___lastUsedViewSubIdStatic_23; }
	inline void set_lastUsedViewSubIdStatic_23(int32_t value)
	{
		___lastUsedViewSubIdStatic_23 = value;
	}

	inline static int32_t get_offset_of_PrefabsWithoutMagicCallback_24() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___PrefabsWithoutMagicCallback_24)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get_PrefabsWithoutMagicCallback_24() const { return ___PrefabsWithoutMagicCallback_24; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of_PrefabsWithoutMagicCallback_24() { return &___PrefabsWithoutMagicCallback_24; }
	inline void set_PrefabsWithoutMagicCallback_24(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		___PrefabsWithoutMagicCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabsWithoutMagicCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_SendInstantiateEvHashtable_25() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___SendInstantiateEvHashtable_25)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_SendInstantiateEvHashtable_25() const { return ___SendInstantiateEvHashtable_25; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_SendInstantiateEvHashtable_25() { return &___SendInstantiateEvHashtable_25; }
	inline void set_SendInstantiateEvHashtable_25(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___SendInstantiateEvHashtable_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendInstantiateEvHashtable_25), (void*)value);
	}

	inline static int32_t get_offset_of_SendInstantiateRaiseEventOptions_26() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___SendInstantiateRaiseEventOptions_26)); }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * get_SendInstantiateRaiseEventOptions_26() const { return ___SendInstantiateRaiseEventOptions_26; }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED ** get_address_of_SendInstantiateRaiseEventOptions_26() { return &___SendInstantiateRaiseEventOptions_26; }
	inline void set_SendInstantiateRaiseEventOptions_26(RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * value)
	{
		___SendInstantiateRaiseEventOptions_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendInstantiateRaiseEventOptions_26), (void*)value);
	}

	inline static int32_t get_offset_of_allowedReceivingGroups_27() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___allowedReceivingGroups_27)); }
	inline HashSet_1_t6E27AC44864B4226A2559E7B6015F6BA370E2787 * get_allowedReceivingGroups_27() const { return ___allowedReceivingGroups_27; }
	inline HashSet_1_t6E27AC44864B4226A2559E7B6015F6BA370E2787 ** get_address_of_allowedReceivingGroups_27() { return &___allowedReceivingGroups_27; }
	inline void set_allowedReceivingGroups_27(HashSet_1_t6E27AC44864B4226A2559E7B6015F6BA370E2787 * value)
	{
		___allowedReceivingGroups_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allowedReceivingGroups_27), (void*)value);
	}

	inline static int32_t get_offset_of_blockedSendingGroups_28() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___blockedSendingGroups_28)); }
	inline HashSet_1_t6E27AC44864B4226A2559E7B6015F6BA370E2787 * get_blockedSendingGroups_28() const { return ___blockedSendingGroups_28; }
	inline HashSet_1_t6E27AC44864B4226A2559E7B6015F6BA370E2787 ** get_address_of_blockedSendingGroups_28() { return &___blockedSendingGroups_28; }
	inline void set_blockedSendingGroups_28(HashSet_1_t6E27AC44864B4226A2559E7B6015F6BA370E2787 * value)
	{
		___blockedSendingGroups_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockedSendingGroups_28), (void*)value);
	}

	inline static int32_t get_offset_of_photonViewList_29() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___photonViewList_29)); }
	inline Dictionary_2_t89490FDA0056B9CB27C64F1AC70088C69FCCD8E0 * get_photonViewList_29() const { return ___photonViewList_29; }
	inline Dictionary_2_t89490FDA0056B9CB27C64F1AC70088C69FCCD8E0 ** get_address_of_photonViewList_29() { return &___photonViewList_29; }
	inline void set_photonViewList_29(Dictionary_2_t89490FDA0056B9CB27C64F1AC70088C69FCCD8E0 * value)
	{
		___photonViewList_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonViewList_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipRequestEv_30() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___OnOwnershipRequestEv_30)); }
	inline Action_2_tC270082FD863C6EB0B0BB17C204142E668D0EAE6 * get_OnOwnershipRequestEv_30() const { return ___OnOwnershipRequestEv_30; }
	inline Action_2_tC270082FD863C6EB0B0BB17C204142E668D0EAE6 ** get_address_of_OnOwnershipRequestEv_30() { return &___OnOwnershipRequestEv_30; }
	inline void set_OnOwnershipRequestEv_30(Action_2_tC270082FD863C6EB0B0BB17C204142E668D0EAE6 * value)
	{
		___OnOwnershipRequestEv_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipRequestEv_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipTransferedEv_31() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___OnOwnershipTransferedEv_31)); }
	inline Action_2_tC270082FD863C6EB0B0BB17C204142E668D0EAE6 * get_OnOwnershipTransferedEv_31() const { return ___OnOwnershipTransferedEv_31; }
	inline Action_2_tC270082FD863C6EB0B0BB17C204142E668D0EAE6 ** get_address_of_OnOwnershipTransferedEv_31() { return &___OnOwnershipTransferedEv_31; }
	inline void set_OnOwnershipTransferedEv_31(Action_2_tC270082FD863C6EB0B0BB17C204142E668D0EAE6 * value)
	{
		___OnOwnershipTransferedEv_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipTransferedEv_31), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevelPrefix_32() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___currentLevelPrefix_32)); }
	inline uint8_t get_currentLevelPrefix_32() const { return ___currentLevelPrefix_32; }
	inline uint8_t* get_address_of_currentLevelPrefix_32() { return &___currentLevelPrefix_32; }
	inline void set_currentLevelPrefix_32(uint8_t value)
	{
		___currentLevelPrefix_32 = value;
	}

	inline static int32_t get_offset_of_loadingLevelAndPausedNetwork_33() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___loadingLevelAndPausedNetwork_33)); }
	inline bool get_loadingLevelAndPausedNetwork_33() const { return ___loadingLevelAndPausedNetwork_33; }
	inline bool* get_address_of_loadingLevelAndPausedNetwork_33() { return &___loadingLevelAndPausedNetwork_33; }
	inline void set_loadingLevelAndPausedNetwork_33(bool value)
	{
		___loadingLevelAndPausedNetwork_33 = value;
	}

	inline static int32_t get_offset_of_prefabPool_36() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___prefabPool_36)); }
	inline RuntimeObject* get_prefabPool_36() const { return ___prefabPool_36; }
	inline RuntimeObject** get_address_of_prefabPool_36() { return &___prefabPool_36; }
	inline void set_prefabPool_36(RuntimeObject* value)
	{
		___prefabPool_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabPool_36), (void*)value);
	}

	inline static int32_t get_offset_of_UseRpcMonoBehaviourCache_37() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___UseRpcMonoBehaviourCache_37)); }
	inline bool get_UseRpcMonoBehaviourCache_37() const { return ___UseRpcMonoBehaviourCache_37; }
	inline bool* get_address_of_UseRpcMonoBehaviourCache_37() { return &___UseRpcMonoBehaviourCache_37; }
	inline void set_UseRpcMonoBehaviourCache_37(bool value)
	{
		___UseRpcMonoBehaviourCache_37 = value;
	}

	inline static int32_t get_offset_of_monoRPCMethodsCache_38() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___monoRPCMethodsCache_38)); }
	inline Dictionary_2_t4C6D33FABCBD1DB81282694D8D44BB868F80DC07 * get_monoRPCMethodsCache_38() const { return ___monoRPCMethodsCache_38; }
	inline Dictionary_2_t4C6D33FABCBD1DB81282694D8D44BB868F80DC07 ** get_address_of_monoRPCMethodsCache_38() { return &___monoRPCMethodsCache_38; }
	inline void set_monoRPCMethodsCache_38(Dictionary_2_t4C6D33FABCBD1DB81282694D8D44BB868F80DC07 * value)
	{
		___monoRPCMethodsCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monoRPCMethodsCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_rpcShortcuts_39() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___rpcShortcuts_39)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_rpcShortcuts_39() const { return ___rpcShortcuts_39; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_rpcShortcuts_39() { return &___rpcShortcuts_39; }
	inline void set_rpcShortcuts_39(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___rpcShortcuts_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcShortcuts_39), (void*)value);
	}

	inline static int32_t get_offset_of_RunRpcCoroutines_40() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___RunRpcCoroutines_40)); }
	inline bool get_RunRpcCoroutines_40() const { return ___RunRpcCoroutines_40; }
	inline bool* get_address_of_RunRpcCoroutines_40() { return &___RunRpcCoroutines_40; }
	inline void set_RunRpcCoroutines_40(bool value)
	{
		___RunRpcCoroutines_40 = value;
	}

	inline static int32_t get_offset_of__AsyncLevelLoadingOperation_41() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ____AsyncLevelLoadingOperation_41)); }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * get__AsyncLevelLoadingOperation_41() const { return ____AsyncLevelLoadingOperation_41; }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D ** get_address_of__AsyncLevelLoadingOperation_41() { return &____AsyncLevelLoadingOperation_41; }
	inline void set__AsyncLevelLoadingOperation_41(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * value)
	{
		____AsyncLevelLoadingOperation_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AsyncLevelLoadingOperation_41), (void*)value);
	}

	inline static int32_t get_offset_of__levelLoadingProgress_42() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ____levelLoadingProgress_42)); }
	inline float get__levelLoadingProgress_42() const { return ____levelLoadingProgress_42; }
	inline float* get_address_of__levelLoadingProgress_42() { return &____levelLoadingProgress_42; }
	inline void set__levelLoadingProgress_42(float value)
	{
		____levelLoadingProgress_42 = value;
	}

	inline static int32_t get_offset_of_typePunRPC_43() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___typePunRPC_43)); }
	inline Type_t * get_typePunRPC_43() const { return ___typePunRPC_43; }
	inline Type_t ** get_address_of_typePunRPC_43() { return &___typePunRPC_43; }
	inline void set_typePunRPC_43(Type_t * value)
	{
		___typePunRPC_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePunRPC_43), (void*)value);
	}

	inline static int32_t get_offset_of_typePhotonMessageInfo_44() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___typePhotonMessageInfo_44)); }
	inline Type_t * get_typePhotonMessageInfo_44() const { return ___typePhotonMessageInfo_44; }
	inline Type_t ** get_address_of_typePhotonMessageInfo_44() { return &___typePhotonMessageInfo_44; }
	inline void set_typePhotonMessageInfo_44(Type_t * value)
	{
		___typePhotonMessageInfo_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePhotonMessageInfo_44), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteZero_45() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___keyByteZero_45)); }
	inline RuntimeObject * get_keyByteZero_45() const { return ___keyByteZero_45; }
	inline RuntimeObject ** get_address_of_keyByteZero_45() { return &___keyByteZero_45; }
	inline void set_keyByteZero_45(RuntimeObject * value)
	{
		___keyByteZero_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteZero_45), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteOne_46() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___keyByteOne_46)); }
	inline RuntimeObject * get_keyByteOne_46() const { return ___keyByteOne_46; }
	inline RuntimeObject ** get_address_of_keyByteOne_46() { return &___keyByteOne_46; }
	inline void set_keyByteOne_46(RuntimeObject * value)
	{
		___keyByteOne_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteOne_46), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteTwo_47() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___keyByteTwo_47)); }
	inline RuntimeObject * get_keyByteTwo_47() const { return ___keyByteTwo_47; }
	inline RuntimeObject ** get_address_of_keyByteTwo_47() { return &___keyByteTwo_47; }
	inline void set_keyByteTwo_47(RuntimeObject * value)
	{
		___keyByteTwo_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteTwo_47), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteThree_48() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___keyByteThree_48)); }
	inline RuntimeObject * get_keyByteThree_48() const { return ___keyByteThree_48; }
	inline RuntimeObject ** get_address_of_keyByteThree_48() { return &___keyByteThree_48; }
	inline void set_keyByteThree_48(RuntimeObject * value)
	{
		___keyByteThree_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteThree_48), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFour_49() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___keyByteFour_49)); }
	inline RuntimeObject * get_keyByteFour_49() const { return ___keyByteFour_49; }
	inline RuntimeObject ** get_address_of_keyByteFour_49() { return &___keyByteFour_49; }
	inline void set_keyByteFour_49(RuntimeObject * value)
	{
		___keyByteFour_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFour_49), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFive_50() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___keyByteFive_50)); }
	inline RuntimeObject * get_keyByteFive_50() const { return ___keyByteFive_50; }
	inline RuntimeObject ** get_address_of_keyByteFive_50() { return &___keyByteFive_50; }
	inline void set_keyByteFive_50(RuntimeObject * value)
	{
		___keyByteFive_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFive_50), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteSix_51() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___keyByteSix_51)); }
	inline RuntimeObject * get_keyByteSix_51() const { return ___keyByteSix_51; }
	inline RuntimeObject ** get_address_of_keyByteSix_51() { return &___keyByteSix_51; }
	inline void set_keyByteSix_51(RuntimeObject * value)
	{
		___keyByteSix_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteSix_51), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteSeven_52() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___keyByteSeven_52)); }
	inline RuntimeObject * get_keyByteSeven_52() const { return ___keyByteSeven_52; }
	inline RuntimeObject ** get_address_of_keyByteSeven_52() { return &___keyByteSeven_52; }
	inline void set_keyByteSeven_52(RuntimeObject * value)
	{
		___keyByteSeven_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteSeven_52), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteEight_53() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___keyByteEight_53)); }
	inline RuntimeObject * get_keyByteEight_53() const { return ___keyByteEight_53; }
	inline RuntimeObject ** get_address_of_keyByteEight_53() { return &___keyByteEight_53; }
	inline void set_keyByteEight_53(RuntimeObject * value)
	{
		___keyByteEight_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteEight_53), (void*)value);
	}

	inline static int32_t get_offset_of_emptyObjectArray_54() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___emptyObjectArray_54)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_emptyObjectArray_54() const { return ___emptyObjectArray_54; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_emptyObjectArray_54() { return &___emptyObjectArray_54; }
	inline void set_emptyObjectArray_54(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___emptyObjectArray_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyObjectArray_54), (void*)value);
	}

	inline static int32_t get_offset_of_emptyTypeArray_55() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___emptyTypeArray_55)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_emptyTypeArray_55() const { return ___emptyTypeArray_55; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_emptyTypeArray_55() { return &___emptyTypeArray_55; }
	inline void set_emptyTypeArray_55(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___emptyTypeArray_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyTypeArray_55), (void*)value);
	}

	inline static int32_t get_offset_of_removeFilter_56() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___removeFilter_56)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_removeFilter_56() const { return ___removeFilter_56; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_removeFilter_56() { return &___removeFilter_56; }
	inline void set_removeFilter_56(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___removeFilter_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeFilter_56), (void*)value);
	}

	inline static int32_t get_offset_of_ServerCleanDestroyEvent_57() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___ServerCleanDestroyEvent_57)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_ServerCleanDestroyEvent_57() const { return ___ServerCleanDestroyEvent_57; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_ServerCleanDestroyEvent_57() { return &___ServerCleanDestroyEvent_57; }
	inline void set_ServerCleanDestroyEvent_57(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___ServerCleanDestroyEvent_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerCleanDestroyEvent_57), (void*)value);
	}

	inline static int32_t get_offset_of_ServerCleanOptions_58() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___ServerCleanOptions_58)); }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * get_ServerCleanOptions_58() const { return ___ServerCleanOptions_58; }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED ** get_address_of_ServerCleanOptions_58() { return &___ServerCleanOptions_58; }
	inline void set_ServerCleanOptions_58(RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * value)
	{
		___ServerCleanOptions_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerCleanOptions_58), (void*)value);
	}

	inline static int32_t get_offset_of_rpcFilterByViewId_59() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___rpcFilterByViewId_59)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_rpcFilterByViewId_59() const { return ___rpcFilterByViewId_59; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_rpcFilterByViewId_59() { return &___rpcFilterByViewId_59; }
	inline void set_rpcFilterByViewId_59(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___rpcFilterByViewId_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcFilterByViewId_59), (void*)value);
	}

	inline static int32_t get_offset_of_OpCleanRpcBufferOptions_60() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___OpCleanRpcBufferOptions_60)); }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * get_OpCleanRpcBufferOptions_60() const { return ___OpCleanRpcBufferOptions_60; }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED ** get_address_of_OpCleanRpcBufferOptions_60() { return &___OpCleanRpcBufferOptions_60; }
	inline void set_OpCleanRpcBufferOptions_60(RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * value)
	{
		___OpCleanRpcBufferOptions_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpCleanRpcBufferOptions_60), (void*)value);
	}

	inline static int32_t get_offset_of_rpcEvent_61() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___rpcEvent_61)); }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * get_rpcEvent_61() const { return ___rpcEvent_61; }
	inline Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 ** get_address_of_rpcEvent_61() { return &___rpcEvent_61; }
	inline void set_rpcEvent_61(Hashtable_tB0307B8661E197593CBE3720FCD01B54B991C258 * value)
	{
		___rpcEvent_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcEvent_61), (void*)value);
	}

	inline static int32_t get_offset_of_RpcOptionsToAll_62() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___RpcOptionsToAll_62)); }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * get_RpcOptionsToAll_62() const { return ___RpcOptionsToAll_62; }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED ** get_address_of_RpcOptionsToAll_62() { return &___RpcOptionsToAll_62; }
	inline void set_RpcOptionsToAll_62(RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * value)
	{
		___RpcOptionsToAll_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcOptionsToAll_62), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectsInOneUpdate_63() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___ObjectsInOneUpdate_63)); }
	inline int32_t get_ObjectsInOneUpdate_63() const { return ___ObjectsInOneUpdate_63; }
	inline int32_t* get_address_of_ObjectsInOneUpdate_63() { return &___ObjectsInOneUpdate_63; }
	inline void set_ObjectsInOneUpdate_63(int32_t value)
	{
		___ObjectsInOneUpdate_63 = value;
	}

	inline static int32_t get_offset_of_serializeStreamOut_64() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___serializeStreamOut_64)); }
	inline PhotonStream_t3E8F04756FBB266F05C8D10E0801F8CA9099B98E * get_serializeStreamOut_64() const { return ___serializeStreamOut_64; }
	inline PhotonStream_t3E8F04756FBB266F05C8D10E0801F8CA9099B98E ** get_address_of_serializeStreamOut_64() { return &___serializeStreamOut_64; }
	inline void set_serializeStreamOut_64(PhotonStream_t3E8F04756FBB266F05C8D10E0801F8CA9099B98E * value)
	{
		___serializeStreamOut_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeStreamOut_64), (void*)value);
	}

	inline static int32_t get_offset_of_serializeStreamIn_65() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___serializeStreamIn_65)); }
	inline PhotonStream_t3E8F04756FBB266F05C8D10E0801F8CA9099B98E * get_serializeStreamIn_65() const { return ___serializeStreamIn_65; }
	inline PhotonStream_t3E8F04756FBB266F05C8D10E0801F8CA9099B98E ** get_address_of_serializeStreamIn_65() { return &___serializeStreamIn_65; }
	inline void set_serializeStreamIn_65(PhotonStream_t3E8F04756FBB266F05C8D10E0801F8CA9099B98E * value)
	{
		___serializeStreamIn_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeStreamIn_65), (void*)value);
	}

	inline static int32_t get_offset_of_serializeRaiseEvOptions_66() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___serializeRaiseEvOptions_66)); }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * get_serializeRaiseEvOptions_66() const { return ___serializeRaiseEvOptions_66; }
	inline RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED ** get_address_of_serializeRaiseEvOptions_66() { return &___serializeRaiseEvOptions_66; }
	inline void set_serializeRaiseEvOptions_66(RaiseEventOptions_tA6691DAD7E0A61E11C468287C200539FBB641AED * value)
	{
		___serializeRaiseEvOptions_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeRaiseEvOptions_66), (void*)value);
	}

	inline static int32_t get_offset_of_serializeViewBatches_67() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ___serializeViewBatches_67)); }
	inline Dictionary_2_t91F14575E46ABD7E975C202BBE0C4E35E4881256 * get_serializeViewBatches_67() const { return ___serializeViewBatches_67; }
	inline Dictionary_2_t91F14575E46ABD7E975C202BBE0C4E35E4881256 ** get_address_of_serializeViewBatches_67() { return &___serializeViewBatches_67; }
	inline void set_serializeViewBatches_67(Dictionary_2_t91F14575E46ABD7E975C202BBE0C4E35E4881256 * value)
	{
		___serializeViewBatches_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeViewBatches_67), (void*)value);
	}

	inline static int32_t get_offset_of__cachedRegionHandler_72() { return static_cast<int32_t>(offsetof(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields, ____cachedRegionHandler_72)); }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * get__cachedRegionHandler_72() const { return ____cachedRegionHandler_72; }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF ** get_address_of__cachedRegionHandler_72() { return &____cachedRegionHandler_72; }
	inline void set__cachedRegionHandler_72(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * value)
	{
		____cachedRegionHandler_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedRegionHandler_72), (void*)value);
	}
};


// Photon.Realtime.AppSettings
struct  AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_1;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_2;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_3;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_4;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_5;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_6;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_7;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_8;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_9;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_10;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_11;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_12;

public:
	inline static int32_t get_offset_of_AppIdRealtime_0() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AppIdRealtime_0)); }
	inline String_t* get_AppIdRealtime_0() const { return ___AppIdRealtime_0; }
	inline String_t** get_address_of_AppIdRealtime_0() { return &___AppIdRealtime_0; }
	inline void set_AppIdRealtime_0(String_t* value)
	{
		___AppIdRealtime_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdRealtime_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdChat_1() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AppIdChat_1)); }
	inline String_t* get_AppIdChat_1() const { return ___AppIdChat_1; }
	inline String_t** get_address_of_AppIdChat_1() { return &___AppIdChat_1; }
	inline void set_AppIdChat_1(String_t* value)
	{
		___AppIdChat_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdChat_1), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdVoice_2() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AppIdVoice_2)); }
	inline String_t* get_AppIdVoice_2() const { return ___AppIdVoice_2; }
	inline String_t** get_address_of_AppIdVoice_2() { return &___AppIdVoice_2; }
	inline void set_AppIdVoice_2(String_t* value)
	{
		___AppIdVoice_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdVoice_2), (void*)value);
	}

	inline static int32_t get_offset_of_AppVersion_3() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AppVersion_3)); }
	inline String_t* get_AppVersion_3() const { return ___AppVersion_3; }
	inline String_t** get_address_of_AppVersion_3() { return &___AppVersion_3; }
	inline void set_AppVersion_3(String_t* value)
	{
		___AppVersion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppVersion_3), (void*)value);
	}

	inline static int32_t get_offset_of_UseNameServer_4() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___UseNameServer_4)); }
	inline bool get_UseNameServer_4() const { return ___UseNameServer_4; }
	inline bool* get_address_of_UseNameServer_4() { return &___UseNameServer_4; }
	inline void set_UseNameServer_4(bool value)
	{
		___UseNameServer_4 = value;
	}

	inline static int32_t get_offset_of_FixedRegion_5() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___FixedRegion_5)); }
	inline String_t* get_FixedRegion_5() const { return ___FixedRegion_5; }
	inline String_t** get_address_of_FixedRegion_5() { return &___FixedRegion_5; }
	inline void set_FixedRegion_5(String_t* value)
	{
		___FixedRegion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedRegion_5), (void*)value);
	}

	inline static int32_t get_offset_of_BestRegionSummaryFromStorage_6() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___BestRegionSummaryFromStorage_6)); }
	inline String_t* get_BestRegionSummaryFromStorage_6() const { return ___BestRegionSummaryFromStorage_6; }
	inline String_t** get_address_of_BestRegionSummaryFromStorage_6() { return &___BestRegionSummaryFromStorage_6; }
	inline void set_BestRegionSummaryFromStorage_6(String_t* value)
	{
		___BestRegionSummaryFromStorage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BestRegionSummaryFromStorage_6), (void*)value);
	}

	inline static int32_t get_offset_of_Server_7() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___Server_7)); }
	inline String_t* get_Server_7() const { return ___Server_7; }
	inline String_t** get_address_of_Server_7() { return &___Server_7; }
	inline void set_Server_7(String_t* value)
	{
		___Server_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Server_7), (void*)value);
	}

	inline static int32_t get_offset_of_Port_8() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___Port_8)); }
	inline int32_t get_Port_8() const { return ___Port_8; }
	inline int32_t* get_address_of_Port_8() { return &___Port_8; }
	inline void set_Port_8(int32_t value)
	{
		___Port_8 = value;
	}

	inline static int32_t get_offset_of_Protocol_9() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___Protocol_9)); }
	inline uint8_t get_Protocol_9() const { return ___Protocol_9; }
	inline uint8_t* get_address_of_Protocol_9() { return &___Protocol_9; }
	inline void set_Protocol_9(uint8_t value)
	{
		___Protocol_9 = value;
	}

	inline static int32_t get_offset_of_AuthMode_10() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___AuthMode_10)); }
	inline int32_t get_AuthMode_10() const { return ___AuthMode_10; }
	inline int32_t* get_address_of_AuthMode_10() { return &___AuthMode_10; }
	inline void set_AuthMode_10(int32_t value)
	{
		___AuthMode_10 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_11() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___EnableLobbyStatistics_11)); }
	inline bool get_EnableLobbyStatistics_11() const { return ___EnableLobbyStatistics_11; }
	inline bool* get_address_of_EnableLobbyStatistics_11() { return &___EnableLobbyStatistics_11; }
	inline void set_EnableLobbyStatistics_11(bool value)
	{
		___EnableLobbyStatistics_11 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_12() { return static_cast<int32_t>(offsetof(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8, ___NetworkLogging_12)); }
	inline uint8_t get_NetworkLogging_12() const { return ___NetworkLogging_12; }
	inline uint8_t* get_address_of_NetworkLogging_12() { return &___NetworkLogging_12; }
	inline void set_NetworkLogging_12(uint8_t value)
	{
		___NetworkLogging_12 = value;
	}
};


// Photon.Voice.Unity.VoiceLogger
struct  VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B  : public RuntimeObject
{
public:
	// System.String Photon.Voice.Unity.VoiceLogger::<Tag>k__BackingField
	String_t* ___U3CTagU3Ek__BackingField_0;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::<LogLevel>k__BackingField
	uint8_t ___U3CLogLevelU3Ek__BackingField_1;
	// UnityEngine.Object Photon.Voice.Unity.VoiceLogger::context
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context_2;

public:
	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B, ___U3CTagU3Ek__BackingField_0)); }
	inline String_t* get_U3CTagU3Ek__BackingField_0() const { return ___U3CTagU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTagU3Ek__BackingField_0() { return &___U3CTagU3Ek__BackingField_0; }
	inline void set_U3CTagU3Ek__BackingField_0(String_t* value)
	{
		___U3CTagU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTagU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogLevelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B, ___U3CLogLevelU3Ek__BackingField_1)); }
	inline uint8_t get_U3CLogLevelU3Ek__BackingField_1() const { return ___U3CLogLevelU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CLogLevelU3Ek__BackingField_1() { return &___U3CLogLevelU3Ek__BackingField_1; }
	inline void set_U3CLogLevelU3Ek__BackingField_1(uint8_t value)
	{
		___U3CLogLevelU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B, ___context_2)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_context_2() const { return ___context_2; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_2), (void*)value);
	}
};


// Photon.Voice.VoiceInfo
struct  VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 
{
public:
	// Photon.Voice.Codec Photon.Voice.VoiceInfo::<Codec>k__BackingField
	int32_t ___U3CCodecU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.VoiceInfo::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.VoiceInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceInfo::<FrameDurationUs>k__BackingField
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceInfo::<Bitrate>k__BackingField
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	// System.Object Photon.Voice.VoiceInfo::<UserData>k__BackingField
	RuntimeObject * ___U3CUserDataU3Ek__BackingField_5;
	// System.Int32 Photon.Voice.VoiceInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_6;
	// System.Int32 Photon.Voice.VoiceInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CCodecU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CCodecU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodecU3Ek__BackingField_0() const { return ___U3CCodecU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodecU3Ek__BackingField_0() { return &___U3CCodecU3Ek__BackingField_0; }
	inline void set_U3CCodecU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodecU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSamplingRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CSamplingRateU3Ek__BackingField_1)); }
	inline int32_t get_U3CSamplingRateU3Ek__BackingField_1() const { return ___U3CSamplingRateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSamplingRateU3Ek__BackingField_1() { return &___U3CSamplingRateU3Ek__BackingField_1; }
	inline void set_U3CSamplingRateU3Ek__BackingField_1(int32_t value)
	{
		___U3CSamplingRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CChannelsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CChannelsU3Ek__BackingField_2)); }
	inline int32_t get_U3CChannelsU3Ek__BackingField_2() const { return ___U3CChannelsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CChannelsU3Ek__BackingField_2() { return &___U3CChannelsU3Ek__BackingField_2; }
	inline void set_U3CChannelsU3Ek__BackingField_2(int32_t value)
	{
		___U3CChannelsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFrameDurationUsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CFrameDurationUsU3Ek__BackingField_3)); }
	inline int32_t get_U3CFrameDurationUsU3Ek__BackingField_3() const { return ___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFrameDurationUsU3Ek__BackingField_3() { return &___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline void set_U3CFrameDurationUsU3Ek__BackingField_3(int32_t value)
	{
		___U3CFrameDurationUsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CBitrateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CBitrateU3Ek__BackingField_4)); }
	inline int32_t get_U3CBitrateU3Ek__BackingField_4() const { return ___U3CBitrateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CBitrateU3Ek__BackingField_4() { return &___U3CBitrateU3Ek__BackingField_4; }
	inline void set_U3CBitrateU3Ek__BackingField_4(int32_t value)
	{
		___U3CBitrateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CUserDataU3Ek__BackingField_5)); }
	inline RuntimeObject * get_U3CUserDataU3Ek__BackingField_5() const { return ___U3CUserDataU3Ek__BackingField_5; }
	inline RuntimeObject ** get_address_of_U3CUserDataU3Ek__BackingField_5() { return &___U3CUserDataU3Ek__BackingField_5; }
	inline void set_U3CUserDataU3Ek__BackingField_5(RuntimeObject * value)
	{
		___U3CUserDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserDataU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CWidthU3Ek__BackingField_6)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_6() const { return ___U3CWidthU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_6() { return &___U3CWidthU3Ek__BackingField_6; }
	inline void set_U3CWidthU3Ek__BackingField_6(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CHeightU3Ek__BackingField_7)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_7() const { return ___U3CHeightU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_7() { return &___U3CHeightU3Ek__BackingField_7; }
	inline void set_U3CHeightU3Ek__BackingField_7(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_pinvoke
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_5;
	int32_t ___U3CWidthU3Ek__BackingField_6;
	int32_t ___U3CHeightU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_com
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_5;
	int32_t ___U3CWidthU3Ek__BackingField_6;
	int32_t ___U3CHeightU3Ek__BackingField_7;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct  Nullable_1_tF2AFE3AB20DAEA81B013884BDF76297AFF6721C8 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF2AFE3AB20DAEA81B013884BDF76297AFF6721C8, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF2AFE3AB20DAEA81B013884BDF76297AFF6721C8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Photon.Pun.ServerSettings
struct  ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Photon.Realtime.AppSettings Photon.Pun.ServerSettings::AppSettings
	AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * ___AppSettings_4;
	// System.String Photon.Pun.ServerSettings::DevRegion
	String_t* ___DevRegion_5;
	// Photon.Pun.PunLogLevel Photon.Pun.ServerSettings::PunLogging
	int32_t ___PunLogging_6;
	// System.Boolean Photon.Pun.ServerSettings::EnableSupportLogger
	bool ___EnableSupportLogger_7;
	// System.Boolean Photon.Pun.ServerSettings::RunInBackground
	bool ___RunInBackground_8;
	// System.Boolean Photon.Pun.ServerSettings::StartInOfflineMode
	bool ___StartInOfflineMode_9;
	// System.Collections.Generic.List`1<System.String> Photon.Pun.ServerSettings::RpcList
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___RpcList_10;

public:
	inline static int32_t get_offset_of_AppSettings_4() { return static_cast<int32_t>(offsetof(ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9, ___AppSettings_4)); }
	inline AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * get_AppSettings_4() const { return ___AppSettings_4; }
	inline AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 ** get_address_of_AppSettings_4() { return &___AppSettings_4; }
	inline void set_AppSettings_4(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * value)
	{
		___AppSettings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppSettings_4), (void*)value);
	}

	inline static int32_t get_offset_of_DevRegion_5() { return static_cast<int32_t>(offsetof(ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9, ___DevRegion_5)); }
	inline String_t* get_DevRegion_5() const { return ___DevRegion_5; }
	inline String_t** get_address_of_DevRegion_5() { return &___DevRegion_5; }
	inline void set_DevRegion_5(String_t* value)
	{
		___DevRegion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DevRegion_5), (void*)value);
	}

	inline static int32_t get_offset_of_PunLogging_6() { return static_cast<int32_t>(offsetof(ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9, ___PunLogging_6)); }
	inline int32_t get_PunLogging_6() const { return ___PunLogging_6; }
	inline int32_t* get_address_of_PunLogging_6() { return &___PunLogging_6; }
	inline void set_PunLogging_6(int32_t value)
	{
		___PunLogging_6 = value;
	}

	inline static int32_t get_offset_of_EnableSupportLogger_7() { return static_cast<int32_t>(offsetof(ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9, ___EnableSupportLogger_7)); }
	inline bool get_EnableSupportLogger_7() const { return ___EnableSupportLogger_7; }
	inline bool* get_address_of_EnableSupportLogger_7() { return &___EnableSupportLogger_7; }
	inline void set_EnableSupportLogger_7(bool value)
	{
		___EnableSupportLogger_7 = value;
	}

	inline static int32_t get_offset_of_RunInBackground_8() { return static_cast<int32_t>(offsetof(ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9, ___RunInBackground_8)); }
	inline bool get_RunInBackground_8() const { return ___RunInBackground_8; }
	inline bool* get_address_of_RunInBackground_8() { return &___RunInBackground_8; }
	inline void set_RunInBackground_8(bool value)
	{
		___RunInBackground_8 = value;
	}

	inline static int32_t get_offset_of_StartInOfflineMode_9() { return static_cast<int32_t>(offsetof(ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9, ___StartInOfflineMode_9)); }
	inline bool get_StartInOfflineMode_9() const { return ___StartInOfflineMode_9; }
	inline bool* get_address_of_StartInOfflineMode_9() { return &___StartInOfflineMode_9; }
	inline void set_StartInOfflineMode_9(bool value)
	{
		___StartInOfflineMode_9 = value;
	}

	inline static int32_t get_offset_of_RpcList_10() { return static_cast<int32_t>(offsetof(ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9, ___RpcList_10)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_RpcList_10() const { return ___RpcList_10; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_RpcList_10() { return &___RpcList_10; }
	inline void set_RpcList_10(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___RpcList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcList_10), (void*)value);
	}
};


// Photon.Realtime.LoadBalancingClient
struct  LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A  : public RuntimeObject
{
public:
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * ___U3CAuthValuesU3Ek__BackingField_3;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_4;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_5;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tF2AFE3AB20DAEA81B013884BDF76297AFF6721C8  ___U3CExpectedProtocolU3Ek__BackingField_6;
	// System.String Photon.Realtime.LoadBalancingClient::tokenCache
	String_t* ___tokenCache_7;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_8;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHttp
	String_t* ___NameServerHttp_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_13;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_14;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_15;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_16;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * ___StateChanged_17;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t493827AC88A51FAD8E238895D807BE12DB2231D7 * ___EventReceived_18;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t5D4A1E6474457B8E2EC008E3E59C92FC98FA823B * ___OpResponseReceived_19;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * ___ConnectionCallbackTargets_20;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * ___MatchMakingCallbackTargets_21;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * ___InRoomCallbackTargets_22;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * ___LobbyCallbackTargets_23;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * ___WebRpcCallbackTargets_24;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * ___ErrorInfoCallbackTargets_25;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_26;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___U3CCurrentLobbyU3Ek__BackingField_27;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_28;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB * ___lobbyStatistics_29;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___U3CLocalPlayerU3Ek__BackingField_30;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___U3CCurrentRoomU3Ek__BackingField_31;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_32;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_33;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_34;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_35;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * ___enterRoomParamsCache_36;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * ___failedRoomEntryOperation_37;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friendListRequested_39;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_40;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_41;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___RegionHandler_42;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_43;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_44;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_45;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient_CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t3865379B96850AA393B5EE78E06D1C7BBC9A0AD4 * ___callbackTargetChanges_46;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * ___callbackTargets_47;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLoadBalancingPeerU3Ek__BackingField_0)); }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * get_U3CLoadBalancingPeerU3Ek__BackingField_0() const { return ___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 ** get_address_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return &___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline void set_U3CLoadBalancingPeerU3Ek__BackingField_0(LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * value)
	{
		___U3CLoadBalancingPeerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingPeerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAuthValuesU3Ek__BackingField_3)); }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * get_U3CAuthValuesU3Ek__BackingField_3() const { return ___U3CAuthValuesU3Ek__BackingField_3; }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 ** get_address_of_U3CAuthValuesU3Ek__BackingField_3() { return &___U3CAuthValuesU3Ek__BackingField_3; }
	inline void set_U3CAuthValuesU3Ek__BackingField_3(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___AuthMode_4)); }
	inline int32_t get_AuthMode_4() const { return ___AuthMode_4; }
	inline int32_t* get_address_of_AuthMode_4() { return &___AuthMode_4; }
	inline void set_AuthMode_4(int32_t value)
	{
		___AuthMode_4 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EncryptionMode_5)); }
	inline int32_t get_EncryptionMode_5() const { return ___EncryptionMode_5; }
	inline int32_t* get_address_of_EncryptionMode_5() { return &___EncryptionMode_5; }
	inline void set_EncryptionMode_5(int32_t value)
	{
		___EncryptionMode_5 = value;
	}

	inline static int32_t get_offset_of_U3CExpectedProtocolU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CExpectedProtocolU3Ek__BackingField_6)); }
	inline Nullable_1_tF2AFE3AB20DAEA81B013884BDF76297AFF6721C8  get_U3CExpectedProtocolU3Ek__BackingField_6() const { return ___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline Nullable_1_tF2AFE3AB20DAEA81B013884BDF76297AFF6721C8 * get_address_of_U3CExpectedProtocolU3Ek__BackingField_6() { return &___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline void set_U3CExpectedProtocolU3Ek__BackingField_6(Nullable_1_tF2AFE3AB20DAEA81B013884BDF76297AFF6721C8  value)
	{
		___U3CExpectedProtocolU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_tokenCache_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___tokenCache_7)); }
	inline String_t* get_tokenCache_7() const { return ___tokenCache_7; }
	inline String_t** get_address_of_tokenCache_7() { return &___tokenCache_7; }
	inline void set_tokenCache_7(String_t* value)
	{
		___tokenCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CIsUsingNameServerU3Ek__BackingField_8)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_8() const { return ___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return &___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_8(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerHost_9)); }
	inline String_t* get_NameServerHost_9() const { return ___NameServerHost_9; }
	inline String_t** get_address_of_NameServerHost_9() { return &___NameServerHost_9; }
	inline void set_NameServerHost_9(String_t* value)
	{
		___NameServerHost_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_9), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerHttp_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerHttp_10)); }
	inline String_t* get_NameServerHttp_10() const { return ___NameServerHttp_10; }
	inline String_t** get_address_of_NameServerHttp_10() { return &___NameServerHttp_10; }
	inline void set_NameServerHttp_10(String_t* value)
	{
		___NameServerHttp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHttp_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_12(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CMasterServerAddressU3Ek__BackingField_13)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_13() const { return ___U3CMasterServerAddressU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_13() { return &___U3CMasterServerAddressU3Ek__BackingField_13; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_13(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CGameServerAddressU3Ek__BackingField_14)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_14() const { return ___U3CGameServerAddressU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_14() { return &___U3CGameServerAddressU3Ek__BackingField_14; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_14(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CServerU3Ek__BackingField_15)); }
	inline int32_t get_U3CServerU3Ek__BackingField_15() const { return ___U3CServerU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_15() { return &___U3CServerU3Ek__BackingField_15; }
	inline void set_U3CServerU3Ek__BackingField_15(int32_t value)
	{
		___U3CServerU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_state_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___state_16)); }
	inline int32_t get_state_16() const { return ___state_16; }
	inline int32_t* get_address_of_state_16() { return &___state_16; }
	inline void set_state_16(int32_t value)
	{
		___state_16 = value;
	}

	inline static int32_t get_offset_of_StateChanged_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___StateChanged_17)); }
	inline Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * get_StateChanged_17() const { return ___StateChanged_17; }
	inline Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 ** get_address_of_StateChanged_17() { return &___StateChanged_17; }
	inline void set_StateChanged_17(Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * value)
	{
		___StateChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_EventReceived_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EventReceived_18)); }
	inline Action_1_t493827AC88A51FAD8E238895D807BE12DB2231D7 * get_EventReceived_18() const { return ___EventReceived_18; }
	inline Action_1_t493827AC88A51FAD8E238895D807BE12DB2231D7 ** get_address_of_EventReceived_18() { return &___EventReceived_18; }
	inline void set_EventReceived_18(Action_1_t493827AC88A51FAD8E238895D807BE12DB2231D7 * value)
	{
		___EventReceived_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_18), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___OpResponseReceived_19)); }
	inline Action_1_t5D4A1E6474457B8E2EC008E3E59C92FC98FA823B * get_OpResponseReceived_19() const { return ___OpResponseReceived_19; }
	inline Action_1_t5D4A1E6474457B8E2EC008E3E59C92FC98FA823B ** get_address_of_OpResponseReceived_19() { return &___OpResponseReceived_19; }
	inline void set_OpResponseReceived_19(Action_1_t5D4A1E6474457B8E2EC008E3E59C92FC98FA823B * value)
	{
		___OpResponseReceived_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpResponseReceived_19), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionCallbackTargets_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ConnectionCallbackTargets_20)); }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * get_ConnectionCallbackTargets_20() const { return ___ConnectionCallbackTargets_20; }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 ** get_address_of_ConnectionCallbackTargets_20() { return &___ConnectionCallbackTargets_20; }
	inline void set_ConnectionCallbackTargets_20(ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * value)
	{
		___ConnectionCallbackTargets_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionCallbackTargets_20), (void*)value);
	}

	inline static int32_t get_offset_of_MatchMakingCallbackTargets_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___MatchMakingCallbackTargets_21)); }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * get_MatchMakingCallbackTargets_21() const { return ___MatchMakingCallbackTargets_21; }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 ** get_address_of_MatchMakingCallbackTargets_21() { return &___MatchMakingCallbackTargets_21; }
	inline void set_MatchMakingCallbackTargets_21(MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * value)
	{
		___MatchMakingCallbackTargets_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchMakingCallbackTargets_21), (void*)value);
	}

	inline static int32_t get_offset_of_InRoomCallbackTargets_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___InRoomCallbackTargets_22)); }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * get_InRoomCallbackTargets_22() const { return ___InRoomCallbackTargets_22; }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D ** get_address_of_InRoomCallbackTargets_22() { return &___InRoomCallbackTargets_22; }
	inline void set_InRoomCallbackTargets_22(InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * value)
	{
		___InRoomCallbackTargets_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InRoomCallbackTargets_22), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyCallbackTargets_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___LobbyCallbackTargets_23)); }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * get_LobbyCallbackTargets_23() const { return ___LobbyCallbackTargets_23; }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 ** get_address_of_LobbyCallbackTargets_23() { return &___LobbyCallbackTargets_23; }
	inline void set_LobbyCallbackTargets_23(LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * value)
	{
		___LobbyCallbackTargets_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyCallbackTargets_23), (void*)value);
	}

	inline static int32_t get_offset_of_WebRpcCallbackTargets_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___WebRpcCallbackTargets_24)); }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * get_WebRpcCallbackTargets_24() const { return ___WebRpcCallbackTargets_24; }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 ** get_address_of_WebRpcCallbackTargets_24() { return &___WebRpcCallbackTargets_24; }
	inline void set_WebRpcCallbackTargets_24(WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * value)
	{
		___WebRpcCallbackTargets_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WebRpcCallbackTargets_24), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorInfoCallbackTargets_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ErrorInfoCallbackTargets_25)); }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * get_ErrorInfoCallbackTargets_25() const { return ___ErrorInfoCallbackTargets_25; }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 ** get_address_of_ErrorInfoCallbackTargets_25() { return &___ErrorInfoCallbackTargets_25; }
	inline void set_ErrorInfoCallbackTargets_25(ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * value)
	{
		___ErrorInfoCallbackTargets_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorInfoCallbackTargets_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CDisconnectedCauseU3Ek__BackingField_26)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_26() const { return ___U3CDisconnectedCauseU3Ek__BackingField_26; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_26() { return &___U3CDisconnectedCauseU3Ek__BackingField_26; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_26(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentLobbyU3Ek__BackingField_27)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_U3CCurrentLobbyU3Ek__BackingField_27() const { return ___U3CCurrentLobbyU3Ek__BackingField_27; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_27() { return &___U3CCurrentLobbyU3Ek__BackingField_27; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_27(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentLobbyU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EnableLobbyStatistics_28)); }
	inline bool get_EnableLobbyStatistics_28() const { return ___EnableLobbyStatistics_28; }
	inline bool* get_address_of_EnableLobbyStatistics_28() { return &___EnableLobbyStatistics_28; }
	inline void set_EnableLobbyStatistics_28(bool value)
	{
		___EnableLobbyStatistics_28 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lobbyStatistics_29)); }
	inline List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB * get_lobbyStatistics_29() const { return ___lobbyStatistics_29; }
	inline List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB ** get_address_of_lobbyStatistics_29() { return &___lobbyStatistics_29; }
	inline void set_lobbyStatistics_29(List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB * value)
	{
		___lobbyStatistics_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyStatistics_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLocalPlayerU3Ek__BackingField_30)); }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * get_U3CLocalPlayerU3Ek__BackingField_30() const { return ___U3CLocalPlayerU3Ek__BackingField_30; }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_30() { return &___U3CLocalPlayerU3Ek__BackingField_30; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_30(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentRoomU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentRoomU3Ek__BackingField_31)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_U3CCurrentRoomU3Ek__BackingField_31() const { return ___U3CCurrentRoomU3Ek__BackingField_31; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_U3CCurrentRoomU3Ek__BackingField_31() { return &___U3CCurrentRoomU3Ek__BackingField_31; }
	inline void set_U3CCurrentRoomU3Ek__BackingField_31(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___U3CCurrentRoomU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentRoomU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersOnMasterCountU3Ek__BackingField_32)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_32() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_32; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_32() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_32; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_32(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersInRoomsCountU3Ek__BackingField_33)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_33() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_33() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_33; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_33(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CRoomsCountU3Ek__BackingField_34)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_34() const { return ___U3CRoomsCountU3Ek__BackingField_34; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_34() { return &___U3CRoomsCountU3Ek__BackingField_34; }
	inline void set_U3CRoomsCountU3Ek__BackingField_34(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lastJoinType_35)); }
	inline int32_t get_lastJoinType_35() const { return ___lastJoinType_35; }
	inline int32_t* get_address_of_lastJoinType_35() { return &___lastJoinType_35; }
	inline void set_lastJoinType_35(int32_t value)
	{
		___lastJoinType_35 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___enterRoomParamsCache_36)); }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * get_enterRoomParamsCache_36() const { return ___enterRoomParamsCache_36; }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 ** get_address_of_enterRoomParamsCache_36() { return &___enterRoomParamsCache_36; }
	inline void set_enterRoomParamsCache_36(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * value)
	{
		___enterRoomParamsCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_failedRoomEntryOperation_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___failedRoomEntryOperation_37)); }
	inline OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * get_failedRoomEntryOperation_37() const { return ___failedRoomEntryOperation_37; }
	inline OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 ** get_address_of_failedRoomEntryOperation_37() { return &___failedRoomEntryOperation_37; }
	inline void set_failedRoomEntryOperation_37(OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * value)
	{
		___failedRoomEntryOperation_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failedRoomEntryOperation_37), (void*)value);
	}

	inline static int32_t get_offset_of_friendListRequested_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___friendListRequested_39)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_friendListRequested_39() const { return ___friendListRequested_39; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_friendListRequested_39() { return &___friendListRequested_39; }
	inline void set_friendListRequested_39(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___friendListRequested_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCloudRegionU3Ek__BackingField_40)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_40() const { return ___U3CCloudRegionU3Ek__BackingField_40; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_40() { return &___U3CCloudRegionU3Ek__BackingField_40; }
	inline void set_U3CCloudRegionU3Ek__BackingField_40(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudRegionU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentClusterU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentClusterU3Ek__BackingField_41)); }
	inline String_t* get_U3CCurrentClusterU3Ek__BackingField_41() const { return ___U3CCurrentClusterU3Ek__BackingField_41; }
	inline String_t** get_address_of_U3CCurrentClusterU3Ek__BackingField_41() { return &___U3CCurrentClusterU3Ek__BackingField_41; }
	inline void set_U3CCurrentClusterU3Ek__BackingField_41(String_t* value)
	{
		___U3CCurrentClusterU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentClusterU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_RegionHandler_42() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___RegionHandler_42)); }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * get_RegionHandler_42() const { return ___RegionHandler_42; }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF ** get_address_of_RegionHandler_42() { return &___RegionHandler_42; }
	inline void set_RegionHandler_42(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * value)
	{
		___RegionHandler_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegionHandler_42), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionSummaryFromStorage_43() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___bestRegionSummaryFromStorage_43)); }
	inline String_t* get_bestRegionSummaryFromStorage_43() const { return ___bestRegionSummaryFromStorage_43; }
	inline String_t** get_address_of_bestRegionSummaryFromStorage_43() { return &___bestRegionSummaryFromStorage_43; }
	inline void set_bestRegionSummaryFromStorage_43(String_t* value)
	{
		___bestRegionSummaryFromStorage_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionSummaryFromStorage_43), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryToCache_44() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___SummaryToCache_44)); }
	inline String_t* get_SummaryToCache_44() const { return ___SummaryToCache_44; }
	inline String_t** get_address_of_SummaryToCache_44() { return &___SummaryToCache_44; }
	inline void set_SummaryToCache_44(String_t* value)
	{
		___SummaryToCache_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryToCache_44), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBestRegion_45() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___connectToBestRegion_45)); }
	inline bool get_connectToBestRegion_45() const { return ___connectToBestRegion_45; }
	inline bool* get_address_of_connectToBestRegion_45() { return &___connectToBestRegion_45; }
	inline void set_connectToBestRegion_45(bool value)
	{
		___connectToBestRegion_45 = value;
	}

	inline static int32_t get_offset_of_callbackTargetChanges_46() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargetChanges_46)); }
	inline Queue_1_t3865379B96850AA393B5EE78E06D1C7BBC9A0AD4 * get_callbackTargetChanges_46() const { return ___callbackTargetChanges_46; }
	inline Queue_1_t3865379B96850AA393B5EE78E06D1C7BBC9A0AD4 ** get_address_of_callbackTargetChanges_46() { return &___callbackTargetChanges_46; }
	inline void set_callbackTargetChanges_46(Queue_1_t3865379B96850AA393B5EE78E06D1C7BBC9A0AD4 * value)
	{
		___callbackTargetChanges_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargetChanges_46), (void*)value);
	}

	inline static int32_t get_offset_of_callbackTargets_47() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargets_47)); }
	inline HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * get_callbackTargets_47() const { return ___callbackTargets_47; }
	inline HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 ** get_address_of_callbackTargets_47() { return &___callbackTargets_47; }
	inline void set_callbackTargets_47(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * value)
	{
		___callbackTargets_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargets_47), (void*)value);
	}
};

struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * ___ProtocolToNameServerPort_11;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields, ___ProtocolToNameServerPort_11)); }
	inline Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * get_ProtocolToNameServerPort_11() const { return ___ProtocolToNameServerPort_11; }
	inline Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 ** get_address_of_ProtocolToNameServerPort_11() { return &___ProtocolToNameServerPort_11; }
	inline void set_ProtocolToNameServerPort_11(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * value)
	{
		___ProtocolToNameServerPort_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_11), (void*)value);
	}
};


// Photon.Voice.Unity.RemoteVoiceLink
struct  RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.Unity.RemoteVoiceLink::<Info>k__BackingField
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<VoiceId>k__BackingField
	int32_t ___U3CVoiceIdU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_3;
	// System.Action`1<System.Single[]> Photon.Voice.Unity.RemoteVoiceLink::FloatFrameDecoded
	Action_1_tF14E2B60916B5AA685432504A9BC1036ED6AAB84 * ___FloatFrameDecoded_4;
	// System.Action Photon.Voice.Unity.RemoteVoiceLink::RemoteVoiceRemoved
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___RemoteVoiceRemoved_5;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_5), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___U3CPlayerIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CPlayerIdU3Ek__BackingField_1() const { return ___U3CPlayerIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CPlayerIdU3Ek__BackingField_1() { return &___U3CPlayerIdU3Ek__BackingField_1; }
	inline void set_U3CPlayerIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CPlayerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CVoiceIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___U3CVoiceIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CVoiceIdU3Ek__BackingField_2() const { return ___U3CVoiceIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CVoiceIdU3Ek__BackingField_2() { return &___U3CVoiceIdU3Ek__BackingField_2; }
	inline void set_U3CVoiceIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CVoiceIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___U3CChannelIdU3Ek__BackingField_3)); }
	inline int32_t get_U3CChannelIdU3Ek__BackingField_3() const { return ___U3CChannelIdU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CChannelIdU3Ek__BackingField_3() { return &___U3CChannelIdU3Ek__BackingField_3; }
	inline void set_U3CChannelIdU3Ek__BackingField_3(int32_t value)
	{
		___U3CChannelIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_FloatFrameDecoded_4() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___FloatFrameDecoded_4)); }
	inline Action_1_tF14E2B60916B5AA685432504A9BC1036ED6AAB84 * get_FloatFrameDecoded_4() const { return ___FloatFrameDecoded_4; }
	inline Action_1_tF14E2B60916B5AA685432504A9BC1036ED6AAB84 ** get_address_of_FloatFrameDecoded_4() { return &___FloatFrameDecoded_4; }
	inline void set_FloatFrameDecoded_4(Action_1_tF14E2B60916B5AA685432504A9BC1036ED6AAB84 * value)
	{
		___FloatFrameDecoded_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FloatFrameDecoded_4), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteVoiceRemoved_5() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___RemoteVoiceRemoved_5)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_RemoteVoiceRemoved_5() const { return ___RemoteVoiceRemoved_5; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_RemoteVoiceRemoved_5() { return &___RemoteVoiceRemoved_5; }
	inline void set_RemoteVoiceRemoved_5(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___RemoteVoiceRemoved_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteVoiceRemoved_5), (void*)value);
	}
};


// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct  Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Photon.Voice.LoadBalancingTransport
struct  LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78  : public LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A
{
public:
	// Photon.Voice.VoiceClient Photon.Voice.LoadBalancingTransport::voiceClient
	VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * ___voiceClient_49;
	// Photon.Voice.PhotonTransportProtocol Photon.Voice.LoadBalancingTransport::protocol
	PhotonTransportProtocol_tC28AB26BC8A7E28111FEBC8D5A43E2387AA5E1A6 * ___protocol_50;
	// System.Object Photon.Voice.LoadBalancingTransport::sendLock
	RuntimeObject * ___sendLock_51;

public:
	inline static int32_t get_offset_of_voiceClient_49() { return static_cast<int32_t>(offsetof(LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78, ___voiceClient_49)); }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * get_voiceClient_49() const { return ___voiceClient_49; }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 ** get_address_of_voiceClient_49() { return &___voiceClient_49; }
	inline void set_voiceClient_49(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * value)
	{
		___voiceClient_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_49), (void*)value);
	}

	inline static int32_t get_offset_of_protocol_50() { return static_cast<int32_t>(offsetof(LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78, ___protocol_50)); }
	inline PhotonTransportProtocol_tC28AB26BC8A7E28111FEBC8D5A43E2387AA5E1A6 * get_protocol_50() const { return ___protocol_50; }
	inline PhotonTransportProtocol_tC28AB26BC8A7E28111FEBC8D5A43E2387AA5E1A6 ** get_address_of_protocol_50() { return &___protocol_50; }
	inline void set_protocol_50(PhotonTransportProtocol_tC28AB26BC8A7E28111FEBC8D5A43E2387AA5E1A6 * value)
	{
		___protocol_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocol_50), (void*)value);
	}

	inline static int32_t get_offset_of_sendLock_51() { return static_cast<int32_t>(offsetof(LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78, ___sendLock_51)); }
	inline RuntimeObject * get_sendLock_51() const { return ___sendLock_51; }
	inline RuntimeObject ** get_address_of_sendLock_51() { return &___sendLock_51; }
	inline void set_sendLock_51(RuntimeObject * value)
	{
		___sendLock_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendLock_51), (void*)value);
	}
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Photon.Pun.PhotonView
struct  PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Photon.Pun.PhotonView::ownerId
	int32_t ___ownerId_4;
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_5;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_6;
	// System.Boolean Photon.Pun.PhotonView::OwnershipWasTransfered
	bool ___OwnershipWasTransfered_7;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_8;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___instantiationDataField_9;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___lastOnSerializeDataSent_10;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___syncValues_11;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___lastOnSerializeDataReceived_12;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_13;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_14;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_tAAE8BF32F260E5939A1EAF05F4C38C7841B64300 * ___ObservedComponents_15;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_16;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_17;
	// System.Boolean Photon.Pun.PhotonView::didAwake
	bool ___didAwake_18;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_19;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_20;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A* ___RpcMonoBehaviours_21;

public:
	inline static int32_t get_offset_of_ownerId_4() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___ownerId_4)); }
	inline int32_t get_ownerId_4() const { return ___ownerId_4; }
	inline int32_t* get_address_of_ownerId_4() { return &___ownerId_4; }
	inline void set_ownerId_4(int32_t value)
	{
		___ownerId_4 = value;
	}

	inline static int32_t get_offset_of_Group_5() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___Group_5)); }
	inline uint8_t get_Group_5() const { return ___Group_5; }
	inline uint8_t* get_address_of_Group_5() { return &___Group_5; }
	inline void set_Group_5(uint8_t value)
	{
		___Group_5 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_6() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___mixedModeIsReliable_6)); }
	inline bool get_mixedModeIsReliable_6() const { return ___mixedModeIsReliable_6; }
	inline bool* get_address_of_mixedModeIsReliable_6() { return &___mixedModeIsReliable_6; }
	inline void set_mixedModeIsReliable_6(bool value)
	{
		___mixedModeIsReliable_6 = value;
	}

	inline static int32_t get_offset_of_OwnershipWasTransfered_7() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___OwnershipWasTransfered_7)); }
	inline bool get_OwnershipWasTransfered_7() const { return ___OwnershipWasTransfered_7; }
	inline bool* get_address_of_OwnershipWasTransfered_7() { return &___OwnershipWasTransfered_7; }
	inline void set_OwnershipWasTransfered_7(bool value)
	{
		___OwnershipWasTransfered_7 = value;
	}

	inline static int32_t get_offset_of_prefixField_8() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___prefixField_8)); }
	inline int32_t get_prefixField_8() const { return ___prefixField_8; }
	inline int32_t* get_address_of_prefixField_8() { return &___prefixField_8; }
	inline void set_prefixField_8(int32_t value)
	{
		___prefixField_8 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_9() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___instantiationDataField_9)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_instantiationDataField_9() const { return ___instantiationDataField_9; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_instantiationDataField_9() { return &___instantiationDataField_9; }
	inline void set_instantiationDataField_9(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___instantiationDataField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiationDataField_9), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_10() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___lastOnSerializeDataSent_10)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_lastOnSerializeDataSent_10() const { return ___lastOnSerializeDataSent_10; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_lastOnSerializeDataSent_10() { return &___lastOnSerializeDataSent_10; }
	inline void set_lastOnSerializeDataSent_10(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___lastOnSerializeDataSent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataSent_10), (void*)value);
	}

	inline static int32_t get_offset_of_syncValues_11() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___syncValues_11)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_syncValues_11() const { return ___syncValues_11; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_syncValues_11() { return &___syncValues_11; }
	inline void set_syncValues_11(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___syncValues_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncValues_11), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_12() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___lastOnSerializeDataReceived_12)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_lastOnSerializeDataReceived_12() const { return ___lastOnSerializeDataReceived_12; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_lastOnSerializeDataReceived_12() { return &___lastOnSerializeDataReceived_12; }
	inline void set_lastOnSerializeDataReceived_12(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___lastOnSerializeDataReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_Synchronization_13() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___Synchronization_13)); }
	inline int32_t get_Synchronization_13() const { return ___Synchronization_13; }
	inline int32_t* get_address_of_Synchronization_13() { return &___Synchronization_13; }
	inline void set_Synchronization_13(int32_t value)
	{
		___Synchronization_13 = value;
	}

	inline static int32_t get_offset_of_OwnershipTransfer_14() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___OwnershipTransfer_14)); }
	inline int32_t get_OwnershipTransfer_14() const { return ___OwnershipTransfer_14; }
	inline int32_t* get_address_of_OwnershipTransfer_14() { return &___OwnershipTransfer_14; }
	inline void set_OwnershipTransfer_14(int32_t value)
	{
		___OwnershipTransfer_14 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_15() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___ObservedComponents_15)); }
	inline List_1_tAAE8BF32F260E5939A1EAF05F4C38C7841B64300 * get_ObservedComponents_15() const { return ___ObservedComponents_15; }
	inline List_1_tAAE8BF32F260E5939A1EAF05F4C38C7841B64300 ** get_address_of_ObservedComponents_15() { return &___ObservedComponents_15; }
	inline void set_ObservedComponents_15(List_1_tAAE8BF32F260E5939A1EAF05F4C38C7841B64300 * value)
	{
		___ObservedComponents_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObservedComponents_15), (void*)value);
	}

	inline static int32_t get_offset_of_viewIdField_16() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___viewIdField_16)); }
	inline int32_t get_viewIdField_16() const { return ___viewIdField_16; }
	inline int32_t* get_address_of_viewIdField_16() { return &___viewIdField_16; }
	inline void set_viewIdField_16(int32_t value)
	{
		___viewIdField_16 = value;
	}

	inline static int32_t get_offset_of_InstantiationId_17() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___InstantiationId_17)); }
	inline int32_t get_InstantiationId_17() const { return ___InstantiationId_17; }
	inline int32_t* get_address_of_InstantiationId_17() { return &___InstantiationId_17; }
	inline void set_InstantiationId_17(int32_t value)
	{
		___InstantiationId_17 = value;
	}

	inline static int32_t get_offset_of_didAwake_18() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___didAwake_18)); }
	inline bool get_didAwake_18() const { return ___didAwake_18; }
	inline bool* get_address_of_didAwake_18() { return &___didAwake_18; }
	inline void set_didAwake_18(bool value)
	{
		___didAwake_18 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_19() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___isRuntimeInstantiated_19)); }
	inline bool get_isRuntimeInstantiated_19() const { return ___isRuntimeInstantiated_19; }
	inline bool* get_address_of_isRuntimeInstantiated_19() { return &___isRuntimeInstantiated_19; }
	inline void set_isRuntimeInstantiated_19(bool value)
	{
		___isRuntimeInstantiated_19 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_20() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___removedFromLocalViewList_20)); }
	inline bool get_removedFromLocalViewList_20() const { return ___removedFromLocalViewList_20; }
	inline bool* get_address_of_removedFromLocalViewList_20() { return &___removedFromLocalViewList_20; }
	inline void set_removedFromLocalViewList_20(bool value)
	{
		___removedFromLocalViewList_20 = value;
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_21() { return static_cast<int32_t>(offsetof(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B, ___RpcMonoBehaviours_21)); }
	inline MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A* get_RpcMonoBehaviours_21() const { return ___RpcMonoBehaviours_21; }
	inline MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A** get_address_of_RpcMonoBehaviours_21() { return &___RpcMonoBehaviours_21; }
	inline void set_RpcMonoBehaviours_21(MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A* value)
	{
		___RpcMonoBehaviours_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcMonoBehaviours_21), (void*)value);
	}
};


// Photon.Realtime.ConnectionHandler
struct  ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___U3CClientU3Ek__BackingField_4;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_5;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::startedAckingTimestamp
	int32_t ___startedAckingTimestamp_7;
	// System.Int32 Photon.Realtime.ConnectionHandler::deltaSinceStartedToAck
	int32_t ___deltaSinceStartedToAck_8;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_9;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_11;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___U3CClientU3Ek__BackingField_4)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_U3CClientU3Ek__BackingField_4() const { return ___U3CClientU3Ek__BackingField_4; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_U3CClientU3Ek__BackingField_4() { return &___U3CClientU3Ek__BackingField_4; }
	inline void set_U3CClientU3Ek__BackingField_4(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___U3CClientU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackThreadId_5() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___fallbackThreadId_5)); }
	inline uint8_t get_fallbackThreadId_5() const { return ___fallbackThreadId_5; }
	inline uint8_t* get_address_of_fallbackThreadId_5() { return &___fallbackThreadId_5; }
	inline void set_fallbackThreadId_5(uint8_t value)
	{
		___fallbackThreadId_5 = value;
	}

	inline static int32_t get_offset_of_didSendAcks_6() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___didSendAcks_6)); }
	inline bool get_didSendAcks_6() const { return ___didSendAcks_6; }
	inline bool* get_address_of_didSendAcks_6() { return &___didSendAcks_6; }
	inline void set_didSendAcks_6(bool value)
	{
		___didSendAcks_6 = value;
	}

	inline static int32_t get_offset_of_startedAckingTimestamp_7() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___startedAckingTimestamp_7)); }
	inline int32_t get_startedAckingTimestamp_7() const { return ___startedAckingTimestamp_7; }
	inline int32_t* get_address_of_startedAckingTimestamp_7() { return &___startedAckingTimestamp_7; }
	inline void set_startedAckingTimestamp_7(int32_t value)
	{
		___startedAckingTimestamp_7 = value;
	}

	inline static int32_t get_offset_of_deltaSinceStartedToAck_8() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___deltaSinceStartedToAck_8)); }
	inline int32_t get_deltaSinceStartedToAck_8() const { return ___deltaSinceStartedToAck_8; }
	inline int32_t* get_address_of_deltaSinceStartedToAck_8() { return &___deltaSinceStartedToAck_8; }
	inline void set_deltaSinceStartedToAck_8(int32_t value)
	{
		___deltaSinceStartedToAck_8 = value;
	}

	inline static int32_t get_offset_of_KeepAliveInBackground_9() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___KeepAliveInBackground_9)); }
	inline int32_t get_KeepAliveInBackground_9() const { return ___KeepAliveInBackground_9; }
	inline int32_t* get_address_of_KeepAliveInBackground_9() { return &___KeepAliveInBackground_9; }
	inline void set_KeepAliveInBackground_9(int32_t value)
	{
		___KeepAliveInBackground_9 = value;
	}

	inline static int32_t get_offset_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___U3CCountSendAcksOnlyU3Ek__BackingField_10)); }
	inline int32_t get_U3CCountSendAcksOnlyU3Ek__BackingField_10() const { return ___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return &___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline void set_U3CCountSendAcksOnlyU3Ek__BackingField_10(int32_t value)
	{
		___U3CCountSendAcksOnlyU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_ApplyDontDestroyOnLoad_11() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___ApplyDontDestroyOnLoad_11)); }
	inline bool get_ApplyDontDestroyOnLoad_11() const { return ___ApplyDontDestroyOnLoad_11; }
	inline bool* get_address_of_ApplyDontDestroyOnLoad_11() { return &___ApplyDontDestroyOnLoad_11; }
	inline void set_ApplyDontDestroyOnLoad_11(bool value)
	{
		___ApplyDontDestroyOnLoad_11 = value;
	}
};

struct ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_StaticFields
{
public:
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_12;

public:
	inline static int32_t get_offset_of_AppQuits_12() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_StaticFields, ___AppQuits_12)); }
	inline bool get_AppQuits_12() const { return ___AppQuits_12; }
	inline bool* get_address_of_AppQuits_12() { return &___AppQuits_12; }
	inline void set_AppQuits_12(bool value)
	{
		___AppQuits_12 = value;
	}
};


// Photon.Voice.Unity.VoiceComponent
struct  VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponent::logger
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * ___logger_4;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceComponent::logLevel
	uint8_t ___logLevel_5;

public:
	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D, ___logger_4)); }
	inline VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * get_logger_4() const { return ___logger_4; }
	inline VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B ** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_5() { return static_cast<int32_t>(offsetof(VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D, ___logLevel_5)); }
	inline uint8_t get_logLevel_5() const { return ___logLevel_5; }
	inline uint8_t* get_address_of_logLevel_5() { return &___logLevel_5; }
	inline void set_logLevel_5(uint8_t value)
	{
		___logLevel_5 = value;
	}
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// Photon.Voice.PUN.PhotonVoiceView
struct  PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073  : public VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D
{
public:
	// Photon.Pun.PhotonView Photon.Voice.PUN.PhotonVoiceView::photonView
	PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * ___photonView_6;
	// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::recorderInUse
	Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * ___recorderInUse_7;
	// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::speakerInUse
	Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * ___speakerInUse_8;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::onEnableCalledOnce
	bool ___onEnableCalledOnce_9;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::AutoCreateRecorderIfNotFound
	bool ___AutoCreateRecorderIfNotFound_10;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::UsePrimaryRecorder
	bool ___UsePrimaryRecorder_11;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupDebugSpeaker
	bool ___SetupDebugSpeaker_12;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::<IsSpeaker>k__BackingField
	bool ___U3CIsSpeakerU3Ek__BackingField_13;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceView::<IsRecorder>k__BackingField
	bool ___U3CIsRecorderU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_photonView_6() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073, ___photonView_6)); }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * get_photonView_6() const { return ___photonView_6; }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B ** get_address_of_photonView_6() { return &___photonView_6; }
	inline void set_photonView_6(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * value)
	{
		___photonView_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonView_6), (void*)value);
	}

	inline static int32_t get_offset_of_recorderInUse_7() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073, ___recorderInUse_7)); }
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * get_recorderInUse_7() const { return ___recorderInUse_7; }
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 ** get_address_of_recorderInUse_7() { return &___recorderInUse_7; }
	inline void set_recorderInUse_7(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * value)
	{
		___recorderInUse_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorderInUse_7), (void*)value);
	}

	inline static int32_t get_offset_of_speakerInUse_8() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073, ___speakerInUse_8)); }
	inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * get_speakerInUse_8() const { return ___speakerInUse_8; }
	inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 ** get_address_of_speakerInUse_8() { return &___speakerInUse_8; }
	inline void set_speakerInUse_8(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * value)
	{
		___speakerInUse_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speakerInUse_8), (void*)value);
	}

	inline static int32_t get_offset_of_onEnableCalledOnce_9() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073, ___onEnableCalledOnce_9)); }
	inline bool get_onEnableCalledOnce_9() const { return ___onEnableCalledOnce_9; }
	inline bool* get_address_of_onEnableCalledOnce_9() { return &___onEnableCalledOnce_9; }
	inline void set_onEnableCalledOnce_9(bool value)
	{
		___onEnableCalledOnce_9 = value;
	}

	inline static int32_t get_offset_of_AutoCreateRecorderIfNotFound_10() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073, ___AutoCreateRecorderIfNotFound_10)); }
	inline bool get_AutoCreateRecorderIfNotFound_10() const { return ___AutoCreateRecorderIfNotFound_10; }
	inline bool* get_address_of_AutoCreateRecorderIfNotFound_10() { return &___AutoCreateRecorderIfNotFound_10; }
	inline void set_AutoCreateRecorderIfNotFound_10(bool value)
	{
		___AutoCreateRecorderIfNotFound_10 = value;
	}

	inline static int32_t get_offset_of_UsePrimaryRecorder_11() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073, ___UsePrimaryRecorder_11)); }
	inline bool get_UsePrimaryRecorder_11() const { return ___UsePrimaryRecorder_11; }
	inline bool* get_address_of_UsePrimaryRecorder_11() { return &___UsePrimaryRecorder_11; }
	inline void set_UsePrimaryRecorder_11(bool value)
	{
		___UsePrimaryRecorder_11 = value;
	}

	inline static int32_t get_offset_of_SetupDebugSpeaker_12() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073, ___SetupDebugSpeaker_12)); }
	inline bool get_SetupDebugSpeaker_12() const { return ___SetupDebugSpeaker_12; }
	inline bool* get_address_of_SetupDebugSpeaker_12() { return &___SetupDebugSpeaker_12; }
	inline void set_SetupDebugSpeaker_12(bool value)
	{
		___SetupDebugSpeaker_12 = value;
	}

	inline static int32_t get_offset_of_U3CIsSpeakerU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073, ___U3CIsSpeakerU3Ek__BackingField_13)); }
	inline bool get_U3CIsSpeakerU3Ek__BackingField_13() const { return ___U3CIsSpeakerU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsSpeakerU3Ek__BackingField_13() { return &___U3CIsSpeakerU3Ek__BackingField_13; }
	inline void set_U3CIsSpeakerU3Ek__BackingField_13(bool value)
	{
		___U3CIsSpeakerU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsRecorderU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073, ___U3CIsRecorderU3Ek__BackingField_14)); }
	inline bool get_U3CIsRecorderU3Ek__BackingField_14() const { return ___U3CIsRecorderU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsRecorderU3Ek__BackingField_14() { return &___U3CIsRecorderU3Ek__BackingField_14; }
	inline void set_U3CIsRecorderU3Ek__BackingField_14(bool value)
	{
		___U3CIsRecorderU3Ek__BackingField_14 = value;
	}
};


// Photon.Voice.Unity.Recorder
struct  Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2  : public VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D
{
public:
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_6;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_7;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_8;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject * ___userData_9;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * ___voice_10;
	// System.String Photon.Voice.Unity.Recorder::unityMicrophoneDevice
	String_t* ___unityMicrophoneDevice_11;
	// System.Int32 Photon.Voice.Unity.Recorder::photonMicrophoneDeviceId
	int32_t ___photonMicrophoneDeviceId_12;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_13;
	// Photon.Voice.VoiceClient Photon.Voice.Unity.Recorder::client
	VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * ___client_14;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_15;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_16;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_17;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_18;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_19;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_20;
	// Photon.Voice.OpusCodec_FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_21;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_22;
	// Photon.Voice.Unity.Recorder_InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_23;
	// Photon.Voice.Unity.Recorder_MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_24;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___audioClip_25;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_26;
	// System.Boolean Photon.Voice.Unity.Recorder::isRecording
	bool ___isRecording_27;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t3FCE145AF9BA644CB9338C4194BD1B4BD0052AB1 * ___inputFactory_28;
	// Photon.Voice.AudioInChangeNotifier Photon.Voice.Unity.Recorder::photonMicChangeNotifier
	AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF * ___photonMicChangeNotifier_30;
	// System.Boolean Photon.Voice.Unity.Recorder::reactOnSystemChanges
	bool ___reactOnSystemChanges_31;
	// System.Boolean Photon.Voice.Unity.Recorder::subscribedToSystemChanges
	bool ___subscribedToSystemChanges_32;
	// System.Boolean Photon.Voice.Unity.Recorder::autoStart
	bool ___autoStart_33;
	// System.Boolean Photon.Voice.Unity.Recorder::recordOnlyWhenEnabled
	bool ___recordOnlyWhenEnabled_34;
	// System.Boolean Photon.Voice.Unity.Recorder::skipDeviceChangeChecks
	bool ___skipDeviceChangeChecks_35;
	// System.Boolean Photon.Voice.Unity.Recorder::wasRecordingBeforePause
	bool ___wasRecordingBeforePause_36;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_37;
	// System.Boolean Photon.Voice.Unity.Recorder::<RequiresRestart>k__BackingField
	bool ___U3CRequiresRestartU3Ek__BackingField_38;
	// Photon.Voice.Unity.Recorder_SampleTypeConv Photon.Voice.Unity.Recorder::<TypeConvert>k__BackingField
	int32_t ___U3CTypeConvertU3Ek__BackingField_39;

public:
	inline static int32_t get_offset_of_voiceDetection_6() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___voiceDetection_6)); }
	inline bool get_voiceDetection_6() const { return ___voiceDetection_6; }
	inline bool* get_address_of_voiceDetection_6() { return &___voiceDetection_6; }
	inline void set_voiceDetection_6(bool value)
	{
		___voiceDetection_6 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionThreshold_7() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___voiceDetectionThreshold_7)); }
	inline float get_voiceDetectionThreshold_7() const { return ___voiceDetectionThreshold_7; }
	inline float* get_address_of_voiceDetectionThreshold_7() { return &___voiceDetectionThreshold_7; }
	inline void set_voiceDetectionThreshold_7(float value)
	{
		___voiceDetectionThreshold_7 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionDelayMs_8() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___voiceDetectionDelayMs_8)); }
	inline int32_t get_voiceDetectionDelayMs_8() const { return ___voiceDetectionDelayMs_8; }
	inline int32_t* get_address_of_voiceDetectionDelayMs_8() { return &___voiceDetectionDelayMs_8; }
	inline void set_voiceDetectionDelayMs_8(int32_t value)
	{
		___voiceDetectionDelayMs_8 = value;
	}

	inline static int32_t get_offset_of_userData_9() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___userData_9)); }
	inline RuntimeObject * get_userData_9() const { return ___userData_9; }
	inline RuntimeObject ** get_address_of_userData_9() { return &___userData_9; }
	inline void set_userData_9(RuntimeObject * value)
	{
		___userData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_9), (void*)value);
	}

	inline static int32_t get_offset_of_voice_10() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___voice_10)); }
	inline LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * get_voice_10() const { return ___voice_10; }
	inline LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 ** get_address_of_voice_10() { return &___voice_10; }
	inline void set_voice_10(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * value)
	{
		___voice_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voice_10), (void*)value);
	}

	inline static int32_t get_offset_of_unityMicrophoneDevice_11() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___unityMicrophoneDevice_11)); }
	inline String_t* get_unityMicrophoneDevice_11() const { return ___unityMicrophoneDevice_11; }
	inline String_t** get_address_of_unityMicrophoneDevice_11() { return &___unityMicrophoneDevice_11; }
	inline void set_unityMicrophoneDevice_11(String_t* value)
	{
		___unityMicrophoneDevice_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityMicrophoneDevice_11), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicrophoneDeviceId_12() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___photonMicrophoneDeviceId_12)); }
	inline int32_t get_photonMicrophoneDeviceId_12() const { return ___photonMicrophoneDeviceId_12; }
	inline int32_t* get_address_of_photonMicrophoneDeviceId_12() { return &___photonMicrophoneDeviceId_12; }
	inline void set_photonMicrophoneDeviceId_12(int32_t value)
	{
		___photonMicrophoneDeviceId_12 = value;
	}

	inline static int32_t get_offset_of_inputSource_13() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___inputSource_13)); }
	inline RuntimeObject* get_inputSource_13() const { return ___inputSource_13; }
	inline RuntimeObject** get_address_of_inputSource_13() { return &___inputSource_13; }
	inline void set_inputSource_13(RuntimeObject* value)
	{
		___inputSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_13), (void*)value);
	}

	inline static int32_t get_offset_of_client_14() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___client_14)); }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * get_client_14() const { return ___client_14; }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 ** get_address_of_client_14() { return &___client_14; }
	inline void set_client_14(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * value)
	{
		___client_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_14), (void*)value);
	}

	inline static int32_t get_offset_of_interestGroup_15() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___interestGroup_15)); }
	inline uint8_t get_interestGroup_15() const { return ___interestGroup_15; }
	inline uint8_t* get_address_of_interestGroup_15() { return &___interestGroup_15; }
	inline void set_interestGroup_15(uint8_t value)
	{
		___interestGroup_15 = value;
	}

	inline static int32_t get_offset_of_debugEchoMode_16() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___debugEchoMode_16)); }
	inline bool get_debugEchoMode_16() const { return ___debugEchoMode_16; }
	inline bool* get_address_of_debugEchoMode_16() { return &___debugEchoMode_16; }
	inline void set_debugEchoMode_16(bool value)
	{
		___debugEchoMode_16 = value;
	}

	inline static int32_t get_offset_of_reliableMode_17() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___reliableMode_17)); }
	inline bool get_reliableMode_17() const { return ___reliableMode_17; }
	inline bool* get_address_of_reliableMode_17() { return &___reliableMode_17; }
	inline void set_reliableMode_17(bool value)
	{
		___reliableMode_17 = value;
	}

	inline static int32_t get_offset_of_encrypt_18() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___encrypt_18)); }
	inline bool get_encrypt_18() const { return ___encrypt_18; }
	inline bool* get_address_of_encrypt_18() { return &___encrypt_18; }
	inline void set_encrypt_18(bool value)
	{
		___encrypt_18 = value;
	}

	inline static int32_t get_offset_of_transmitEnabled_19() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___transmitEnabled_19)); }
	inline bool get_transmitEnabled_19() const { return ___transmitEnabled_19; }
	inline bool* get_address_of_transmitEnabled_19() { return &___transmitEnabled_19; }
	inline void set_transmitEnabled_19(bool value)
	{
		___transmitEnabled_19 = value;
	}

	inline static int32_t get_offset_of_samplingRate_20() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___samplingRate_20)); }
	inline int32_t get_samplingRate_20() const { return ___samplingRate_20; }
	inline int32_t* get_address_of_samplingRate_20() { return &___samplingRate_20; }
	inline void set_samplingRate_20(int32_t value)
	{
		___samplingRate_20 = value;
	}

	inline static int32_t get_offset_of_frameDuration_21() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___frameDuration_21)); }
	inline int32_t get_frameDuration_21() const { return ___frameDuration_21; }
	inline int32_t* get_address_of_frameDuration_21() { return &___frameDuration_21; }
	inline void set_frameDuration_21(int32_t value)
	{
		___frameDuration_21 = value;
	}

	inline static int32_t get_offset_of_bitrate_22() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___bitrate_22)); }
	inline int32_t get_bitrate_22() const { return ___bitrate_22; }
	inline int32_t* get_address_of_bitrate_22() { return &___bitrate_22; }
	inline void set_bitrate_22(int32_t value)
	{
		___bitrate_22 = value;
	}

	inline static int32_t get_offset_of_sourceType_23() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___sourceType_23)); }
	inline int32_t get_sourceType_23() const { return ___sourceType_23; }
	inline int32_t* get_address_of_sourceType_23() { return &___sourceType_23; }
	inline void set_sourceType_23(int32_t value)
	{
		___sourceType_23 = value;
	}

	inline static int32_t get_offset_of_microphoneType_24() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___microphoneType_24)); }
	inline int32_t get_microphoneType_24() const { return ___microphoneType_24; }
	inline int32_t* get_address_of_microphoneType_24() { return &___microphoneType_24; }
	inline void set_microphoneType_24(int32_t value)
	{
		___microphoneType_24 = value;
	}

	inline static int32_t get_offset_of_audioClip_25() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___audioClip_25)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_audioClip_25() const { return ___audioClip_25; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_audioClip_25() { return &___audioClip_25; }
	inline void set_audioClip_25(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___audioClip_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClip_25), (void*)value);
	}

	inline static int32_t get_offset_of_loopAudioClip_26() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___loopAudioClip_26)); }
	inline bool get_loopAudioClip_26() const { return ___loopAudioClip_26; }
	inline bool* get_address_of_loopAudioClip_26() { return &___loopAudioClip_26; }
	inline void set_loopAudioClip_26(bool value)
	{
		___loopAudioClip_26 = value;
	}

	inline static int32_t get_offset_of_isRecording_27() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___isRecording_27)); }
	inline bool get_isRecording_27() const { return ___isRecording_27; }
	inline bool* get_address_of_isRecording_27() { return &___isRecording_27; }
	inline void set_isRecording_27(bool value)
	{
		___isRecording_27 = value;
	}

	inline static int32_t get_offset_of_inputFactory_28() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___inputFactory_28)); }
	inline Func_1_t3FCE145AF9BA644CB9338C4194BD1B4BD0052AB1 * get_inputFactory_28() const { return ___inputFactory_28; }
	inline Func_1_t3FCE145AF9BA644CB9338C4194BD1B4BD0052AB1 ** get_address_of_inputFactory_28() { return &___inputFactory_28; }
	inline void set_inputFactory_28(Func_1_t3FCE145AF9BA644CB9338C4194BD1B4BD0052AB1 * value)
	{
		___inputFactory_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputFactory_28), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicChangeNotifier_30() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___photonMicChangeNotifier_30)); }
	inline AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF * get_photonMicChangeNotifier_30() const { return ___photonMicChangeNotifier_30; }
	inline AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF ** get_address_of_photonMicChangeNotifier_30() { return &___photonMicChangeNotifier_30; }
	inline void set_photonMicChangeNotifier_30(AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF * value)
	{
		___photonMicChangeNotifier_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicChangeNotifier_30), (void*)value);
	}

	inline static int32_t get_offset_of_reactOnSystemChanges_31() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___reactOnSystemChanges_31)); }
	inline bool get_reactOnSystemChanges_31() const { return ___reactOnSystemChanges_31; }
	inline bool* get_address_of_reactOnSystemChanges_31() { return &___reactOnSystemChanges_31; }
	inline void set_reactOnSystemChanges_31(bool value)
	{
		___reactOnSystemChanges_31 = value;
	}

	inline static int32_t get_offset_of_subscribedToSystemChanges_32() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___subscribedToSystemChanges_32)); }
	inline bool get_subscribedToSystemChanges_32() const { return ___subscribedToSystemChanges_32; }
	inline bool* get_address_of_subscribedToSystemChanges_32() { return &___subscribedToSystemChanges_32; }
	inline void set_subscribedToSystemChanges_32(bool value)
	{
		___subscribedToSystemChanges_32 = value;
	}

	inline static int32_t get_offset_of_autoStart_33() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___autoStart_33)); }
	inline bool get_autoStart_33() const { return ___autoStart_33; }
	inline bool* get_address_of_autoStart_33() { return &___autoStart_33; }
	inline void set_autoStart_33(bool value)
	{
		___autoStart_33 = value;
	}

	inline static int32_t get_offset_of_recordOnlyWhenEnabled_34() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___recordOnlyWhenEnabled_34)); }
	inline bool get_recordOnlyWhenEnabled_34() const { return ___recordOnlyWhenEnabled_34; }
	inline bool* get_address_of_recordOnlyWhenEnabled_34() { return &___recordOnlyWhenEnabled_34; }
	inline void set_recordOnlyWhenEnabled_34(bool value)
	{
		___recordOnlyWhenEnabled_34 = value;
	}

	inline static int32_t get_offset_of_skipDeviceChangeChecks_35() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___skipDeviceChangeChecks_35)); }
	inline bool get_skipDeviceChangeChecks_35() const { return ___skipDeviceChangeChecks_35; }
	inline bool* get_address_of_skipDeviceChangeChecks_35() { return &___skipDeviceChangeChecks_35; }
	inline void set_skipDeviceChangeChecks_35(bool value)
	{
		___skipDeviceChangeChecks_35 = value;
	}

	inline static int32_t get_offset_of_wasRecordingBeforePause_36() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___wasRecordingBeforePause_36)); }
	inline bool get_wasRecordingBeforePause_36() const { return ___wasRecordingBeforePause_36; }
	inline bool* get_address_of_wasRecordingBeforePause_36() { return &___wasRecordingBeforePause_36; }
	inline void set_wasRecordingBeforePause_36(bool value)
	{
		___wasRecordingBeforePause_36 = value;
	}

	inline static int32_t get_offset_of_stopRecordingWhenPaused_37() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___stopRecordingWhenPaused_37)); }
	inline bool get_stopRecordingWhenPaused_37() const { return ___stopRecordingWhenPaused_37; }
	inline bool* get_address_of_stopRecordingWhenPaused_37() { return &___stopRecordingWhenPaused_37; }
	inline void set_stopRecordingWhenPaused_37(bool value)
	{
		___stopRecordingWhenPaused_37 = value;
	}

	inline static int32_t get_offset_of_U3CRequiresRestartU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___U3CRequiresRestartU3Ek__BackingField_38)); }
	inline bool get_U3CRequiresRestartU3Ek__BackingField_38() const { return ___U3CRequiresRestartU3Ek__BackingField_38; }
	inline bool* get_address_of_U3CRequiresRestartU3Ek__BackingField_38() { return &___U3CRequiresRestartU3Ek__BackingField_38; }
	inline void set_U3CRequiresRestartU3Ek__BackingField_38(bool value)
	{
		___U3CRequiresRestartU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CTypeConvertU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___U3CTypeConvertU3Ek__BackingField_39)); }
	inline int32_t get_U3CTypeConvertU3Ek__BackingField_39() const { return ___U3CTypeConvertU3Ek__BackingField_39; }
	inline int32_t* get_address_of_U3CTypeConvertU3Ek__BackingField_39() { return &___U3CTypeConvertU3Ek__BackingField_39; }
	inline void set_U3CTypeConvertU3Ek__BackingField_39(int32_t value)
	{
		___U3CTypeConvertU3Ek__BackingField_39 = value;
	}
};

struct Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_StaticFields
{
public:
	// Photon.Voice.AudioInEnumerator Photon.Voice.Unity.Recorder::photonMicrophoneEnumerator
	AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5 * ___photonMicrophoneEnumerator_29;

public:
	inline static int32_t get_offset_of_photonMicrophoneEnumerator_29() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_StaticFields, ___photonMicrophoneEnumerator_29)); }
	inline AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5 * get_photonMicrophoneEnumerator_29() const { return ___photonMicrophoneEnumerator_29; }
	inline AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5 ** get_address_of_photonMicrophoneEnumerator_29() { return &___photonMicrophoneEnumerator_29; }
	inline void set_photonMicrophoneEnumerator_29(AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5 * value)
	{
		___photonMicrophoneEnumerator_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicrophoneEnumerator_29), (void*)value);
	}
};


// Photon.Voice.Unity.Speaker
struct  Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00  : public VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D
{
public:
	// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker::audioOutput
	RuntimeObject* ___audioOutput_6;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::remoteVoiceLink
	RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * ___remoteVoiceLink_7;
	// System.Boolean Photon.Voice.Unity.Speaker::initialized
	bool ___initialized_8;
	// System.Boolean Photon.Voice.Unity.Speaker::playbackOnlyWhenEnabled
	bool ___playbackOnlyWhenEnabled_9;
	// System.Boolean Photon.Voice.Unity.Speaker::useSeparateCoroutine
	bool ___useSeparateCoroutine_10;
	// UnityEngine.Coroutine Photon.Voice.Unity.Speaker::playbackCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___playbackCoroutine_11;
	// System.Int32 Photon.Voice.Unity.Speaker::PlayDelayMs
	int32_t ___PlayDelayMs_12;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.Speaker::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_1_t00F3470888C13838BFB255D624661D152DA0DAF7 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13;
	// Photon.Realtime.Player Photon.Voice.Unity.Speaker::<Actor>k__BackingField
	Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___U3CActorU3Ek__BackingField_14;
	// System.Boolean Photon.Voice.Unity.Speaker::<PlaybackStarted>k__BackingField
	bool ___U3CPlaybackStartedU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_audioOutput_6() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___audioOutput_6)); }
	inline RuntimeObject* get_audioOutput_6() const { return ___audioOutput_6; }
	inline RuntimeObject** get_address_of_audioOutput_6() { return &___audioOutput_6; }
	inline void set_audioOutput_6(RuntimeObject* value)
	{
		___audioOutput_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioOutput_6), (void*)value);
	}

	inline static int32_t get_offset_of_remoteVoiceLink_7() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___remoteVoiceLink_7)); }
	inline RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * get_remoteVoiceLink_7() const { return ___remoteVoiceLink_7; }
	inline RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD ** get_address_of_remoteVoiceLink_7() { return &___remoteVoiceLink_7; }
	inline void set_remoteVoiceLink_7(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * value)
	{
		___remoteVoiceLink_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoiceLink_7), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_8() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___initialized_8)); }
	inline bool get_initialized_8() const { return ___initialized_8; }
	inline bool* get_address_of_initialized_8() { return &___initialized_8; }
	inline void set_initialized_8(bool value)
	{
		___initialized_8 = value;
	}

	inline static int32_t get_offset_of_playbackOnlyWhenEnabled_9() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___playbackOnlyWhenEnabled_9)); }
	inline bool get_playbackOnlyWhenEnabled_9() const { return ___playbackOnlyWhenEnabled_9; }
	inline bool* get_address_of_playbackOnlyWhenEnabled_9() { return &___playbackOnlyWhenEnabled_9; }
	inline void set_playbackOnlyWhenEnabled_9(bool value)
	{
		___playbackOnlyWhenEnabled_9 = value;
	}

	inline static int32_t get_offset_of_useSeparateCoroutine_10() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___useSeparateCoroutine_10)); }
	inline bool get_useSeparateCoroutine_10() const { return ___useSeparateCoroutine_10; }
	inline bool* get_address_of_useSeparateCoroutine_10() { return &___useSeparateCoroutine_10; }
	inline void set_useSeparateCoroutine_10(bool value)
	{
		___useSeparateCoroutine_10 = value;
	}

	inline static int32_t get_offset_of_playbackCoroutine_11() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___playbackCoroutine_11)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_playbackCoroutine_11() const { return ___playbackCoroutine_11; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_playbackCoroutine_11() { return &___playbackCoroutine_11; }
	inline void set_playbackCoroutine_11(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___playbackCoroutine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playbackCoroutine_11), (void*)value);
	}

	inline static int32_t get_offset_of_PlayDelayMs_12() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___PlayDelayMs_12)); }
	inline int32_t get_PlayDelayMs_12() const { return ___PlayDelayMs_12; }
	inline int32_t* get_address_of_PlayDelayMs_12() { return &___PlayDelayMs_12; }
	inline void set_PlayDelayMs_12(int32_t value)
	{
		___PlayDelayMs_12 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13)); }
	inline Action_1_t00F3470888C13838BFB255D624661D152DA0DAF7 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13; }
	inline Action_1_t00F3470888C13838BFB255D624661D152DA0DAF7 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13(Action_1_t00F3470888C13838BFB255D624661D152DA0DAF7 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActorU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___U3CActorU3Ek__BackingField_14)); }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * get_U3CActorU3Ek__BackingField_14() const { return ___U3CActorU3Ek__BackingField_14; }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 ** get_address_of_U3CActorU3Ek__BackingField_14() { return &___U3CActorU3Ek__BackingField_14; }
	inline void set_U3CActorU3Ek__BackingField_14(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * value)
	{
		___U3CActorU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActorU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlaybackStartedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___U3CPlaybackStartedU3Ek__BackingField_15)); }
	inline bool get_U3CPlaybackStartedU3Ek__BackingField_15() const { return ___U3CPlaybackStartedU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CPlaybackStartedU3Ek__BackingField_15() { return &___U3CPlaybackStartedU3Ek__BackingField_15; }
	inline void set_U3CPlaybackStartedU3Ek__BackingField_15(bool value)
	{
		___U3CPlaybackStartedU3Ek__BackingField_15 = value;
	}
};


// Photon.Voice.Unity.VoiceConnection
struct  VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421  : public ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0
{
public:
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceConnection::logger
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * ___logger_13;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::logLevel
	uint8_t ___logLevel_14;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * ___client_16;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::enableSupportLogger
	bool ___enableSupportLogger_17;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * ___supportLoggerComponent_18;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::updateInterval
	int32_t ___updateInterval_19;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextSendTickCount
	int32_t ___nextSendTickCount_20;
	// Photon.Realtime.RegionHandler Photon.Voice.Unity.VoiceConnection::cachedRegionHandler
	RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___cachedRegionHandler_21;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::runInBackground
	bool ___runInBackground_22;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_23;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_24;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_25;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_26;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_27;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___speakerPrefab_28;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::cleanedUp
	bool ___cleanedUp_29;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 * ___cachedRemoteVoices_30;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * ___primaryRecorder_31;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::primaryRecorderInitialized
	bool ___primaryRecorderInitialized_32;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * ___Settings_33;
	// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerFactory
	Func_4_tEF305166C6FB281C7E7CB286979ECE7182F073CD * ___SpeakerFactory_34;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_t00F3470888C13838BFB255D624661D152DA0DAF7 * ___SpeakerLinked_35;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_t77792EF62E1B24D9666BCB178534B67CA61B5310 * ___RemoteVoiceAdded_36;
	// System.Single Photon.Voice.Unity.VoiceConnection::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_37;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_38;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_39;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_40;

public:
	inline static int32_t get_offset_of_logger_13() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___logger_13)); }
	inline VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * get_logger_13() const { return ___logger_13; }
	inline VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B ** get_address_of_logger_13() { return &___logger_13; }
	inline void set_logger_13(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * value)
	{
		___logger_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_13), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_14() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___logLevel_14)); }
	inline uint8_t get_logLevel_14() const { return ___logLevel_14; }
	inline uint8_t* get_address_of_logLevel_14() { return &___logLevel_14; }
	inline void set_logLevel_14(uint8_t value)
	{
		___logLevel_14 = value;
	}

	inline static int32_t get_offset_of_client_16() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___client_16)); }
	inline LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * get_client_16() const { return ___client_16; }
	inline LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 ** get_address_of_client_16() { return &___client_16; }
	inline void set_client_16(LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * value)
	{
		___client_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_16), (void*)value);
	}

	inline static int32_t get_offset_of_enableSupportLogger_17() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___enableSupportLogger_17)); }
	inline bool get_enableSupportLogger_17() const { return ___enableSupportLogger_17; }
	inline bool* get_address_of_enableSupportLogger_17() { return &___enableSupportLogger_17; }
	inline void set_enableSupportLogger_17(bool value)
	{
		___enableSupportLogger_17 = value;
	}

	inline static int32_t get_offset_of_supportLoggerComponent_18() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___supportLoggerComponent_18)); }
	inline SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * get_supportLoggerComponent_18() const { return ___supportLoggerComponent_18; }
	inline SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA ** get_address_of_supportLoggerComponent_18() { return &___supportLoggerComponent_18; }
	inline void set_supportLoggerComponent_18(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * value)
	{
		___supportLoggerComponent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportLoggerComponent_18), (void*)value);
	}

	inline static int32_t get_offset_of_updateInterval_19() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___updateInterval_19)); }
	inline int32_t get_updateInterval_19() const { return ___updateInterval_19; }
	inline int32_t* get_address_of_updateInterval_19() { return &___updateInterval_19; }
	inline void set_updateInterval_19(int32_t value)
	{
		___updateInterval_19 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCount_20() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___nextSendTickCount_20)); }
	inline int32_t get_nextSendTickCount_20() const { return ___nextSendTickCount_20; }
	inline int32_t* get_address_of_nextSendTickCount_20() { return &___nextSendTickCount_20; }
	inline void set_nextSendTickCount_20(int32_t value)
	{
		___nextSendTickCount_20 = value;
	}

	inline static int32_t get_offset_of_cachedRegionHandler_21() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___cachedRegionHandler_21)); }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * get_cachedRegionHandler_21() const { return ___cachedRegionHandler_21; }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF ** get_address_of_cachedRegionHandler_21() { return &___cachedRegionHandler_21; }
	inline void set_cachedRegionHandler_21(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * value)
	{
		___cachedRegionHandler_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedRegionHandler_21), (void*)value);
	}

	inline static int32_t get_offset_of_runInBackground_22() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___runInBackground_22)); }
	inline bool get_runInBackground_22() const { return ___runInBackground_22; }
	inline bool* get_address_of_runInBackground_22() { return &___runInBackground_22; }
	inline void set_runInBackground_22(bool value)
	{
		___runInBackground_22 = value;
	}

	inline static int32_t get_offset_of_statsResetInterval_23() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___statsResetInterval_23)); }
	inline int32_t get_statsResetInterval_23() const { return ___statsResetInterval_23; }
	inline int32_t* get_address_of_statsResetInterval_23() { return &___statsResetInterval_23; }
	inline void set_statsResetInterval_23(int32_t value)
	{
		___statsResetInterval_23 = value;
	}

	inline static int32_t get_offset_of_nextStatsTickCount_24() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___nextStatsTickCount_24)); }
	inline int32_t get_nextStatsTickCount_24() const { return ___nextStatsTickCount_24; }
	inline int32_t* get_address_of_nextStatsTickCount_24() { return &___nextStatsTickCount_24; }
	inline void set_nextStatsTickCount_24(int32_t value)
	{
		___nextStatsTickCount_24 = value;
	}

	inline static int32_t get_offset_of_statsReferenceTime_25() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___statsReferenceTime_25)); }
	inline float get_statsReferenceTime_25() const { return ___statsReferenceTime_25; }
	inline float* get_address_of_statsReferenceTime_25() { return &___statsReferenceTime_25; }
	inline void set_statsReferenceTime_25(float value)
	{
		___statsReferenceTime_25 = value;
	}

	inline static int32_t get_offset_of_referenceFramesLost_26() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___referenceFramesLost_26)); }
	inline int32_t get_referenceFramesLost_26() const { return ___referenceFramesLost_26; }
	inline int32_t* get_address_of_referenceFramesLost_26() { return &___referenceFramesLost_26; }
	inline void set_referenceFramesLost_26(int32_t value)
	{
		___referenceFramesLost_26 = value;
	}

	inline static int32_t get_offset_of_referenceFramesReceived_27() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___referenceFramesReceived_27)); }
	inline int32_t get_referenceFramesReceived_27() const { return ___referenceFramesReceived_27; }
	inline int32_t* get_address_of_referenceFramesReceived_27() { return &___referenceFramesReceived_27; }
	inline void set_referenceFramesReceived_27(int32_t value)
	{
		___referenceFramesReceived_27 = value;
	}

	inline static int32_t get_offset_of_speakerPrefab_28() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___speakerPrefab_28)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_speakerPrefab_28() const { return ___speakerPrefab_28; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_speakerPrefab_28() { return &___speakerPrefab_28; }
	inline void set_speakerPrefab_28(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___speakerPrefab_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speakerPrefab_28), (void*)value);
	}

	inline static int32_t get_offset_of_cleanedUp_29() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___cleanedUp_29)); }
	inline bool get_cleanedUp_29() const { return ___cleanedUp_29; }
	inline bool* get_address_of_cleanedUp_29() { return &___cleanedUp_29; }
	inline void set_cleanedUp_29(bool value)
	{
		___cleanedUp_29 = value;
	}

	inline static int32_t get_offset_of_cachedRemoteVoices_30() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___cachedRemoteVoices_30)); }
	inline List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 * get_cachedRemoteVoices_30() const { return ___cachedRemoteVoices_30; }
	inline List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 ** get_address_of_cachedRemoteVoices_30() { return &___cachedRemoteVoices_30; }
	inline void set_cachedRemoteVoices_30(List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 * value)
	{
		___cachedRemoteVoices_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedRemoteVoices_30), (void*)value);
	}

	inline static int32_t get_offset_of_primaryRecorder_31() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___primaryRecorder_31)); }
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * get_primaryRecorder_31() const { return ___primaryRecorder_31; }
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 ** get_address_of_primaryRecorder_31() { return &___primaryRecorder_31; }
	inline void set_primaryRecorder_31(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * value)
	{
		___primaryRecorder_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryRecorder_31), (void*)value);
	}

	inline static int32_t get_offset_of_primaryRecorderInitialized_32() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___primaryRecorderInitialized_32)); }
	inline bool get_primaryRecorderInitialized_32() const { return ___primaryRecorderInitialized_32; }
	inline bool* get_address_of_primaryRecorderInitialized_32() { return &___primaryRecorderInitialized_32; }
	inline void set_primaryRecorderInitialized_32(bool value)
	{
		___primaryRecorderInitialized_32 = value;
	}

	inline static int32_t get_offset_of_Settings_33() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___Settings_33)); }
	inline AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * get_Settings_33() const { return ___Settings_33; }
	inline AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 ** get_address_of_Settings_33() { return &___Settings_33; }
	inline void set_Settings_33(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * value)
	{
		___Settings_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_33), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerFactory_34() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___SpeakerFactory_34)); }
	inline Func_4_tEF305166C6FB281C7E7CB286979ECE7182F073CD * get_SpeakerFactory_34() const { return ___SpeakerFactory_34; }
	inline Func_4_tEF305166C6FB281C7E7CB286979ECE7182F073CD ** get_address_of_SpeakerFactory_34() { return &___SpeakerFactory_34; }
	inline void set_SpeakerFactory_34(Func_4_tEF305166C6FB281C7E7CB286979ECE7182F073CD * value)
	{
		___SpeakerFactory_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerFactory_34), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerLinked_35() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___SpeakerLinked_35)); }
	inline Action_1_t00F3470888C13838BFB255D624661D152DA0DAF7 * get_SpeakerLinked_35() const { return ___SpeakerLinked_35; }
	inline Action_1_t00F3470888C13838BFB255D624661D152DA0DAF7 ** get_address_of_SpeakerLinked_35() { return &___SpeakerLinked_35; }
	inline void set_SpeakerLinked_35(Action_1_t00F3470888C13838BFB255D624661D152DA0DAF7 * value)
	{
		___SpeakerLinked_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerLinked_35), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteVoiceAdded_36() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___RemoteVoiceAdded_36)); }
	inline Action_1_t77792EF62E1B24D9666BCB178534B67CA61B5310 * get_RemoteVoiceAdded_36() const { return ___RemoteVoiceAdded_36; }
	inline Action_1_t77792EF62E1B24D9666BCB178534B67CA61B5310 ** get_address_of_RemoteVoiceAdded_36() { return &___RemoteVoiceAdded_36; }
	inline void set_RemoteVoiceAdded_36(Action_1_t77792EF62E1B24D9666BCB178534B67CA61B5310 * value)
	{
		___RemoteVoiceAdded_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteVoiceAdded_36), (void*)value);
	}

	inline static int32_t get_offset_of_MinimalTimeScaleToDispatchInFixedUpdate_37() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___MinimalTimeScaleToDispatchInFixedUpdate_37)); }
	inline float get_MinimalTimeScaleToDispatchInFixedUpdate_37() const { return ___MinimalTimeScaleToDispatchInFixedUpdate_37; }
	inline float* get_address_of_MinimalTimeScaleToDispatchInFixedUpdate_37() { return &___MinimalTimeScaleToDispatchInFixedUpdate_37; }
	inline void set_MinimalTimeScaleToDispatchInFixedUpdate_37(float value)
	{
		___MinimalTimeScaleToDispatchInFixedUpdate_37 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedPerSecondU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___U3CFramesReceivedPerSecondU3Ek__BackingField_38)); }
	inline float get_U3CFramesReceivedPerSecondU3Ek__BackingField_38() const { return ___U3CFramesReceivedPerSecondU3Ek__BackingField_38; }
	inline float* get_address_of_U3CFramesReceivedPerSecondU3Ek__BackingField_38() { return &___U3CFramesReceivedPerSecondU3Ek__BackingField_38; }
	inline void set_U3CFramesReceivedPerSecondU3Ek__BackingField_38(float value)
	{
		___U3CFramesReceivedPerSecondU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPerSecondU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___U3CFramesLostPerSecondU3Ek__BackingField_39)); }
	inline float get_U3CFramesLostPerSecondU3Ek__BackingField_39() const { return ___U3CFramesLostPerSecondU3Ek__BackingField_39; }
	inline float* get_address_of_U3CFramesLostPerSecondU3Ek__BackingField_39() { return &___U3CFramesLostPerSecondU3Ek__BackingField_39; }
	inline void set_U3CFramesLostPerSecondU3Ek__BackingField_39(float value)
	{
		___U3CFramesLostPerSecondU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPercentU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___U3CFramesLostPercentU3Ek__BackingField_40)); }
	inline float get_U3CFramesLostPercentU3Ek__BackingField_40() const { return ___U3CFramesLostPercentU3Ek__BackingField_40; }
	inline float* get_address_of_U3CFramesLostPercentU3Ek__BackingField_40() { return &___U3CFramesLostPercentU3Ek__BackingField_40; }
	inline void set_U3CFramesLostPercentU3Ek__BackingField_40(float value)
	{
		___U3CFramesLostPercentU3Ek__BackingField_40 = value;
	}
};


// Photon.Voice.PUN.PhotonVoiceNetwork
struct  PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4  : public VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421
{
public:
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::AutoConnectAndJoin
	bool ___AutoConnectAndJoin_42;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::AutoLeaveAndDisconnect
	bool ___AutoLeaveAndDisconnect_43;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::AutoCreateSpeakerIfNotFound
	bool ___AutoCreateSpeakerIfNotFound_44;
	// Photon.Realtime.EnterRoomParams Photon.Voice.PUN.PhotonVoiceNetwork::voiceRoomParams
	EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * ___voiceRoomParams_45;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::clientCalledConnectAndJoin
	bool ___clientCalledConnectAndJoin_46;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::clientCalledDisconnect
	bool ___clientCalledDisconnect_47;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::internalDisconnect
	bool ___internalDisconnect_48;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::usePunAppSettings
	bool ___usePunAppSettings_52;

public:
	inline static int32_t get_offset_of_AutoConnectAndJoin_42() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4, ___AutoConnectAndJoin_42)); }
	inline bool get_AutoConnectAndJoin_42() const { return ___AutoConnectAndJoin_42; }
	inline bool* get_address_of_AutoConnectAndJoin_42() { return &___AutoConnectAndJoin_42; }
	inline void set_AutoConnectAndJoin_42(bool value)
	{
		___AutoConnectAndJoin_42 = value;
	}

	inline static int32_t get_offset_of_AutoLeaveAndDisconnect_43() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4, ___AutoLeaveAndDisconnect_43)); }
	inline bool get_AutoLeaveAndDisconnect_43() const { return ___AutoLeaveAndDisconnect_43; }
	inline bool* get_address_of_AutoLeaveAndDisconnect_43() { return &___AutoLeaveAndDisconnect_43; }
	inline void set_AutoLeaveAndDisconnect_43(bool value)
	{
		___AutoLeaveAndDisconnect_43 = value;
	}

	inline static int32_t get_offset_of_AutoCreateSpeakerIfNotFound_44() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4, ___AutoCreateSpeakerIfNotFound_44)); }
	inline bool get_AutoCreateSpeakerIfNotFound_44() const { return ___AutoCreateSpeakerIfNotFound_44; }
	inline bool* get_address_of_AutoCreateSpeakerIfNotFound_44() { return &___AutoCreateSpeakerIfNotFound_44; }
	inline void set_AutoCreateSpeakerIfNotFound_44(bool value)
	{
		___AutoCreateSpeakerIfNotFound_44 = value;
	}

	inline static int32_t get_offset_of_voiceRoomParams_45() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4, ___voiceRoomParams_45)); }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * get_voiceRoomParams_45() const { return ___voiceRoomParams_45; }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 ** get_address_of_voiceRoomParams_45() { return &___voiceRoomParams_45; }
	inline void set_voiceRoomParams_45(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * value)
	{
		___voiceRoomParams_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceRoomParams_45), (void*)value);
	}

	inline static int32_t get_offset_of_clientCalledConnectAndJoin_46() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4, ___clientCalledConnectAndJoin_46)); }
	inline bool get_clientCalledConnectAndJoin_46() const { return ___clientCalledConnectAndJoin_46; }
	inline bool* get_address_of_clientCalledConnectAndJoin_46() { return &___clientCalledConnectAndJoin_46; }
	inline void set_clientCalledConnectAndJoin_46(bool value)
	{
		___clientCalledConnectAndJoin_46 = value;
	}

	inline static int32_t get_offset_of_clientCalledDisconnect_47() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4, ___clientCalledDisconnect_47)); }
	inline bool get_clientCalledDisconnect_47() const { return ___clientCalledDisconnect_47; }
	inline bool* get_address_of_clientCalledDisconnect_47() { return &___clientCalledDisconnect_47; }
	inline void set_clientCalledDisconnect_47(bool value)
	{
		___clientCalledDisconnect_47 = value;
	}

	inline static int32_t get_offset_of_internalDisconnect_48() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4, ___internalDisconnect_48)); }
	inline bool get_internalDisconnect_48() const { return ___internalDisconnect_48; }
	inline bool* get_address_of_internalDisconnect_48() { return &___internalDisconnect_48; }
	inline void set_internalDisconnect_48(bool value)
	{
		___internalDisconnect_48 = value;
	}

	inline static int32_t get_offset_of_usePunAppSettings_52() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4, ___usePunAppSettings_52)); }
	inline bool get_usePunAppSettings_52() const { return ___usePunAppSettings_52; }
	inline bool* get_address_of_usePunAppSettings_52() { return &___usePunAppSettings_52; }
	inline void set_usePunAppSettings_52(bool value)
	{
		___usePunAppSettings_52 = value;
	}
};

struct PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields
{
public:
	// System.Object Photon.Voice.PUN.PhotonVoiceNetwork::instanceLock
	RuntimeObject * ___instanceLock_49;
	// Photon.Voice.PUN.PhotonVoiceNetwork Photon.Voice.PUN.PhotonVoiceNetwork::instance
	PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * ___instance_50;
	// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::instantiated
	bool ___instantiated_51;

public:
	inline static int32_t get_offset_of_instanceLock_49() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields, ___instanceLock_49)); }
	inline RuntimeObject * get_instanceLock_49() const { return ___instanceLock_49; }
	inline RuntimeObject ** get_address_of_instanceLock_49() { return &___instanceLock_49; }
	inline void set_instanceLock_49(RuntimeObject * value)
	{
		___instanceLock_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceLock_49), (void*)value);
	}

	inline static int32_t get_offset_of_instance_50() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields, ___instance_50)); }
	inline PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * get_instance_50() const { return ___instance_50; }
	inline PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 ** get_address_of_instance_50() { return &___instance_50; }
	inline void set_instance_50(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * value)
	{
		___instance_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_50), (void*)value);
	}

	inline static int32_t get_offset_of_instantiated_51() { return static_cast<int32_t>(offsetof(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields, ___instantiated_51)); }
	inline bool get_instantiated_51() const { return ___instantiated_51; }
	inline bool* get_address_of_instantiated_51() { return &___instantiated_51; }
	inline void set_instantiated_51(bool value)
	{
		___instantiated_51 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Photon.Voice.PUN.PhotonVoiceNetwork[]
struct PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * m_Items[1];

public:
	inline PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.Unity.Recorder[]
struct RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * m_Items[1];

public:
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * m_Items[1];

public:
	inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m9221C80F478693ABE9EF720D46D3DC04BA43BA5D_gshared (Action_2_t287B0AC534E8F7AB09FED48BBC6EC3765D21F5F7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m317D483627D290B7EEB834C4CE816E461A7DA251_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceConnection::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsWarningEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.Void Photon.Voice.Unity.VoiceLogger::LogWarning(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Photon.Voice.PUN.PhotonVoiceNetwork>()
inline PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* Object_FindObjectsOfType_TisPhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_mCD705990068274836AD48840368E41684EF9DABF (const RuntimeMethod* method)
{
	return ((  PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Photon.Voice.PUN.PhotonVoiceNetwork>()
inline PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * GameObject_AddComponent_TisPhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_m321BAB3537195B87A500D7487488CCE9A28CE357 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m33A817CEE904B3362C8BAAF02DB45976575CBEF4 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_InRoom_m7746E705EAF1E2C53E2F9957A07EBE0F78079081 (const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsErrorEnabled_mE1C788CA0F7F1E83E5DD78B2E0DBAB56327CF0FC (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::LogError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogError_mFCC553A67022DD90473A0EC73CC74A3F16D7B9F1 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceNetwork_Connect_mC33E89D3268DD57A0C34C7556A46692EAD019392 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method);
// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_IsConnected_m56E9C924ADA67AE13BE4C2A6970091F1C424CC18 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::Disconnect(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Disconnect_mB59D9C1AAD03A0889824E044DF03797D01234969 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, int32_t ___cause0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceConnection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_Awake_m3C0BA3638A0AD1840CD1420A29C79C657F2831D5 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::set_Instance(Photon.Voice.PUN.PhotonVoiceNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_set_Instance_mA2B966412F15BC8D16E4FCC022EB5E6450C070C8 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mC65C535AD9E8EBDA08D65E47000C0D249B8FACB7 (Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m9221C80F478693ABE9EF720D46D3DC04BA43BA5D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::add_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_add_StateChanged_m0F1E81256EB63E9EB12E2E1945F4D0EBAA70CB53 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::FollowPun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_FollowPun_mF4CB0F0860829913FFDF19CCFCB37C215AA4EC68 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceConnection::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_OnDisable_m93723205062CE19BDBC1F67753B2A61A514842C7 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::remove_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_remove_StateChanged_m760F0DBF30149BB532966D2FEC5378CF6DF98A25 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsDebugEnabled_m4FBAA521F35C9A718CD5273E78FF8C2864D79E39 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::LogDebug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogDebug_m2C660123D52589D951D53C4589CD8FBB5B26FD98 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::FollowPun(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_FollowPun_mE51EF26BA988DC7EF45457B80403E27C3316726B (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, int32_t ___toState0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceConnection::OnVoiceStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_OnVoiceStateChanged_m83CA01CA4629C3BC50B01FDD88A8D70444E74AC0 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, int32_t ___fromState0, int32_t ___toState1, const RuntimeMethod* method);
// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::get_DisconnectedCause()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_DisconnectedCause_mEC001DE2A4D9E6BC4A364D7F3039EDF72DF395B2_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// Photon.Pun.PhotonView Photon.Pun.PhotonView::Find(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * PhotonView_Find_mF10A0A629B3800B9CB006B3862CD6546FC1E8AA1 (int32_t ___viewID0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Voice.PUN.PhotonVoiceView>()
inline PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * Component_GetComponent_TisPhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073_m85F96A4641A342F37F194C17D2852470C80197C4 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSpeaker()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E_inline (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupSpeakerInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupSpeakerInUse_m91CB24ACF94FAC95E04CF3346CF5D600A7D77C0C (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::get_SpeakerInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * PhotonVoiceView_get_SpeakerInUse_m477ECBA6ECBE3FDEEF166A82E9333FBE666E6FFF (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Pun.PhotonNetwork::get_CurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * PhotonNetwork_get_CurrentRoom_m493DA29D80F75DC0BEFF3125207AE9101C0100A1 (const RuntimeMethod* method);
// System.String Photon.Realtime.Room::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_get_Name_mBFEC50D063F6D4C60B40AF85FACCB59823228CC0 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Voice.Unity.VoiceConnection::get_ClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceConnection_get_ClientState_m0F903B2419F4FBA4670610291D870FE2C62289A6 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsInfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsInfoEnabled_m4170AC6625EDB74304B75D121C58F3D5A2E82409 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::LogInfo(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogInfo_mB43F7E494E3C64626FD494D4814924DE4F4E1811 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String Photon.Voice.PUN.PhotonVoiceNetwork::GetVoiceRoomName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonVoiceNetwork_GetVoiceRoomName_m5509B80BAF542F7A68E4F12755F967341987D214 (const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::JoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceNetwork_JoinRoom_m0D00556858D2D4C8616BE2CD1B805F0E0D30F075 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, String_t* ___voiceRoomName0, const RuntimeMethod* method);
// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::get_PhotonServerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9 * PhotonNetwork_get_PhotonServerSettings_m4199A755089F2278DFCF324152D3B265726BC227 (const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_UserId_m80D37D0BA5752ED26B90EC9FF1533A2DF860535D (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_set_UserId_m4841D6342A42BF1DDE4D0255B739FF976C2646E5 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceConnection::ConnectUsingSettings(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceConnection_ConnectUsingSettings_m3065D8A57AA5B1D914E6A4B58B7BD8E2CDF0727E (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * ___overwriteSettings0, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinOrCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinOrCreateRoom_m5E22DEF627D5C50844EC9B1B9D4AEDE64F90765D (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * ___enterRoomParams0, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Pun.PhotonNetwork::get_NetworkClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_NetworkClientState_m5B876DF86C16E84ADC8909400918DDF49975B009 (const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpLeaveRoom(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpLeaveRoom_mE76D1F79AE9B8D16E0230CA8FD1429D38A58B2A2 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, bool ___becomeInactive0, bool ___sendAuthCookie1, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::ConnectOrJoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_ConnectOrJoin_m3591500847FAADE0DD39640A286C2115AE7AFD7E (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_InRoom_m47FE0AC9AF1700BF16CAA5B9EE8D0CD5950B3D22 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String System.Enum::GetName(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_GetName_m9DE2256BCA030763AE066DA2B23EBBC2E4C62C5D (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>::get_Item(System.Int32)
inline RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * List_1_get_Item_mC628CD963B65DADDA9B99A3C5213B4CF0ACCB2D3_inline (List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * (*) (List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// Photon.Voice.VoiceInfo Photon.Voice.Unity.RemoteVoiceLink::get_Info()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  RemoteVoiceLink_get_Info_m9ECF230B4BFCE619CFCB0A16E381DE5F76AE58C3_inline (RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * __this, const RuntimeMethod* method);
// System.Object Photon.Voice.VoiceInfo::get_UserData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * VoiceInfo_get_UserData_m4D90C9BD71ACC0C7703F74EA00DBEE1D53162A7A_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::get_PlayerId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_PlayerId_m68CC26AA3125322B184655320E2C39D30D6A90FB_inline (RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::get_VoiceId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_VoiceId_mAC05EB20C1243B5FE8EDF1400C80B2C9E4B832E3_inline (RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceConnection::LinkSpeaker(Photon.Voice.Unity.Speaker,Photon.Voice.Unity.RemoteVoiceLink)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_LinkSpeaker_m6DEB487CFAB00C46E302FAD6056A0CCCAA36E946 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * ___speaker0, RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * ___remoteVoice1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>::get_Count()
inline int32_t List_1_get_Count_mC1125413603A2AE4190EF3FA864F4AF9F04076C3_inline (List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m638D3DE29E010AE4D748F9C0663298AE2C5CD588 (EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m8FC01E8D41F044F50A44FD39E05A97CCB2560402 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomOptions::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_m2F7BE2025735A3647403DE003ED2ABC1632E254F (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection__ctor_mB7422AEC64FC334FCF3ED9D194E918E9F4460F99 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_IsRecorder(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonVoiceView_set_IsRecorder_m38C1A12E6FFFEB879414B883E50310BC0850018B_inline (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_RequiresRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_RequiresRecorder_mE4B1A998ACA63E613C1895F694E6275CDC913984 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupRecorderInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupRecorderInUse_m5C225EC31F5AE63C451947A785A8F11EE05074B2 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsPhotonViewReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponent::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1 (VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_IsSpeaker(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonVoiceView_set_IsSpeaker_m969C31BC007280E6BE12E8FC73C7AEF4292EC611_inline (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_RequiresSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_RequiresSpeaker_mCFA6B6AAC5C86DABD78D731C1120A55398C94B24 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsRecorder()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsRecorder_m2E58E80883887CE528A8800E7B9087BA5B326103_inline (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Speaker::get_IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Speaker_get_IsPlaying_m2AF235602F4265EEF2F918BE2BF4858C2E1611A7 (Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * __this, const RuntimeMethod* method);
// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::get_RecorderInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * PhotonVoiceView_get_RecorderInUse_m5A5997E88ACC3A003A3AE6989CB654B436B52C61 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_IsCurrentlyTransmitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsCurrentlyTransmitting_mB809FEA5C7F2CC8E3B6DC9190064DB671E49ABAC (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Speaker::get_IsLinked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Speaker_get_IsLinked_m4BC59E12CEE6D7A7C262CDCEDCCFF17312B794C6 (Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonView::get_ViewID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_mE4C08681C335C2D0D2A646266203888ADAC789FC (PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * __this, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_m14D0563B88BF1F65C639273A8E2C67D392EFC22C (PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * Component_GetComponent_TisPhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B_m347A176252862D6CD26E7E6B5E9EAF8F4159273B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Init_m9ECD445B6B7C5E3EB70F4BA71B2995105A9560C5 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// Photon.Voice.PUN.PhotonVoiceNetwork Photon.Voice.PUN.PhotonVoiceNetwork::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3 (const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSpeakerLinked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSpeakerLinked_m7FD2E3E76708007003A10E385C714EE80C53CD1A (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::CheckLateLinking(Photon.Voice.Unity.Speaker,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_CheckLateLinking_mEB76F1C333AED46B23FE8653626C22827B28B6B2 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * ___speaker0, int32_t ___viewId1, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSetup_m9FAE2C6144760194C9134AA185A435FEFEDAE464 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::get_PrimaryRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * VoiceConnection_get_PrimaryRecorder_m5D15B0E7E79EA46DD5F565CA9F1EF0904F76CCE3 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Photon.Voice.Unity.Recorder>()
inline RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29* Component_GetComponentsInChildren_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_mF71ACBC40EE042B1D052818BD12BA8EE9459D4F1 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Photon.Voice.Unity.Recorder>()
inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * GameObject_AddComponent_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_m599EF283A21FB137CD672152EDB55633B7704CA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupRecorder(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_SetupRecorder_m6E91745AD3BAA9285FFE9CB1930C19FF3291F558 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * ___recorder0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_UserData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_UserData_mAFB6DD6BCC5C7AB50117345F78929735618A8374 (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsInitialized_mFF088ED93329B104A97B64746FC0EC874ACD206C (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::Init(Photon.Voice.Unity.VoiceConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_Init_m6977AF538C502F823E4D9A89946A831919F7EDE9 (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * ___voiceConnection0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_RequiresRestart()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Recorder_get_RequiresRestart_mE9CCBC77E36EF1ABC33EB9D226BC6ADDF3732369_inline (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::RestartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RestartRecording_m6DFAD68017D659EA44248F220CC5B04DB7BACA68 (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// System.Object Photon.Voice.Unity.Recorder::get_UserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Recorder_get_UserData_m6B143EB8476A34856D416879906FCD26A1CBB1F6 (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Photon.Voice.Unity.Speaker>()
inline SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* Component_GetComponentsInChildren_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_mFF5358493B5D0784AABB52FECC4998EE7B9243B1 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared)(__this, method);
}
// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::get_SpeakerPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * VoiceConnection_get_SpeakerPrefab_mA8891C7487CC50D0C6551994B43A77659C3C8DC2 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform,System.Boolean)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m06469FA3DADBD6D1062DF136967EC0376ECD5C6B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m317D483627D290B7EEB834C4CE816E461A7DA251_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<Photon.Voice.Unity.Speaker>()
inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * GameObject_GetComponentInChildren_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_m3C9C5137A0C2E201175D1F3B141AE027D82A52A3 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Photon.Voice.Unity.Speaker>()
inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * GameObject_AddComponent_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_m5DF217C2F16F38A14739B8A7AED4435423F970C1 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mC144B8230F08743505D4B0A92C1B9F809BC6D9C5 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupSpeaker(Photon.Voice.Unity.Speaker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_SetupSpeaker_m9D79DCA700DDCC68C8D2C9E9E93FE72794A9E179 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * ___speaker0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_mute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_mC420E7827CA751603A85430D849E8C3099FBD123 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_SetupRecorder_m64A4AC906B3F7284B1F081AAAC399B25053C8571 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsRecording_m17A2BAD89E40C179B77D8A347D9800EC9F9F6841 (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_AutoStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_AutoStart_m6745F71B94880A4F6B6FCFFC52A70D7D70592C6D (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_TransmitEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_m3109C22920F231F2B1FDA0CADDF4BB7379EA77B7 (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61 (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_RecordOnlyWhenEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_RecordOnlyWhenEnabled_m7F1AE322C5017F0EE5076EFF0DCCC0902ED401C0 (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_SetupSpeaker_m495EADEB42321564E855B3F0F4185FE810F910C8 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::CheckLateLinking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_CheckLateLinking_m6D386CC4A35A1960E1FC24B478C6A83754D2E806 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Setup_m6680D9FF71196EBA50E56E3DB40B19B31B7C580E (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent__ctor_mC69EAADF27D14F74267C4F492E121C3589E8C72A (VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Voice.PUN.PhotonVoiceNetwork Photon.Voice.PUN.PhotonVoiceNetwork::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * V_4 = NULL;
	bool V_5 = false;
	PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* V_6 = NULL;
	bool V_7 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B9_0 = 0;
	{
		// lock (instanceLock)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instanceLock_49();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (AppQuits)
			bool L_2 = ((ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_il2cpp_TypeInfo_var))->get_AppQuits_12();
			V_2 = L_2;
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_0054;
			}
		}

IL_001c:
		{
			// if (instance.Logger.IsWarningEnabled)
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_4 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_4);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_5 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			bool L_6 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_5, /*hidden argument*/NULL);
			V_3 = L_6;
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_004c;
			}
		}

IL_0030:
		{
			// instance.Logger.LogWarning("PhotonVoiceNetwork Instance already destroyed on application quit. Won't create again - returning null.");
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_8 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_8);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_9 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_8, /*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
			NullCheck(L_9);
			VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_9, _stringLiteral04F35B025276E30DC03BE2651A4FBB56783E3F74, L_10, /*hidden argument*/NULL);
		}

IL_004c:
		{
			// return null;
			V_4 = (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 *)NULL;
			IL2CPP_LEAVE(0x159, FINALLY_014e);
		}

IL_0054:
		{
			// if (!instantiated)
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			bool L_11 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instantiated_51();
			V_5 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
			bool L_12 = V_5;
			if (!L_12)
			{
				goto IL_0145;
			}
		}

IL_0065:
		{
			// PhotonVoiceNetwork[] objects = FindObjectsOfType<PhotonVoiceNetwork>();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* L_13 = Object_FindObjectsOfType_TisPhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_mCD705990068274836AD48840368E41684EF9DABF(/*hidden argument*/Object_FindObjectsOfType_TisPhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_mCD705990068274836AD48840368E41684EF9DABF_RuntimeMethod_var);
			V_6 = L_13;
			// if (objects == null || objects.Length < 1)
			PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* L_14 = V_6;
			if (!L_14)
			{
				goto IL_007a;
			}
		}

IL_0071:
		{
			PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* L_15 = V_6;
			NullCheck(L_15);
			G_B9_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))) < ((int32_t)1))? 1 : 0);
			goto IL_007b;
		}

IL_007a:
		{
			G_B9_0 = 1;
		}

IL_007b:
		{
			V_7 = (bool)G_B9_0;
			bool L_16 = V_7;
			if (!L_16)
			{
				goto IL_00d6;
			}
		}

IL_0081:
		{
			// GameObject singleton = new GameObject();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
			GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_17, /*hidden argument*/NULL);
			V_8 = L_17;
			// singleton.name = "PhotonVoiceNetwork singleton";
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = V_8;
			NullCheck(L_18);
			Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_18, _stringLiteralCC51CFF425880135E42D143F06A116BC9EB7583A, /*hidden argument*/NULL);
			// instance = singleton.AddComponent<PhotonVoiceNetwork>();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = V_8;
			NullCheck(L_19);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_20 = GameObject_AddComponent_TisPhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_m321BAB3537195B87A500D7487488CCE9A28CE357(L_19, /*hidden argument*/GameObject_AddComponent_TisPhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_m321BAB3537195B87A500D7487488CCE9A28CE357_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->set_instance_50(L_20);
			// if (instance.Logger.IsWarningEnabled)
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_21 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_21);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_22 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			bool L_23 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_22, /*hidden argument*/NULL);
			V_9 = L_23;
			bool L_24 = V_9;
			if (!L_24)
			{
				goto IL_00d3;
			}
		}

IL_00b7:
		{
			// instance.Logger.LogWarning("An instance of PhotonVoiceNetwork was automatically created in the scene.");
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_25 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_25);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_26 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_25, /*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
			NullCheck(L_26);
			VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_26, _stringLiteral1E7ADF72F362F3F2E72B6354555CBDFDBE49F447, L_27, /*hidden argument*/NULL);
		}

IL_00d3:
		{
			goto IL_013e;
		}

IL_00d6:
		{
			// else if (objects.Length >= 1)
			PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* L_28 = V_6;
			NullCheck(L_28);
			V_10 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_29 = V_10;
			if (!L_29)
			{
				goto IL_013e;
			}
		}

IL_00e6:
		{
			// instance = objects[0];
			PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* L_30 = V_6;
			NullCheck(L_30);
			int32_t L_31 = 0;
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->set_instance_50(L_32);
			// if (objects.Length > 1)
			PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* L_33 = V_6;
			NullCheck(L_33);
			V_11 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))) > ((int32_t)1))? 1 : 0);
			bool L_34 = V_11;
			if (!L_34)
			{
				goto IL_013d;
			}
		}

IL_00fd:
		{
			// if (instance.Logger.IsWarningEnabled)
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_35 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_35);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_36 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_35, /*hidden argument*/NULL);
			NullCheck(L_36);
			bool L_37 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_36, /*hidden argument*/NULL);
			V_12 = L_37;
			bool L_38 = V_12;
			if (!L_38)
			{
				goto IL_013c;
			}
		}

IL_0113:
		{
			// instance.Logger.LogWarning("{0} PhotonVoiceNetwork instances found. Using first one only.", objects.Length);
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_39 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_39);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_40 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_39, /*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_41;
			PhotonVoiceNetworkU5BU5D_tD8300CA4944F7C1CA4178BBEA3BC49D4CF357ABD* L_43 = V_6;
			NullCheck(L_43);
			int32_t L_44 = (((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))));
			RuntimeObject * L_45 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_44);
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_45);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_45);
			NullCheck(L_40);
			VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_40, _stringLiteral4DDA0650A80D3109C34D432C3D601594792A5F91, L_42, /*hidden argument*/NULL);
		}

IL_013c:
		{
		}

IL_013d:
		{
		}

IL_013e:
		{
			// instantiated = true;
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->set_instantiated_51((bool)1);
		}

IL_0145:
		{
			// return instance;
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_46 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			V_4 = L_46;
			IL2CPP_LEAVE(0x159, FINALLY_014e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014e;
	}

FINALLY_014e:
	{ // begin finally (depth: 1)
		{
			bool L_47 = V_1;
			if (!L_47)
			{
				goto IL_0158;
			}
		}

IL_0151:
		{
			RuntimeObject * L_48 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_48, /*hidden argument*/NULL);
		}

IL_0158:
		{
			IL2CPP_END_FINALLY(334)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(334)
	{
		IL2CPP_JUMP_TBL(0x159, IL_0159)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0159:
	{
		// }
		PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_49 = V_4;
		return L_49;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::set_Instance(Photon.Voice.PUN.PhotonVoiceNetwork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_set_Instance_mA2B966412F15BC8D16E4FCC022EB5E6450C070C8 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_set_Instance_mA2B966412F15BC8D16E4FCC022EB5E6450C070C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (instanceLock)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instanceLock_49();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (value == null)
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_2 = ___value0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_2 = L_3;
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0050;
			}
		}

IL_001e:
		{
			// if (instance.Logger.IsWarningEnabled)
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_5 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_5);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_6 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_7 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_004e;
			}
		}

IL_0032:
		{
			// instance.Logger.LogWarning("Cannot set PhotonVoiceNetwork.Instance to null.");
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_9 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_9);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_10 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_9, /*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
			NullCheck(L_10);
			VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_10, _stringLiteralADCE69FA7EA785E7A89BB3867AE3D3D4352FDF24, L_11, /*hidden argument*/NULL);
		}

IL_004e:
		{
			// return;
			IL2CPP_LEAVE(0xC6, FINALLY_00bb);
		}

IL_0050:
		{
			// if (instantiated)
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			bool L_12 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instantiated_51();
			V_4 = L_12;
			bool L_13 = V_4;
			if (!L_13)
			{
				goto IL_00ac;
			}
		}

IL_005b:
		{
			// if (instance.GetInstanceID() != value.GetInstanceID())
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_14 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_14);
			int32_t L_15 = Object_GetInstanceID_m33A817CEE904B3362C8BAAF02DB45976575CBEF4(L_14, /*hidden argument*/NULL);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_16 = ___value0;
			NullCheck(L_16);
			int32_t L_17 = Object_GetInstanceID_m33A817CEE904B3362C8BAAF02DB45976575CBEF4(L_16, /*hidden argument*/NULL);
			V_5 = (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_00aa;
			}
		}

IL_0077:
		{
			// if (instance.Logger.IsWarningEnabled)
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_19 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_19);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_20 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			bool L_21 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_20, /*hidden argument*/NULL);
			V_6 = L_21;
			bool L_22 = V_6;
			if (!L_22)
			{
				goto IL_00a9;
			}
		}

IL_008d:
		{
			// instance.Logger.LogWarning("An instance of PhotonVoiceNetwork is already set.");
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_23 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instance_50();
			NullCheck(L_23);
			VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_24 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_23, /*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
			NullCheck(L_24);
			VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_24, _stringLiteralFA8482B1D651A8184302BC0D56CAD9A4F1756626, L_25, /*hidden argument*/NULL);
		}

IL_00a9:
		{
		}

IL_00aa:
		{
			// return;
			IL2CPP_LEAVE(0xC6, FINALLY_00bb);
		}

IL_00ac:
		{
			// instantiated = true;
			IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
			((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->set_instantiated_51((bool)1);
			// instance = value;
			PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_26 = ___value0;
			((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->set_instance_50(L_26);
			IL2CPP_LEAVE(0xC6, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		{
			bool L_27 = V_1;
			if (!L_27)
			{
				goto IL_00c5;
			}
		}

IL_00be:
		{
			RuntimeObject * L_28 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_28, /*hidden argument*/NULL);
		}

IL_00c5:
		{
			IL2CPP_END_FINALLY(187)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_JUMP_TBL(0xC6, IL_00c6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::ConnectAndJoinRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceNetwork_ConnectAndJoinRoom_mFFA7A315C0AFF4A13A7154C481B99BB0018120DD (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_ConnectAndJoinRoom_mFFA7A315C0AFF4A13A7154C481B99BB0018120DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (!PhotonNetwork.InRoom)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_0 = PhotonNetwork_get_InRoom_m7746E705EAF1E2C53E2F9957A07EBE0F78079081(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_2 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = VoiceLogger_get_IsErrorEnabled_mE1C788CA0F7F1E83E5DD78B2E0DBAB56327CF0FC(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// this.Logger.LogError("Cannot connect and join if PUN is not joined.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_5 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_5);
		VoiceLogger_LogError_mFCC553A67022DD90473A0EC73CC74A3F16D7B9F1(L_5, _stringLiteral0D13F37077842D0BB4FC5CFEE53CEC6CA8DFAAAE, L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_005a;
	}

IL_0039:
	{
		// if (this.Connect())
		bool L_7 = PhotonVoiceNetwork_Connect_mC33E89D3268DD57A0C34C7556A46692EAD019392(__this, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// this.clientCalledConnectAndJoin = true;
		__this->set_clientCalledConnectAndJoin_46((bool)1);
		// this.clientCalledDisconnect = false;
		__this->set_clientCalledDisconnect_47((bool)0);
		// return true;
		V_2 = (bool)1;
		goto IL_005a;
	}

IL_0056:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_005a;
	}

IL_005a:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_Disconnect_mA93AA739DA28DCE0B0071975865B5A14B4B76EF2 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_Disconnect_mA93AA739DA28DCE0B0071975865B5A14B4B76EF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!this.Client.IsConnected)
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_0 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = LoadBalancingClient_get_IsConnected_m56E9C924ADA67AE13BE4C2A6970091F1C424CC18(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_3 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = VoiceLogger_get_IsErrorEnabled_mE1C788CA0F7F1E83E5DD78B2E0DBAB56327CF0FC(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// this.Logger.LogError("Cannot Disconnect if not connected.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_6 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_6);
		VoiceLogger_LogError_mFCC553A67022DD90473A0EC73CC74A3F16D7B9F1(L_6, _stringLiteral9C68AAD7D96E8465A6F05111D3B5756FC67964D1, L_7, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// return;
		goto IL_0059;
	}

IL_003d:
	{
		// this.clientCalledDisconnect = true;
		__this->set_clientCalledDisconnect_47((bool)1);
		// this.clientCalledConnectAndJoin = false;
		__this->set_clientCalledConnectAndJoin_46((bool)0);
		// this.Client.Disconnect();
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_8 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		LoadBalancingClient_Disconnect_mB59D9C1AAD03A0889824E044DF03797D01234969(L_8, ((int32_t)13), /*hidden argument*/NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_Awake_m8D74D9A9ABC271D5728D38A4AE72AA9D7AC09D89 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_Awake_m8D74D9A9ABC271D5728D38A4AE72AA9D7AC09D89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		VoiceConnection_Awake_m3C0BA3638A0AD1840CD1420A29C79C657F2831D5(__this, /*hidden argument*/NULL);
		// Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_set_Instance_mA2B966412F15BC8D16E4FCC022EB5E6450C070C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_OnEnable_mA47E1743EB899A08711BA99C58221B12684F9EAB (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_OnEnable_mA47E1743EB899A08711BA99C58221B12684F9EAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.NetworkingClient.StateChanged += this.OnPunStateChanged;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = ((PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * L_1 = (Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 *)il2cpp_codegen_object_new(Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070_il2cpp_TypeInfo_var);
		Action_2__ctor_mC65C535AD9E8EBDA08D65E47000C0D249B8FACB7(L_1, __this, (intptr_t)((intptr_t)PhotonVoiceNetwork_OnPunStateChanged_m077FDB02AF33EB5BD01CAC51D5FAF38185FD45FD_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC65C535AD9E8EBDA08D65E47000C0D249B8FACB7_RuntimeMethod_var);
		NullCheck(L_0);
		LoadBalancingClient_add_StateChanged_m0F1E81256EB63E9EB12E2E1945F4D0EBAA70CB53(L_0, L_1, /*hidden argument*/NULL);
		// this.FollowPun(); // in case this is enabled or activated late
		PhotonVoiceNetwork_FollowPun_mF4CB0F0860829913FFDF19CCFCB37C215AA4EC68(__this, /*hidden argument*/NULL);
		// this.clientCalledConnectAndJoin = false;
		__this->set_clientCalledConnectAndJoin_46((bool)0);
		// this.clientCalledDisconnect = false;
		__this->set_clientCalledDisconnect_47((bool)0);
		// this.internalDisconnect = false;
		__this->set_internalDisconnect_48((bool)0);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_OnDisable_m91E553401E272480067E3D6E26303A25B7B7418F (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_OnDisable_m91E553401E272480067E3D6E26303A25B7B7418F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		VoiceConnection_OnDisable_m93723205062CE19BDBC1F67753B2A61A514842C7(__this, /*hidden argument*/NULL);
		// PhotonNetwork.NetworkingClient.StateChanged -= this.OnPunStateChanged;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = ((PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * L_1 = (Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 *)il2cpp_codegen_object_new(Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070_il2cpp_TypeInfo_var);
		Action_2__ctor_mC65C535AD9E8EBDA08D65E47000C0D249B8FACB7(L_1, __this, (intptr_t)((intptr_t)PhotonVoiceNetwork_OnPunStateChanged_m077FDB02AF33EB5BD01CAC51D5FAF38185FD45FD_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC65C535AD9E8EBDA08D65E47000C0D249B8FACB7_RuntimeMethod_var);
		NullCheck(L_0);
		LoadBalancingClient_remove_StateChanged_m760F0DBF30149BB532966D2FEC5378CF6DF98A25(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_OnDestroy_m8F54658059C11E42C9DCB903A59896D2AEB3A0E7 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_OnDestroy_m8F54658059C11E42C9DCB903A59896D2AEB3A0E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (instanceLock)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->get_instanceLock_49();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// instantiated = false;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->set_instantiated_51((bool)0);
		IL2CPP_LEAVE(0x27, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		{
			bool L_2 = V_1;
			if (!L_2)
			{
				goto IL_0026;
			}
		}

IL_001f:
		{
			RuntimeObject * L_3 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_3, /*hidden argument*/NULL);
		}

IL_0026:
		{
			IL2CPP_END_FINALLY(28)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x27, IL_0027)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::OnPunStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_OnPunStateChanged_m077FDB02AF33EB5BD01CAC51D5FAF38185FD45FD (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, int32_t ___fromState0, int32_t ___toState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_OnPunStateChanged_m077FDB02AF33EB5BD01CAC51D5FAF38185FD45FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.Logger.IsDebugEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_0 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VoiceLogger_get_IsDebugEnabled_m4FBAA521F35C9A718CD5273E78FF8C2864D79E39(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// this.Logger.LogDebug("OnPunStateChanged from {0} to {1}", fromState, toState);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_3 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		int32_t L_6 = ___fromState0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		int32_t L_10 = ___toState1;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		NullCheck(L_3);
		VoiceLogger_LogDebug_m2C660123D52589D951D53C4589CD8FBB5B26FD98(L_3, _stringLiteralB798C81B1F9A4DB6CD38375CB8546CC5D9EFE9FF, L_9, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// this.FollowPun(toState);
		int32_t L_13 = ___toState1;
		PhotonVoiceNetwork_FollowPun_mE51EF26BA988DC7EF45457B80403E27C3316726B(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::OnVoiceStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_OnVoiceStateChanged_m5E14D1C719B5229D61E837E66391476599709D73 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, int32_t ___fromState0, int32_t ___toState1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// base.OnVoiceStateChanged(fromState, toState);
		int32_t L_0 = ___fromState0;
		int32_t L_1 = ___toState1;
		VoiceConnection_OnVoiceStateChanged_m83CA01CA4629C3BC50B01FDD88A8D70444E74AC0(__this, L_0, L_1, /*hidden argument*/NULL);
		// if (toState == ClientState.Disconnected)
		int32_t L_2 = ___toState1;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)14)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// if (this.internalDisconnect)
		bool L_4 = __this->get_internalDisconnect_48();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// this.internalDisconnect = false;
		__this->set_internalDisconnect_48((bool)0);
		goto IL_004d;
	}

IL_0029:
	{
		// else if (!this.clientCalledDisconnect)
		bool L_6 = __this->get_clientCalledDisconnect_47();
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// this.clientCalledDisconnect = this.Client.DisconnectedCause == DisconnectCause.DisconnectByClientLogic;
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_8 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = LoadBalancingClient_get_DisconnectedCause_mEC001DE2A4D9E6BC4A364D7F3039EDF72DF395B2_inline(L_8, /*hidden argument*/NULL);
		__this->set_clientCalledDisconnect_47((bool)((((int32_t)L_9) == ((int32_t)((int32_t)13)))? 1 : 0));
	}

IL_004d:
	{
	}

IL_004e:
	{
		// this.FollowPun(toState);
		int32_t L_10 = ___toState1;
		PhotonVoiceNetwork_FollowPun_mE51EF26BA988DC7EF45457B80403E27C3316726B(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::FollowPun(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_FollowPun_mE51EF26BA988DC7EF45457B80403E27C3316726B (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, int32_t ___toState0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (toState)
		int32_t L_0 = ___toState0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)9))))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)14)))) > ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_001c;
	}

IL_0013:
	{
		// this.FollowPun();
		PhotonVoiceNetwork_FollowPun_mF4CB0F0860829913FFDF19CCFCB37C215AA4EC68(__this, /*hidden argument*/NULL);
		// break;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		return;
	}
}
// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceNetwork::SimpleSpeakerFactory(System.Int32,System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * PhotonVoiceNetwork_SimpleSpeakerFactory_m6F35DF8293E84E8E035CA2E08F2DD8E3AC88023C (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, int32_t ___playerId0, uint8_t ___voiceId1, RuntimeObject * ___userData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_SimpleSpeakerFactory_m6F35DF8293E84E8E035CA2E08F2DD8E3AC88023C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * V_1 = NULL;
	PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * G_B4_4 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * G_B3_4 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * G_B5_5 = NULL;
	{
		// if (!(userData is int))
		RuntimeObject * L_0 = ___userData2;
		V_3 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_2 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// this.Logger.LogWarning("UserData ({0}) does not contain PhotonViewId. Remote voice {1}/{2} not linked. Do you have a Recorder not used with a PhotonVoiceView? is this expected?",
		//     userData == null ? "null" : userData.ToString(), playerId, voiceId);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_5 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		RuntimeObject * L_8 = ___userData2;
		G_B3_0 = 0;
		G_B3_1 = L_7;
		G_B3_2 = L_7;
		G_B3_3 = _stringLiteral75F9821A1234C161239E13FB36EACBA40E8E246A;
		G_B3_4 = L_5;
		if (!L_8)
		{
			G_B4_0 = 0;
			G_B4_1 = L_7;
			G_B4_2 = L_7;
			G_B4_3 = _stringLiteral75F9821A1234C161239E13FB36EACBA40E8E246A;
			G_B4_4 = L_5;
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = ___userData2;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		G_B5_0 = L_10;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		G_B5_5 = G_B3_4;
		goto IL_0047;
	}

IL_0042:
	{
		G_B5_0 = _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
		G_B5_5 = G_B4_4;
	}

IL_0047:
	{
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (RuntimeObject *)G_B5_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = G_B5_3;
		int32_t L_12 = ___playerId0;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_11;
		uint8_t L_16 = ___voiceId1;
		uint8_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		NullCheck(G_B5_5);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(G_B5_5, G_B5_4, L_15, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// return null;
		V_5 = (Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 *)NULL;
		goto IL_0146;
	}

IL_0069:
	{
		// int photonViewId = (int)userData;
		RuntimeObject * L_19 = ___userData2;
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_19, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// PhotonView photonView = PhotonView.Find(photonViewId);
		int32_t L_20 = V_0;
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_21 = PhotonView_Find_mF10A0A629B3800B9CB006B3862CD6546FC1E8AA1(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		// if (photonView == null)
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_22, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_6 = L_23;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00ca;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_25 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_26 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00c5;
		}
	}
	{
		// this.Logger.LogWarning("No PhotonView with ID {0} found. Remote voice {1}/{2} not linked.", userData, playerId, voiceId);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_28 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = L_29;
		RuntimeObject * L_31 = ___userData2;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_31);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_30;
		int32_t L_33 = ___playerId0;
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_35);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_32;
		uint8_t L_37 = ___voiceId1;
		uint8_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_39);
		NullCheck(L_28);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_28, _stringLiteral9C61899B949B2D4F67ADFA851F6C4EB36EF486C5, L_36, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// return null;
		V_5 = (Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 *)NULL;
		goto IL_0146;
	}

IL_00ca:
	{
		// PhotonVoiceView photonVoiceView = photonView.GetComponent<PhotonVoiceView>();
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_40 = V_1;
		NullCheck(L_40);
		PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * L_41 = Component_GetComponent_TisPhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073_m85F96A4641A342F37F194C17D2852470C80197C4(L_40, /*hidden argument*/Component_GetComponent_TisPhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073_m85F96A4641A342F37F194C17D2852470C80197C4_RuntimeMethod_var);
		V_2 = L_41;
		// if (photonVoiceView == null)
		PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_43 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_42, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_43;
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_0124;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_45 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		bool L_46 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_45, /*hidden argument*/NULL);
		V_9 = L_46;
		bool L_47 = V_9;
		if (!L_47)
		{
			goto IL_011f;
		}
	}
	{
		// this.Logger.LogWarning("No PhotonVoiceView attached to the PhotonView with ID {0}. Remote voice {1}/{2} not linked.", userData, playerId, voiceId);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_48 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_49 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_50 = L_49;
		RuntimeObject * L_51 = ___userData2;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_51);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_52 = L_50;
		int32_t L_53 = ___playerId0;
		int32_t L_54 = L_53;
		RuntimeObject * L_55 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_55);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_56 = L_52;
		uint8_t L_57 = ___voiceId1;
		uint8_t L_58 = L_57;
		RuntimeObject * L_59 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_59);
		NullCheck(L_48);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_48, _stringLiteralF9D86EFDE99359C1B7EE08CC88C853610C7D0208, L_56, /*hidden argument*/NULL);
	}

IL_011f:
	{
		// return null;
		V_5 = (Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 *)NULL;
		goto IL_0146;
	}

IL_0124:
	{
		// if (!photonVoiceView.IsSpeaker)
		PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * L_60 = V_2;
		NullCheck(L_60);
		bool L_61 = PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E_inline(L_60, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_61) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_10;
		if (!L_62)
		{
			goto IL_013c;
		}
	}
	{
		// photonVoiceView.SetupSpeakerInUse();
		PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * L_63 = V_2;
		NullCheck(L_63);
		PhotonVoiceView_SetupSpeakerInUse_m91CB24ACF94FAC95E04CF3346CF5D600A7D77C0C(L_63, /*hidden argument*/NULL);
	}

IL_013c:
	{
		// return photonVoiceView.SpeakerInUse;
		PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * L_64 = V_2;
		NullCheck(L_64);
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_65 = PhotonVoiceView_get_SpeakerInUse_m477ECBA6ECBE3FDEEF166A82E9333FBE666E6FFF(L_64, /*hidden argument*/NULL);
		V_5 = L_65;
		goto IL_0146;
	}

IL_0146:
	{
		// }
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_66 = V_5;
		return L_66;
	}
}
// System.String Photon.Voice.PUN.PhotonVoiceNetwork::GetVoiceRoomName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonVoiceNetwork_GetVoiceRoomName_m5509B80BAF542F7A68E4F12755F967341987D214 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_GetVoiceRoomName_m5509B80BAF542F7A68E4F12755F967341987D214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (PhotonNetwork.InRoom)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_0 = PhotonNetwork_get_InRoom_m7746E705EAF1E2C53E2F9957A07EBE0F78079081(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// return string.Format("{0}{1}", PhotonNetwork.CurrentRoom.Name, VoiceRoomNameSuffix);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_2 = PhotonNetwork_get_CurrentRoom_m493DA29D80F75DC0BEFF3125207AE9101C0100A1(/*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Room_get_Name_mBFEC50D063F6D4C60B40AF85FACCB59823228CC0(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D, L_3, _stringLiteralDCCADCBBE419CCAE4AC7EBA4834FBCD938BDA676, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_002b;
	}

IL_0027:
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::ConnectOrJoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_ConnectOrJoin_m3591500847FAADE0DD39640A286C2115AE7AFD7E (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_ConnectOrJoin_m3591500847FAADE0DD39640A286C2115AE7AFD7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// switch (this.ClientState)
		int32_t L_0 = VoiceConnection_get_ClientState_m0F903B2419F4FBA4670610291D870FE2C62289A6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)14))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)15))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_00b7;
	}

IL_001e:
	{
		// if (this.Logger.IsInfoEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_4 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = VoiceLogger_get_IsInfoEnabled_m4170AC6625EDB74304B75D121C58F3D5A2E82409(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// this.Logger.LogInfo("PUN joined room, now connecting Voice client");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_7 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_7);
		VoiceLogger_LogInfo_mB43F7E494E3C64626FD494D4814924DE4F4E1811(L_7, _stringLiteral99FA66344D96F03C594A6CB247BEA2D6A645032B, L_8, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// this.Connect();
		PhotonVoiceNetwork_Connect_mC33E89D3268DD57A0C34C7556A46692EAD019392(__this, /*hidden argument*/NULL);
		// break;
		goto IL_00f1;
	}

IL_0051:
	{
		// if (this.Logger.IsInfoEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_9 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = VoiceLogger_get_IsInfoEnabled_m4170AC6625EDB74304B75D121C58F3D5A2E82409(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		// this.Logger.LogInfo("PUN joined room, now joining Voice room");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_12 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_12);
		VoiceLogger_LogInfo_mB43F7E494E3C64626FD494D4814924DE4F4E1811(L_12, _stringLiteral659FDE37473DF9AA2CBEA17772D31299CE88B76E, L_13, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// if (!this.JoinRoom(GetVoiceRoomName()))
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		String_t* L_14 = PhotonVoiceNetwork_GetVoiceRoomName_m5509B80BAF542F7A68E4F12755F967341987D214(/*hidden argument*/NULL);
		bool L_15 = PhotonVoiceNetwork_JoinRoom_m0D00556858D2D4C8616BE2CD1B805F0E0D30F075(__this, L_14, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00b5;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_17 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		bool L_18 = VoiceLogger_get_IsErrorEnabled_mE1C788CA0F7F1E83E5DD78B2E0DBAB56327CF0FC(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00b4;
		}
	}
	{
		// this.Logger.LogError("Joining a voice room failed.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_20 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_20);
		VoiceLogger_LogError_mFCC553A67022DD90473A0EC73CC74A3F16D7B9F1(L_20, _stringLiteral328A4AC6A43A69BA94637489F3F434BA81528293, L_21, /*hidden argument*/NULL);
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		// break;
		goto IL_00f1;
	}

IL_00b7:
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_22 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ef;
		}
	}
	{
		// this.Logger.LogWarning("PUN joined room, Voice client is busy ({0}). Is this expected?", this.ClientState);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_25 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_26;
		int32_t L_28 = VoiceConnection_get_ClientState_m0F903B2419F4FBA4670610291D870FE2C62289A6(__this, /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
		NullCheck(L_25);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_25, _stringLiteral23896082EC3C669EF2957E3E73BE3C289ECE27A5, L_27, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		// break;
		goto IL_00f1;
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceNetwork_Connect_mC33E89D3268DD57A0C34C7556A46692EAD019392 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_Connect_mC33E89D3268DD57A0C34C7556A46692EAD019392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// AppSettings settings = this.Settings;
		AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * L_0 = ((VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 *)__this)->get_Settings_33();
		V_0 = L_0;
		// if (this.usePunAppSettings)
		bool L_1 = __this->get_usePunAppSettings_52();
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// settings = PhotonNetwork.PhotonServerSettings.AppSettings;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		ServerSettings_t41FA10CB281A2D884146801E3E74770B97862AA9 * L_3 = PhotonNetwork_get_PhotonServerSettings_m4199A755089F2278DFCF324152D3B265726BC227(/*hidden argument*/NULL);
		NullCheck(L_3);
		AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * L_4 = L_3->get_AppSettings_4();
		V_0 = L_4;
		// if (string.IsNullOrEmpty(this.Client.UserId) && PhotonNetwork.NetworkingClient != null && !string.IsNullOrEmpty(PhotonNetwork.NetworkingClient.UserId))
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_5 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = LoadBalancingClient_get_UserId_m80D37D0BA5752ED26B90EC9FF1533A2DF860535D(L_5, /*hidden argument*/NULL);
		bool L_7 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_8 = ((PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = ((PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		NullCheck(L_9);
		String_t* L_10 = LoadBalancingClient_get_UserId_m80D37D0BA5752ED26B90EC9FF1533A2DF860535D(L_9, /*hidden argument*/NULL);
		bool L_11 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_10, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		V_2 = (bool)G_B5_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// this.Client.UserId = PhotonNetwork.NetworkingClient.UserId;
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_13 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_14 = ((PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		NullCheck(L_14);
		String_t* L_15 = LoadBalancingClient_get_UserId_m80D37D0BA5752ED26B90EC9FF1533A2DF860535D(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		LoadBalancingClient_set_UserId_m4841D6342A42BF1DDE4D0255B739FF976C2646E5(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0068:
	{
	}

IL_0069:
	{
		// if (!this.ConnectUsingSettings(settings))
		AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * L_16 = V_0;
		bool L_17 = VoiceConnection_ConnectUsingSettings_m3065D8A57AA5B1D914E6A4B58B7BD8E2CDF0727E(__this, L_16, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00a6;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_19 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20 = VoiceLogger_get_IsErrorEnabled_mE1C788CA0F7F1E83E5DD78B2E0DBAB56327CF0FC(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_00a1;
		}
	}
	{
		// this.Logger.LogError("Connecting to server failed.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_22 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_22);
		VoiceLogger_LogError_mFCC553A67022DD90473A0EC73CC74A3F16D7B9F1(L_22, _stringLiteralB5083CEF31CEC886DF3A1A3E3B0534866ECD2FDD, L_23, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// return false;
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_00a6:
	{
		// return true;
		V_5 = (bool)1;
		goto IL_00ab;
	}

IL_00ab:
	{
		// }
		bool L_24 = V_5;
		return L_24;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceNetwork::JoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceNetwork_JoinRoom_m0D00556858D2D4C8616BE2CD1B805F0E0D30F075 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, String_t* ___voiceRoomName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_JoinRoom_m0D00556858D2D4C8616BE2CD1B805F0E0D30F075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (string.IsNullOrEmpty(voiceRoomName))
		String_t* L_0 = ___voiceRoomName0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_3 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = VoiceLogger_get_IsErrorEnabled_mE1C788CA0F7F1E83E5DD78B2E0DBAB56327CF0FC(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// this.Logger.LogError("Voice room name is null or empty.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_6 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_6);
		VoiceLogger_LogError_mFCC553A67022DD90473A0EC73CC74A3F16D7B9F1(L_6, _stringLiteral5954C2C87CDF50F48ACB1B74FD178C392C89836D, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0057;
	}

IL_0037:
	{
		// this.voiceRoomParams.RoomName = voiceRoomName;
		EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * L_8 = __this->get_voiceRoomParams_45();
		String_t* L_9 = ___voiceRoomName0;
		NullCheck(L_8);
		L_8->set_RoomName_0(L_9);
		// return this.Client.OpJoinOrCreateRoom(this.voiceRoomParams);
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_10 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * L_11 = __this->get_voiceRoomParams_45();
		NullCheck(L_10);
		bool L_12 = LoadBalancingClient_OpJoinOrCreateRoom_m5E22DEF627D5C50844EC9B1B9D4AEDE64F90765D(L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::FollowPun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_FollowPun_mF4CB0F0860829913FFDF19CCFCB37C215AA4EC68 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_FollowPun_mF4CB0F0860829913FFDF19CCFCB37C215AA4EC68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B31_0 = 0;
	{
		// if (AppQuits)
		bool L_0 = ((ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_il2cpp_TypeInfo_var))->get_AppQuits_12();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0186;
	}

IL_0010:
	{
		// if (PhotonNetwork.NetworkClientState == this.ClientState)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		int32_t L_2 = PhotonNetwork_get_NetworkClientState_m5B876DF86C16E84ADC8909400918DDF49975B009(/*hidden argument*/NULL);
		int32_t L_3 = VoiceConnection_get_ClientState_m0F903B2419F4FBA4670610291D870FE2C62289A6(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00e2;
		}
	}
	{
		// if (PhotonNetwork.InRoom && this.AutoConnectAndJoin)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_5 = PhotonNetwork_get_InRoom_m7746E705EAF1E2C53E2F9957A07EBE0F78079081(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		bool L_6 = __this->get_AutoConnectAndJoin_42();
		G_B6_0 = ((int32_t)(L_6));
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 0;
	}

IL_0035:
	{
		V_2 = (bool)G_B6_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00dd;
		}
	}
	{
		// string expectedRoomName = GetVoiceRoomName();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		String_t* L_8 = PhotonVoiceNetwork_GetVoiceRoomName_m5509B80BAF542F7A68E4F12755F967341987D214(/*hidden argument*/NULL);
		V_3 = L_8;
		// string currentRoomName = this.Client.CurrentRoom.Name;
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_9 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_10 = LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = Room_get_Name_mBFEC50D063F6D4C60B40AF85FACCB59823228CC0(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// if (!currentRoomName.Equals(expectedRoomName))
		String_t* L_12 = V_4;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		bool L_14 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_12, L_13, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00dc;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_16 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_009a;
		}
	}
	{
		// this.Logger.LogWarning(
		//     "Voice room mismatch: Expected:\"{0}\" Current:\"{1}\", leaving the second to join the first.",
		//     expectedRoomName, currentRoomName);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_19 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_20;
		String_t* L_22 = V_3;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_21;
		String_t* L_24 = V_4;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_24);
		NullCheck(L_19);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_19, _stringLiteralD4EBD4FF8072845C6A2A560EC823A016C4C28F35, L_23, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// if (!this.Client.OpLeaveRoom(false))
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_25 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_26 = LoadBalancingClient_OpLeaveRoom_mE76D1F79AE9B8D16E0230CA8FD1429D38A58B2A2(L_25, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00db;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_28 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		bool L_29 = VoiceLogger_get_IsErrorEnabled_mE1C788CA0F7F1E83E5DD78B2E0DBAB56327CF0FC(L_28, /*hidden argument*/NULL);
		V_8 = L_29;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00da;
		}
	}
	{
		// this.Logger.LogError("Leaving the current voice room failed.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_31 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_31);
		VoiceLogger_LogError_mFCC553A67022DD90473A0EC73CC74A3F16D7B9F1(L_31, _stringLiteralBD01C27668E25804634FE2DB653D74E31C210314, L_32, /*hidden argument*/NULL);
	}

IL_00da:
	{
	}

IL_00db:
	{
	}

IL_00dc:
	{
	}

IL_00dd:
	{
		// return;
		goto IL_0186;
	}

IL_00e2:
	{
		// if (PhotonNetwork.InRoom)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_33 = PhotonNetwork_get_InRoom_m7746E705EAF1E2C53E2F9957A07EBE0F78079081(/*hidden argument*/NULL);
		V_9 = L_33;
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_011f;
		}
	}
	{
		// if (this.clientCalledConnectAndJoin || this.AutoConnectAndJoin && !this.clientCalledDisconnect)
		bool L_35 = __this->get_clientCalledConnectAndJoin_46();
		if (L_35)
		{
			goto IL_010c;
		}
	}
	{
		bool L_36 = __this->get_AutoConnectAndJoin_42();
		if (!L_36)
		{
			goto IL_0109;
		}
	}
	{
		bool L_37 = __this->get_clientCalledDisconnect_47();
		G_B22_0 = ((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		goto IL_010a;
	}

IL_0109:
	{
		G_B22_0 = 0;
	}

IL_010a:
	{
		G_B24_0 = G_B22_0;
		goto IL_010d;
	}

IL_010c:
	{
		G_B24_0 = 1;
	}

IL_010d:
	{
		V_10 = (bool)G_B24_0;
		bool L_38 = V_10;
		if (!L_38)
		{
			goto IL_011c;
		}
	}
	{
		// this.ConnectOrJoin();
		PhotonVoiceNetwork_ConnectOrJoin_m3591500847FAADE0DD39640A286C2115AE7AFD7E(__this, /*hidden argument*/NULL);
	}

IL_011c:
	{
		goto IL_0186;
	}

IL_011f:
	{
		// else if (this.Client.InRoom && this.AutoLeaveAndDisconnect && !this.clientCalledConnectAndJoin)
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_39 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		bool L_40 = LoadBalancingClient_get_InRoom_m47FE0AC9AF1700BF16CAA5B9EE8D0CD5950B3D22(L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_013f;
		}
	}
	{
		bool L_41 = __this->get_AutoLeaveAndDisconnect_43();
		if (!L_41)
		{
			goto IL_013f;
		}
	}
	{
		bool L_42 = __this->get_clientCalledConnectAndJoin_46();
		G_B31_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		goto IL_0140;
	}

IL_013f:
	{
		G_B31_0 = 0;
	}

IL_0140:
	{
		V_11 = (bool)G_B31_0;
		bool L_43 = V_11;
		if (!L_43)
		{
			goto IL_0186;
		}
	}
	{
		// if (this.Logger.IsInfoEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_44 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		bool L_45 = VoiceLogger_get_IsInfoEnabled_m4170AC6625EDB74304B75D121C58F3D5A2E82409(L_44, /*hidden argument*/NULL);
		V_12 = L_45;
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_0170;
		}
	}
	{
		// this.Logger.LogInfo("PUN left room, disconnecting Voice");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_47 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_47);
		VoiceLogger_LogInfo_mB43F7E494E3C64626FD494D4814924DE4F4E1811(L_47, _stringLiteralF03F5C1453A920CDE8753E116A1726241704D5B7, L_48, /*hidden argument*/NULL);
	}

IL_0170:
	{
		// this.internalDisconnect = true;
		__this->set_internalDisconnect_48((bool)1);
		// this.Client.Disconnect();
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_49 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		LoadBalancingClient_Disconnect_mB59D9C1AAD03A0889824E044DF03797D01234969(L_49, ((int32_t)13), /*hidden argument*/NULL);
	}

IL_0186:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::CheckLateLinking(Photon.Voice.Unity.Speaker,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork_CheckLateLinking_mEB76F1C333AED46B23FE8653626C22827B28B6B2 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * ___speaker0, int32_t ___viewId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork_CheckLateLinking_mEB76F1C333AED46B23FE8653626C22827B28B6B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * V_7 = NULL;
	bool V_8 = false;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B25_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B25_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B25_2 = NULL;
	String_t* G_B25_3 = NULL;
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * G_B25_4 = NULL;
	int32_t G_B24_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B24_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B24_2 = NULL;
	String_t* G_B24_3 = NULL;
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * G_B24_4 = NULL;
	String_t* G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B26_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B26_3 = NULL;
	String_t* G_B26_4 = NULL;
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * G_B26_5 = NULL;
	{
		// if (!speaker || speaker == null)
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_0 = ___speaker0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_2 = ___speaker0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_5 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// this.Logger.LogWarning("Cannot check late linking for null Speaker");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_8 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_8);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_8, _stringLiteral10EDFC61403592A98B7F925D12F314EFB7DBD734, L_9, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// return;
		goto IL_028e;
	}

IL_0044:
	{
		// if (viewId <= 0)
		int32_t L_10 = ___viewId1;
		V_2 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_12 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0081;
		}
	}
	{
		// this.Logger.LogWarning("Cannot check late linking for ViewID = {0} (<= 0)", viewId);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_15 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		int32_t L_18 = ___viewId1;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		NullCheck(L_15);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_15, _stringLiteral63F79FBF8E5C1F96B56E76CF36DE876ECBAEBD98, L_17, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// return;
		goto IL_028e;
	}

IL_0086:
	{
		// if (!this.Client.InRoom)
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_21 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22 = LoadBalancingClient_get_InRoom_m47FE0AC9AF1700BF16CAA5B9EE8D0CD5950B3D22(L_21, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00e7;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_24 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00e2;
		}
	}
	{
		// this.Logger.LogWarning("Cannot check late linking while not joined to a voice room, client state: {0}", System.Enum.GetName(typeof(ClientState), this.ClientState));
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_27 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_28;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_30 = { reinterpret_cast<intptr_t> (ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_31 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_30, /*hidden argument*/NULL);
		int32_t L_32 = VoiceConnection_get_ClientState_m0F903B2419F4FBA4670610291D870FE2C62289A6(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var, &L_33);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		String_t* L_35 = Enum_GetName_m9DE2256BCA030763AE066DA2B23EBBC2E4C62C5D(L_31, L_34, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_35);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_35);
		NullCheck(L_27);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_27, _stringLiteralC591FAC36EFA5AAA2ADC3A6C1B68421515E19958, L_29, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		// return;
		goto IL_028e;
	}

IL_00e7:
	{
		// for (int i = 0; i < this.cachedRemoteVoices.Count; i++)
		V_6 = 0;
		goto IL_0276;
	}

IL_00ef:
	{
		// RemoteVoiceLink remoteVoice = this.cachedRemoteVoices[i];
		List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 * L_36 = ((VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 *)__this)->get_cachedRemoteVoices_30();
		int32_t L_37 = V_6;
		NullCheck(L_36);
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_38 = List_1_get_Item_mC628CD963B65DADDA9B99A3C5213B4CF0ACCB2D3_inline(L_36, L_37, /*hidden argument*/List_1_get_Item_mC628CD963B65DADDA9B99A3C5213B4CF0ACCB2D3_RuntimeMethod_var);
		V_7 = L_38;
		// if (remoteVoice.Info.UserData is int)
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_39 = V_7;
		NullCheck(L_39);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_40 = RemoteVoiceLink_get_Info_m9ECF230B4BFCE619CFCB0A16E381DE5F76AE58C3_inline(L_39, /*hidden argument*/NULL);
		V_9 = L_40;
		RuntimeObject * L_41 = VoiceInfo_get_UserData_m4D90C9BD71ACC0C7703F74EA00DBEE1D53162A7A_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_9), /*hidden argument*/NULL);
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_41, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_42 = V_8;
		if (!L_42)
		{
			goto IL_01aa;
		}
	}
	{
		// int photonViewId = (int)remoteVoice.Info.UserData;
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_43 = V_7;
		NullCheck(L_43);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_44 = RemoteVoiceLink_get_Info_m9ECF230B4BFCE619CFCB0A16E381DE5F76AE58C3_inline(L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		RuntimeObject * L_45 = VoiceInfo_get_UserData_m4D90C9BD71ACC0C7703F74EA00DBEE1D53162A7A_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_9), /*hidden argument*/NULL);
		V_10 = ((*(int32_t*)((int32_t*)UnBox(L_45, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// if (viewId == photonViewId)
		int32_t L_46 = ___viewId1;
		int32_t L_47 = V_10;
		V_11 = (bool)((((int32_t)L_46) == ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_01a4;
		}
	}
	{
		// if (this.Logger.IsInfoEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_49 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		bool L_50 = VoiceLogger_get_IsInfoEnabled_m4170AC6625EDB74304B75D121C58F3D5A2E82409(L_49, /*hidden argument*/NULL);
		V_12 = L_50;
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_0195;
		}
	}
	{
		// this.Logger.LogInfo("Speaker 'late-linking' for the PhotonView with ID {0} with remote voice {1}/{2}.", viewId, remoteVoice.PlayerId, remoteVoice.VoiceId);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_52 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_53 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_54 = L_53;
		int32_t L_55 = ___viewId1;
		int32_t L_56 = L_55;
		RuntimeObject * L_57 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_56);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_57);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_57);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_58 = L_54;
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_59 = V_7;
		NullCheck(L_59);
		int32_t L_60 = RemoteVoiceLink_get_PlayerId_m68CC26AA3125322B184655320E2C39D30D6A90FB_inline(L_59, /*hidden argument*/NULL);
		int32_t L_61 = L_60;
		RuntimeObject * L_62 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_61);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_62);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_62);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_63 = L_58;
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_64 = V_7;
		NullCheck(L_64);
		int32_t L_65 = RemoteVoiceLink_get_VoiceId_mAC05EB20C1243B5FE8EDF1400C80B2C9E4B832E3_inline(L_64, /*hidden argument*/NULL);
		int32_t L_66 = L_65;
		RuntimeObject * L_67 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_66);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_67);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_67);
		NullCheck(L_52);
		VoiceLogger_LogInfo_mB43F7E494E3C64626FD494D4814924DE4F4E1811(L_52, _stringLiteralE4C533B15434B7D996B0D964614944468A5752E6, L_63, /*hidden argument*/NULL);
	}

IL_0195:
	{
		// this.LinkSpeaker(speaker, remoteVoice);
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_68 = ___speaker0;
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_69 = V_7;
		VoiceConnection_LinkSpeaker_m6DEB487CFAB00C46E302FAD6056A0CCCAA36E946(__this, L_68, L_69, /*hidden argument*/NULL);
		// break;
		goto IL_028e;
	}

IL_01a4:
	{
		goto IL_026f;
	}

IL_01aa:
	{
		// else if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_70 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		bool L_71 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_70, /*hidden argument*/NULL);
		V_13 = L_71;
		bool L_72 = V_13;
		if (!L_72)
		{
			goto IL_026f;
		}
	}
	{
		// this.Logger.LogWarning("VoiceInfo.UserData should be int/ViewId, received: {0}, do you have a Recorder not used with a PhotonVoiceView? is this expected?",
		//     remoteVoice.Info.UserData == null ? "null" : string.Format("{0} ({1})", remoteVoice.Info.UserData, remoteVoice.Info.UserData.GetType()));
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_73 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_74 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_75 = L_74;
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_76 = V_7;
		NullCheck(L_76);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_77 = RemoteVoiceLink_get_Info_m9ECF230B4BFCE619CFCB0A16E381DE5F76AE58C3_inline(L_76, /*hidden argument*/NULL);
		V_9 = L_77;
		RuntimeObject * L_78 = VoiceInfo_get_UserData_m4D90C9BD71ACC0C7703F74EA00DBEE1D53162A7A_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_9), /*hidden argument*/NULL);
		G_B24_0 = 0;
		G_B24_1 = L_75;
		G_B24_2 = L_75;
		G_B24_3 = _stringLiteral31B99131DBDDEECF048EE3FC5A15B37B4D44AA51;
		G_B24_4 = L_73;
		if (!L_78)
		{
			G_B25_0 = 0;
			G_B25_1 = L_75;
			G_B25_2 = L_75;
			G_B25_3 = _stringLiteral31B99131DBDDEECF048EE3FC5A15B37B4D44AA51;
			G_B25_4 = L_73;
			goto IL_0215;
		}
	}
	{
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_79 = V_7;
		NullCheck(L_79);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_80 = RemoteVoiceLink_get_Info_m9ECF230B4BFCE619CFCB0A16E381DE5F76AE58C3_inline(L_79, /*hidden argument*/NULL);
		V_9 = L_80;
		RuntimeObject * L_81 = VoiceInfo_get_UserData_m4D90C9BD71ACC0C7703F74EA00DBEE1D53162A7A_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_9), /*hidden argument*/NULL);
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_82 = V_7;
		NullCheck(L_82);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_83 = RemoteVoiceLink_get_Info_m9ECF230B4BFCE619CFCB0A16E381DE5F76AE58C3_inline(L_82, /*hidden argument*/NULL);
		V_9 = L_83;
		RuntimeObject * L_84 = VoiceInfo_get_UserData_m4D90C9BD71ACC0C7703F74EA00DBEE1D53162A7A_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_9), /*hidden argument*/NULL);
		NullCheck(L_84);
		Type_t * L_85 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_84, /*hidden argument*/NULL);
		String_t* L_86 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral4AEC5D0A8B19CED88792A4A0C1E652F4023683E8, L_81, L_85, /*hidden argument*/NULL);
		G_B26_0 = L_86;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		G_B26_3 = G_B24_2;
		G_B26_4 = G_B24_3;
		G_B26_5 = G_B24_4;
		goto IL_021a;
	}

IL_0215:
	{
		G_B26_0 = _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
		G_B26_4 = G_B25_3;
		G_B26_5 = G_B25_4;
	}

IL_021a:
	{
		NullCheck(G_B26_2);
		ArrayElementTypeCheck (G_B26_2, G_B26_0);
		(G_B26_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B26_1), (RuntimeObject *)G_B26_0);
		NullCheck(G_B26_5);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(G_B26_5, G_B26_4, G_B26_3, /*hidden argument*/NULL);
		// if (remoteVoice.PlayerId == viewId / PhotonNetwork.MAX_VIEW_IDS)
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_87 = V_7;
		NullCheck(L_87);
		int32_t L_88 = RemoteVoiceLink_get_PlayerId_m68CC26AA3125322B184655320E2C39D30D6A90FB_inline(L_87, /*hidden argument*/NULL);
		int32_t L_89 = ___viewId1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		int32_t L_90 = ((PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var))->get_MAX_VIEW_IDS_3();
		V_14 = (bool)((((int32_t)L_88) == ((int32_t)((int32_t)((int32_t)L_89/(int32_t)L_90))))? 1 : 0);
		bool L_91 = V_14;
		if (!L_91)
		{
			goto IL_026e;
		}
	}
	{
		// this.Logger.LogWarning("Player with ActorNumber {0} has started recording (voice # {1}) too early without setting a ViewId maybe? (before PhotonVoiceView setup)", remoteVoice.PlayerId, remoteVoice.VoiceId);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_92 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_93 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_94 = L_93;
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_95 = V_7;
		NullCheck(L_95);
		int32_t L_96 = RemoteVoiceLink_get_PlayerId_m68CC26AA3125322B184655320E2C39D30D6A90FB_inline(L_95, /*hidden argument*/NULL);
		int32_t L_97 = L_96;
		RuntimeObject * L_98 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, L_98);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_98);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_99 = L_94;
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_100 = V_7;
		NullCheck(L_100);
		int32_t L_101 = RemoteVoiceLink_get_VoiceId_mAC05EB20C1243B5FE8EDF1400C80B2C9E4B832E3_inline(L_100, /*hidden argument*/NULL);
		int32_t L_102 = L_101;
		RuntimeObject * L_103 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_102);
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_103);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_103);
		NullCheck(L_92);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_92, _stringLiteralE06B7B9BEFC884CC7C8BD80369C5969E34A8B2BE, L_99, /*hidden argument*/NULL);
	}

IL_026e:
	{
	}

IL_026f:
	{
		// for (int i = 0; i < this.cachedRemoteVoices.Count; i++)
		int32_t L_104 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
	}

IL_0276:
	{
		// for (int i = 0; i < this.cachedRemoteVoices.Count; i++)
		int32_t L_105 = V_6;
		List_1_t079D9D616A50A6803E2B7A1A8BDBCC2AD36A3389 * L_106 = ((VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 *)__this)->get_cachedRemoteVoices_30();
		NullCheck(L_106);
		int32_t L_107 = List_1_get_Count_mC1125413603A2AE4190EF3FA864F4AF9F04076C3_inline(L_106, /*hidden argument*/List_1_get_Count_mC1125413603A2AE4190EF3FA864F4AF9F04076C3_RuntimeMethod_var);
		V_15 = (bool)((((int32_t)L_105) < ((int32_t)L_107))? 1 : 0);
		bool L_108 = V_15;
		if (L_108)
		{
			goto IL_00ef;
		}
	}

IL_028e:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork__ctor_m7272E5F9E75C472001001D60D370FDCF4B559623 (PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork__ctor_m7272E5F9E75C472001001D60D370FDCF4B559623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool AutoConnectAndJoin = true;
		__this->set_AutoConnectAndJoin_42((bool)1);
		// public bool AutoLeaveAndDisconnect = true;
		__this->set_AutoLeaveAndDisconnect_43((bool)1);
		// public bool AutoCreateSpeakerIfNotFound = true;
		__this->set_AutoCreateSpeakerIfNotFound_44((bool)1);
		// private EnterRoomParams voiceRoomParams = new EnterRoomParams
		// {
		//     RoomOptions = new RoomOptions { IsVisible = false }
		// };
		EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * L_0 = (EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 *)il2cpp_codegen_object_new(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942_il2cpp_TypeInfo_var);
		EnterRoomParams__ctor_m638D3DE29E010AE4D748F9C0663298AE2C5CD588(L_0, /*hidden argument*/NULL);
		EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * L_1 = L_0;
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_2 = (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 *)il2cpp_codegen_object_new(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906_il2cpp_TypeInfo_var);
		RoomOptions__ctor_m8FC01E8D41F044F50A44FD39E05A97CCB2560402(L_2, /*hidden argument*/NULL);
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_3 = L_2;
		NullCheck(L_3);
		RoomOptions_set_IsVisible_m2F7BE2025735A3647403DE003ED2ABC1632E254F(L_3, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_RoomOptions_1(L_3);
		__this->set_voiceRoomParams_45(L_1);
		// private bool usePunAppSettings = true;
		__this->set_usePunAppSettings_52((bool)1);
		VoiceConnection__ctor_mB7422AEC64FC334FCF3ED9D194E918E9F4460F99(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceNetwork::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceNetwork__cctor_mD69D24261AB42747A67AF2749B67FAAB4963997E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceNetwork__cctor_mD69D24261AB42747A67AF2749B67FAAB4963997E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static object instanceLock = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_StaticFields*)il2cpp_codegen_static_fields_for(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var))->set_instanceLock_49(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::get_RecorderInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * PhotonVoiceView_get_RecorderInUse_m5A5997E88ACC3A003A3AE6989CB654B436B52C61 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * V_0 = NULL;
	{
		// return this.recorderInUse;
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_0 = __this->get_recorderInUse_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_RecorderInUse(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_set_RecorderInUse_m298F4DFC08684E620AB4A060259192D8AB0F5D46 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_set_RecorderInUse_m298F4DFC08684E620AB4A060259192D8AB0F5D46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (value != this.recorderInUse)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_0 = ___value0;
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_1 = __this->get_recorderInUse_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// this.recorderInUse = value;
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_4 = ___value0;
		__this->set_recorderInUse_7(L_4);
		// this.IsRecorder = false;
		PhotonVoiceView_set_IsRecorder_m38C1A12E6FFFEB879414B883E50310BC0850018B_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (this.RequiresRecorder)
		bool L_5 = PhotonVoiceView_get_RequiresRecorder_mE4B1A998ACA63E613C1895F694E6275CDC913984(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// this.SetupRecorderInUse();
		PhotonVoiceView_SetupRecorderInUse_m5C225EC31F5AE63C451947A785A8F11EE05074B2(__this, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0037:
	{
		// else if (this.IsPhotonViewReady)
		bool L_7 = PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_9 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		// this.Logger.LogWarning("No need to set Recorder as the PhotonView does not belong to local player");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_12 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_12);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_12, _stringLiteralF43489200336B9A13299F94CF5DE179F7D5A24B7, L_13, /*hidden argument*/NULL);
	}

IL_0069:
	{
	}

IL_006a:
	{
		// }
		return;
	}
}
// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::get_SpeakerInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * PhotonVoiceView_get_SpeakerInUse_m477ECBA6ECBE3FDEEF166A82E9333FBE666E6FFF (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * V_0 = NULL;
	{
		// return this.speakerInUse;
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_0 = __this->get_speakerInUse_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_SpeakerInUse(Photon.Voice.Unity.Speaker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_set_SpeakerInUse_mBE93E3440BAFF4657D5033A8146F59A11B38CCE0 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_set_SpeakerInUse_mBE93E3440BAFF4657D5033A8146F59A11B38CCE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (this.speakerInUse != value)
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_0 = __this->get_speakerInUse_8();
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// this.speakerInUse = value;
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_4 = ___value0;
		__this->set_speakerInUse_8(L_4);
		// this.IsSpeaker = false;
		PhotonVoiceView_set_IsSpeaker_m969C31BC007280E6BE12E8FC73C7AEF4292EC611_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (this.RequiresSpeaker)
		bool L_5 = PhotonVoiceView_get_RequiresSpeaker_mCFA6B6AAC5C86DABD78D731C1120A55398C94B24(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// this.SetupSpeakerInUse();
		PhotonVoiceView_SetupSpeakerInUse_m91CB24ACF94FAC95E04CF3346CF5D600A7D77C0C(__this, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0037:
	{
		// else if (this.IsPhotonViewReady)
		bool L_7 = PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_9 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		// this.Logger.LogWarning("Speaker not set because the PhotonView does not belong to a remote player or SetupDebugSpeaker is disabled");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_12 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_12);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_12, _stringLiteral106FF8DF5BE6DEFDCC35263B30E15FCCF1814B9D, L_13, /*hidden argument*/NULL);
	}

IL_0069:
	{
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSetup_m9FAE2C6144760194C9134AA185A435FEFEDAE464 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// get { return this.IsPhotonViewReady && (!this.RequiresRecorder || this.IsRecorder) && (!this.RequiresSpeaker || this.IsSpeaker); }
		bool L_0 = PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		bool L_1 = PhotonVoiceView_get_RequiresRecorder_mE4B1A998ACA63E613C1895F694E6275CDC913984(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = PhotonVoiceView_get_IsRecorder_m2E58E80883887CE528A8800E7B9087BA5B326103_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}

IL_0019:
	{
		bool L_3 = PhotonVoiceView_get_RequiresSpeaker_mCFA6B6AAC5C86DABD78D731C1120A55398C94B24(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4 = PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E_inline(__this, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 1;
	}

IL_002a:
	{
		G_B8_0 = G_B6_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B8_0 = 0;
	}

IL_002d:
	{
		V_0 = (bool)G_B8_0;
		goto IL_0030;
	}

IL_0030:
	{
		// get { return this.IsPhotonViewReady && (!this.RequiresRecorder || this.IsRecorder) && (!this.RequiresSpeaker || this.IsSpeaker); }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsSpeaker { get; private set; }
		bool L_0 = __this->get_U3CIsSpeakerU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_IsSpeaker(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_set_IsSpeaker_m969C31BC007280E6BE12E8FC73C7AEF4292EC611 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsSpeaker { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsSpeakerU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSpeaking_mF47F4321F24C4076F7337D210D6186CBD92D58AB (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return this.IsSpeaker && this.SpeakerInUse.IsPlaying; }
		bool L_0 = PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_1 = PhotonVoiceView_get_SpeakerInUse_m477ECBA6ECBE3FDEEF166A82E9333FBE666E6FFF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Speaker_get_IsPlaying_m2AF235602F4265EEF2F918BE2BF4858C2E1611A7(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// get { return this.IsSpeaker && this.SpeakerInUse.IsPlaying; }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsRecorder_m2E58E80883887CE528A8800E7B9087BA5B326103 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecorder { get; private set; }
		bool L_0 = __this->get_U3CIsRecorderU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_IsRecorder(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_set_IsRecorder_m38C1A12E6FFFEB879414B883E50310BC0850018B (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRecorder { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRecorderU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsRecording_m718AA630C9E59D4858D93A48ACFEDF745607C16D (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return this.IsRecorder && this.RecorderInUse.IsCurrentlyTransmitting; }
		bool L_0 = PhotonVoiceView_get_IsRecorder_m2E58E80883887CE528A8800E7B9087BA5B326103_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_1 = PhotonVoiceView_get_RecorderInUse_m5A5997E88ACC3A003A3AE6989CB654B436B52C61(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Recorder_get_IsCurrentlyTransmitting_mB809FEA5C7F2CC8E3B6DC9190064DB671E49ABAC(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// get { return this.IsRecorder && this.RecorderInUse.IsCurrentlyTransmitting; }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSpeakerLinked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSpeakerLinked_m7FD2E3E76708007003A10E385C714EE80C53CD1A (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return this.IsSpeaker && this.SpeakerInUse.IsLinked; }
		bool L_0 = PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_1 = PhotonVoiceView_get_SpeakerInUse_m477ECBA6ECBE3FDEEF166A82E9333FBE666E6FFF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Speaker_get_IsLinked_m4BC59E12CEE6D7A7C262CDCEDCCFF17312B794C6(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// get { return this.IsSpeaker && this.SpeakerInUse.IsLinked; }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsPhotonViewReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// get { return this.photonView && this.photonView != null && this.photonView.ViewID > 0; }
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_0 = __this->get_photonView_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_2 = __this->get_photonView_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_4 = __this->get_photonView_6();
		NullCheck(L_4);
		int32_t L_5 = PhotonView_get_ViewID_mE4C08681C335C2D0D2A646266203888ADAC789FC(L_4, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 0;
	}

IL_002d:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0030;
	}

IL_0030:
	{
		// get { return this.photonView && this.photonView != null && this.photonView.ViewID > 0; }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_RequiresSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_RequiresSpeaker_mCFA6B6AAC5C86DABD78D731C1120A55398C94B24 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// get { return this.SetupDebugSpeaker || this.IsPhotonViewReady && !this.photonView.IsMine; }
		bool L_0 = __this->get_SetupDebugSpeaker_12();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_2 = __this->get_photonView_6();
		NullCheck(L_2);
		bool L_3 = PhotonView_get_IsMine_m14D0563B88BF1F65C639273A8E2C67D392EFC22C(L_2, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		G_B6_0 = G_B4_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B6_0 = 1;
	}

IL_0025:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0028;
	}

IL_0028:
	{
		// get { return this.SetupDebugSpeaker || this.IsPhotonViewReady && !this.photonView.IsMine; }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_RequiresRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_RequiresRecorder_mE4B1A998ACA63E613C1895F694E6275CDC913984 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return this.IsPhotonViewReady && this.photonView.IsMine; }
		bool L_0 = PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_1 = __this->get_photonView_6();
		NullCheck(L_1);
		bool L_2 = PhotonView_get_IsMine_m14D0563B88BF1F65C639273A8E2C67D392EFC22C(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// get { return this.IsPhotonViewReady && this.photonView.IsMine; }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Awake_mEF5E2630B53E80D89CDD718DC5A01D0033110401 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_Awake_mEF5E2630B53E80D89CDD718DC5A01D0033110401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.photonView = this.GetComponent<PhotonView>();
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_0 = Component_GetComponent_TisPhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B_m347A176252862D6CD26E7E6B5E9EAF8F4159273B(__this, /*hidden argument*/Component_GetComponent_TisPhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B_m347A176252862D6CD26E7E6B5E9EAF8F4159273B_RuntimeMethod_var);
		__this->set_photonView_6(L_0);
		// this.Init();
		PhotonVoiceView_Init_m9ECD445B6B7C5E3EB70F4BA71B2995105A9560C5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_OnEnable_m4E4E3A10D2F57E42F94C52863071A1BBCB93E452 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (this.onEnableCalledOnce)
		bool L_0 = __this->get_onEnableCalledOnce_9();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// this.Init();
		PhotonVoiceView_Init_m9ECD445B6B7C5E3EB70F4BA71B2995105A9560C5(__this, /*hidden argument*/NULL);
		goto IL_001f;
	}

IL_0016:
	{
		// this.onEnableCalledOnce = true;
		__this->set_onEnableCalledOnce_9((bool)1);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Start_m81E0D1D28860A671A4A4E3E5D9C03A46A1AC601B (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	{
		// this.Init();
		PhotonVoiceView_Init_m9ECD445B6B7C5E3EB70F4BA71B2995105A9560C5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::CheckLateLinking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_CheckLateLinking_m6D386CC4A35A1960E1FC24B478C6A83754D2E806 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_CheckLateLinking_m6D386CC4A35A1960E1FC24B478C6A83754D2E806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (PhotonVoiceNetwork.Instance.Client.InRoom)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_0 = PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3(/*hidden argument*/NULL);
		NullCheck(L_0);
		LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * L_1 = VoiceConnection_get_Client_m6AE93C104B6BAF7B2135E48181E742D6237BA8FE(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = LoadBalancingClient_get_InRoom_m47FE0AC9AF1700BF16CAA5B9EE8D0CD5950B3D22(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00a6;
		}
	}
	{
		// if (this.IsSpeaker)
		bool L_4 = PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E_inline(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007a;
		}
	}
	{
		// if (!this.IsSpeakerLinked)
		bool L_6 = PhotonVoiceView_get_IsSpeakerLinked_m7FD2E3E76708007003A10E385C714EE80C53CD1A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// PhotonVoiceNetwork.Instance.CheckLateLinking(this.SpeakerInUse, this.photonView.ViewID);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_8 = PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3(/*hidden argument*/NULL);
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_9 = PhotonVoiceView_get_SpeakerInUse_m477ECBA6ECBE3FDEEF166A82E9333FBE666E6FFF(__this, /*hidden argument*/NULL);
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_10 = __this->get_photonView_6();
		NullCheck(L_10);
		int32_t L_11 = PhotonView_get_ViewID_mE4C08681C335C2D0D2A646266203888ADAC789FC(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		PhotonVoiceNetwork_CheckLateLinking_mEB76F1C333AED46B23FE8653626C22827B28B6B2(L_8, L_9, L_11, /*hidden argument*/NULL);
		goto IL_0077;
	}

IL_0050:
	{
		// else if (this.Logger.IsDebugEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_12 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = VoiceLogger_get_IsDebugEnabled_m4FBAA521F35C9A718CD5273E78FF8C2864D79E39(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		// this.Logger.LogDebug("Speaker already linked");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_15 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_15);
		VoiceLogger_LogDebug_m2C660123D52589D951D53C4589CD8FBB5B26FD98(L_15, _stringLiteral566C5EFE968CCB8CE294612E9E45CE21DD0FA32C, L_16, /*hidden argument*/NULL);
	}

IL_0077:
	{
		goto IL_00a3;
	}

IL_007a:
	{
		// else if (this.Logger.IsDebugEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_17 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		bool L_18 = VoiceLogger_get_IsDebugEnabled_m4FBAA521F35C9A718CD5273E78FF8C2864D79E39(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		// this.Logger.LogDebug("PhotonVoiceView does not have a Speaker and may not need late linking check");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_20 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_20);
		VoiceLogger_LogDebug_m2C660123D52589D951D53C4589CD8FBB5B26FD98(L_20, _stringLiteralE0FE4E5682EF21449FDECD9E058FA50A26A835DD, L_21, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		goto IL_00cf;
	}

IL_00a6:
	{
		// else if (this.Logger.IsDebugEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_22 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = VoiceLogger_get_IsDebugEnabled_m4FBAA521F35C9A718CD5273E78FF8C2864D79E39(L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00cf;
		}
	}
	{
		// this.Logger.LogDebug("Voice client is still not in a room, skipping late linking check");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_25 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_25);
		VoiceLogger_LogDebug_m2C660123D52589D951D53C4589CD8FBB5B26FD98(L_25, _stringLiteral18216E1A6E00460B4ECBB733639D9C31F85E97A2, L_26, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Setup_m6680D9FF71196EBA50E56E3DB40B19B31B7C580E (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_Setup_m6680D9FF71196EBA50E56E3DB40B19B31B7C580E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.IsSetup)
		bool L_0 = PhotonVoiceView_get_IsSetup_m9FAE2C6144760194C9134AA185A435FEFEDAE464(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// if (this.Logger.IsDebugEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_2 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = VoiceLogger_get_IsDebugEnabled_m4FBAA521F35C9A718CD5273E78FF8C2864D79E39(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// this.Logger.LogDebug("PhotonVoiceView already setup");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_5 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_5);
		VoiceLogger_LogDebug_m2C660123D52589D951D53C4589CD8FBB5B26FD98(L_5, _stringLiteral5B503DD91722DF4ED702558A0E928CD3EE2337EA, L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// return;
		goto IL_0043;
	}

IL_0035:
	{
		// this.SetupRecorderInUse();
		PhotonVoiceView_SetupRecorderInUse_m5C225EC31F5AE63C451947A785A8F11EE05074B2(__this, /*hidden argument*/NULL);
		// this.SetupSpeakerInUse();
		PhotonVoiceView_SetupSpeakerInUse_m91CB24ACF94FAC95E04CF3346CF5D600A7D77C0C(__this, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_SetupRecorder_m64A4AC906B3F7284B1F081AAAC399B25053C8571 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_SetupRecorder_m64A4AC906B3F7284B1F081AAAC399B25053C8571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		// if (this.recorderInUse == null) // not manually assigned by user
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_0 = __this->get_recorderInUse_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00bd;
		}
	}
	{
		// if (this.UsePrimaryRecorder)
		bool L_3 = __this->get_UsePrimaryRecorder_11();
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// this.recorderInUse = PhotonVoiceNetwork.Instance.PrimaryRecorder;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_5 = PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3(/*hidden argument*/NULL);
		NullCheck(L_5);
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_6 = VoiceConnection_get_PrimaryRecorder_m5D15B0E7E79EA46DD5F565CA9F1EF0904F76CCE3(L_5, /*hidden argument*/NULL);
		__this->set_recorderInUse_7(L_6);
		goto IL_0082;
	}

IL_0033:
	{
		// Recorder[] recorders = this.GetComponentsInChildren<Recorder>();
		RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29* L_7 = Component_GetComponentsInChildren_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_mF71ACBC40EE042B1D052818BD12BA8EE9459D4F1(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_mF71ACBC40EE042B1D052818BD12BA8EE9459D4F1_RuntimeMethod_var);
		V_2 = L_7;
		// if (recorders.Length > 0)
		RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29* L_8 = V_2;
		NullCheck(L_8);
		V_3 = (bool)((!(((uint32_t)(((RuntimeArray*)L_8)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		// this.recorderInUse = recorders[0];
		RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = 0;
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_recorderInUse_7(L_12);
		// if (recorders.Length > 1 && this.Logger.IsWarningEnabled)
		RecorderU5BU5D_t4B391457D458F3FCE9FE31C97F8C5436C4EE9B29* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_14 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_14, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_15));
		goto IL_0062;
	}

IL_0061:
	{
		G_B7_0 = 0;
	}

IL_0062:
	{
		V_4 = (bool)G_B7_0;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0080;
		}
	}
	{
		// this.Logger.LogWarning("Multiple Recorder components found attached to the GameObject or its children");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_17 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_17);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_17, _stringLiteralBDDB3EE59AE867681A03D395EC30053BEA62A044, L_18, /*hidden argument*/NULL);
	}

IL_0080:
	{
	}

IL_0081:
	{
	}

IL_0082:
	{
		// if (this.recorderInUse == null)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_19 = __this->get_recorderInUse_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_20;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_00bc;
		}
	}
	{
		// if (!this.AutoCreateRecorderIfNotFound)
		bool L_22 = __this->get_AutoCreateRecorderIfNotFound_10();
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00aa;
		}
	}
	{
		// return false;
		V_7 = (bool)0;
		goto IL_00cd;
	}

IL_00aa:
	{
		// this.recorderInUse = this.gameObject.AddComponent<Recorder>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_25 = GameObject_AddComponent_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_m599EF283A21FB137CD672152EDB55633B7704CA0(L_24, /*hidden argument*/GameObject_AddComponent_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_m599EF283A21FB137CD672152EDB55633B7704CA0_RuntimeMethod_var);
		__this->set_recorderInUse_7(L_25);
	}

IL_00bc:
	{
	}

IL_00bd:
	{
		// return this.SetupRecorder(this.recorderInUse);
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_26 = __this->get_recorderInUse_7();
		bool L_27 = PhotonVoiceView_SetupRecorder_m6E91745AD3BAA9285FFE9CB1930C19FF3291F558(__this, L_26, /*hidden argument*/NULL);
		V_7 = L_27;
		goto IL_00cd;
	}

IL_00cd:
	{
		// }
		bool L_28 = V_7;
		return L_28;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupRecorder(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_SetupRecorder_m6E91745AD3BAA9285FFE9CB1930C19FF3291F558 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * ___recorder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_SetupRecorder_m6E91745AD3BAA9285FFE9CB1930C19FF3291F558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B16_0 = 0;
	{
		// if (recorder == null)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_0 = ___recorder0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_3 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// this.Logger.LogWarning("Cannot setup a null Recorder");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_6 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_6);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_6, _stringLiteral4A0D362DB2C6034DB3912361148E95FCE1C5FF49, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00fa;
	}

IL_003b:
	{
		// if (!this.IsPhotonViewReady)
		bool L_8 = PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_10 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// this.Logger.LogWarning("Recorder setup cannot be done before assigning a valid ViewID to the PhotonView attached to the same GameObject as the PhotonVoiceView");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_13 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_13);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_13, _stringLiteralEAA29156E21B1B4445B12199AF3B0B27F2D1F749, L_14, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00fa;
	}

IL_0079:
	{
		// recorder.UserData = this.photonView.ViewID;
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_15 = ___recorder0;
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_16 = __this->get_photonView_6();
		NullCheck(L_16);
		int32_t L_17 = PhotonView_get_ViewID_mE4C08681C335C2D0D2A646266203888ADAC789FC(L_16, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		Recorder_set_UserData_mAFB6DD6BCC5C7AB50117345F78929735618A8374(L_15, L_19, /*hidden argument*/NULL);
		// if (!recorder.IsInitialized)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_20 = ___recorder0;
		NullCheck(L_20);
		bool L_21 = Recorder_get_IsInitialized_mFF088ED93329B104A97B64746FC0EC874ACD206C(L_20, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00b2;
		}
	}
	{
		// this.RecorderInUse.Init(PhotonVoiceNetwork.Instance);
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_23 = PhotonVoiceView_get_RecorderInUse_m5A5997E88ACC3A003A3AE6989CB654B436B52C61(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_24 = PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3(/*hidden argument*/NULL);
		NullCheck(L_23);
		Recorder_Init_m6977AF538C502F823E4D9A89946A831919F7EDE9(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		// if (recorder.RequiresRestart)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_25 = ___recorder0;
		NullCheck(L_25);
		bool L_26 = Recorder_get_RequiresRestart_mE9CCBC77E36EF1ABC33EB9D226BC6ADDF3732369_inline(L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		// recorder.RestartRecording();
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_28 = ___recorder0;
		NullCheck(L_28);
		Recorder_RestartRecording_m6DFAD68017D659EA44248F220CC5B04DB7BACA68(L_28, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		// return recorder.IsInitialized && recorder.UserData is int && this.photonView.ViewID == (int) recorder.UserData;
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_29 = ___recorder0;
		NullCheck(L_29);
		bool L_30 = Recorder_get_IsInitialized_mFF088ED93329B104A97B64746FC0EC874ACD206C(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_31 = ___recorder0;
		NullCheck(L_31);
		RuntimeObject * L_32 = Recorder_get_UserData_m6B143EB8476A34856D416879906FCD26A1CBB1F6(L_31, /*hidden argument*/NULL);
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_32, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_00f6;
		}
	}
	{
		PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * L_33 = __this->get_photonView_6();
		NullCheck(L_33);
		int32_t L_34 = PhotonView_get_ViewID_mE4C08681C335C2D0D2A646266203888ADAC789FC(L_33, /*hidden argument*/NULL);
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_35 = ___recorder0;
		NullCheck(L_35);
		RuntimeObject * L_36 = Recorder_get_UserData_m6B143EB8476A34856D416879906FCD26A1CBB1F6(L_35, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_34) == ((int32_t)((*(int32_t*)((int32_t*)UnBox(L_36, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))))))? 1 : 0);
		goto IL_00f7;
	}

IL_00f6:
	{
		G_B16_0 = 0;
	}

IL_00f7:
	{
		V_2 = (bool)G_B16_0;
		goto IL_00fa;
	}

IL_00fa:
	{
		// }
		bool L_37 = V_2;
		return L_37;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_SetupSpeaker_m495EADEB42321564E855B3F0F4185FE810F910C8 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_SetupSpeaker_m495EADEB42321564E855B3F0F4185FE810F910C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * V_11 = NULL;
	int32_t G_B5_0 = 0;
	{
		// if (this.speakerInUse == null) // not manually assigned by user
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_0 = __this->get_speakerInUse_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_014d;
		}
	}
	{
		// Speaker[] speakers = this.GetComponentsInChildren<Speaker>();
		SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* L_3 = Component_GetComponentsInChildren_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_mFF5358493B5D0784AABB52FECC4998EE7B9243B1(__this, /*hidden argument*/Component_GetComponentsInChildren_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_mFF5358493B5D0784AABB52FECC4998EE7B9243B1_RuntimeMethod_var);
		V_1 = L_3;
		// if (speakers.Length > 0)
		SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* L_4 = V_1;
		NullCheck(L_4);
		V_2 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// this.speakerInUse = speakers[0];
		SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_speakerInUse_8(L_8);
		// if (speakers.Length > 1 && this.Logger.IsWarningEnabled)
		SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_10 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 0;
	}

IL_0043:
	{
		V_3 = (bool)G_B5_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		// this.Logger.LogWarning("Multiple Speaker components found attached to the GameObject or its children");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_13 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_13);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_13, _stringLiteralC5C56EDCC0F6D409B0636CB5961515F77CC2D628, L_14, /*hidden argument*/NULL);
	}

IL_005f:
	{
	}

IL_0060:
	{
		// if (this.speakerInUse == null)
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_15 = __this->get_speakerInUse_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_014c;
		}
	}
	{
		// if (!PhotonVoiceNetwork.Instance.AutoCreateSpeakerIfNotFound)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_18 = PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3(/*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19 = L_18->get_AutoCreateSpeakerIfNotFound_44();
		V_5 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0092;
		}
	}
	{
		// return false;
		V_6 = (bool)0;
		goto IL_015d;
	}

IL_0092:
	{
		// if (PhotonVoiceNetwork.Instance.SpeakerPrefab != null)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_21 = PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3(/*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = VoiceConnection_get_SpeakerPrefab_mA8891C7487CC50D0C6551994B43A77659C3C8DC2(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_22, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_011a;
		}
	}
	{
		// GameObject go = Instantiate(PhotonVoiceNetwork.Instance.SpeakerPrefab, this.transform, false);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4_il2cpp_TypeInfo_var);
		PhotonVoiceNetwork_t973F00F34504C815C8F80AD24025029DE65685F4 * L_25 = PhotonVoiceNetwork_get_Instance_m3F45BE85EE7D2F87B06636219EC39752B9ED2DA3(/*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = VoiceConnection_get_SpeakerPrefab_mA8891C7487CC50D0C6551994B43A77659C3C8DC2(L_25, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m06469FA3DADBD6D1062DF136967EC0376ECD5C6B(L_26, L_27, (bool)0, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m06469FA3DADBD6D1062DF136967EC0376ECD5C6B_RuntimeMethod_var);
		V_8 = L_28;
		// this.speakerInUse = go.GetComponentInChildren<Speaker>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = V_8;
		NullCheck(L_29);
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_30 = GameObject_GetComponentInChildren_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_m3C9C5137A0C2E201175D1F3B141AE027D82A52A3(L_29, /*hidden argument*/GameObject_GetComponentInChildren_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_m3C9C5137A0C2E201175D1F3B141AE027D82A52A3_RuntimeMethod_var);
		__this->set_speakerInUse_8(L_30);
		// if (this.speakerInUse == null)
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_31 = __this->get_speakerInUse_8();
		bool L_32 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_31, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_9 = L_32;
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_0117;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_34 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		bool L_35 = VoiceLogger_get_IsErrorEnabled_mE1C788CA0F7F1E83E5DD78B2E0DBAB56327CF0FC(L_34, /*hidden argument*/NULL);
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_010a;
		}
	}
	{
		// this.Logger.LogError("SpeakerPrefab does not have a component of type Speaker in its hierarchy.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_37 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_37);
		VoiceLogger_LogError_mFCC553A67022DD90473A0EC73CC74A3F16D7B9F1(L_37, _stringLiteral998856FDB6D0E7D835BFB6B0C158B9C9D6CFEA95, L_38, /*hidden argument*/NULL);
	}

IL_010a:
	{
		// Destroy(go);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_39, /*hidden argument*/NULL);
		// return false;
		V_6 = (bool)0;
		goto IL_015d;
	}

IL_0117:
	{
		goto IL_014b;
	}

IL_011a:
	{
		// this.speakerInUse = this.gameObject.AddComponent<Speaker>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_41 = GameObject_AddComponent_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_m5DF217C2F16F38A14739B8A7AED4435423F970C1(L_40, /*hidden argument*/GameObject_AddComponent_TisSpeaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00_m5DF217C2F16F38A14739B8A7AED4435423F970C1_RuntimeMethod_var);
		__this->set_speakerInUse_8(L_41);
		// AudioSource audioSource = this.speakerInUse.GetComponent<AudioSource>();
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_42 = __this->get_speakerInUse_8();
		NullCheck(L_42);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_43 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(L_42, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		V_11 = L_43;
		// audioSource.spatialBlend = 1.0f;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_44 = V_11;
		NullCheck(L_44);
		AudioSource_set_spatialBlend_mC144B8230F08743505D4B0A92C1B9F809BC6D9C5(L_44, (1.0f), /*hidden argument*/NULL);
		// return true;
		V_6 = (bool)1;
		goto IL_015d;
	}

IL_014b:
	{
	}

IL_014c:
	{
	}

IL_014d:
	{
		// return this.SetupSpeaker(this.speakerInUse);
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_45 = __this->get_speakerInUse_8();
		bool L_46 = PhotonVoiceView_SetupSpeaker_m9D79DCA700DDCC68C8D2C9E9E93FE72794A9E179(__this, L_45, /*hidden argument*/NULL);
		V_6 = L_46;
		goto IL_015d;
	}

IL_015d:
	{
		// }
		bool L_47 = V_6;
		return L_47;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::SetupSpeaker(Photon.Voice.Unity.Speaker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_SetupSpeaker_m9D79DCA700DDCC68C8D2C9E9E93FE72794A9E179 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * ___speaker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_SetupSpeaker_m9D79DCA700DDCC68C8D2C9E9E93FE72794A9E179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// if (speaker == null)
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_0 = ___speaker0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_3 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// this.Logger.LogWarning("Cannot setup a null Speaker");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_6 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_6);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_6, _stringLiteralC8B7C8DA88CCBCF65600EE6DC5C27F14DDB60D61, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0136;
	}

IL_003b:
	{
		// AudioSource audioSource = speaker.GetComponent<AudioSource>();
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_8 = ___speaker0;
		NullCheck(L_8);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_9 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(L_8, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		V_0 = L_9;
		// if (audioSource == null)
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_13 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0079;
		}
	}
	{
		// this.Logger.LogWarning("Unexpected: no AudioSource found attached to the same GameObject as the Speaker component");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_16 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_16);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_16, _stringLiteralDB819AFE4EEEA32F24C0F7987DE297C387F889A5, L_17, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0136;
	}

IL_0080:
	{
		// if (audioSource.mute)
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_18 = V_0;
		NullCheck(L_18);
		bool L_19 = AudioSource_get_mute_mC420E7827CA751603A85430D849E8C3099FBD123(L_18, /*hidden argument*/NULL);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00b7;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_21 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_21, /*hidden argument*/NULL);
		V_7 = L_22;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00b6;
		}
	}
	{
		// this.Logger.LogWarning("audioSource.mute is true, playback may not work properly");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_24 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_24);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_24, _stringLiteralAC6245040DDDB79C89627649385DF638418FE097, L_25, /*hidden argument*/NULL);
	}

IL_00b6:
	{
	}

IL_00b7:
	{
		// if (audioSource.volume <= 0f)
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_26 = V_0;
		NullCheck(L_26);
		float L_27 = AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0(L_26, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((!(((float)L_27) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00f8;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_29 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_29, /*hidden argument*/NULL);
		V_9 = L_30;
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_00f7;
		}
	}
	{
		// this.Logger.LogWarning("audioSource.volume is zero, playback may not work properly");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_32 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_32);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_32, _stringLiteral21CCFE9ABBE9D120348ECB78B7691CCD47E95122, L_33, /*hidden argument*/NULL);
	}

IL_00f7:
	{
	}

IL_00f8:
	{
		// if (!audioSource.enabled)
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_34 = V_0;
		NullCheck(L_34);
		bool L_35 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_34, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_0132;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_37 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		bool L_38 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_37, /*hidden argument*/NULL);
		V_11 = L_38;
		bool L_39 = V_11;
		if (!L_39)
		{
			goto IL_0131;
		}
	}
	{
		// this.Logger.LogWarning("audioSource.enabled is false, playback may not work properly");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_40 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_40);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_40, _stringLiteral06AEC3D9BEA47D5D92E42D1EF19294AD1A8F1905, L_41, /*hidden argument*/NULL);
	}

IL_0131:
	{
	}

IL_0132:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0136;
	}

IL_0136:
	{
		// }
		bool L_42 = V_3;
		return L_42;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupRecorderInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupRecorderInUse_m5C225EC31F5AE63C451947A785A8F11EE05074B2 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_SetupRecorderInUse_m5C225EC31F5AE63C451947A785A8F11EE05074B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B17_0 = 0;
	int32_t G_B28_0 = 0;
	{
		// if (this.IsRecorder)
		bool L_0 = PhotonVoiceView_get_IsRecorder_m2E58E80883887CE528A8800E7B9087BA5B326103_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_2 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// this.Logger.LogWarning("Recorder already setup");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_5 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_5);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_5, _stringLiteral65B5E1AE8CE0BF9D80E544ED193A29F8A6A44B7D, L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// return;
		goto IL_01a8;
	}

IL_0038:
	{
		// if (!this.RequiresRecorder)
		bool L_7 = PhotonVoiceView_get_RequiresRecorder_mE4B1A998ACA63E613C1895F694E6275CDC913984(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0080;
		}
	}
	{
		// if (this.IsPhotonViewReady)
		bool L_9 = PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087(__this, /*hidden argument*/NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_007b;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_11 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		// this.Logger.LogWarning("Recorder not needed");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_14 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_14);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_14, _stringLiteral309623DDE35C26EA5DE6AD7667A8844FB7CAE5AD, L_15, /*hidden argument*/NULL);
	}

IL_007a:
	{
	}

IL_007b:
	{
		// return;
		goto IL_01a8;
	}

IL_0080:
	{
		// this.IsRecorder = this.SetupRecorder();
		bool L_16 = PhotonVoiceView_SetupRecorder_m64A4AC906B3F7284B1F081AAAC399B25053C8571(__this, /*hidden argument*/NULL);
		PhotonVoiceView_set_IsRecorder_m38C1A12E6FFFEB879414B883E50310BC0850018B_inline(__this, L_16, /*hidden argument*/NULL);
		// if (!this.IsRecorder)
		bool L_17 = PhotonVoiceView_get_IsRecorder_m2E58E80883887CE528A8800E7B9087BA5B326103_inline(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00cc;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_19 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00c6;
		}
	}
	{
		// this.Logger.LogWarning("Recorder not setup for PhotonVoiceView: playback may not work properly.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_22 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_22);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_22, _stringLiteralB7B95F3541119DF8EA2776778EE25DB82EAA62D7, L_23, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		goto IL_01a8;
	}

IL_00cc:
	{
		// if (!this.RecorderInUse.IsRecording && !this.RecorderInUse.AutoStart)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_24 = PhotonVoiceView_get_RecorderInUse_m5A5997E88ACC3A003A3AE6989CB654B436B52C61(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25 = Recorder_get_IsRecording_m17A2BAD89E40C179B77D8A347D9800EC9F9F6841(L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00ea;
		}
	}
	{
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_26 = PhotonVoiceView_get_RecorderInUse_m5A5997E88ACC3A003A3AE6989CB654B436B52C61(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_27 = Recorder_get_AutoStart_m6745F71B94880A4F6B6FCFFC52A70D7D70592C6D(L_26, /*hidden argument*/NULL);
		G_B17_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B17_0 = 0;
	}

IL_00eb:
	{
		V_7 = (bool)G_B17_0;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_011c;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_29 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_011b;
		}
	}
	{
		// this.Logger.LogWarning("PhotonVoiceView.RecorderInUse.AutoStart is false, don't forget to start recording manually using recorder.StartRecording() or recorder.IsRecording = true.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_32 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_32);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_32, _stringLiteral5334A4986B4101A55ECE89D20B7565FA13E41080, L_33, /*hidden argument*/NULL);
	}

IL_011b:
	{
	}

IL_011c:
	{
		// if (!this.RecorderInUse.TransmitEnabled)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_34 = PhotonVoiceView_get_RecorderInUse_m5A5997E88ACC3A003A3AE6989CB654B436B52C61(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		bool L_35 = Recorder_get_TransmitEnabled_m3109C22920F231F2B1FDA0CADDF4BB7379EA77B7(L_34, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_015b;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_37 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		bool L_38 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_37, /*hidden argument*/NULL);
		V_10 = L_38;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_015a;
		}
	}
	{
		// this.Logger.LogWarning("PhotonVoiceView.RecorderInUse.TransmitEnabled is false, don't forget to set it to true to enable transmission.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_40 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_40);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_40, _stringLiteralB37FFF908125130F56A56D1974666976BC2AFBF7, L_41, /*hidden argument*/NULL);
	}

IL_015a:
	{
	}

IL_015b:
	{
		// if (!this.RecorderInUse.isActiveAndEnabled && this.RecorderInUse.RecordOnlyWhenEnabled)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_42 = PhotonVoiceView_get_RecorderInUse_m5A5997E88ACC3A003A3AE6989CB654B436B52C61(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		bool L_43 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_0175;
		}
	}
	{
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_44 = PhotonVoiceView_get_RecorderInUse_m5A5997E88ACC3A003A3AE6989CB654B436B52C61(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		bool L_45 = Recorder_get_RecordOnlyWhenEnabled_m7F1AE322C5017F0EE5076EFF0DCCC0902ED401C0(L_44, /*hidden argument*/NULL);
		G_B28_0 = ((int32_t)(L_45));
		goto IL_0176;
	}

IL_0175:
	{
		G_B28_0 = 0;
	}

IL_0176:
	{
		V_11 = (bool)G_B28_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_01a7;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_47 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		bool L_48 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_47, /*hidden argument*/NULL);
		V_12 = L_48;
		bool L_49 = V_12;
		if (!L_49)
		{
			goto IL_01a6;
		}
	}
	{
		// this.Logger.LogWarning("PhotonVoiceView.RecorderInUse may not work properly as RecordOnlyWhenEnabled is set to true and recorder is disabled or attached to an inactive GameObject.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_50 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_51 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_50);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_50, _stringLiteral7FAA8C2CFC660379AA1B01E30147EED55E7A2C17, L_51, /*hidden argument*/NULL);
	}

IL_01a6:
	{
	}

IL_01a7:
	{
	}

IL_01a8:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupSpeakerInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupSpeakerInUse_m91CB24ACF94FAC95E04CF3346CF5D600A7D77C0C (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_SetupSpeakerInUse_m91CB24ACF94FAC95E04CF3346CF5D600A7D77C0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (this.IsSpeaker)
		bool L_0 = PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_2 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// this.Logger.LogWarning("Speaker already setup");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_5 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_5);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_5, _stringLiteral73E6E9D670A048F2E14DD5988DFFAD1B20FF648C, L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// return;
		goto IL_00cf;
	}

IL_0038:
	{
		// if (!this.RequiresSpeaker)
		bool L_7 = PhotonVoiceView_get_RequiresSpeaker_mCFA6B6AAC5C86DABD78D731C1120A55398C94B24(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_007d;
		}
	}
	{
		// if (this.IsPhotonViewReady)
		bool L_9 = PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087(__this, /*hidden argument*/NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_007b;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_11 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		// this.Logger.LogWarning("Speaker not needed");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_14 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_14);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_14, _stringLiteralDCBC25AC6B1BA95AF40AD31A2D8B7B2B4DC71594, L_15, /*hidden argument*/NULL);
	}

IL_007a:
	{
	}

IL_007b:
	{
		// return;
		goto IL_00cf;
	}

IL_007d:
	{
		// this.IsSpeaker = this.SetupSpeaker();
		bool L_16 = PhotonVoiceView_SetupSpeaker_m495EADEB42321564E855B3F0F4185FE810F910C8(__this, /*hidden argument*/NULL);
		PhotonVoiceView_set_IsSpeaker_m969C31BC007280E6BE12E8FC73C7AEF4292EC611_inline(__this, L_16, /*hidden argument*/NULL);
		// if (!this.IsSpeaker)
		bool L_17 = PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E_inline(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00c6;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_19 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20 = VoiceLogger_get_IsWarningEnabled_m33ACA9F1E288F52FF2B5C7E3860B42C13B480735(L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00c3;
		}
	}
	{
		// this.Logger.LogWarning("Speaker not setup for PhotonVoiceView: voice chat will not work.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_22 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_22);
		VoiceLogger_LogWarning_mFAE736BBC5FB1969345B92686A5DECA3DF3AEC84(L_22, _stringLiteral3F8535D86296716D9653082C2F2EE83FFCA98C1D, L_23, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		goto IL_00cf;
	}

IL_00c6:
	{
		// this.CheckLateLinking();
		PhotonVoiceView_CheckLateLinking_m6D386CC4A35A1960E1FC24B478C6A83754D2E806(__this, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Init_m9ECD445B6B7C5E3EB70F4BA71B2995105A9560C5 (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhotonVoiceView_Init_m9ECD445B6B7C5E3EB70F4BA71B2995105A9560C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.IsPhotonViewReady)
		bool L_0 = PhotonVoiceView_get_IsPhotonViewReady_m3E335C62755EADBC72D6696ABE72A6BD471EC087(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// this.Setup();
		PhotonVoiceView_Setup_m6680D9FF71196EBA50E56E3DB40B19B31B7C580E(__this, /*hidden argument*/NULL);
		// this.CheckLateLinking();
		PhotonVoiceView_CheckLateLinking_m6D386CC4A35A1960E1FC24B478C6A83754D2E806(__this, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_001d:
	{
		// else if (this.Logger.IsDebugEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_2 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = VoiceLogger_get_IsDebugEnabled_m4FBAA521F35C9A718CD5273E78FF8C2864D79E39(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// this.Logger.LogDebug("Tried to initialize PhotonVoiceView but PhotonView does not have a valid allocated ViewID yet.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_5 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_5);
		VoiceLogger_LogDebug_m2C660123D52589D951D53C4589CD8FBB5B26FD98(L_5, _stringLiteral8E530B927252616AD302E5C5767BAC31BC4B2CA4, L_6, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView__ctor_mB308478D9A0E0C0599AC7A162EE2493291A2A22D (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	{
		VoiceComponent__ctor_mC69EAADF27D14F74267C4F492E121C3589E8C72A(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_DisconnectedCause_mEC001DE2A4D9E6BC4A364D7F3039EDF72DF395B2_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public DisconnectCause DisconnectedCause { get; protected set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSpeaker_m9D952186387806C50BBC90F3C30A7FD2D1A05B5E_inline (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsSpeaker { get; private set; }
		bool L_0 = __this->get_U3CIsSpeakerU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_0 = __this->get_U3CCurrentRoomU3Ek__BackingField_31();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  RemoteVoiceLink_get_Info_m9ECF230B4BFCE619CFCB0A16E381DE5F76AE58C3_inline (RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * __this, const RuntimeMethod* method)
{
	{
		// public VoiceInfo Info { get; private set; }
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_0 = __this->get_U3CInfoU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * VoiceInfo_get_UserData_m4D90C9BD71ACC0C7703F74EA00DBEE1D53162A7A_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public object UserData { get; set; }
		RuntimeObject * L_0 = __this->get_U3CUserDataU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_PlayerId_m68CC26AA3125322B184655320E2C39D30D6A90FB_inline (RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerId { get; private set; }
		int32_t L_0 = __this->get_U3CPlayerIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RemoteVoiceLink_get_VoiceId_mAC05EB20C1243B5FE8EDF1400C80B2C9E4B832E3_inline (RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * __this, const RuntimeMethod* method)
{
	{
		// public int VoiceId { get; private set; }
		int32_t L_0 = __this->get_U3CVoiceIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonVoiceView_set_IsRecorder_m38C1A12E6FFFEB879414B883E50310BC0850018B_inline (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRecorder { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRecorderU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonVoiceView_set_IsSpeaker_m969C31BC007280E6BE12E8FC73C7AEF4292EC611_inline (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsSpeaker { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsSpeakerU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsRecorder_m2E58E80883887CE528A8800E7B9087BA5B326103_inline (PhotonVoiceView_t2560EE4CEABAFA92400C66670F2A4DC83AE1E073 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecorder { get; private set; }
		bool L_0 = __this->get_U3CIsRecorderU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Recorder_get_RequiresRestart_mE9CCBC77E36EF1ABC33EB9D226BC6ADDF3732369_inline (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequiresRestart { get; protected set; }
		bool L_0 = __this->get_U3CRequiresRestartU3Ek__BackingField_38();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}

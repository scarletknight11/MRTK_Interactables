#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A_RuntimeMethod_var;
extern const RuntimeMethod* ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52_RuntimeMethod_var;
extern const RuntimeMethod* PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04_RuntimeMethod_var;
extern const RuntimeMethod* PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538_RuntimeMethod_var;
extern const RuntimeMethod* PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413 (void);
// 0x00000002 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8 (void);
// 0x00000003 System.UInt64 Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertHandleToCookie(System.IntPtr)
extern void ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502 (void);
// 0x00000004 System.IntPtr Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertCookieToHandle(System.UInt64)
extern void ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C (void);
// 0x00000005 System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie()
// 0x00000006 System.Void Microsoft.Azure.ObjectAnchors.IReferenceCounted::DecreaseReferenceCount()
// 0x00000007 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::AddEventHandler(System.UInt64,System.String,T)
// 0x00000008 System.Boolean Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::RemoveEventHandler(System.UInt64,System.String,T)
// 0x00000009 T Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetEventHandler(System.UInt64,System.String)
// 0x0000000A System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::Clear(System.UInt64)
extern void ProjectedObjectEventHandlerCache_Clear_mD977A00FF1AC25F04A8C99FA6B472C4E5FC069E0 (void);
// 0x0000000B System.Collections.Generic.IDictionary`2<System.String,System.Delegate> Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetOrInitializeEvents(System.UInt64)
extern void ProjectedObjectEventHandlerCache_GetOrInitializeEvents_m7EF4288C45F8767B89B7D7E29CA80176A7AFAEC7 (void);
// 0x0000000C System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::.cctor()
extern void ProjectedObjectEventHandlerCache__cctor_mDC38F3C4BC3C2BEC03B536B8E60AAA0EE66768A6 (void);
// 0x0000000D System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::.cctor()
extern void ProjectedObjectCache__cctor_m764ACEAE7CBBCC107AB15239EFDFF87BAADC3BB7 (void);
// 0x0000000E System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Add(Microsoft.Azure.ObjectAnchors.ICachedObject)
extern void ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42 (void);
// 0x0000000F T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate(System.UInt64,System.Func`2<System.UInt64,T>)
// 0x00000010 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Remove(System.UInt64)
extern void ProjectedObjectCache_Remove_mC9F1C7A3512B17B749D38B863B9C2B2A44527243 (void);
// 0x00000011 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::ProjectedObjectCleanupHandler(System.IntPtr)
extern void ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52 (void);
// 0x00000012 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative__ctor_mAC1EAA2DBC650998CE9422E1A699C7761327CB76 (void);
// 0x00000013 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::Invoke(System.UInt64,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5 (void);
// 0x00000014 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::.ctor(System.Object,System.IntPtr)
extern void ProjectedObjectCleanupNative__ctor_m83373B05236846D92DCA22C157AB32F95AF7784A (void);
// 0x00000015 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::Invoke(System.IntPtr)
extern void ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A (void);
// 0x00000016 System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCreate(Microsoft.Azure.ObjectAnchors.PromiseCreateOptions&,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle&)
extern void NativeLibrary_PromiseCreate_m8593C3A02B6779E944AF8963A4FF50EB315E8752 (void);
// 0x00000017 System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCancel(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_PromiseCancel_mE7B4745D3BD81D29885C3560C52A4F810AD1102F (void);
// 0x00000018 System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseDestroy(System.IntPtr)
extern void NativeLibrary_PromiseDestroy_m31F1EC010862774B326F43687DE1448065D776AE (void);
// 0x00000019 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_create_guid_account_id_string_account_key_string_account_domain(System.Guid,System.String,System.String,System.IntPtr&)
extern void NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_mCE1E4F15A4CD31616E2223E073A1ED791E6F66D6 (void);
// 0x0000001A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_release(System.IntPtr)
extern void NativeLibrary_aoa_account_information_release_m0FD4F1D4102DE753F632CC3ABB463DB71FC856B6 (void);
// 0x0000001B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_get_error_details(System.IntPtr,System.String&,System.String&,System.String&)
extern void NativeLibrary_aoa_get_error_details_mDB6005415D7C6E5BA815A36346CD66CD404F047E (void);
// 0x0000001C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_account_information_account_information(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m84826BA72FAA6171FE800E167C3E65657F0ADFE1 (void);
// 0x0000001D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_object_observer(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_object_observer_m6CA8E154CF1FC8FE0CEEC23508563CCFA9AF1005 (void);
// 0x0000001E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_anchors_session_release_m75A9936B2D2D7BD99EC182310DC5E7E2B7108153 (void);
// 0x0000001F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_addref_m62FEEF7CDF1629ECDA3DD270011D1716ECDA2AF0 (void);
// 0x00000020 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_addref_m1A75869E3F8D665F4CFDAC6F02E1CCA4009F52FB (void);
// 0x00000021 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_release_m4CAD47B4C09C7E7DC61CA25AAFACD2923776CC4D (void);
// 0x00000022 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_dispose_m34FDE1A7311ACFE0B12CF204CC69378B85FA9E57 (void);
// 0x00000023 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode&)
extern void NativeLibrary_aoa_object_instance_get_mode_m3816517887E73CCED77FC2B171FA20C332C338C9 (void);
// 0x00000024 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_model_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_instance_get_model_id_mC481768872DEBD327EA9F6CE4802123A944EEE6B (void);
// 0x00000025 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_release_mC5E8CEF6C36F776245F6687124F10A0DFA534068 (void);
// 0x00000026 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_changed(System.IntPtr,System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative)
extern void NativeLibrary_aoa_object_instance_set_changed_mFAE6F8699161276829375885BAAF6AD2828F0C4E (void);
// 0x00000027 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void NativeLibrary_aoa_object_instance_set_mode_m0F604051EE7BF1F2A6626E0C3B2DEAA7CDD67DA7 (void);
// 0x00000028 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_state_addref_mE66712A3C1558B6CF02BC006FC6C441F5E4A6F74 (void);
// 0x00000029 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_center(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation&)
extern void NativeLibrary_aoa_object_instance_state_get_center_mC377F02A8728E39D4B9F2B2B2535DD9210A7F0AD (void);
// 0x0000002A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_last_updated_time(System.IntPtr,System.Int64&)
extern void NativeLibrary_aoa_object_instance_state_get_last_updated_time_mD7323F01B96EF6A0BFF7D0A53791A2BE2DA84FAC (void);
// 0x0000002B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_scale_change(System.IntPtr,System.Numerics.Vector3&)
extern void NativeLibrary_aoa_object_instance_state_get_scale_change_mDD853F393BFDB8D6F94A4EC23B4CA074A3C616C2 (void);
// 0x0000002C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_surface_coverage(System.IntPtr,System.Single&)
extern void NativeLibrary_aoa_object_instance_state_get_surface_coverage_mCD8C0A7576A08137BF9621E54CA9CC3531CE9A98 (void);
// 0x0000002D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_state_release_m7012960A6C1B5D79822BE66ACA08F1B686BFB13C (void);
// 0x0000002E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_try_create_placement(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,System.IntPtr&)
extern void NativeLibrary_aoa_object_instance_state_try_create_placement_m5D2D326A3C17C98BED129373849D22700BDC9026 (void);
// 0x0000002F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_try_get_current_state(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_instance_try_get_current_state_m719D10D455BFF484ABF73F17AF9F894DEE286ED9 (void);
// 0x00000030 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_model_addref_m7ED9667367B396143BA9F997C10CCCB214FE1267 (void);
// 0x00000031 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_model_dispose_mECE71BBBE8DB7BDADDB568CC00283448F86B1197 (void);
// 0x00000032 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_bounding_box(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox&)
extern void NativeLibrary_aoa_object_model_get_bounding_box_m13A4D6D293A567F11CEC835C6835C1D27EE2069A (void);
// 0x00000033 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_model_get_id_m863EE16F2E2D4A7D400F621C4109F59C23912B8A (void);
// 0x00000034 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_origin_to_center_transform(System.IntPtr,System.Numerics.Matrix4x4&)
extern void NativeLibrary_aoa_object_model_get_origin_to_center_transform_m1D36E22AC2AED88DDD1675580DC89B15949C3078 (void);
// 0x00000035 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_index_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_triangle_index_count_m6E9CB072C4E8EEDA1E89FE3CAAEE2E696E8108D4 (void);
// 0x00000036 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_indices(System.IntPtr,System.UInt32[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_triangle_indices_m3BB460D4B5EF1BA4E6A90F541F3085837570276E (void);
// 0x00000037 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_vertex_count_mC547894FF1FA6977ACF65BA3CC57998168FF2E8C (void);
// 0x00000038 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_normals(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_normals_m8B96F0ADDA83331626681729B08AE4FA86DDD455 (void);
// 0x00000039 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_positions(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_positions_m5F0ED96A2A7AE8B8006075FB3F66F4D315824F53 (void);
// 0x0000003A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_release(System.IntPtr)
extern void NativeLibrary_aoa_object_model_release_m2D680F2CDFA8370FD50A851A2B4731B6F5F6C91C (void);
// 0x0000003B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_addref_m57DFE16660F9016520034B74F16D355F162A258D (void);
// 0x0000003C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_detect_async_queries(System.IntPtr,System.IntPtr[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_observer_detect_async_queries_m1B292487BD51D39402396E686344C0D93B99569C (void);
// 0x0000003D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_dispose_m0194881EB4DF511F5B3BDD5FA3840983FB16B8B7 (void);
// 0x0000003E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_is_supported(System.Boolean&)
extern void NativeLibrary_aoa_object_observer_is_supported_m473C73622C54D56858E7007CEC01FADD90C28CD9 (void);
// 0x0000003F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_load_object_model_async(System.IntPtr,System.Byte[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_observer_load_object_model_async_m3B2C767C2D16C261EC85EBA20EEF182B63B22D5B (void);
// 0x00000040 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_release(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_release_mBD9171A46D1E52BA9A54A22D8774429AD31C243C (void);
// 0x00000041 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_request_access_async(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_observer_request_access_async_mE4E9B78DB51AC66CFF39495502C2E71D59E80C04 (void);
// 0x00000042 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_m3B988FA265ABD9C5F2AF1CE8BA3920B492BEB02A (void);
// 0x00000043 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model_object_observation_mode_observation_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectObservationMode,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_m549793C8DA150FA759D6B6CA547EFA83D6B61203 (void);
// 0x00000044 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_query_dispose_m7D51D2B682C08D212D19602D517D829874CFB075 (void);
// 0x00000045 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_release(System.IntPtr)
extern void NativeLibrary_aoa_object_query_release_m918F3FEE1860316B5C5C059406B3048DA88EF8BC (void);
// 0x00000046 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_set_projected_object_cleanup(Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative)
extern void NativeLibrary_aoa_set_projected_object_cleanup_mDB1445F204E9BCFAE519456EB94468086731F4EC (void);
// 0x00000047 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandler__ctor_m618157E05034AC02CA5A85EDDB510F8827986F19 (void);
// 0x00000048 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::Invoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs)
extern void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4 (void);
// 0x00000049 System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void AccountInformation_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE6819C69C5B79BC0A398703896C5C629A67FA016 (void);
// 0x0000004A System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::.ctor(System.Guid,System.String,System.String)
extern void AccountInformation__ctor_mAE7D3A92A8D49265D359418B8FB937DF1B0FB83B (void);
// 0x0000004B System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Finalize()
extern void AccountInformation_Finalize_m3B9A494282334E57EDD40BB1B49DA42FF60559FE (void);
// 0x0000004C System.UInt64 Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m2DFA469EC9E960A98B850089429F348AC179D3FF (void);
// 0x0000004D System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mEF46F3CC29F48A747501659CD5A754AB959CBE4F (void);
// 0x0000004E System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::.ctor(Microsoft.Azure.ObjectAnchors.AccountInformation)
extern void ObjectAnchorsSession__ctor_mE617C1F564FB90CA51764C5A938066BA9BD8AE92 (void);
// 0x0000004F System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Finalize()
extern void ObjectAnchorsSession_Finalize_m35AEEBBAC039376F172532821EE35141E462B2F5 (void);
// 0x00000050 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::CreateObjectObserver()
extern void ObjectAnchorsSession_CreateObjectObserver_m15F64098164B463468752A3F1530F03D1735DDB8 (void);
// 0x00000051 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mBB5611B713CD5A071908F84211D2CB6CCD2C8FC4 (void);
// 0x00000052 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs__ctor_mE5AC62BF85E233EEEE135E37CB6FB43530A54464 (void);
// 0x00000053 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE817A63216155066F5DAA1F430AE6D4C9E3C2B7B (void);
// 0x00000054 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Finalize()
extern void ObjectInstanceChangedEventArgs_Finalize_m2954F2098CE7558EA62B1DFFA884E29C83313E60 (void);
// 0x00000055 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m121E073D4344C71B158E4B1EC8B873AC4DA57B9A (void);
// 0x00000056 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_mC17D992315543E1871CA7895B24DAD70D30F7114 (void);
// 0x00000057 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_m836F457EE3340E6865AD3EDBCB33D1A88A9B345D (void);
// 0x00000058 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m5C58331BE3B22EF148128473CB8DADBC53B6789C (void);
// 0x00000059 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_m3165AD48C8CDAF4BF62D17CB471B66E091FCDC9F (void);
// 0x0000005A System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstance__ctor_m18DC843C177ECEB1ACC205C3EDB2BB70D0DD978B (void);
// 0x0000005B System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectInstance_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m19CDF2488DD01A26E5EBC8EED1FF3B4C4E8D4C87 (void);
// 0x0000005C System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Finalize()
extern void ObjectInstance_Finalize_mE132979D1A0A58908AAD3F73F7BF8B270BE912B4 (void);
// 0x0000005D System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Dispose()
extern void ObjectInstance_Dispose_m76B9D7C6DB21564F13A4900E08655B95949D7631 (void);
// 0x0000005E System.Guid Microsoft.Azure.ObjectAnchors.ObjectInstance::get_ModelId()
extern void ObjectInstance_get_ModelId_m4FE3DCF93149B9D207AAB0B8F082293BE156D52F (void);
// 0x0000005F Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode Microsoft.Azure.ObjectAnchors.ObjectInstance::get_Mode()
extern void ObjectInstance_get_Mode_m782647FCC1F475E18B6A5FA55786E2EF3936FAD0 (void);
// 0x00000060 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::set_Mode(Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void ObjectInstance_set_Mode_mF0F6C3568DB96EFA8A56AFA716236294D245AE45 (void);
// 0x00000061 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::ChangedStaticHandler(System.UInt64,System.IntPtr)
extern void ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A (void);
// 0x00000062 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::add_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_add_Changed_m6BF9396FAD42A4EEDE357DA0AE13DD68710DE63F (void);
// 0x00000063 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::remove_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_remove_Changed_m221FFA5E62D6D4C7E10FA8B3D7DEF527857FE64E (void);
// 0x00000064 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstance::TryGetCurrentState()
extern void ObjectInstance_TryGetCurrentState_mD9695341F94849EB06C05482C26D904F73D644D6 (void);
// 0x00000065 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mAA85C127263135D4BE22426DCE9F0A728DA61884 (void);
// 0x00000066 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_mB079510528C2F87336C6FEAB20B13B38D4F57291 (void);
// 0x00000067 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_mDFF0FFA53C7FCBEC50B2BEF4D2B1BBF1018B9D2A (void);
// 0x00000068 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.cctor()
extern void ObjectInstance__cctor_mA76D22DD6275F69DAE8C3488BA74EC3671F66695 (void);
// 0x00000069 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::.ctor()
extern void U3CU3Ec__DisplayClass20_0__ctor_m6E60DD6C5407C0972664A1D9464E6F5A9E1518BF (void);
// 0x0000006A Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m460F8EEAD7B7383BD77A2C95378419769A277DAF (void);
// 0x0000006B System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstanceState__ctor_m426B2657F74AE65D16E0C1E0A0CAF30E12C7A699 (void);
// 0x0000006C System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectInstanceState_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mBBA5D3F1F7FED292D33FA650EA4D7882CDDC9660 (void);
// 0x0000006D System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Finalize()
extern void ObjectInstanceState_Finalize_m0978365620BDD3E19A69090FA071A37F8FE7EDFB (void);
// 0x0000006E System.DateTimeOffset Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_LastUpdatedTime()
extern void ObjectInstanceState_get_LastUpdatedTime_m1636B1CEF4902218403F77E6C7B07F8EA14616AC (void);
// 0x0000006F System.Single Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_SurfaceCoverage()
extern void ObjectInstanceState_get_SurfaceCoverage_m8C9A36B96E27FE0675E5E5D8C7624C031C7BA089 (void);
// 0x00000070 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_Center()
extern void ObjectInstanceState_get_Center_mAF79C48B4D95D2416EF2D49C3CEAD2D23FA1B9E6 (void);
// 0x00000071 System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_ScaleChange()
extern void ObjectInstanceState_get_ScaleChange_m76CBAB6E8788971D5E0D79B79CD9F10EDBC0D719 (void);
// 0x00000072 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.ObjectInstanceState::TryCreatePlacement(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem)
extern void ObjectInstanceState_TryCreatePlacement_mB65E72708797D5B7C9FEA79AD556117B094D8CB0 (void);
// 0x00000073 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstanceState_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m5E48AECF47A3D357A8CCBF52B105CA8E55EF2238 (void);
// 0x00000074 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstanceState_GetOrCreateInstance_m2E2C12C75FBCDC9E98CFA443160EC840FC1471EC (void);
// 0x00000075 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstanceState_GetOrCreateInstance_mFD2DC4B5C401BA7EF4D7E75CF1896F3D3363DE93 (void);
// 0x00000076 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::.ctor()
extern void U3CU3Ec__DisplayClass17_0__ctor_mA40DB6591218D8B653DE0D125BDF48C59F8BCD78 (void);
// 0x00000077 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_m6A783B55CB7AA5C0784CE446159F0C9624F075B3 (void);
// 0x00000078 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.ctor(System.IntPtr,System.Boolean)
extern void ObjectModel__ctor_mFD3D6B6EC088A9B07C3750207EE92600942444B0 (void);
// 0x00000079 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectModel_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m371AE6DB229D2DA0C2C85422AA45A917659803D3 (void);
// 0x0000007A System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Finalize()
extern void ObjectModel_Finalize_m32CDFDFAB163C21E0ABBDAB0FF17F53AD94F740C (void);
// 0x0000007B System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Dispose()
extern void ObjectModel_Dispose_m78603C50C498596C38C0D5C3938F9B975411BE31 (void);
// 0x0000007C System.Guid Microsoft.Azure.ObjectAnchors.ObjectModel::get_Id()
extern void ObjectModel_get_Id_mD7DD8C77C357C4E80E16810F8A86F025F433008F (void);
// 0x0000007D Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox Microsoft.Azure.ObjectAnchors.ObjectModel::get_BoundingBox()
extern void ObjectModel_get_BoundingBox_mBBF89157E0E5366A8790CEEC510B3846416563D0 (void);
// 0x0000007E System.Numerics.Matrix4x4 Microsoft.Azure.ObjectAnchors.ObjectModel::get_OriginToCenterTransform()
extern void ObjectModel_get_OriginToCenterTransform_m3360DCB95BBF4FE57F1F584E3E7969DA5D31950E (void);
// 0x0000007F System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_VertexCount()
extern void ObjectModel_get_VertexCount_mBA0EE48959FAE61DA0C7FD28378384F2E6DE9C91 (void);
// 0x00000080 System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_TriangleIndexCount()
extern void ObjectModel_get_TriangleIndexCount_mEAAAFDA205F51F17C7332B13D05E4E52549CAB32 (void);
// 0x00000081 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexPositions(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexPositions_m2AE28CC7DFFA532D74F042D24FACC9F8EB8C89F2 (void);
// 0x00000082 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexNormals(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexNormals_mFA7CE31BF282F3DCA84A2380EC6EEEDDF7DCB5DC (void);
// 0x00000083 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetTriangleIndices(System.UInt32[])
extern void ObjectModel_GetTriangleIndices_m17000683C07D3DE4B6CABA4DF2E81433B03A4E3B (void);
// 0x00000084 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m5D5141D8130559761ED55CD895A41BC64A2C0D31 (void);
// 0x00000085 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_mF01598ED4BBE4BE41077293895110C03A81ABE5D (void);
// 0x00000086 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_mE0831C63640A465C21C2994C1CD8DC74DF36422C (void);
// 0x00000087 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.cctor()
extern void ObjectModel__cctor_m97B5900BA74AF84160CFBCFE2FE2DC2D9DD24BD1 (void);
// 0x00000088 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_m0A3B6959F71E23620460D7E8DF86E7B43FB0C494 (void);
// 0x00000089 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_mDEE8E433DCDBF105F18B6117ABBDB2EC7DE30FD8 (void);
// 0x0000008A System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.ctor(System.IntPtr,System.Boolean)
extern void ObjectObserver__ctor_m39EF15974253C7081F80FB6643F69AC975381AAB (void);
// 0x0000008B System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectObserver_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mC266E4D767AF707C6914283E8683268D22CD4481 (void);
// 0x0000008C System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Finalize()
extern void ObjectObserver_Finalize_mC91AACDCAF96A657952F270501422DCE581E8895 (void);
// 0x0000008D System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Dispose()
extern void ObjectObserver_Dispose_m4BC8AA7A599D5E658B35A48B5D30B17C1425BCE0 (void);
// 0x0000008E System.Boolean Microsoft.Azure.ObjectAnchors.ObjectObserver::IsSupported()
extern void ObjectObserver_IsSupported_m8B554E73E2369870E2FEE350CC547CE949E401DA (void);
// 0x0000008F System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver::RequestAccessAsync()
extern void ObjectObserver_RequestAccessAsync_m9C57E7B366FF2D85D6AE417D2ECB9AEDC0BAA6E8 (void);
// 0x00000090 System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver::LoadObjectModelAsync(System.Byte[])
extern void ObjectObserver_LoadObjectModelAsync_mB72C87826C57B6C608BF684597FF50434E590075 (void);
// 0x00000091 System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver::DetectAsync(Microsoft.Azure.ObjectAnchors.ObjectQuery[])
extern void ObjectObserver_DetectAsync_mBA6AF5E3F0EC94BCDDBDBEAF39B6513C8CEB8227 (void);
// 0x00000092 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m284D7B517BB1D4F2767623B476E1C71F34C5D389 (void);
// 0x00000093 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_mDFDE2BA332BA73AD7FE96030BD51792F8374CFC8 (void);
// 0x00000094 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_mD21DE46DD4F483CB18D86435374DD5A54211DECA (void);
// 0x00000095 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::EnsureAppDomainUnloadHandlingInitialized()
extern void ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m3E0390043703CF76D47C4C4DB5518EAA99C4F135 (void);
// 0x00000096 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.cctor()
extern void ObjectObserver__cctor_m8045C48D60D67577686A9AD8442DFC4AC21199DB (void);
// 0x00000097 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.cctor()
extern void U3CU3Ec__cctor_m5E60807EB24DFCCA5A16C582BFED1E1403AC1A70 (void);
// 0x00000098 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.ctor()
extern void U3CU3Ec__ctor_mCF7AC74DF7B4CD8ABF57FE1712E635F6818FEE23 (void);
// 0x00000099 Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<RequestAccessAsync>b__7_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m129A12ED09A0C4064D170EC1931DFAED1BBE5B6A (void);
// 0x0000009A Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<LoadObjectModelAsync>b__8_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m21D026A83D00EC5FDE92AB139C60FF0C3AA7A16C (void);
// 0x0000009B System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance> Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m04E943AD9821534006BFFA0BFFCBF0145557ED5D (void);
// 0x0000009C Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_1(System.IntPtr)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__10_1_mA078002DA68AF6DA8A7C5F5A0C1B259097BAD16A (void);
// 0x0000009D System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_2(Microsoft.Azure.ObjectAnchors.ObjectQuery)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m9F433EF9DBE3E1A5551FF3E2852D8D39FF2EA27D (void);
// 0x0000009E System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::MoveNext()
extern void U3CRequestAccessAsyncU3Ed__7_MoveNext_mD8E233B1557146BA6EF2C3781635F2A646EE26C1 (void);
// 0x0000009F System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestAccessAsyncU3Ed__7_SetStateMachine_mFF50D7155F8F277E57669B06BC6D0CC49A754D28 (void);
// 0x000000A0 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::MoveNext()
extern void U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mA514219B7B4DAD6E5A1C7DD05B88330C89254ED1 (void);
// 0x000000A1 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m55B435C738BA173E37802BD0EB190C8B49D77A1A (void);
// 0x000000A2 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::MoveNext()
extern void U3CDetectAsyncU3Ed__10_MoveNext_m5074BC9F7BF5C61570BF7A868EF8680FC68E3391 (void);
// 0x000000A3 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDetectAsyncU3Ed__10_SetStateMachine_m5B537FAFC0B2D21C8D82DCCBCC77A83F3C10A93E (void);
// 0x000000A4 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_mD61FA0C14E698DD84119F45E69C1F9F28535CDE2 (void);
// 0x000000A5 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m7AB13C21089F585B655ECF83CB3B2A7780A2332C (void);
// 0x000000A6 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectQuery_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mCA01E27C4E16C22954F48B3CE4FC7717873A050A (void);
// 0x000000A7 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel)
extern void ObjectQuery__ctor_m773E598F6F08E4DE14101C8C701164ABFB2E7A9F (void);
// 0x000000A8 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel,Microsoft.Azure.ObjectAnchors.ObjectObservationMode)
extern void ObjectQuery__ctor_m5BE393E0CF9B1818534BAB75FD3A0B54B0D4C11D (void);
// 0x000000A9 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Finalize()
extern void ObjectQuery_Finalize_mE2E36DCF20E30652255BB083D06EEE2BE684F6CB (void);
// 0x000000AA System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Dispose()
extern void ObjectQuery_Dispose_m2E54622260BA5B1AA9FB01184F86EF4C5D658821 (void);
// 0x000000AB System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m4E510E7683969753B65BE9D9CA86C17E7290A28E (void);
// 0x000000AC System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.cctor()
extern void ObjectQuery__cctor_m9F5E0A70A102E8005CC671AB6970E3ACCBDB8996 (void);
// 0x000000AD System.Collections.Generic.List`1<T> Microsoft.Azure.ObjectAnchors.PackedValue::UnpackPtrs(Microsoft.Azure.ObjectAnchors.PackedValue,System.Func`2<System.IntPtr,T>,System.Boolean)
// 0x000000AE System.Int64 Microsoft.Azure.ObjectAnchors.PackedValue::op_Implicit(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void PackedValue_op_Implicit_m6A4FB0AF18928E5FB960A49CAECC4300013CF7D6 (void);
// 0x000000AF System.Void Microsoft.Azure.ObjectAnchors.PackedValue::.cctor()
extern void PackedValue__cctor_mEB70E46220AC6DD50E146E2A130065CF00A75B92 (void);
// 0x000000B0 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
extern void PromiseBase__ctor_m2D3C8E47A95D02C074872193D2BF533BAB4CC8FF (void);
// 0x000000B1 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Finalize()
extern void PromiseBase_Finalize_m16DB61DBDF3F15DB3E035DF1A43E7AC3133162F5 (void);
// 0x000000B2 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose()
extern void PromiseBase_Dispose_m9EC360C95FA46ED5F89A4C1544ACB8AE2E0ECF29 (void);
// 0x000000B3 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose(System.Boolean)
extern void PromiseBase_Dispose_mA0F3B5DD66DB4373861B8182B7102B337E1B7AA5 (void);
// 0x000000B4 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressHandler(System.Single)
extern void PromiseBase_OnProgressHandler_m9D06313E19BB3335526A08C82DFA2F175BE4DDA7 (void);
// 0x000000B5 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorHandler(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void PromiseBase_OnErrorHandler_mF1DD93E5243087620BE39B03DECBB7BE9B70BA03 (void);
// 0x000000B6 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCanceledHandler()
// 0x000000B7 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnExceptionHandler(System.Exception)
// 0x000000B8 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
// 0x000000B9 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteThunk(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&)
extern void PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04 (void);
// 0x000000BA System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorThunk(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538 (void);
// 0x000000BB System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressThunk(System.IntPtr,System.Single)
extern void PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6 (void);
// 0x000000BC System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::.cctor()
extern void PromiseBase__cctor_m0E4F671C88CF847257D42F3F317605C951D7D243 (void);
// 0x000000BD System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::<.ctor>b__7_0()
extern void PromiseBase_U3C_ctorU3Eb__7_0_m20631ADBD9971E3F35C78730BE3C7829C83AEE54 (void);
// 0x000000BE System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1::get_Task()
// 0x000000BF System.Void Microsoft.Azure.ObjectAnchors.Promise`1::.ctor(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,T>,System.Action`1<System.Single>,System.Threading.CancellationToken)
// 0x000000C0 System.Void Microsoft.Azure.ObjectAnchors.Promise`1::OnExceptionHandler(System.Exception)
// 0x000000C1 System.Void Microsoft.Azure.ObjectAnchors.Promise`1::OnCanceledHandler()
// 0x000000C2 System.Void Microsoft.Azure.ObjectAnchors.Promise`1::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
// 0x000000C3 System.Void Microsoft.Azure.ObjectAnchors.Promise`1/<>c__DisplayClass7_0::.ctor()
// 0x000000C4 System.Void Microsoft.Azure.ObjectAnchors.Promise`1/<>c__DisplayClass7_0::<OnCompleteHandler>b__0(System.Object)
// 0x000000C5 System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Promise::get_Task()
extern void Promise_get_Task_m035C3D97953EA1145C38819C2AA5A276B59B94D8 (void);
// 0x000000C6 System.Void Microsoft.Azure.ObjectAnchors.Promise::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
extern void Promise__ctor_m03D897F250C1C44FBBB4D7198076E34F68AC7C68 (void);
// 0x000000C7 System.Void Microsoft.Azure.ObjectAnchors.Promise::OnExceptionHandler(System.Exception)
extern void Promise_OnExceptionHandler_m5DDF1CD5A25FB75FC2272D3705E10805264FE847 (void);
// 0x000000C8 System.Void Microsoft.Azure.ObjectAnchors.Promise::OnCanceledHandler()
extern void Promise_OnCanceledHandler_m18FFAC0312A1E6A6DCB0F5F9F175C3D4B9EEA54E (void);
// 0x000000C9 System.Void Microsoft.Azure.ObjectAnchors.Promise::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void Promise_OnCompleteHandler_m0FE9B7390F5A8838E28B433C207E6F6ABEA513D5 (void);
// 0x000000CA Microsoft.Azure.ObjectAnchors.Promise Microsoft.Azure.ObjectAnchors.Promise::Create(System.Threading.CancellationToken)
extern void Promise_Create_m1A1C563E7F5655DF7740491112ED981429EB8C43 (void);
// 0x000000CB Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
// 0x000000CC System.Void Microsoft.Azure.ObjectAnchors.Promise::<OnCompleteHandler>b__6_0(System.Object)
extern void Promise_U3COnCompleteHandlerU3Eb__6_0_mF1D27FBF561FE76D21E37DAC6CC3B87C9EC04C06 (void);
// 0x000000CD System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::.ctor(System.Object,System.IntPtr)
extern void aoa_promise_on_complete__ctor_m4DF27D6D9A2EA9FF945885D307AD59C366F65D89 (void);
// 0x000000CE System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::Invoke(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&)
extern void aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14 (void);
// 0x000000CF System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::.ctor(System.Object,System.IntPtr)
extern void aoa_promise_on_error__ctor_mCA12121041883994E452F43AEE2FA524E7A44D26 (void);
// 0x000000D0 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::Invoke(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3 (void);
// 0x000000D1 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::.ctor(System.Object,System.IntPtr)
extern void aoa_promise_on_progress__ctor_mBB85BD6380018A4F1716F782CAEF412A55242EF5 (void);
// 0x000000D2 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::Invoke(System.IntPtr,System.Single)
extern void aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED (void);
// 0x000000D3 System.Void Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::.ctor()
extern void PromiseSafeHandle__ctor_m62B40FF9DAB6D0DC91D141DF1717CD1439DF1822 (void);
// 0x000000D4 System.Boolean Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::get_IsInvalid()
extern void PromiseSafeHandle_get_IsInvalid_m250166FA8644F5206486EFDA8C38BB03A37BB89A (void);
// 0x000000D5 System.Boolean Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::ReleaseHandle()
extern void PromiseSafeHandle_ReleaseHandle_mC48AC4E638E114B0DBA2A687740B1334A457BBBE (void);
// 0x000000D6 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_close_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_diagnostics_session_close_async_m10D362F37C1641A8CC52CD122A3318EE2BB1AA3D (void);
// 0x000000D7 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes(System.IntPtr,System.UInt32,System.IntPtr&)
extern void NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m23882D8E8E363C61AD5CAFF70DB604663B225447 (void);
// 0x000000D8 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_diagnostics_session_release_mE1BC96B20B4FE1AEC6B77757DE0588CA0A44D641 (void);
// 0x000000D9 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_upload_diagnostics_async(System.String,System.IntPtr,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m9B7D05843765CA480E30BF3DAB662B5205330634 (void);
// 0x000000DA System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mFC2F7589E97831702A27D3A311BD78F7BAB9FE91 (void);
// 0x000000DB System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.ctor(Microsoft.Azure.ObjectAnchors.ObjectObserver,System.UInt32)
extern void ObjectDiagnosticsSession__ctor_mFB753BFB2606242CCB9329DB0D9DC8EE22CC44B8 (void);
// 0x000000DC System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Finalize()
extern void ObjectDiagnosticsSession_Finalize_mAB558C0742FE20A018C2CE720AB1C0528DB5A2CB (void);
// 0x000000DD System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::CloseAsync(System.String)
extern void ObjectDiagnosticsSession_CloseAsync_m64DE0FAC87A5BADDC060BB76F038429D07CAA38D (void);
// 0x000000DE System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::UploadDiagnosticsAsync(System.String,Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession)
extern void ObjectDiagnosticsSession_UploadDiagnosticsAsync_mA7F1F022477FF74A615BAC27C55127FD664B00D6 (void);
// 0x000000DF System.UInt64 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD757786A395F5408516AE5C6CD3FCB8E8BE9CDB8 (void);
// 0x000000E0 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.cctor()
extern void ObjectDiagnosticsSession__cctor_m245EC59596F188A5B9CA7E95A3CCE41A6873E47D (void);
// 0x000000E1 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::MoveNext()
extern void U3CCloseAsyncU3Ed__8_MoveNext_m7CF6D37DD9AC71291F67A804BD4D31D969C21DE1 (void);
// 0x000000E2 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseAsyncU3Ed__8_SetStateMachine_m1EBDAC81B48839A74C4037D4F72EF58F58A90A51 (void);
// 0x000000E3 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::.cctor()
extern void U3CU3Ec__cctor_mE695E00E70F6B0E9CAB4261FA51A9B3B259041B4 (void);
// 0x000000E4 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::.ctor()
extern void U3CU3Ec__ctor_m01AFDB8C77FCC1C78E22AD3A80BA2B580DD9DD05 (void);
// 0x000000E5 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::<UploadDiagnosticsAsync>b__9_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_m6FF931079B8C65C1BF697B879860B3173B2FAC54 (void);
// 0x000000E6 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::MoveNext()
extern void U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mCC3E081BD79DE5465CC3F4FAA59C990A9F2CF422 (void);
// 0x000000E7 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m3291BFA4E3406141D6098524EDE2CACBA5E1AAD7 (void);
// 0x000000E8 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_addref(System.IntPtr)
extern void NativeLibrary_aoa_spatial_graph_placement_addref_m35B0CF90736E18CD1144EFF0CCBD9C09EC5A9C8B (void);
// 0x000000E9 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_compute_origin_for_view(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose&)
extern void NativeLibrary_aoa_spatial_graph_placement_compute_origin_for_view_mA4823B64F20E55AF8A0C539698FC4AC331BB1E8A (void);
// 0x000000EA Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_get_control_points(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[]&,System.Int32&)
extern void NativeLibrary_aoa_spatial_graph_placement_get_control_points_mBF9935D04F470A8C1C285C428686BAC59F65CD2A (void);
// 0x000000EB Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_release(System.IntPtr)
extern void NativeLibrary_aoa_spatial_graph_placement_release_m46A77788AB5EFD5A878BC508DCAFDE8D6107F2D4 (void);
// 0x000000EC Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_create(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[],System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_spatial_graph_placement_try_create_m29DC8959620CDD5F06B672A8874BD82DE47F9642 (void);
// 0x000000ED Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_persist_static_nodes_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_spatial_graph_placement_try_persist_static_nodes_async_m7F3FB2B867B1491A56F334616792DF3C3DE2915E (void);
// 0x000000EE Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_unpersist_static_nodes_async(System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_spatial_graph_placement_unpersist_static_nodes_async_m6B017BDBC317585C226943851EE72A25485C0DD4 (void);
// 0x000000EF System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::.ctor(System.IntPtr,System.Boolean)
extern void SpatialGraphPlacement__ctor_mCAF85DC29B2FF4091A3E3EEB97ACC006035765A0 (void);
// 0x000000F0 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m3737BC5B29433AFB44EC0936F411D0D415364285 (void);
// 0x000000F1 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Finalize()
extern void SpatialGraphPlacement_Finalize_mADCF36AD87830BC516111B150127225967396042 (void);
// 0x000000F2 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::ComputeOriginForView(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4)
extern void SpatialGraphPlacement_ComputeOriginForView_m41D839016E9954EEC6A96A0966E4905DE06F115D (void);
// 0x000000F3 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::TryCreate(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[])
extern void SpatialGraphPlacement_TryCreate_m69189E59B042BAF5EC8E47E69B8BE5A34E054BCD (void);
// 0x000000F4 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[] Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetControlPoints()
extern void SpatialGraphPlacement_GetControlPoints_m733FCE0F8F6ED17985106236419F1D60E782294C (void);
// 0x000000F5 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::TryPersistStaticNodesAsync(System.String)
extern void SpatialGraphPlacement_TryPersistStaticNodesAsync_m579728FBE3AA46D73CDEA5E991E0F4641714BE32 (void);
// 0x000000F6 System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::UnpersistStaticNodesAsync(System.String)
extern void SpatialGraphPlacement_UnpersistStaticNodesAsync_mD573A9CCD34042B11C821A260C8A7290FCF8C67A (void);
// 0x000000F7 System.UInt64 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD13D07620D525A42AF521999197ACDBA81AB0417 (void);
// 0x000000F8 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void SpatialGraphPlacement_GetOrCreateInstance_m5D2BE295B694798DF7C1EC463A3A0208B411C79C (void);
// 0x000000F9 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void SpatialGraphPlacement_GetOrCreateInstance_mE4DF4D34D18C5AF7A3C49B5C11CFB0477CB4A813 (void);
// 0x000000FA System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::.cctor()
extern void SpatialGraphPlacement__cctor_m426FCEC2EA2CEF4EF0A04DC298B6BFC1D053CAED (void);
// 0x000000FB System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::.cctor()
extern void U3CU3Ec__cctor_m6AF8471B3CF512C3C572BAE3C6AEAB203D86CB14 (void);
// 0x000000FC System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::.ctor()
extern void U3CU3Ec__ctor_mAE2018794C8304BC79225DA23728B01E817604E3 (void);
// 0x000000FD System.Boolean Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::<TryPersistStaticNodesAsync>b__8_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_m1BB04D357781B22934D2928201359A820182E452 (void);
// 0x000000FE System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::MoveNext()
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m17AAD994DEA34FBC3E7002CD73E1D41AA982FB01 (void);
// 0x000000FF System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_mBF6933F15533A601839F4274F4CE51C85A5882BE (void);
// 0x00000100 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::MoveNext()
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mC9814C708197084546FC512AE63CE6724D41A012 (void);
// 0x00000101 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m633EDD6564A7795DE8208877ADA07D9B7884B97A (void);
// 0x00000102 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m6AD62AB371A913601CC7347C6BDF2E0040D15679 (void);
// 0x00000103 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_mEE5281FF9369093FD72678A5719514A85D083DD5 (void);
static Il2CppMethodPointer s_methodPointers[259] = 
{
	NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413,
	NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8,
	ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502,
	ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ProjectedObjectEventHandlerCache_Clear_mD977A00FF1AC25F04A8C99FA6B472C4E5FC069E0,
	ProjectedObjectEventHandlerCache_GetOrInitializeEvents_m7EF4288C45F8767B89B7D7E29CA80176A7AFAEC7,
	ProjectedObjectEventHandlerCache__cctor_mDC38F3C4BC3C2BEC03B536B8E60AAA0EE66768A6,
	ProjectedObjectCache__cctor_m764ACEAE7CBBCC107AB15239EFDFF87BAADC3BB7,
	ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42,
	NULL,
	ProjectedObjectCache_Remove_mC9F1C7A3512B17B749D38B863B9C2B2A44527243,
	ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52,
	ObjectInstanceChangedHandlerNative__ctor_mAC1EAA2DBC650998CE9422E1A699C7761327CB76,
	ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5,
	ProjectedObjectCleanupNative__ctor_m83373B05236846D92DCA22C157AB32F95AF7784A,
	ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A,
	NativeLibrary_PromiseCreate_m8593C3A02B6779E944AF8963A4FF50EB315E8752,
	NativeLibrary_PromiseCancel_mE7B4745D3BD81D29885C3560C52A4F810AD1102F,
	NativeLibrary_PromiseDestroy_m31F1EC010862774B326F43687DE1448065D776AE,
	NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_mCE1E4F15A4CD31616E2223E073A1ED791E6F66D6,
	NativeLibrary_aoa_account_information_release_m0FD4F1D4102DE753F632CC3ABB463DB71FC856B6,
	NativeLibrary_aoa_get_error_details_mDB6005415D7C6E5BA815A36346CD66CD404F047E,
	NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m84826BA72FAA6171FE800E167C3E65657F0ADFE1,
	NativeLibrary_aoa_object_anchors_session_create_object_observer_m6CA8E154CF1FC8FE0CEEC23508563CCFA9AF1005,
	NativeLibrary_aoa_object_anchors_session_release_m75A9936B2D2D7BD99EC182310DC5E7E2B7108153,
	NativeLibrary_aoa_object_instance_addref_m62FEEF7CDF1629ECDA3DD270011D1716ECDA2AF0,
	NativeLibrary_aoa_object_instance_changed_event_args_addref_m1A75869E3F8D665F4CFDAC6F02E1CCA4009F52FB,
	NativeLibrary_aoa_object_instance_changed_event_args_release_m4CAD47B4C09C7E7DC61CA25AAFACD2923776CC4D,
	NativeLibrary_aoa_object_instance_dispose_m34FDE1A7311ACFE0B12CF204CC69378B85FA9E57,
	NativeLibrary_aoa_object_instance_get_mode_m3816517887E73CCED77FC2B171FA20C332C338C9,
	NativeLibrary_aoa_object_instance_get_model_id_mC481768872DEBD327EA9F6CE4802123A944EEE6B,
	NativeLibrary_aoa_object_instance_release_mC5E8CEF6C36F776245F6687124F10A0DFA534068,
	NativeLibrary_aoa_object_instance_set_changed_mFAE6F8699161276829375885BAAF6AD2828F0C4E,
	NativeLibrary_aoa_object_instance_set_mode_m0F604051EE7BF1F2A6626E0C3B2DEAA7CDD67DA7,
	NativeLibrary_aoa_object_instance_state_addref_mE66712A3C1558B6CF02BC006FC6C441F5E4A6F74,
	NativeLibrary_aoa_object_instance_state_get_center_mC377F02A8728E39D4B9F2B2B2535DD9210A7F0AD,
	NativeLibrary_aoa_object_instance_state_get_last_updated_time_mD7323F01B96EF6A0BFF7D0A53791A2BE2DA84FAC,
	NativeLibrary_aoa_object_instance_state_get_scale_change_mDD853F393BFDB8D6F94A4EC23B4CA074A3C616C2,
	NativeLibrary_aoa_object_instance_state_get_surface_coverage_mCD8C0A7576A08137BF9621E54CA9CC3531CE9A98,
	NativeLibrary_aoa_object_instance_state_release_m7012960A6C1B5D79822BE66ACA08F1B686BFB13C,
	NativeLibrary_aoa_object_instance_state_try_create_placement_m5D2D326A3C17C98BED129373849D22700BDC9026,
	NativeLibrary_aoa_object_instance_try_get_current_state_m719D10D455BFF484ABF73F17AF9F894DEE286ED9,
	NativeLibrary_aoa_object_model_addref_m7ED9667367B396143BA9F997C10CCCB214FE1267,
	NativeLibrary_aoa_object_model_dispose_mECE71BBBE8DB7BDADDB568CC00283448F86B1197,
	NativeLibrary_aoa_object_model_get_bounding_box_m13A4D6D293A567F11CEC835C6835C1D27EE2069A,
	NativeLibrary_aoa_object_model_get_id_m863EE16F2E2D4A7D400F621C4109F59C23912B8A,
	NativeLibrary_aoa_object_model_get_origin_to_center_transform_m1D36E22AC2AED88DDD1675580DC89B15949C3078,
	NativeLibrary_aoa_object_model_get_triangle_index_count_m6E9CB072C4E8EEDA1E89FE3CAAEE2E696E8108D4,
	NativeLibrary_aoa_object_model_get_triangle_indices_m3BB460D4B5EF1BA4E6A90F541F3085837570276E,
	NativeLibrary_aoa_object_model_get_vertex_count_mC547894FF1FA6977ACF65BA3CC57998168FF2E8C,
	NativeLibrary_aoa_object_model_get_vertex_normals_m8B96F0ADDA83331626681729B08AE4FA86DDD455,
	NativeLibrary_aoa_object_model_get_vertex_positions_m5F0ED96A2A7AE8B8006075FB3F66F4D315824F53,
	NativeLibrary_aoa_object_model_release_m2D680F2CDFA8370FD50A851A2B4731B6F5F6C91C,
	NativeLibrary_aoa_object_observer_addref_m57DFE16660F9016520034B74F16D355F162A258D,
	NativeLibrary_aoa_object_observer_detect_async_queries_m1B292487BD51D39402396E686344C0D93B99569C,
	NativeLibrary_aoa_object_observer_dispose_m0194881EB4DF511F5B3BDD5FA3840983FB16B8B7,
	NativeLibrary_aoa_object_observer_is_supported_m473C73622C54D56858E7007CEC01FADD90C28CD9,
	NativeLibrary_aoa_object_observer_load_object_model_async_m3B2C767C2D16C261EC85EBA20EEF182B63B22D5B,
	NativeLibrary_aoa_object_observer_release_mBD9171A46D1E52BA9A54A22D8774429AD31C243C,
	NativeLibrary_aoa_object_observer_request_access_async_mE4E9B78DB51AC66CFF39495502C2E71D59E80C04,
	NativeLibrary_aoa_object_query_create_object_model_model_m3B988FA265ABD9C5F2AF1CE8BA3920B492BEB02A,
	NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_m549793C8DA150FA759D6B6CA547EFA83D6B61203,
	NativeLibrary_aoa_object_query_dispose_m7D51D2B682C08D212D19602D517D829874CFB075,
	NativeLibrary_aoa_object_query_release_m918F3FEE1860316B5C5C059406B3048DA88EF8BC,
	NativeLibrary_aoa_set_projected_object_cleanup_mDB1445F204E9BCFAE519456EB94468086731F4EC,
	ObjectInstanceChangedHandler__ctor_m618157E05034AC02CA5A85EDDB510F8827986F19,
	ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4,
	AccountInformation_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE6819C69C5B79BC0A398703896C5C629A67FA016,
	AccountInformation__ctor_mAE7D3A92A8D49265D359418B8FB937DF1B0FB83B,
	AccountInformation_Finalize_m3B9A494282334E57EDD40BB1B49DA42FF60559FE,
	AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m2DFA469EC9E960A98B850089429F348AC179D3FF,
	ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mEF46F3CC29F48A747501659CD5A754AB959CBE4F,
	ObjectAnchorsSession__ctor_mE617C1F564FB90CA51764C5A938066BA9BD8AE92,
	ObjectAnchorsSession_Finalize_m35AEEBBAC039376F172532821EE35141E462B2F5,
	ObjectAnchorsSession_CreateObjectObserver_m15F64098164B463468752A3F1530F03D1735DDB8,
	ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mBB5611B713CD5A071908F84211D2CB6CCD2C8FC4,
	ObjectInstanceChangedEventArgs__ctor_mE5AC62BF85E233EEEE135E37CB6FB43530A54464,
	ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE817A63216155066F5DAA1F430AE6D4C9E3C2B7B,
	ObjectInstanceChangedEventArgs_Finalize_m2954F2098CE7558EA62B1DFFA884E29C83313E60,
	ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m121E073D4344C71B158E4B1EC8B873AC4DA57B9A,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_mC17D992315543E1871CA7895B24DAD70D30F7114,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_m836F457EE3340E6865AD3EDBCB33D1A88A9B345D,
	U3CU3Ec__DisplayClass8_0__ctor_m5C58331BE3B22EF148128473CB8DADBC53B6789C,
	U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_m3165AD48C8CDAF4BF62D17CB471B66E091FCDC9F,
	ObjectInstance__ctor_m18DC843C177ECEB1ACC205C3EDB2BB70D0DD978B,
	ObjectInstance_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m19CDF2488DD01A26E5EBC8EED1FF3B4C4E8D4C87,
	ObjectInstance_Finalize_mE132979D1A0A58908AAD3F73F7BF8B270BE912B4,
	ObjectInstance_Dispose_m76B9D7C6DB21564F13A4900E08655B95949D7631,
	ObjectInstance_get_ModelId_m4FE3DCF93149B9D207AAB0B8F082293BE156D52F,
	ObjectInstance_get_Mode_m782647FCC1F475E18B6A5FA55786E2EF3936FAD0,
	ObjectInstance_set_Mode_mF0F6C3568DB96EFA8A56AFA716236294D245AE45,
	ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A,
	ObjectInstance_add_Changed_m6BF9396FAD42A4EEDE357DA0AE13DD68710DE63F,
	ObjectInstance_remove_Changed_m221FFA5E62D6D4C7E10FA8B3D7DEF527857FE64E,
	ObjectInstance_TryGetCurrentState_mD9695341F94849EB06C05482C26D904F73D644D6,
	ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mAA85C127263135D4BE22426DCE9F0A728DA61884,
	ObjectInstance_GetOrCreateInstance_mB079510528C2F87336C6FEAB20B13B38D4F57291,
	ObjectInstance_GetOrCreateInstance_mDFF0FFA53C7FCBEC50B2BEF4D2B1BBF1018B9D2A,
	ObjectInstance__cctor_mA76D22DD6275F69DAE8C3488BA74EC3671F66695,
	U3CU3Ec__DisplayClass20_0__ctor_m6E60DD6C5407C0972664A1D9464E6F5A9E1518BF,
	U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m460F8EEAD7B7383BD77A2C95378419769A277DAF,
	ObjectInstanceState__ctor_m426B2657F74AE65D16E0C1E0A0CAF30E12C7A699,
	ObjectInstanceState_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mBBA5D3F1F7FED292D33FA650EA4D7882CDDC9660,
	ObjectInstanceState_Finalize_m0978365620BDD3E19A69090FA071A37F8FE7EDFB,
	ObjectInstanceState_get_LastUpdatedTime_m1636B1CEF4902218403F77E6C7B07F8EA14616AC,
	ObjectInstanceState_get_SurfaceCoverage_m8C9A36B96E27FE0675E5E5D8C7624C031C7BA089,
	ObjectInstanceState_get_Center_mAF79C48B4D95D2416EF2D49C3CEAD2D23FA1B9E6,
	ObjectInstanceState_get_ScaleChange_m76CBAB6E8788971D5E0D79B79CD9F10EDBC0D719,
	ObjectInstanceState_TryCreatePlacement_mB65E72708797D5B7C9FEA79AD556117B094D8CB0,
	ObjectInstanceState_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m5E48AECF47A3D357A8CCBF52B105CA8E55EF2238,
	ObjectInstanceState_GetOrCreateInstance_m2E2C12C75FBCDC9E98CFA443160EC840FC1471EC,
	ObjectInstanceState_GetOrCreateInstance_mFD2DC4B5C401BA7EF4D7E75CF1896F3D3363DE93,
	U3CU3Ec__DisplayClass17_0__ctor_mA40DB6591218D8B653DE0D125BDF48C59F8BCD78,
	U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_m6A783B55CB7AA5C0784CE446159F0C9624F075B3,
	ObjectModel__ctor_mFD3D6B6EC088A9B07C3750207EE92600942444B0,
	ObjectModel_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m371AE6DB229D2DA0C2C85422AA45A917659803D3,
	ObjectModel_Finalize_m32CDFDFAB163C21E0ABBDAB0FF17F53AD94F740C,
	ObjectModel_Dispose_m78603C50C498596C38C0D5C3938F9B975411BE31,
	ObjectModel_get_Id_mD7DD8C77C357C4E80E16810F8A86F025F433008F,
	ObjectModel_get_BoundingBox_mBBF89157E0E5366A8790CEEC510B3846416563D0,
	ObjectModel_get_OriginToCenterTransform_m3360DCB95BBF4FE57F1F584E3E7969DA5D31950E,
	ObjectModel_get_VertexCount_mBA0EE48959FAE61DA0C7FD28378384F2E6DE9C91,
	ObjectModel_get_TriangleIndexCount_mEAAAFDA205F51F17C7332B13D05E4E52549CAB32,
	ObjectModel_GetVertexPositions_m2AE28CC7DFFA532D74F042D24FACC9F8EB8C89F2,
	ObjectModel_GetVertexNormals_mFA7CE31BF282F3DCA84A2380EC6EEEDDF7DCB5DC,
	ObjectModel_GetTriangleIndices_m17000683C07D3DE4B6CABA4DF2E81433B03A4E3B,
	ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m5D5141D8130559761ED55CD895A41BC64A2C0D31,
	ObjectModel_GetOrCreateInstance_mF01598ED4BBE4BE41077293895110C03A81ABE5D,
	ObjectModel_GetOrCreateInstance_mE0831C63640A465C21C2994C1CD8DC74DF36422C,
	ObjectModel__cctor_m97B5900BA74AF84160CFBCFE2FE2DC2D9DD24BD1,
	U3CU3Ec__DisplayClass23_0__ctor_m0A3B6959F71E23620460D7E8DF86E7B43FB0C494,
	U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_mDEE8E433DCDBF105F18B6117ABBDB2EC7DE30FD8,
	ObjectObserver__ctor_m39EF15974253C7081F80FB6643F69AC975381AAB,
	ObjectObserver_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mC266E4D767AF707C6914283E8683268D22CD4481,
	ObjectObserver_Finalize_mC91AACDCAF96A657952F270501422DCE581E8895,
	ObjectObserver_Dispose_m4BC8AA7A599D5E658B35A48B5D30B17C1425BCE0,
	ObjectObserver_IsSupported_m8B554E73E2369870E2FEE350CC547CE949E401DA,
	ObjectObserver_RequestAccessAsync_m9C57E7B366FF2D85D6AE417D2ECB9AEDC0BAA6E8,
	ObjectObserver_LoadObjectModelAsync_mB72C87826C57B6C608BF684597FF50434E590075,
	ObjectObserver_DetectAsync_mBA6AF5E3F0EC94BCDDBDBEAF39B6513C8CEB8227,
	ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m284D7B517BB1D4F2767623B476E1C71F34C5D389,
	ObjectObserver_GetOrCreateInstance_mDFDE2BA332BA73AD7FE96030BD51792F8374CFC8,
	ObjectObserver_GetOrCreateInstance_mD21DE46DD4F483CB18D86435374DD5A54211DECA,
	ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m3E0390043703CF76D47C4C4DB5518EAA99C4F135,
	ObjectObserver__cctor_m8045C48D60D67577686A9AD8442DFC4AC21199DB,
	U3CU3Ec__cctor_m5E60807EB24DFCCA5A16C582BFED1E1403AC1A70,
	U3CU3Ec__ctor_mCF7AC74DF7B4CD8ABF57FE1712E635F6818FEE23,
	U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m129A12ED09A0C4064D170EC1931DFAED1BBE5B6A,
	U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m21D026A83D00EC5FDE92AB139C60FF0C3AA7A16C,
	U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m04E943AD9821534006BFFA0BFFCBF0145557ED5D,
	U3CU3Ec_U3CDetectAsyncU3Eb__10_1_mA078002DA68AF6DA8A7C5F5A0C1B259097BAD16A,
	U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m9F433EF9DBE3E1A5551FF3E2852D8D39FF2EA27D,
	U3CRequestAccessAsyncU3Ed__7_MoveNext_mD8E233B1557146BA6EF2C3781635F2A646EE26C1,
	U3CRequestAccessAsyncU3Ed__7_SetStateMachine_mFF50D7155F8F277E57669B06BC6D0CC49A754D28,
	U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mA514219B7B4DAD6E5A1C7DD05B88330C89254ED1,
	U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m55B435C738BA173E37802BD0EB190C8B49D77A1A,
	U3CDetectAsyncU3Ed__10_MoveNext_m5074BC9F7BF5C61570BF7A868EF8680FC68E3391,
	U3CDetectAsyncU3Ed__10_SetStateMachine_m5B537FAFC0B2D21C8D82DCCBCC77A83F3C10A93E,
	U3CU3Ec__DisplayClass15_0__ctor_mD61FA0C14E698DD84119F45E69C1F9F28535CDE2,
	U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m7AB13C21089F585B655ECF83CB3B2A7780A2332C,
	ObjectQuery_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mCA01E27C4E16C22954F48B3CE4FC7717873A050A,
	ObjectQuery__ctor_m773E598F6F08E4DE14101C8C701164ABFB2E7A9F,
	ObjectQuery__ctor_m5BE393E0CF9B1818534BAB75FD3A0B54B0D4C11D,
	ObjectQuery_Finalize_mE2E36DCF20E30652255BB083D06EEE2BE684F6CB,
	ObjectQuery_Dispose_m2E54622260BA5B1AA9FB01184F86EF4C5D658821,
	ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m4E510E7683969753B65BE9D9CA86C17E7290A28E,
	ObjectQuery__cctor_m9F5E0A70A102E8005CC671AB6970E3ACCBDB8996,
	NULL,
	PackedValue_op_Implicit_m6A4FB0AF18928E5FB960A49CAECC4300013CF7D6,
	PackedValue__cctor_mEB70E46220AC6DD50E146E2A130065CF00A75B92,
	PromiseBase__ctor_m2D3C8E47A95D02C074872193D2BF533BAB4CC8FF,
	PromiseBase_Finalize_m16DB61DBDF3F15DB3E035DF1A43E7AC3133162F5,
	PromiseBase_Dispose_m9EC360C95FA46ED5F89A4C1544ACB8AE2E0ECF29,
	PromiseBase_Dispose_mA0F3B5DD66DB4373861B8182B7102B337E1B7AA5,
	PromiseBase_OnProgressHandler_m9D06313E19BB3335526A08C82DFA2F175BE4DDA7,
	PromiseBase_OnErrorHandler_mF1DD93E5243087620BE39B03DECBB7BE9B70BA03,
	NULL,
	NULL,
	NULL,
	PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04,
	PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538,
	PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6,
	PromiseBase__cctor_m0E4F671C88CF847257D42F3F317605C951D7D243,
	PromiseBase_U3C_ctorU3Eb__7_0_m20631ADBD9971E3F35C78730BE3C7829C83AEE54,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Promise_get_Task_m035C3D97953EA1145C38819C2AA5A276B59B94D8,
	Promise__ctor_m03D897F250C1C44FBBB4D7198076E34F68AC7C68,
	Promise_OnExceptionHandler_m5DDF1CD5A25FB75FC2272D3705E10805264FE847,
	Promise_OnCanceledHandler_m18FFAC0312A1E6A6DCB0F5F9F175C3D4B9EEA54E,
	Promise_OnCompleteHandler_m0FE9B7390F5A8838E28B433C207E6F6ABEA513D5,
	Promise_Create_m1A1C563E7F5655DF7740491112ED981429EB8C43,
	NULL,
	Promise_U3COnCompleteHandlerU3Eb__6_0_mF1D27FBF561FE76D21E37DAC6CC3B87C9EC04C06,
	aoa_promise_on_complete__ctor_m4DF27D6D9A2EA9FF945885D307AD59C366F65D89,
	aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14,
	aoa_promise_on_error__ctor_mCA12121041883994E452F43AEE2FA524E7A44D26,
	aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3,
	aoa_promise_on_progress__ctor_mBB85BD6380018A4F1716F782CAEF412A55242EF5,
	aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED,
	PromiseSafeHandle__ctor_m62B40FF9DAB6D0DC91D141DF1717CD1439DF1822,
	PromiseSafeHandle_get_IsInvalid_m250166FA8644F5206486EFDA8C38BB03A37BB89A,
	PromiseSafeHandle_ReleaseHandle_mC48AC4E638E114B0DBA2A687740B1334A457BBBE,
	NativeLibrary_aoa_object_diagnostics_session_close_async_m10D362F37C1641A8CC52CD122A3318EE2BB1AA3D,
	NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m23882D8E8E363C61AD5CAFF70DB604663B225447,
	NativeLibrary_aoa_object_diagnostics_session_release_mE1BC96B20B4FE1AEC6B77757DE0588CA0A44D641,
	NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m9B7D05843765CA480E30BF3DAB662B5205330634,
	ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mFC2F7589E97831702A27D3A311BD78F7BAB9FE91,
	ObjectDiagnosticsSession__ctor_mFB753BFB2606242CCB9329DB0D9DC8EE22CC44B8,
	ObjectDiagnosticsSession_Finalize_mAB558C0742FE20A018C2CE720AB1C0528DB5A2CB,
	ObjectDiagnosticsSession_CloseAsync_m64DE0FAC87A5BADDC060BB76F038429D07CAA38D,
	ObjectDiagnosticsSession_UploadDiagnosticsAsync_mA7F1F022477FF74A615BAC27C55127FD664B00D6,
	ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD757786A395F5408516AE5C6CD3FCB8E8BE9CDB8,
	ObjectDiagnosticsSession__cctor_m245EC59596F188A5B9CA7E95A3CCE41A6873E47D,
	U3CCloseAsyncU3Ed__8_MoveNext_m7CF6D37DD9AC71291F67A804BD4D31D969C21DE1,
	U3CCloseAsyncU3Ed__8_SetStateMachine_m1EBDAC81B48839A74C4037D4F72EF58F58A90A51,
	U3CU3Ec__cctor_mE695E00E70F6B0E9CAB4261FA51A9B3B259041B4,
	U3CU3Ec__ctor_m01AFDB8C77FCC1C78E22AD3A80BA2B580DD9DD05,
	U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_m6FF931079B8C65C1BF697B879860B3173B2FAC54,
	U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mCC3E081BD79DE5465CC3F4FAA59C990A9F2CF422,
	U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m3291BFA4E3406141D6098524EDE2CACBA5E1AAD7,
	NativeLibrary_aoa_spatial_graph_placement_addref_m35B0CF90736E18CD1144EFF0CCBD9C09EC5A9C8B,
	NativeLibrary_aoa_spatial_graph_placement_compute_origin_for_view_mA4823B64F20E55AF8A0C539698FC4AC331BB1E8A,
	NativeLibrary_aoa_spatial_graph_placement_get_control_points_mBF9935D04F470A8C1C285C428686BAC59F65CD2A,
	NativeLibrary_aoa_spatial_graph_placement_release_m46A77788AB5EFD5A878BC508DCAFDE8D6107F2D4,
	NativeLibrary_aoa_spatial_graph_placement_try_create_m29DC8959620CDD5F06B672A8874BD82DE47F9642,
	NativeLibrary_aoa_spatial_graph_placement_try_persist_static_nodes_async_m7F3FB2B867B1491A56F334616792DF3C3DE2915E,
	NativeLibrary_aoa_spatial_graph_placement_unpersist_static_nodes_async_m6B017BDBC317585C226943851EE72A25485C0DD4,
	SpatialGraphPlacement__ctor_mCAF85DC29B2FF4091A3E3EEB97ACC006035765A0,
	SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m3737BC5B29433AFB44EC0936F411D0D415364285,
	SpatialGraphPlacement_Finalize_mADCF36AD87830BC516111B150127225967396042,
	SpatialGraphPlacement_ComputeOriginForView_m41D839016E9954EEC6A96A0966E4905DE06F115D,
	SpatialGraphPlacement_TryCreate_m69189E59B042BAF5EC8E47E69B8BE5A34E054BCD,
	SpatialGraphPlacement_GetControlPoints_m733FCE0F8F6ED17985106236419F1D60E782294C,
	SpatialGraphPlacement_TryPersistStaticNodesAsync_m579728FBE3AA46D73CDEA5E991E0F4641714BE32,
	SpatialGraphPlacement_UnpersistStaticNodesAsync_mD573A9CCD34042B11C821A260C8A7290FCF8C67A,
	SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD13D07620D525A42AF521999197ACDBA81AB0417,
	SpatialGraphPlacement_GetOrCreateInstance_m5D2BE295B694798DF7C1EC463A3A0208B411C79C,
	SpatialGraphPlacement_GetOrCreateInstance_mE4DF4D34D18C5AF7A3C49B5C11CFB0477CB4A813,
	SpatialGraphPlacement__cctor_m426FCEC2EA2CEF4EF0A04DC298B6BFC1D053CAED,
	U3CU3Ec__cctor_m6AF8471B3CF512C3C572BAE3C6AEAB203D86CB14,
	U3CU3Ec__ctor_mAE2018794C8304BC79225DA23728B01E817604E3,
	U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_m1BB04D357781B22934D2928201359A820182E452,
	U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m17AAD994DEA34FBC3E7002CD73E1D41AA982FB01,
	U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_mBF6933F15533A601839F4274F4CE51C85A5882BE,
	U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mC9814C708197084546FC512AE63CE6724D41A012,
	U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m633EDD6564A7795DE8208877ADA07D9B7884B97A,
	U3CU3Ec__DisplayClass13_0__ctor_m6AD62AB371A913601CC7347C6BDF2E0040D15679,
	U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_mEE5281FF9369093FD72678A5719514A85D083DD5,
};
extern void U3CRequestAccessAsyncU3Ed__7_MoveNext_mD8E233B1557146BA6EF2C3781635F2A646EE26C1_AdjustorThunk (void);
extern void U3CRequestAccessAsyncU3Ed__7_SetStateMachine_mFF50D7155F8F277E57669B06BC6D0CC49A754D28_AdjustorThunk (void);
extern void U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mA514219B7B4DAD6E5A1C7DD05B88330C89254ED1_AdjustorThunk (void);
extern void U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m55B435C738BA173E37802BD0EB190C8B49D77A1A_AdjustorThunk (void);
extern void U3CDetectAsyncU3Ed__10_MoveNext_m5074BC9F7BF5C61570BF7A868EF8680FC68E3391_AdjustorThunk (void);
extern void U3CDetectAsyncU3Ed__10_SetStateMachine_m5B537FAFC0B2D21C8D82DCCBCC77A83F3C10A93E_AdjustorThunk (void);
extern void U3CCloseAsyncU3Ed__8_MoveNext_m7CF6D37DD9AC71291F67A804BD4D31D969C21DE1_AdjustorThunk (void);
extern void U3CCloseAsyncU3Ed__8_SetStateMachine_m1EBDAC81B48839A74C4037D4F72EF58F58A90A51_AdjustorThunk (void);
extern void U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mCC3E081BD79DE5465CC3F4FAA59C990A9F2CF422_AdjustorThunk (void);
extern void U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m3291BFA4E3406141D6098524EDE2CACBA5E1AAD7_AdjustorThunk (void);
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m17AAD994DEA34FBC3E7002CD73E1D41AA982FB01_AdjustorThunk (void);
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_mBF6933F15533A601839F4274F4CE51C85A5882BE_AdjustorThunk (void);
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mC9814C708197084546FC512AE63CE6724D41A012_AdjustorThunk (void);
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m633EDD6564A7795DE8208877ADA07D9B7884B97A_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[14] = 
{
	{ 0x0600009E, U3CRequestAccessAsyncU3Ed__7_MoveNext_mD8E233B1557146BA6EF2C3781635F2A646EE26C1_AdjustorThunk },
	{ 0x0600009F, U3CRequestAccessAsyncU3Ed__7_SetStateMachine_mFF50D7155F8F277E57669B06BC6D0CC49A754D28_AdjustorThunk },
	{ 0x060000A0, U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mA514219B7B4DAD6E5A1C7DD05B88330C89254ED1_AdjustorThunk },
	{ 0x060000A1, U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m55B435C738BA173E37802BD0EB190C8B49D77A1A_AdjustorThunk },
	{ 0x060000A2, U3CDetectAsyncU3Ed__10_MoveNext_m5074BC9F7BF5C61570BF7A868EF8680FC68E3391_AdjustorThunk },
	{ 0x060000A3, U3CDetectAsyncU3Ed__10_SetStateMachine_m5B537FAFC0B2D21C8D82DCCBCC77A83F3C10A93E_AdjustorThunk },
	{ 0x060000E1, U3CCloseAsyncU3Ed__8_MoveNext_m7CF6D37DD9AC71291F67A804BD4D31D969C21DE1_AdjustorThunk },
	{ 0x060000E2, U3CCloseAsyncU3Ed__8_SetStateMachine_m1EBDAC81B48839A74C4037D4F72EF58F58A90A51_AdjustorThunk },
	{ 0x060000E6, U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mCC3E081BD79DE5465CC3F4FAA59C990A9F2CF422_AdjustorThunk },
	{ 0x060000E7, U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m3291BFA4E3406141D6098524EDE2CACBA5E1AAD7_AdjustorThunk },
	{ 0x060000FE, U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m17AAD994DEA34FBC3E7002CD73E1D41AA982FB01_AdjustorThunk },
	{ 0x060000FF, U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_mBF6933F15533A601839F4274F4CE51C85A5882BE_AdjustorThunk },
	{ 0x06000100, U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mC9814C708197084546FC512AE63CE6724D41A012_AdjustorThunk },
	{ 0x06000101, U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m633EDD6564A7795DE8208877ADA07D9B7884B97A_AdjustorThunk },
};
static const int32_t s_InvokerIndices[259] = 
{
	11953,
	11138,
	11910,
	11623,
	0,
	0,
	0,
	0,
	0,
	11970,
	11748,
	12181,
	12181,
	11958,
	0,
	11970,
	11955,
	3670,
	3807,
	3670,
	6533,
	10762,
	11591,
	11589,
	9326,
	11589,
	9331,
	10782,
	10782,
	11589,
	11589,
	11589,
	11589,
	11589,
	10782,
	10782,
	11589,
	9938,
	10785,
	11589,
	10782,
	10782,
	10782,
	10782,
	11589,
	9936,
	10782,
	11589,
	11589,
	10782,
	10782,
	10782,
	10782,
	9934,
	10782,
	9934,
	9934,
	11589,
	11589,
	9338,
	11589,
	11577,
	9338,
	11589,
	11591,
	10782,
	9926,
	11589,
	11589,
	11591,
	3670,
	3675,
	8198,
	1792,
	8198,
	8180,
	8198,
	6577,
	8198,
	8045,
	8180,
	3627,
	8198,
	8198,
	8180,
	10866,
	10910,
	8198,
	5854,
	3627,
	8198,
	8198,
	8198,
	7963,
	7996,
	6531,
	11235,
	6577,
	6577,
	8045,
	8180,
	10866,
	10910,
	12181,
	8198,
	5854,
	3627,
	8198,
	8198,
	7924,
	8111,
	8115,
	8186,
	5844,
	8180,
	10866,
	10910,
	8198,
	5854,
	3627,
	8198,
	8198,
	8198,
	7963,
	8117,
	8019,
	8179,
	8179,
	6577,
	6577,
	6577,
	8180,
	10866,
	10910,
	12181,
	8198,
	5854,
	3627,
	8198,
	8198,
	8198,
	12098,
	12136,
	5837,
	5837,
	8180,
	10866,
	10910,
	12181,
	12181,
	12181,
	8198,
	5469,
	5838,
	5838,
	5832,
	5726,
	8198,
	6577,
	8198,
	6577,
	8198,
	6577,
	8198,
	5854,
	8198,
	6577,
	3668,
	8198,
	8198,
	8180,
	12181,
	0,
	11608,
	12181,
	3656,
	8198,
	8198,
	6439,
	6638,
	3628,
	0,
	0,
	0,
	11136,
	10335,
	11141,
	12181,
	8198,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8045,
	3656,
	6577,
	8198,
	6580,
	11713,
	0,
	6577,
	3670,
	3626,
	3670,
	1857,
	3670,
	3630,
	8198,
	7906,
	7906,
	9935,
	9937,
	11589,
	9950,
	8198,
	3686,
	8198,
	5837,
	10883,
	8180,
	12181,
	8198,
	6577,
	12181,
	8198,
	5469,
	8198,
	6577,
	11589,
	9339,
	9925,
	11589,
	9482,
	9935,
	10794,
	3627,
	8198,
	8198,
	2924,
	10901,
	8045,
	5837,
	11729,
	8180,
	10866,
	10910,
	12181,
	12181,
	8198,
	4693,
	8198,
	6577,
	8198,
	6577,
	8198,
	5854,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[5] = 
{
	{ 0x06000011, 28,  (void**)&ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52_RuntimeMethod_var, 0 },
	{ 0x06000061, 26,  (void**)&ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A_RuntimeMethod_var, 0 },
	{ 0x060000B9, 30,  (void**)&PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04_RuntimeMethod_var, 0 },
	{ 0x060000BA, 31,  (void**)&PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538_RuntimeMethod_var, 0 },
	{ 0x060000BB, 32,  (void**)&PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[8] = 
{
	{ 0x02000024, { 11, 11 } },
	{ 0x02000025, { 22, 2 } },
	{ 0x06000007, { 0, 1 } },
	{ 0x06000008, { 1, 1 } },
	{ 0x06000009, { 2, 1 } },
	{ 0x0600000F, { 3, 3 } },
	{ 0x060000AD, { 6, 5 } },
	{ 0x060000CB, { 24, 2 } },
};
extern const uint32_t g_rgctx_T_tC6E4C912CC8CDEAA83B99DE9EBAC15D3EA1A34D5;
extern const uint32_t g_rgctx_T_tC6337DC77EECE5613AA0F97A973EA03D22B39945;
extern const uint32_t g_rgctx_T_tDACC8355D990DB34FC45D7BFAB6228CD61B90D94;
extern const uint32_t g_rgctx_Func_2_tDB0C112C62BE0F9B5A28B4657AF186B861866062;
extern const uint32_t g_rgctx_Func_2_Invoke_mF30EEB0C294654D2C3DC3300568661C473701541;
extern const uint32_t g_rgctx_T_t3F29B301FF81C3571AE8BCC21C6E1F0663C704BF;
extern const uint32_t g_rgctx_List_1_t2C7B6D5A10ABFA164C1E7850764C1CC929028D75;
extern const uint32_t g_rgctx_List_1__ctor_m5E24294A8A8D9D19DD5F14388EFAB1BB5716D2AD;
extern const uint32_t g_rgctx_Func_2_tFB29F4C02C471806ED9B5968246DAB5311909440;
extern const uint32_t g_rgctx_Func_2_Invoke_m5AF372CCA2511E24DAD28C87DC6C1244668ACE38;
extern const uint32_t g_rgctx_List_1_Add_mAB242AF4BE8D716A33A6505677DE7A9D93EF9B45;
extern const uint32_t g_rgctx_TaskCompletionSource_1_tFAEC6295BC46BF8CF86148490070E66F95B71311;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_m55B73632F6CC07A01C54BDED6C36E374E9C1C66B;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_mA87083023D52C20CE064C8C52EB4CB26DBA90D83;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetException_m5B2CB376065F917CEE502F377CAF9F546D8E3DBF;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetCanceled_m90E50FFE8A417CF7FAD92B86828B8F556199E4EA;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_t7A248E2E6F30FEC36694A3006E881B50E422EEBB;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0__ctor_m4844D0BA1868A2E2939FE28A7E7498AD8DCCAC8A;
extern const uint32_t g_rgctx_Func_2_t37039088E0E80125FAC8DBEB1994032602601073;
extern const uint32_t g_rgctx_Func_2_Invoke_mC7D07AC9856C23050C8B9A0DC4829224091CAD56;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_U3COnCompleteHandlerU3Eb__0_m5AEECB6C79BAD1DB9D8820803E53048CECBE1E75;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetResult_m216864876C914A3BC479EB75FFAD7A4AD4E2BEF7;
extern const uint32_t g_rgctx_TaskCompletionSource_1_tEB14E86E677DB5E970DA156FB604EE34BE0790FF;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetResult_mFF621B02A0A21C32D2260CD0D4BBD6EC2C7817C2;
extern const uint32_t g_rgctx_Promise_1_t331524667EB7B8F2D649197440B77DCD3E12C490;
extern const uint32_t g_rgctx_Promise_1__ctor_m97915E426CD89B379AFBB361E5A062DA64C05D09;
static const Il2CppRGCTXDefinition s_rgctxValues[26] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tC6E4C912CC8CDEAA83B99DE9EBAC15D3EA1A34D5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tC6337DC77EECE5613AA0F97A973EA03D22B39945 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tDACC8355D990DB34FC45D7BFAB6228CD61B90D94 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tDB0C112C62BE0F9B5A28B4657AF186B861866062 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mF30EEB0C294654D2C3DC3300568661C473701541 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t3F29B301FF81C3571AE8BCC21C6E1F0663C704BF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t2C7B6D5A10ABFA164C1E7850764C1CC929028D75 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m5E24294A8A8D9D19DD5F14388EFAB1BB5716D2AD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tFB29F4C02C471806ED9B5968246DAB5311909440 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m5AF372CCA2511E24DAD28C87DC6C1244668ACE38 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_mAB242AF4BE8D716A33A6505677DE7A9D93EF9B45 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_tFAEC6295BC46BF8CF86148490070E66F95B71311 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_m55B73632F6CC07A01C54BDED6C36E374E9C1C66B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_mA87083023D52C20CE064C8C52EB4CB26DBA90D83 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetException_m5B2CB376065F917CEE502F377CAF9F546D8E3DBF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetCanceled_m90E50FFE8A417CF7FAD92B86828B8F556199E4EA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_t7A248E2E6F30FEC36694A3006E881B50E422EEBB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0__ctor_m4844D0BA1868A2E2939FE28A7E7498AD8DCCAC8A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t37039088E0E80125FAC8DBEB1994032602601073 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mC7D07AC9856C23050C8B9A0DC4829224091CAD56 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_U3COnCompleteHandlerU3Eb__0_m5AEECB6C79BAD1DB9D8820803E53048CECBE1E75 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetResult_m216864876C914A3BC479EB75FFAD7A4AD4E2BEF7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_tEB14E86E677DB5E970DA156FB604EE34BE0790FF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetResult_mFF621B02A0A21C32D2260CD0D4BBD6EC2C7817C2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Promise_1_t331524667EB7B8F2D649197440B77DCD3E12C490 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Promise_1__ctor_m97915E426CD89B379AFBB361E5A062DA64C05D09 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_Api_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_Api_CodeGenModule = 
{
	"Microsoft.ObjectAnchors.Runtime.Api.dll",
	259,
	s_methodPointers,
	14,
	s_adjustorThunks,
	s_InvokerIndices,
	5,
	s_reversePInvokeIndices,
	8,
	s_rgctxIndices,
	26,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

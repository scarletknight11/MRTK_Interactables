#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>
struct Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>
struct Dictionary_2_tCB653D45C1BAA5C44BFA024B24C53B89399C9114;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>>
struct Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09;
// System.Func`2<System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstance>
struct Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE;
// System.Func`2<System.Object,System.IntPtr>
struct Func_2_tC74232CB2616B5EFF9626D85F75FD33339EF0895;
// System.Func`2<Microsoft.Azure.ObjectAnchors.ObjectQuery,System.IntPtr>
struct Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E;
// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8;
// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Boolean>
struct Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3;
// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Int32Enum>
struct Func_2_tFFD823B16CD3985097038389DBE3827300DD2B10;
// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Object>
struct Func_2_t8451A75E16AE9307D159A98BA4F7A2D1142F39AF;
// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80;
// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F;
// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA;
// System.Func`2<System.UInt64,System.Object>
struct Func_2_tB00208B78D3150B53B18E55FEB2EF40B290F97AD;
// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstance>
struct Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2;
// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs>
struct Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81;
// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceState>
struct Func_2_tD794B144DC680C5410F8354A109B1448389D71A2;
// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F;
// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectObserver>
struct Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252;
// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>
struct Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B;
// System.Collections.Generic.IDictionary`2<System.String,System.Delegate>
struct IDictionary_2_tEE68309431CEE57F07853E40B5C5BB90B1FA24CF;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>
struct IDictionary_2_t100004F4BC5309A9FFD563D3BC25B2D85189C9C5;
// System.Collections.Generic.IEnumerable`1<System.IntPtr>
struct IEnumerable_1_t101D1ED4FD2E11F59AE617F3A394F7AA0A21C585;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Microsoft.Azure.ObjectAnchors.ObjectQuery>
struct IEnumerable_1_tCB4D84A61DB52BA2993FEA397D9BA02F31877294;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>
struct IReadOnlyList_1_tDC33A351140B30B9125C413D01773F3BF323F82F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Delegate>
struct KeyCollection_t29B1E367D95E46B2E45B4C33E1F3C5644F15EC98;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>
struct KeyCollection_t783CC24E11196555647F27C7496E8BE190F88685;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>>
struct KeyCollection_t86C9DF8F619BCC6C9F10B10C14A10669580D99B9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>
struct List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Microsoft.Azure.ObjectAnchors.Promise`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514;
// Microsoft.Azure.ObjectAnchors.Promise`1<System.Boolean>
struct Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B;
// Microsoft.Azure.ObjectAnchors.Promise`1<System.Int32Enum>
struct Promise_1_t83ECF99AB31F8643A26DC4BA910F197650AD6FD3;
// Microsoft.Azure.ObjectAnchors.Promise`1<System.Object>
struct Promise_1_tB193A157B0A0CBC98CFD594EA69CA2585B7D3266;
// Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A;
// Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2;
// Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct TaskCompletionSource_1_tE213850E8CEA60B1D63A396F1DFD2E71829A1339;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.TaskCompletionSource`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct TaskCompletionSource_1_tCA198E3CB54414CD320214853C33186B7AA0AB7C;
// System.Threading.Tasks.TaskCompletionSource`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct TaskCompletionSource_1_tE54AC85B57AF5A7CB627043B225A4FBFBE28FAD0;
// System.Threading.Tasks.TaskCompletionSource`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct TaskCompletionSource_1_t9CC22778793AA5F26ED1341CC731D445373F4834;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct TaskFactory_1_tB19500148A3E1550C4A6CE5EBAEFC899DB64CCC2;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct TaskFactory_1_tA9B16B0276CDF2E6BCF8702BC5C44212B366EADD;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct TaskFactory_1_tB92CC76F8137BDB54CC25523C300C0DA11088996;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct TaskFactory_1_t26008881F168137DBC8E93A9C46EFC3AA84568D5;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct TaskFactory_1_t45BBF197E997AAA1FBC0C7A735D938273D0B6CF0;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Task_1_t47D802E51DF908085AEE11A8051A4DF26F20F712;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Task_1_tD3CF804A93285D651521AB991ABAF9C2A03DE94F;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80;
// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B;
// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Delegate>
struct ValueCollection_t6C0A84D04F87D3A05857431804390724962C3F6F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>
struct ValueCollection_t22267C6BF1FE43B0B8FAF5DC3D1D07BFAF053CC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>>
struct ValueCollection_tAE52001085148B58C830045103D896EE09D99E31;
// System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>
struct WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Delegate>[]
struct EntryU5BU5D_tBACA0DA26A77797D416943C38A345F0E2F0BD9F4;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>[]
struct EntryU5BU5D_t2740BE9C6325F6881513B331924E645EDB52D895;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>>[]
struct EntryU5BU5D_t8D3A17BA4E80BE991823EBD8464AC856B769A34B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Microsoft.Azure.ObjectAnchors.ObjectInstance[]
struct ObjectInstanceU5BU5D_t44F4D9BDA28276298487AA0B87AFC5012656C26A;
// Microsoft.Azure.ObjectAnchors.ObjectQuery[]
struct ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106;
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[]
struct SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Numerics.Vector3[]
struct Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051;
// Microsoft.Azure.ObjectAnchors.AccountInformation
struct AccountInformation_tCE80CDBF2885D8A7DCBFDC90F90974789161FDF2;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Microsoft.Azure.ObjectAnchors.ICachedObject
struct ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession
struct ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71;
// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession
struct ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// Microsoft.Azure.ObjectAnchors.ObjectInstance
struct ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs
struct ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler
struct ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative
struct ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceState
struct ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344;
// Microsoft.Azure.ObjectAnchors.ObjectModel
struct ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C;
// Microsoft.Azure.ObjectAnchors.ObjectObserver
struct ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61;
// Microsoft.Azure.ObjectAnchors.ObjectQuery
struct ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative
struct ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631;
// Microsoft.Azure.ObjectAnchors.Promise
struct Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1;
// Microsoft.Azure.ObjectAnchors.PromiseBase
struct PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD;
// Microsoft.Azure.ObjectAnchors.PromiseCreateOptions
struct PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0;
// Microsoft.Azure.ObjectAnchors.PromiseSafeHandle
struct PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement
struct SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete
struct aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855;
// Microsoft.Azure.ObjectAnchors.aoa_promise_on_error
struct aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8;
// Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress
struct aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646;
// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c
struct U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE;
// Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A;
// Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99;
// Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c
struct U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069;
// Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F;
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c
struct U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855;
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCB653D45C1BAA5C44BFA024B24C53B89399C9114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD794B144DC680C5410F8354A109B1448389D71A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t100004F4BC5309A9FFD563D3BC25B2D85189C9C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* status_tF6E66D7C8DFFB75FF74E493F2793847185D5BA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B;
IL2CPP_EXTERN_C String_t* _stringLiteral2289F1737C939FD5C0F268A12CDEF12056F4D1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral255FBA2ECA71FFA96DC210DD7D19B7E371913A64;
IL2CPP_EXTERN_C String_t* _stringLiteral448627E76D874E9A9D103F8794752ADE004CA21F;
IL2CPP_EXTERN_C String_t* _stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4;
IL2CPP_EXTERN_C String_t* _stringLiteral4FA4AF8CCEA6268C5E66D1C425E81865807A8330;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA433E10BF74FAFBC9D4DCA2388A4E661A58898;
IL2CPP_EXTERN_C String_t* _stringLiteralBE752B33F2E24F2A0E23FA5F8192074CF99B4D04;
IL2CPP_EXTERN_C String_t* _stringLiteralBF4789EEB525946F5C07362FFB655ED124126927;
IL2CPP_EXTERN_C String_t* _stringLiteralDBCC3E626DA18D7C50720A259C46253C6D72D0F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEFC01655CCC809F2F9C9DBB30DFFF78C5BC267E2;
IL2CPP_EXTERN_C String_t* _stringLiteralF15767575F8E51FACC175148AE8F3B04EE1E0D1C;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFFE3A1B73CD7FC81540FBBE737435B0A887629D5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_mF7755EF298529822CFA5217E5A71DC0F1D8DCB9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m07C388B70B050978A9DF4ED09031AF2DAD7DA140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_m12D17F15356746A684F7F4704DA45364BE239B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mE6068DC360C61314099FEF493219489127CADC61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m25AF9B6C3389328CC826E454AD9251D95618215F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m0DFA5495C52F7016F150A7D2188FAFCCE717C08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m66D617E1A0A1614427855E805A9065579E9C4612_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m9CCCFCF8594E37D294C2ED43AB1AEDD13135CE21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mCAEDCA796C65036CAD1DEE4FC1841B980B2CFE25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m608B0AEA53B48154F6BBE69EDCAFDDB0866D7691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m885D6BD05470D4862130660D1A60981433DF3E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m91ED08403342FA2CA2CD5FB031E48D1B5436802F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mD082D98CAF72598019B3E4A93F80695370DB02F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m5E606F38327F042BCD3B70BFD7FBC134DFC9472A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m6A2ECAE9BFEE5F71A54E6A447AF1D40F19CAE6F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m9153AA51D45F43594589627D81145AE32B0CD319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mD37CD5BAFE87DA1C2E56B2810E9A762240C28ACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0EBF275B2CCB163CFB068E1F9893B5E91C81F9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m2B7A3B82DCAF057647278B109FCA8DAA813B1635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m7E71DAEDE609FF2AF0C883AA47713E21D09740E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mD69B1DF72CE4F99563A36A26D4A4574F6A5E62AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mA79D6C87F7981A704A378E6AE4A2EF2AA6FFDACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m23FE9F8C35B5709DFB957B96F0984C3228376620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m9D6313EBCCE1E4553C1440D7EA58C12486976FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_m9F96915A2337BE8DA159065E2A7B36D4FF88EC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_mE30179A4D8AD044ADE484A51938988CEAEDBA916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m5E11FB1F0C8CB8935A83BCAB349253F33B8B1810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m828B4892C565D1842B955164F803857CA28C285C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mB5321597A21D51ED9948A323922E73958EC5F89B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mBE76BF127163426A964D540771B8D9D073E8F18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_mBC19FDCA3BEDC2CFEB1CFA5C0D0C194606A6A4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mF776502466C12E767C5664E0E9D6F42788CD9329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_m0458C1EFEA1FB623D22DF5DFD11117AD8D2B5787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mEDB1D5D2D3F15664E275522650D22376DC4D6729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC519DF81E8D29355A914414FD3F438BF6DB9B557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m15CC0CF393B3CED6174604714515953BCC76BBE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m36DEAFFBAD76530491287EB5B89A912440E860F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m610867A06D69C090EDAD34574A265E4F0E0E75D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7F30C5BC54E0CB684E79A457BB8F7DEFC331167E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5A3172C8E526A1AE4BB2A572819B13001A44B88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D_TisIntPtr_t_m12C7A9120C9D5DC5FD648965DF713797A957B0D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisIntPtr_t_m53FD16B186A5FF0E489639334D7548F7EC179680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisIntPtr_t_m63E57DCAAB0465C36C8C5E5BD6DAB3D5C5C998AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PackedValue_UnpackPtrs_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_m9233AE2984126ABF10C0763A7D9FF72529A01C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PackedValue_op_Implicit_m6A4FB0AF18928E5FB960A49CAECC4300013CF7D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectCache_GetOrCreate_TisObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83_mA23FC0644818F1E29B8D840D0FCB3C05237B7BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectCache_GetOrCreate_TisObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344_m6075931B3AE2A2DB52C1D68579970B12F800E6A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectCache_GetOrCreate_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_mC826C5E422B8F212250DF11A1B4BFEF168E435C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectCache_GetOrCreate_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_mCE7F877519DF414C50E4775FA842CEF4C1EB2ADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectCache_GetOrCreate_TisObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_m9BD097F3EDA818AD237840AEFE047A98FD803925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectCache_GetOrCreate_TisSpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_m644A9C42097B75CB6C69F172520B4AC3C5F91655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectCache_Remove_mC9F1C7A3512B17B749D38B863B9C2B2A44527243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectEventHandlerCache_AddEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mD02A0577DB951C428B4C32F57DAC16028B5E81B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectEventHandlerCache_Clear_mD977A00FF1AC25F04A8C99FA6B472C4E5FC069E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectEventHandlerCache_GetEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mBD779617296B551F54D9BD49203BA9D9B70DE8AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectEventHandlerCache_RemoveEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_m07CAA85338B4DABC8296DDFF857247BA1B9A46AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PromiseBase_OnErrorHandler_mF1DD93E5243087620BE39B03DECBB7BE9B70BA03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PromiseBase_U3C_ctorU3Eb__7_0_m20631ADBD9971E3F35C78730BE3C7829C83AEE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PromiseBase__ctor_m2D3C8E47A95D02C074872193D2BF533BAB4CC8FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_get_Task_m4261C0D308AA6CA383CA7379BFDF51F861C46229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_get_Task_m834FFF6350EFA057F2D0935E0EF8DB3181B1FC2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_get_Task_mB367383462E6575117DA1AD2B55001947AA3FEC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_get_Task_mD621B8B22BCEF83D92E817161CEDE0256FCD9F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_get_Task_mE6B431FCACAAAC9B5A8CFA8A67AF0A7CE84007CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9E998C4329D57B4B440BC6EB7BD138BEC2CFA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_Create_TisList_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B_m6B0ACA8BC1020CF6BC0A0535CBDCE5182A3074A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_Create_TisObjectDiagnosticsUploadStatus_t0239212469F17F9A6909C3510179A29E27928DA2_m8BC0C1DEB531145E01A82F1FB1E9BE6CDA7A271A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_Create_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_m7F2017269440511684350FDA0A96C7B00E5B4B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_Create_TisObjectObserverAccessStatus_t57753A5D3B844A9C1474F644A823B8DEFCF04CC8_mDAD5FBA3096A17B6A66C1EF3287ECF1B2DE21E31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_U3COnCompleteHandlerU3Eb__6_0_mF1D27FBF561FE76D21E37DAC6CC3B87C9EC04C06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m310753FCFC36330CC205FB62006ED45F4F5FBD77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m80BE4B25A47EF60DCC63742702883C9013D3C19C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m8336E9ACE91AA12E62DA9AC4028CEAD7D875237A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mED7E6FE2BCD55EFC94EFA175EF4F2F01E9128521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m558CC4667D9E2665B3ECAD2EAA12084219911A0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m907E69DF8E28A5DF95F852487D4B4AD711B7DDF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC252F2224B7ADEF66D47B67AA1CCC5F484CD3709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE141C4D77C22133392CFDFCDB022FD89CAAFDAF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m2AE0BE5D28A984B7E8945A3F6A7667AAD25237E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m0DE68CD123975A4FE4C64B8A538E832658FA96F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m0671F069CF34A6C300AC23D45B037150062B0E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m18B15251A2F6D36855A9002486452B7961FDCA35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m9FDAC96588CF90BEC036102D8E15BFB3CAB0D4C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mE2E409EF2D436B7B8B220D4E8C4F66CB1EA0A6C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m04E943AD9821534006BFFA0BFFCBF0145557ED5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDetectAsyncU3Eb__10_1_mA078002DA68AF6DA8A7C5F5A0C1B259097BAD16A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m9F433EF9DBE3E1A5551FF3E2852D8D39FF2EA27D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m21D026A83D00EC5FDE92AB139C60FF0C3AA7A16C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m129A12ED09A0C4064D170EC1931DFAED1BBE5B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_m1BB04D357781B22934D2928201359A820182E452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_m6FF931079B8C65C1BF697B879860B3173B2FAC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_mEE5281FF9369093FD72678A5719514A85D083DD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m7AB13C21089F585B655ECF83CB3B2A7780A2332C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_m6A783B55CB7AA5C0784CE446159F0C9624F075B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m460F8EEAD7B7383BD77A2C95378419769A277DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_mDEE8E433DCDBF105F18B6117ABBDB2EC7DE30FD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_m3165AD48C8CDAF4BF62D17CB471B66E091FCDC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_SetTarget_mEFEC77626F3784DF22350B22B38027ED62CA66F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_m827E095D5D29B71FA1580C93B702A5350A591011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_m0D20CC4ED15974B80DB3E3E306D0A4943B33CFCD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0;;
struct PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke;
struct PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106;
struct SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t02449A56122637002EDCE65A48697E4DA91CD9EA 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>
struct Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBACA0DA26A77797D416943C38A345F0E2F0BD9F4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t29B1E367D95E46B2E45B4C33E1F3C5644F15EC98* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6C0A84D04F87D3A05857431804390724962C3F6F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>
struct Dictionary_2_tCB653D45C1BAA5C44BFA024B24C53B89399C9114  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2740BE9C6325F6881513B331924E645EDB52D895* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t783CC24E11196555647F27C7496E8BE190F88685* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t22267C6BF1FE43B0B8FAF5DC3D1D07BFAF053CC4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>>
struct Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8D3A17BA4E80BE991823EBD8464AC856B769A34B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t86C9DF8F619BCC6C9F10B10C14A10669580D99B9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAE52001085148B58C830045103D896EE09D99E31* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.IntPtr>
struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9  : public RuntimeObject
{
};

struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields
{
	// T[] System.EmptyArray`1::Value
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___Value_0;
};

// System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>
struct List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectInstanceU5BU5D_t44F4D9BDA28276298487AA0B87AFC5012656C26A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectInstanceU5BU5D_t44F4D9BDA28276298487AA0B87AFC5012656C26A* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_0;
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Microsoft.Azure.ObjectAnchors.NativeLibrary
struct NativeLibrary_tD4D5D3C81C1C908CB623F830D5B9D38305648824  : public RuntimeObject
{
};

// Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary
struct NativeLibrary_t22C0D565AB301D8F92DC7CF2EFECF3FF6A2E410A  : public RuntimeObject
{
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary
struct NativeLibrary_t11BFD4382F3002D8B5B7128D7710725E3B8B5DE2  : public RuntimeObject
{
};

// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers
struct NativeLibraryHelpers_t986E2B1054E0E28228D52EED311E77E548D81956  : public RuntimeObject
{
};

// Microsoft.Azure.ObjectAnchors.ProjectedObjectCache
struct ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96  : public RuntimeObject
{
};

struct ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>> Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::tracked
	Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* ___tracked_0;
	// Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::projectedObjectCleanupHandlerDelegate
	ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* ___projectedObjectCleanupHandlerDelegate_1;
};

// Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache
struct ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA  : public RuntimeObject
{
};

struct ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>> Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::tracked
	RuntimeObject* ___tracked_0;
};

// Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers
struct ProjectedObjectHelpers_t938DC08BBCA0A5F0678C24B50F1A511AEEAC106E  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c
struct U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE  : public RuntimeObject
{
};

struct U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_StaticFields
{
	// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::<>9
	U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE* ___U3CU3E9_0;
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::<>9__9_0
	Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* ___U3CU3E9__9_0_1;
};

// Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c
struct U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069  : public RuntimeObject
{
};

struct U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields
{
	// Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<>9
	U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* ___U3CU3E9_0;
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<>9__7_0
	Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* ___U3CU3E9__7_0_1;
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<>9__8_0
	Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* ___U3CU3E9__8_0_2;
	// System.Func`2<System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstance> Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<>9__10_1
	Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE* ___U3CU3E9__10_1_3;
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<>9__10_0
	Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* ___U3CU3E9__10_0_4;
	// System.Func`2<Microsoft.Azure.ObjectAnchors.ObjectQuery,System.IntPtr> Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<>9__10_2
	Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E* ___U3CU3E9__10_2_5;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c
struct U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855  : public RuntimeObject
{
};

struct U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_StaticFields
{
	// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::<>9
	U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855* ___U3CU3E9_0;
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Boolean> Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::<>9__8_0
	Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* ___U3CU3E9__8_0_1;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tD3CF804A93285D651521AB991ABAF9C2A03DE94F* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>
struct TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Task_1_t47D802E51DF908085AEE11A8051A4DF26F20F712  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

struct Task_1_t47D802E51DF908085AEE11A8051A4DF26F20F712_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tB19500148A3E1550C4A6CE5EBAEFC899DB64CCC2* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Task_1_tD3CF804A93285D651521AB991ABAF9C2A03DE94F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B* ___m_result_22;
};

struct Task_1_tD3CF804A93285D651521AB991ABAF9C2A03DE94F_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA9B16B0276CDF2E6BCF8702BC5C44212B366EADD* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

struct Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tB92CC76F8137BDB54CC25523C300C0DA11088996* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* ___m_result_22;
};

struct Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t26008881F168137DBC8E93A9C46EFC3AA84568D5* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

struct Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t45BBF197E997AAA1FBC0C7A735D938273D0B6CF0* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Numerics.Matrix4x4
struct Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 
{
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;
};

struct Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_StaticFields
{
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ____identity_16;
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// System.Numerics.Quaternion
struct Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F 
{
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Numerics.Vector3
struct Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D 
{
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t47D802E51DF908085AEE11A8051A4DF26F20F712* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t47D802E51DF908085AEE11A8051A4DF26F20F712* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>
struct AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// Microsoft.Azure.ObjectAnchors.AccountInformation
struct AccountInformation_tCE80CDBF2885D8A7DCBFDC90F90974789161FDF2  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.AccountInformation::handle
	intptr_t ___handle_0;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession
struct ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::handle
	intptr_t ___handle_0;
};

// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession
struct ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::handle
	intptr_t ___handle_0;
};

// Microsoft.Azure.ObjectAnchors.ObjectInstance
struct ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectInstance::handle
	intptr_t ___handle_0;
};

struct ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_StaticFields
{
	// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative Microsoft.Azure.ObjectAnchors.ObjectInstance::ChangedStaticHandlerDelegate
	ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* ___ChangedStaticHandlerDelegate_1;
};

// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs
struct ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::handle
	intptr_t ___handle_1;
};

// Microsoft.Azure.ObjectAnchors.ObjectInstanceState
struct ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectInstanceState::handle
	intptr_t ___handle_0;
};

// Microsoft.Azure.ObjectAnchors.ObjectModel
struct ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectModel::handle
	intptr_t ___handle_0;
};

// Microsoft.Azure.ObjectAnchors.ObjectObserver
struct ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectObserver::handle
	intptr_t ___handle_0;
};

struct ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_StaticFields
{
	// System.Threading.EventWaitHandle Microsoft.Azure.ObjectAnchors.ObjectObserver::_appDomainUnloadRequested
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ____appDomainUnloadRequested_1;
	// System.Threading.EventWaitHandle Microsoft.Azure.ObjectAnchors.ObjectObserver::_appDomainUnloadCompleted
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ____appDomainUnloadCompleted_2;
};

// Microsoft.Azure.ObjectAnchors.ObjectQuery
struct ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectQuery::handle
	intptr_t ___handle_0;
};

// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// Microsoft.Azure.ObjectAnchors.PackedValue
struct PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Microsoft.Azure.ObjectAnchors.PackedValueType Microsoft.Azure.ObjectAnchors.PackedValue::Type
			int32_t ___Type_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Type_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Size_2_OffsetPadding[4];
			// System.Int32 Microsoft.Azure.ObjectAnchors.PackedValue::Size
			int32_t ___Size_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Size_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___Size_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Pointer_3_OffsetPadding[8];
			// System.IntPtr Microsoft.Azure.ObjectAnchors.PackedValue::Pointer
			intptr_t ___Pointer_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Pointer_3_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___Pointer_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt64_4_OffsetPadding[8];
			// System.UInt64 Microsoft.Azure.ObjectAnchors.PackedValue::UInt64
			uint64_t ___UInt64_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt64_4_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___UInt64_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Int64_5_OffsetPadding[8];
			// System.Int64 Microsoft.Azure.ObjectAnchors.PackedValue::Int64
			int64_t ___Int64_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Int64_5_OffsetPadding_forAlignmentOnly[8];
			int64_t ___Int64_5_forAlignmentOnly;
		};
	};
};

struct PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_StaticFields
{
	// System.Int32 Microsoft.Azure.ObjectAnchors.PackedValue::IntPtrSize
	int32_t ___IntPtrSize_0;
};

// Microsoft.Azure.ObjectAnchors.PromiseCreateOptions
struct PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0 
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.PromiseCreateOptions::context
	intptr_t ___context_0;
	// Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete Microsoft.Azure.ObjectAnchors.PromiseCreateOptions::onComplete
	aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* ___onComplete_1;
	// Microsoft.Azure.ObjectAnchors.aoa_promise_on_error Microsoft.Azure.ObjectAnchors.PromiseCreateOptions::onError
	aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* ___onError_2;
	// Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress Microsoft.Azure.ObjectAnchors.PromiseCreateOptions::onProgress
	aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* ___onProgress_3;
};
// Native definition for P/Invoke marshalling of Microsoft.Azure.ObjectAnchors.PromiseCreateOptions
struct PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke
{
	intptr_t ___context_0;
	Il2CppMethodPointer ___onComplete_1;
	Il2CppMethodPointer ___onError_2;
	Il2CppMethodPointer ___onProgress_3;
};
// Native definition for COM marshalling of Microsoft.Azure.ObjectAnchors.PromiseCreateOptions
struct PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_com
{
	intptr_t ___context_0;
	Il2CppMethodPointer ___onComplete_1;
	Il2CppMethodPointer ___onError_2;
	Il2CppMethodPointer ___onProgress_3;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialFieldOfView
struct SpatialFieldOfView_t4DFF522496D7B12F818A5EF7238CCAED3E8C4CD6 
{
	// System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialFieldOfView::Position
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ___Position_0;
	// System.Numerics.Quaternion Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialFieldOfView::Orientation
	Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F ___Orientation_1;
	// System.Single Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialFieldOfView::FarDistance
	float ___FarDistance_2;
	// System.Single Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialFieldOfView::HorizontalFieldOfViewInDegrees
	float ___HorizontalFieldOfViewInDegrees_3;
	// System.Single Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialFieldOfView::AspectRatio
	float ___AspectRatio_4;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem
struct SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 
{
	// System.Guid Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem::NodeId
	Guid_t ___NodeId_0;
	// System.Numerics.Matrix4x4 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem::CoordinateSystemToNodeTransform
	Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ___CoordinateSystemToNodeTransform_1;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation
struct SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F 
{
	// System.Guid Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation::NodeId
	Guid_t ___NodeId_0;
	// System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation::Position
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ___Position_1;
	// System.Numerics.Quaternion Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation::Orientation
	Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F ___Orientation_2;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement
struct SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::handle
	intptr_t ___handle_0;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox
struct SpatialOrientedBox_tE146C24275514A892525922FE5A5F87AE603A08E 
{
	// System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox::Center
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ___Center_0;
	// System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox::Extents
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ___Extents_1;
	// System.Numerics.Quaternion Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox::Orientation
	Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F ___Orientation_2;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose
struct SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285 
{
	// System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose::Position
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ___Position_0;
	// System.Numerics.Quaternion Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose::Orientation
	Quaternion_tF78017216EDB74038AE5C9696AF7C1C922EE788F ___Orientation_1;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialSphere
struct SpatialSphere_t0267B470B05B41A0DDB946A61A99454B11381359 
{
	// System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialSphere::Center
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ___Center_0;
	// System.Single Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialSphere::Radius
	float ___Radius_1;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A  : public RuntimeObject
{
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::created
	bool ___created_0;
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::handle
	intptr_t ___handle_1;
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::transfer
	bool ___transfer_2;
};

// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA  : public RuntimeObject
{
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::created
	bool ___created_0;
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::handle
	intptr_t ___handle_1;
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::transfer
	bool ___transfer_2;
};

// Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A  : public RuntimeObject
{
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::created
	bool ___created_0;
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::handle
	intptr_t ___handle_1;
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::transfer
	bool ___transfer_2;
};

// Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99  : public RuntimeObject
{
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::created
	bool ___created_0;
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::handle
	intptr_t ___handle_1;
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::transfer
	bool ___transfer_2;
};

// Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F  : public RuntimeObject
{
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::created
	bool ___created_0;
	// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::handle
	intptr_t ___handle_1;
	// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::transfer
	bool ___transfer_2;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6  : public RuntimeObject
{
	// System.Boolean Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::created
	bool ___created_0;
	// System.IntPtr Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::handle
	intptr_t ___handle_1;
	// System.Boolean Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::transfer
	bool ___transfer_2;
};

// System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>
struct WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Microsoft.Azure.ObjectAnchors.PromiseBase
struct PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD  : public RuntimeObject
{
	// System.Boolean Microsoft.Azure.ObjectAnchors.PromiseBase::disposed
	bool ___disposed_0;
	// System.Runtime.InteropServices.GCHandle Microsoft.Azure.ObjectAnchors.PromiseBase::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
	// System.Threading.CancellationTokenRegistration Microsoft.Azure.ObjectAnchors.PromiseBase::cancellationTokenRegistration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration_2;
	// Microsoft.Azure.ObjectAnchors.PromiseCreateOptions Microsoft.Azure.ObjectAnchors.PromiseBase::createOptions
	PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0 ___createOptions_3;
	// System.Action`1<System.Single> Microsoft.Azure.ObjectAnchors.PromiseBase::progressCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___progressCallback_4;
	// System.Threading.SynchronizationContext Microsoft.Azure.ObjectAnchors.PromiseBase::synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___synchronizationContext_5;
	// Microsoft.Azure.ObjectAnchors.PromiseSafeHandle Microsoft.Azure.ObjectAnchors.PromiseBase::Handle
	PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___Handle_6;
};

struct PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields
{
	// Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteDelegate
	aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* ___OnCompleteDelegate_7;
	// Microsoft.Azure.ObjectAnchors.aoa_promise_on_error Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorDelegate
	aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* ___OnErrorDelegate_8;
	// Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressDelegate
	aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* ___OnProgressDelegate_9;
};

// Microsoft.Azure.ObjectAnchors.PromiseSafeHandle
struct PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint
struct SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605 
{
	// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint::PlacedCoordinate
	SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285 ___PlacedCoordinate_0;
	// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint::TargetLocation
	SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F ___TargetLocation_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9
struct U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489 
{
	// System.Int32 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A ___U3CU3Et__builder_1;
	// System.String Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::diagnosticsFilePath
	String_t* ___diagnosticsFilePath_2;
	// Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::objectAnchorsSession
	ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* ___objectAnchorsSession_3;
	// Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::<promise_>5__2
	Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A* ___U3Cpromise_U3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::<>u__1
	TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602 ___U3CU3Eu__1_5;
};

// Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10
struct U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615 
{
	// System.Int32 Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::<>t__builder
	AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120 ___U3CU3Et__builder_1;
	// Microsoft.Azure.ObjectAnchors.ObjectQuery[] Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::queries
	ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* ___queries_2;
	// Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::<>4__this
	ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* ___U3CU3E4__this_3;
	// Microsoft.Azure.ObjectAnchors.Promise`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::<promise_>5__2
	Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514* ___U3Cpromise_U3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::<>u__1
	TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218 ___U3CU3Eu__1_5;
};

// Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8
struct U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43 
{
	// System.Int32 Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF ___U3CU3Et__builder_1;
	// Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::<>4__this
	ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* ___U3CU3E4__this_2;
	// System.Byte[] Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_3;
	// Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::<promise_>5__2
	Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2* ___U3Cpromise_U3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::<>u__1
	TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06 ___U3CU3Eu__1_5;
};

// Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7
struct U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7 
{
	// System.Int32 Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476 ___U3CU3Et__builder_1;
	// Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::<promise_>5__2
	Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06* ___U3Cpromise_U3E5__2_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::<>u__1
	TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F ___U3CU3Eu__1_3;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8
struct U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C 
{
	// System.Int32 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::<>4__this
	SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* ___U3CU3E4__this_2;
	// System.String Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::name
	String_t* ___name_3;
	// Microsoft.Azure.ObjectAnchors.Promise`1<System.Boolean> Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::<promise_>5__2
	Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* ___U3Cpromise_U3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_5;
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Func`2<System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstance>
struct Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.Azure.ObjectAnchors.ObjectQuery,System.IntPtr>
struct Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Boolean>
struct Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA  : public MulticastDelegate_t
{
};

// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstance>
struct Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2  : public MulticastDelegate_t
{
};

// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs>
struct Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81  : public MulticastDelegate_t
{
};

// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceState>
struct Func_2_tD794B144DC680C5410F8354A109B1448389D71A2  : public MulticastDelegate_t
{
};

// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F  : public MulticastDelegate_t
{
};

// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectObserver>
struct Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252  : public MulticastDelegate_t
{
};

// System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>
struct Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B  : public MulticastDelegate_t
{
};

// Microsoft.Azure.ObjectAnchors.Promise`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>
struct Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514  : public PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD
{
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,T> Microsoft.Azure.ObjectAnchors.Promise`1::factory
	Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* ___factory_10;
	// System.Threading.Tasks.TaskCompletionSource`1<T> Microsoft.Azure.ObjectAnchors.Promise`1::taskCompletionSource
	TaskCompletionSource_1_tE213850E8CEA60B1D63A396F1DFD2E71829A1339* ___taskCompletionSource_11;
};

// Microsoft.Azure.ObjectAnchors.Promise`1<System.Boolean>
struct Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B  : public PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD
{
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,T> Microsoft.Azure.ObjectAnchors.Promise`1::factory
	Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* ___factory_10;
	// System.Threading.Tasks.TaskCompletionSource`1<T> Microsoft.Azure.ObjectAnchors.Promise`1::taskCompletionSource
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___taskCompletionSource_11;
};

// Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A  : public PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD
{
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,T> Microsoft.Azure.ObjectAnchors.Promise`1::factory
	Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* ___factory_10;
	// System.Threading.Tasks.TaskCompletionSource`1<T> Microsoft.Azure.ObjectAnchors.Promise`1::taskCompletionSource
	TaskCompletionSource_1_tCA198E3CB54414CD320214853C33186B7AA0AB7C* ___taskCompletionSource_11;
};

// Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2  : public PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD
{
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,T> Microsoft.Azure.ObjectAnchors.Promise`1::factory
	Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* ___factory_10;
	// System.Threading.Tasks.TaskCompletionSource`1<T> Microsoft.Azure.ObjectAnchors.Promise`1::taskCompletionSource
	TaskCompletionSource_1_tE54AC85B57AF5A7CB627043B225A4FBFBE28FAD0* ___taskCompletionSource_11;
};

// Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06  : public PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD
{
	// System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,T> Microsoft.Azure.ObjectAnchors.Promise`1::factory
	Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* ___factory_10;
	// System.Threading.Tasks.TaskCompletionSource`1<T> Microsoft.Azure.ObjectAnchors.Promise`1::taskCompletionSource
	TaskCompletionSource_1_t9CC22778793AA5F26ED1341CC731D445373F4834* ___taskCompletionSource_11;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler
struct ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808  : public MulticastDelegate_t
{
};

// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative
struct ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995  : public MulticastDelegate_t
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative
struct ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631  : public MulticastDelegate_t
{
};

// Microsoft.Azure.ObjectAnchors.Promise
struct Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1  : public PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Microsoft.Azure.ObjectAnchors.Promise::taskCompletionSource
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___taskCompletionSource_10;
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete
struct aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855  : public MulticastDelegate_t
{
};

// Microsoft.Azure.ObjectAnchors.aoa_promise_on_error
struct aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8  : public MulticastDelegate_t
{
};

// Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress
struct aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646  : public MulticastDelegate_t
{
};

// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8
struct U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2 
{
	// System.Int32 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::<>4__this
	ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* ___U3CU3E4__this_2;
	// System.String Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::diagnosticsFilePath
	String_t* ___diagnosticsFilePath_3;
	// Microsoft.Azure.ObjectAnchors.Promise Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::<promise_>5__2
	Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* ___U3Cpromise_U3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9
struct U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12 
{
	// System.Int32 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.String Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::name
	String_t* ___name_2;
	// Microsoft.Azure.ObjectAnchors.Promise Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::<promise_>5__2
	Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* ___U3Cpromise_U3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Numerics.Vector3[]
struct Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D m_Items[1];

	inline Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D value)
	{
		m_Items[index] = value;
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.Azure.ObjectAnchors.ObjectQuery[]
struct ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106  : public RuntimeArray
{
	ALIGN_FIELD (8) ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* m_Items[1];

	inline ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[]
struct SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503  : public RuntimeArray
{
	ALIGN_FIELD (8) SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605 m_Items[1];

	inline SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605 value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_pinvoke(const PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0& unmarshaled, PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_pinvoke_back(const PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke& marshaled, PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0& unmarshaled);
IL2CPP_EXTERN_C void PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_pinvoke_cleanup(PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m610AC9FAFAA596802CD176D49D81FC2E15278ABF_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___target0, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::SetTarget(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.UInt64,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m8BF32B786C08064B96551A1585CEE266EF9F7CB5_gshared (Func_2_tB00208B78D3150B53B18E55FEB2EF40B290F97AD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate<System.Object>(System.UInt64,System.Func`2<System.UInt64,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProjectedObjectCache_GetOrCreate_TisRuntimeObject_m94BE0F8184CC21BB697692D68DFF726EF6DED7BC_gshared (uint64_t ___cookie0, Func_2_tB00208B78D3150B53B18E55FEB2EF40B290F97AD* ___createFactory1, const RuntimeMethod* method) ;
// T Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetEventHandler<System.Object>(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProjectedObjectEventHandlerCache_GetEventHandler_TisRuntimeObject_m00F0F8DEC6FED760AEDE6ACAC99289FC390F5017_gshared (uint64_t ___cookie0, String_t* ___eventName1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::AddEventHandler<System.Object>(System.UInt64,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectEventHandlerCache_AddEventHandler_TisRuntimeObject_mF8B5C8CFE1E11A52689DD6D12119EF3A0BFDA8CD_gshared (uint64_t ___cookie0, String_t* ___eventName1, RuntimeObject* ___handler2, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::RemoveEventHandler<System.Object>(System.UInt64,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProjectedObjectEventHandlerCache_RemoveEventHandler_TisRuntimeObject_m6AE020C71917A8B9DD49D53E63B3E483C8086115_gshared (uint64_t ___cookie0, String_t* ___eventName1, RuntimeObject* ___handler2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9 AsyncTaskMethodBuilder_1_Create_mA40B8A53C4AB16DDDC272E1BD7361CEB160C2A03_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>::Start<Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m7CE7C9FE85DA70D6330E6C021D3AC52A4EE65FEC_gshared (AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9* __this, U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* AsyncTaskMethodBuilder_1_get_Task_m228C453A630CC50C7517D9F9A31BFAFBBD0DDBA8_gshared (AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_mC858F5D5753BAB7BB5B5106E8E28342D6E3459BA_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mE802C1451E78ED76EF55BCC161D547FD693132F4_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.IntPtr,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mAFAD1CF4C74CF3EE710FB79F7B75A5B0F394B597_gshared (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> Microsoft.Azure.ObjectAnchors.PackedValue::UnpackPtrs<System.Object>(Microsoft.Azure.ObjectAnchors.PackedValue,System.Func`2<System.IntPtr,T>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* PackedValue_UnpackPtrs_TisRuntimeObject_mAD6B525487B33C1F256F800539875629EA3374B2_gshared (PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___packedValue0, Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* ___factory1, bool ___free2, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m2A6ED89EC371323698C0584E0B5F895DB6434502_gshared (Func_2_tFFD823B16CD3985097038389DBE3827300DD2B10* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create<System.Int32Enum>(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t83ECF99AB31F8643A26DC4BA910F197650AD6FD3* Promise_Create_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m46BAEDEF6EF1A37571A902E7067F2270AE02002E_gshared (Func_2_tFFD823B16CD3985097038389DBE3827300DD2B10* ___factory0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1<System.Int32Enum>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* Promise_1_get_Task_m93F24A1AF03888A93BB730401DC3EA2A39DD2B03_gshared (Promise_1_t83ECF99AB31F8643A26DC4BA910F197650AD6FD3* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int32Enum>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900 Task_1_GetAwaiter_mBC5D4AD566D449CFA4CDD164DD4A28E81BF3E9A8_gshared (Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m23B9774CF68B8D4751B3FA2D7C0A10DFDA86BC34_gshared (TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>,Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m8ACDB88D875F16BCD7ACF7774F581ED95E5230E7_gshared (AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9* __this, TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900* ___awaiter0, U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m7BE13DEB70EC3AEE02DD30BBC8F25298BD25021F_gshared (TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m2E575629BCD46EA73D32EA85764E79315C353E13_gshared (AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m718D4EE45CDBF257976C193933CBE5478FFC14E3_gshared (AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9* __this, int32_t ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mBE5F26838D7801B8250806F352A6915A7F9AA2E5_gshared (AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m2516BAE60331FFBC28497DE5E439CBAC3D6013ED_gshared (Func_2_t8451A75E16AE9307D159A98BA4F7A2D1142F39AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create<System.Object>(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tB193A157B0A0CBC98CFD594EA69CA2585B7D3266* Promise_Create_TisRuntimeObject_m35845B93E48D66B62455897AB34326EC9A5E0459_gshared (Func_2_t8451A75E16AE9307D159A98BA4F7A2D1142F39AF* ___factory0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Promise_1_get_Task_mDFA7493374C4E36028038C2B31DB601724078B10_gshared (Promise_1_tB193A157B0A0CBC98CFD594EA69CA2585B7D3266* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m6501FB08CAA4DEB17AC8932355C0EC1EAF9E381C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCFF797116B0034B0CAE461E61D2265AFA3534601_gshared (Func_2_tC74232CB2616B5EFF9626D85F75FD33339EF0895* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.IntPtr>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisIntPtr_t_mF13D435581F8F251725050F377835CD7649BF8BB_gshared (RuntimeObject* ___source0, Func_2_tC74232CB2616B5EFF9626D85F75FD33339EF0895* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.IntPtr>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Enumerable_ToArray_TisIntPtr_t_m53FD16B186A5FF0E489639334D7548F7EC179680_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.IntPtr>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mFE7AB29F5804CF5627A7A32B2BFDEE0FE4B350A7_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* ___stateMachine1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<System.IntPtr>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisIntPtr_t_m63E57DCAAB0465C36C8C5E5BD6DAB3D5C5C998AB_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m0DE68CD123975A4FE4C64B8A538E832658FA96F4_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m2AE0BE5D28A984B7E8945A3F6A7667AAD25237E9_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_m0458C1EFEA1FB623D22DF5DFD11117AD8D2B5787_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>::Start<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_mFE753A406E65D9434B30F1BBF16B2F8EE6F431CF_gshared (AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9* __this, U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_mBC19FDCA3BEDC2CFEB1CFA5C0D0C194606A6A4A6_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32Enum>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_m2A9BC4B382B4A28BB7189FE5BDDD9F0FC6591DCD_gshared (AsyncTaskMethodBuilder_1_tB63B23CE5211A1439A08AE69DF9BF403502D3FE9* __this, TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900* ___awaiter0, U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_m9F96915A2337BE8DA159065E2A7B36D4FF88EC56_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mEDB1D5D2D3F15664E275522650D22376DC4D6729_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m56DCABD7C62878BE0D748CFFBFB3D0710A9BBB6B_gshared (Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create<System.Boolean>(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* Promise_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9E998C4329D57B4B440BC6EB7BD138BEC2CFA9_gshared (Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* ___factory0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Promise_1_get_Task_mD621B8B22BCEF83D92E817161CEDE0256FCD9F98_gshared (Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_mF7755EF298529822CFA5217E5A71DC0F1D8DCB9C_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mF776502466C12E767C5664E0E9D6F42788CD9329_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* ___stateMachine1, const RuntimeMethod* method) ;

// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mE62C7219737CDB3698CA55D4502AE609649C701A (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.OperationCanceledException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m980BF7ABCE5C603648AA46FB4C75437D110D0B5D (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_get_error_details(System.IntPtr,System.String&,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_get_error_details_mDB6005415D7C6E5BA815A36346CD66CD404F047E (intptr_t ___handle0, String_t** ___result_message1, String_t** ___result_requestCorrelationVector2, String_t** ___result_responseCorrelationVector3, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Delegate>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m36DEAFFBAD76530491287EB5B89A912440E860F1 (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>::.ctor()
inline void Dictionary_2__ctor_m610867A06D69C090EDAD34574A265E4F0E0E75D9 (Dictionary_2_tCB653D45C1BAA5C44BFA024B24C53B89399C9114* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB653D45C1BAA5C44BFA024B24C53B89399C9114*, const RuntimeMethod*))Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared)(__this, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::ProjectedObjectCleanupHandler(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52 (intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>>::.ctor()
inline void Dictionary_2__ctor_m7F30C5BC54E0CB684E79A457BB8F7DEFC331167E (Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39*, const RuntimeMethod*))Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared)(__this, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCleanupNative__ctor_m83373B05236846D92DCA22C157AB32F95AF7784A (ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_set_projected_object_cleanup(Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_set_projected_object_cleanup_mDB1445F204E9BCFAE519456EB94468086731F4EC (ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* ___callback0, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(Microsoft.Azure.ObjectAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m15CC0CF393B3CED6174604714515953BCC76BBE6 (Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* __this, uint64_t ___key0, WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39*, uint64_t, WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74**, const RuntimeMethod*))Dictionary_2_TryGetValue_m610AC9FAFAA596802CD176D49D81FC2E15278ABF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>::.ctor(T)
inline void WeakReference_1__ctor_m0D20CC4ED15974B80DB3E3E306D0A4943B33CFCD (WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74* __this, RuntimeObject* ___target0, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74*, RuntimeObject*, const RuntimeMethod*))WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared)(__this, ___target0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5A3172C8E526A1AE4BB2A572819B13001A44B88C (Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* __this, uint64_t ___key0, WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39*, uint64_t, WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74*, const RuntimeMethod*))Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>::TryGetTarget(T&)
inline bool WeakReference_1_TryGetTarget_m827E095D5D29B71FA1580C93B702A5350A591011 (WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74* __this, RuntimeObject** ___target0, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74*, RuntimeObject**, const RuntimeMethod*))WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared)(__this, ___target0, method);
}
// System.Void System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>::SetTarget(T)
inline void WeakReference_1_SetTarget_mEFEC77626F3784DF22350B22B38027ED62CA66F4 (WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74* __this, RuntimeObject* ___target0, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74*, RuntimeObject*, const RuntimeMethod*))WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared)(__this, ___target0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.WeakReference`1<Microsoft.Azure.ObjectAnchors.ICachedObject>>::Remove(TKey)
inline bool Dictionary_2_Remove_mC519DF81E8D29355A914414FD3F438BF6DB9B557 (Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39*, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E_gshared)(__this, ___key0, method);
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertHandleToCookie(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502 (intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Remove(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCache_Remove_mC9F1C7A3512B17B749D38B863B9C2B2A44527243 (uint64_t ___cookie0, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::Clear(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectEventHandlerCache_Clear_mD977A00FF1AC25F04A8C99FA6B472C4E5FC069E0 (uint64_t ___cookie0, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseSafeHandle__ctor_m62B40FF9DAB6D0DC91D141DF1717CD1439DF1822 (PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_account_information_release_m0FD4F1D4102DE753F632CC3ABB463DB71FC856B6 (intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_create_guid_account_id_string_account_key_string_account_domain(System.Guid,System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_mCE1E4F15A4CD31616E2223E073A1ED791E6F66D6 (Guid_t ___account_id0, String_t* ___account_key1, String_t* ___account_domain2, intptr_t* ___instance3, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Add(Microsoft.Azure.ObjectAnchors.ICachedObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42 (RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_anchors_session_release_m75A9936B2D2D7BD99EC182310DC5E7E2B7108153 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_account_information_account_information(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m84826BA72FAA6171FE800E167C3E65657F0ADFE1 (intptr_t ___account_information0, intptr_t* ___instance1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_object_observer(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_anchors_session_create_object_observer_m6CA8E154CF1FC8FE0CEEC23508563CCFA9AF1005 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* ObjectObserver_GetOrCreateInstance_mDFDE2BA332BA73AD7FE96030BD51792F8374CFC8 (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_changed_event_args_addref_m1A75869E3F8D665F4CFDAC6F02E1CCA4009F52FB (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_changed_event_args_release_m4CAD47B4C09C7E7DC61CA25AAFACD2923776CC4D (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ObjectInstanceChangedEventArgs_GetOrCreateInstance_m836F457EE3340E6865AD3EDBCB33D1A88A9B345D (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m5C58331BE3B22EF148128473CB8DADBC53B6789C (U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertCookieToHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C (uint64_t ___cookie0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m113BC79B23A27391EB157D14821C40A85B8BE8AA (Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m8BF32B786C08064B96551A1585CEE266EF9F7CB5_gshared)(__this, ___object0, ___method1, method);
}
// T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs>(System.UInt64,System.Func`2<System.UInt64,T>)
inline ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ProjectedObjectCache_GetOrCreate_TisObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83_mA23FC0644818F1E29B8D840D0FCB3C05237B7BCB (uint64_t ___cookie0, Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81* ___createFactory1, const RuntimeMethod* method)
{
	return ((  ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* (*) (uint64_t, Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81*, const RuntimeMethod*))ProjectedObjectCache_GetOrCreate_TisRuntimeObject_m94BE0F8184CC21BB697692D68DFF726EF6DED7BC_gshared)(___cookie0, ___createFactory1, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceChangedEventArgs__ctor_mE5AC62BF85E233EEEE135E37CB6FB43530A54464 (ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::ChangedStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_addref_m62FEEF7CDF1629ECDA3DD270011D1716ECDA2AF0 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_release_mC5E8CEF6C36F776245F6687124F10A0DFA534068 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_dispose_m34FDE1A7311ACFE0B12CF204CC69378B85FA9E57 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_model_id(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_get_model_id_mC481768872DEBD327EA9F6CE4802123A944EEE6B (intptr_t ___handle0, Guid_t* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_get_mode_m3816517887E73CCED77FC2B171FA20C332C338C9 (intptr_t ___handle0, int32_t* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_set_mode_m0F604051EE7BF1F2A6626E0C3B2DEAA7CDD67DA7 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method) ;
// T Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetEventHandler<Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler>(System.UInt64,System.String)
inline ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* ProjectedObjectEventHandlerCache_GetEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mBD779617296B551F54D9BD49203BA9D9B70DE8AA (uint64_t ___cookie0, String_t* ___eventName1, const RuntimeMethod* method)
{
	return ((  ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* (*) (uint64_t, String_t*, const RuntimeMethod*))ProjectedObjectEventHandlerCache_GetEventHandler_TisRuntimeObject_m00F0F8DEC6FED760AEDE6ACAC99289FC390F5017_gshared)(___cookie0, ___eventName1, method);
}
// Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* ObjectInstance_GetOrCreateInstance_mB079510528C2F87336C6FEAB20B13B38D4F57291 (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ObjectInstanceChangedEventArgs_GetOrCreateInstance_mC17D992315543E1871CA7895B24DAD70D30F7114 (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::Invoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_inline (ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::AddEventHandler<Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler>(System.UInt64,System.String,T)
inline void ProjectedObjectEventHandlerCache_AddEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mD02A0577DB951C428B4C32F57DAC16028B5E81B8 (uint64_t ___cookie0, String_t* ___eventName1, ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* ___handler2, const RuntimeMethod* method)
{
	((  void (*) (uint64_t, String_t*, ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808*, const RuntimeMethod*))ProjectedObjectEventHandlerCache_AddEventHandler_TisRuntimeObject_mF8B5C8CFE1E11A52689DD6D12119EF3A0BFDA8CD_gshared)(___cookie0, ___eventName1, ___handler2, method);
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_changed(System.IntPtr,System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_set_changed_mFAE6F8699161276829375885BAAF6AD2828F0C4E (intptr_t ___handle0, uint64_t ___value1, ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* ___value_fn2, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::RemoveEventHandler<Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler>(System.UInt64,System.String,T)
inline bool ProjectedObjectEventHandlerCache_RemoveEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_m07CAA85338B4DABC8296DDFF857247BA1B9A46AA (uint64_t ___cookie0, String_t* ___eventName1, ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* ___handler2, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, String_t*, ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808*, const RuntimeMethod*))ProjectedObjectEventHandlerCache_RemoveEventHandler_TisRuntimeObject_m6AE020C71917A8B9DD49D53E63B3E483C8086115_gshared)(___cookie0, ___eventName1, ___handler2, method);
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_try_get_current_state(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_try_get_current_state_m719D10D455BFF484ABF73F17AF9F894DEE286ED9 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* ObjectInstanceState_GetOrCreateInstance_m2E2C12C75FBCDC9E98CFA443160EC840FC1471EC (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* ObjectInstance_GetOrCreateInstance_mDFF0FFA53C7FCBEC50B2BEF4D2B1BBF1018B9D2A (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m6E60DD6C5407C0972664A1D9464E6F5A9E1518BF (U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstance>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m549B31C6835C9DD5685E3C9AB288C9AD1F3CACFF (Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m8BF32B786C08064B96551A1585CEE266EF9F7CB5_gshared)(__this, ___object0, ___method1, method);
}
// T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectInstance>(System.UInt64,System.Func`2<System.UInt64,T>)
inline ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* ProjectedObjectCache_GetOrCreate_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_mC826C5E422B8F212250DF11A1B4BFEF168E435C4 (uint64_t ___cookie0, Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2* ___createFactory1, const RuntimeMethod* method)
{
	return ((  ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* (*) (uint64_t, Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2*, const RuntimeMethod*))ProjectedObjectCache_GetOrCreate_TisRuntimeObject_m94BE0F8184CC21BB697692D68DFF726EF6DED7BC_gshared)(___cookie0, ___createFactory1, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceChangedHandlerNative__ctor_mAC1EAA2DBC650998CE9422E1A699C7761327CB76 (ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::EnsureAppDomainUnloadHandlingInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m3E0390043703CF76D47C4C4DB5518EAA99C4F135 (const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance__ctor_m18DC843C177ECEB1ACC205C3EDB2BB70D0DD978B (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_addref_mE66712A3C1558B6CF02BC006FC6C441F5E4A6F74 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_release_m7012960A6C1B5D79822BE66ACA08F1B686BFB13C (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_last_updated_time(System.IntPtr,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_get_last_updated_time_mD7323F01B96EF6A0BFF7D0A53791A2BE2DA84FAC (intptr_t ___handle0, int64_t* ___result1, const RuntimeMethod* method) ;
// System.DateTimeOffset System.DateTimeOffset::FromUnixTimeMilliseconds(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 DateTimeOffset_FromUnixTimeMilliseconds_mFEEC87C901FDE77B4FFB4BDD49388E91A137FA72 (int64_t ___milliseconds0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_surface_coverage(System.IntPtr,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_get_surface_coverage_mCD8C0A7576A08137BF9621E54CA9CC3531CE9A98 (intptr_t ___handle0, float* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_center(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_get_center_mC377F02A8728E39D4B9F2B2B2535DD9210A7F0AD (intptr_t ___handle0, SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_scale_change(System.IntPtr,System.Numerics.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_get_scale_change_mDD853F393BFDB8D6F94A4EC23B4CA074A3C616C2 (intptr_t ___handle0, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_try_create_placement(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_try_create_placement_m5D2D326A3C17C98BED129373849D22700BDC9026 (intptr_t ___handle0, SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 ___reference_coordinate_system1, intptr_t* ___result2, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* SpatialGraphPlacement_GetOrCreateInstance_m5D2BE295B694798DF7C1EC463A3A0208B411C79C (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* ObjectInstanceState_GetOrCreateInstance_mFD2DC4B5C401BA7EF4D7E75CF1896F3D3363DE93 (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mA40DB6591218D8B653DE0D125BDF48C59F8BCD78 (U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceState>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m948B09194D80E3E788E6533367221CE1E6428ADE (Func_2_tD794B144DC680C5410F8354A109B1448389D71A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD794B144DC680C5410F8354A109B1448389D71A2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m8BF32B786C08064B96551A1585CEE266EF9F7CB5_gshared)(__this, ___object0, ___method1, method);
}
// T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectInstanceState>(System.UInt64,System.Func`2<System.UInt64,T>)
inline ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* ProjectedObjectCache_GetOrCreate_TisObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344_m6075931B3AE2A2DB52C1D68579970B12F800E6A9 (uint64_t ___cookie0, Func_2_tD794B144DC680C5410F8354A109B1448389D71A2* ___createFactory1, const RuntimeMethod* method)
{
	return ((  ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* (*) (uint64_t, Func_2_tD794B144DC680C5410F8354A109B1448389D71A2*, const RuntimeMethod*))ProjectedObjectCache_GetOrCreate_TisRuntimeObject_m94BE0F8184CC21BB697692D68DFF726EF6DED7BC_gshared)(___cookie0, ___createFactory1, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceState__ctor_m426B2657F74AE65D16E0C1E0A0CAF30E12C7A699 (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_addref_m7ED9667367B396143BA9F997C10CCCB214FE1267 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_release_m2D680F2CDFA8370FD50A851A2B4731B6F5F6C91C (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_dispose_mECE71BBBE8DB7BDADDB568CC00283448F86B1197 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_id(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_id_m863EE16F2E2D4A7D400F621C4109F59C23912B8A (intptr_t ___handle0, Guid_t* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_bounding_box(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_bounding_box_m13A4D6D293A567F11CEC835C6835C1D27EE2069A (intptr_t ___handle0, SpatialOrientedBox_tE146C24275514A892525922FE5A5F87AE603A08E* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_origin_to_center_transform(System.IntPtr,System.Numerics.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_origin_to_center_transform_m1D36E22AC2AED88DDD1675580DC89B15949C3078 (intptr_t ___handle0, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_count(System.IntPtr,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_vertex_count_mC547894FF1FA6977ACF65BA3CC57998168FF2E8C (intptr_t ___handle0, uint32_t* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_index_count(System.IntPtr,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_triangle_index_count_m6E9CB072C4E8EEDA1E89FE3CAAEE2E696E8108D4 (intptr_t ___handle0, uint32_t* ___result1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_positions(System.IntPtr,System.Numerics.Vector3[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_vertex_positions_m5F0ED96A2A7AE8B8006075FB3F66F4D315824F53 (intptr_t ___handle0, Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* ___vertices1, int32_t ___vertices_count2, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_normals(System.IntPtr,System.Numerics.Vector3[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_vertex_normals_m8B96F0ADDA83331626681729B08AE4FA86DDD455 (intptr_t ___handle0, Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* ___normals1, int32_t ___normals_count2, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_indices(System.IntPtr,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_triangle_indices_m3BB460D4B5EF1BA4E6A90F541F3085837570276E (intptr_t ___handle0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___indices1, int32_t ___indices_count2, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* ObjectModel_GetOrCreateInstance_mE0831C63640A465C21C2994C1CD8DC74DF36422C (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m0A3B6959F71E23620460D7E8DF86E7B43FB0C494 (U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectModel>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEBF27EA8BC3CEDA1F4323E4E94BCB0E302C6CF5D (Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m8BF32B786C08064B96551A1585CEE266EF9F7CB5_gshared)(__this, ___object0, ___method1, method);
}
// T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectModel>(System.UInt64,System.Func`2<System.UInt64,T>)
inline ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* ProjectedObjectCache_GetOrCreate_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_mCE7F877519DF414C50E4775FA842CEF4C1EB2ADD (uint64_t ___cookie0, Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F* ___createFactory1, const RuntimeMethod* method)
{
	return ((  ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* (*) (uint64_t, Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F*, const RuntimeMethod*))ProjectedObjectCache_GetOrCreate_TisRuntimeObject_m94BE0F8184CC21BB697692D68DFF726EF6DED7BC_gshared)(___cookie0, ___createFactory1, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectModel__ctor_mFD3D6B6EC088A9B07C3750207EE92600942444B0 (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_addref_m57DFE16660F9016520034B74F16D355F162A258D (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_release_mBD9171A46D1E52BA9A54A22D8774429AD31C243C (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_dispose_m0194881EB4DF511F5B3BDD5FA3840983FB16B8B7 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_is_supported(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_is_supported_m473C73622C54D56858E7007CEC01FADD90C28CD9 (bool* ___result0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::Create()
inline AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476 AsyncTaskMethodBuilder_1_Create_mCAEDCA796C65036CAD1DEE4FC1841B980B2CFE25 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mA40B8A53C4AB16DDDC272E1BD7361CEB160C2A03_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::Start<Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m9D6313EBCCE1E4553C1440D7EA58C12486976FEA (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* __this, U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476*, U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m7CE7C9FE85DA70D6330E6C021D3AC52A4EE65FEC_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::get_Task()
inline Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* AsyncTaskMethodBuilder_1_get_Task_m828B4892C565D1842B955164F803857CA28C285C (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* (*) (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m228C453A630CC50C7517D9F9A31BFAFBBD0DDBA8_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::Create()
inline AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF AsyncTaskMethodBuilder_1_Create_m9CCCFCF8594E37D294C2ED43AB1AEDD13135CE21 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::Start<Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m23FE9F8C35B5709DFB957B96F0984C3228376620 (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* __this, U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF*, U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_mC858F5D5753BAB7BB5B5106E8E28342D6E3459BA_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::get_Task()
inline Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* AsyncTaskMethodBuilder_1_get_Task_mB5321597A21D51ED9948A323922E73958EC5F89B (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* (*) (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::Create()
inline AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120 AsyncTaskMethodBuilder_1_Create_m0DFA5495C52F7016F150A7D2188FAFCCE717C08B (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::Start<Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mA79D6C87F7981A704A378E6AE4A2EF2AA6FFDACD (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* __this, U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120*, U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mE802C1451E78ED76EF55BCC161D547FD693132F4_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::get_Task()
inline Task_1_t47D802E51DF908085AEE11A8051A4DF26F20F712* AsyncTaskMethodBuilder_1_get_Task_mBE76BF127163426A964D540771B8D9D073E8F18B (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t47D802E51DF908085AEE11A8051A4DF26F20F712* (*) (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* ObjectObserver_GetOrCreateInstance_mD21DE46DD4F483CB18D86435374DD5A54211DECA (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mD61FA0C14E698DD84119F45E69C1F9F28535CDE2 (U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectObserver>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m993CB2C5D4A0B0E7DAC6BCFEC48DC2E1A0DB82C7 (Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m8BF32B786C08064B96551A1585CEE266EF9F7CB5_gshared)(__this, ___object0, ___method1, method);
}
// T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectObserver>(System.UInt64,System.Func`2<System.UInt64,T>)
inline ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* ProjectedObjectCache_GetOrCreate_TisObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_m9BD097F3EDA818AD237840AEFE047A98FD803925 (uint64_t ___cookie0, Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252* ___createFactory1, const RuntimeMethod* method)
{
	return ((  ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* (*) (uint64_t, Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252*, const RuntimeMethod*))ProjectedObjectCache_GetOrCreate_TisRuntimeObject_m94BE0F8184CC21BB697692D68DFF726EF6DED7BC_gshared)(___cookie0, ___createFactory1, method);
}
// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventWaitHandle__ctor_m5B0D1FD902682B5D5E82A4B564363AB711F10F8E (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, bool ___initialState0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCF7AC74DF7B4CD8ABF57FE1712E635F6818FEE23 (U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* __this, const RuntimeMethod* method) ;
// System.Int64 Microsoft.Azure.ObjectAnchors.PackedValue::op_Implicit(Microsoft.Azure.ObjectAnchors.PackedValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PackedValue_op_Implicit_m6A4FB0AF18928E5FB960A49CAECC4300013CF7D6 (PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___packedValue0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* ObjectModel_GetOrCreateInstance_mF01598ED4BBE4BE41077293895110C03A81ABE5D (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstance>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0C30E96938E319E3281AC205A164D0F490FFCBB3 (Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mAFAD1CF4C74CF3EE710FB79F7B75A5B0F394B597_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<T> Microsoft.Azure.ObjectAnchors.PackedValue::UnpackPtrs<Microsoft.Azure.ObjectAnchors.ObjectInstance>(Microsoft.Azure.ObjectAnchors.PackedValue,System.Func`2<System.IntPtr,T>,System.Boolean)
inline List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B* PackedValue_UnpackPtrs_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_m9233AE2984126ABF10C0763A7D9FF72529A01C65 (PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___packedValue0, Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE* ___factory1, bool ___free2, const RuntimeMethod* method)
{
	return ((  List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B* (*) (PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9, Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE*, bool, const RuntimeMethod*))PackedValue_UnpackPtrs_TisRuntimeObject_mAD6B525487B33C1F256F800539875629EA3374B2_gshared)(___packedValue0, ___factory1, ___free2, method);
}
// System.Void System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m494946DDAD060D9E51E4587EEFB163FF058A8BFD (Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m2A6ED89EC371323698C0584E0B5F895DB6434502_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
inline Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06* Promise_Create_TisObjectObserverAccessStatus_t57753A5D3B844A9C1474F644A823B8DEFCF04CC8_mDAD5FBA3096A17B6A66C1EF3287ECF1B2DE21E31 (Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* ___factory0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06* (*) (Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Promise_Create_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m46BAEDEF6EF1A37571A902E7067F2270AE02002E_gshared)(___factory0, ___cancellationToken1, method);
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_request_access_async(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_request_access_async_mE4E9B78DB51AC66CFF39495502C2E71D59E80C04 (PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::get_Task()
inline Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* Promise_1_get_Task_mE6B431FCACAAAC9B5A8CFA8A67AF0A7CE84007CB (Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* (*) (Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06*, const RuntimeMethod*))Promise_1_get_Task_m93F24A1AF03888A93BB730401DC3EA2A39DD2B03_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::GetAwaiter()
inline TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F Task_1_GetAwaiter_m9FDAC96588CF90BEC036102D8E15BFB3CAB0D4C0 (Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F (*) (Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB*, const RuntimeMethod*))Task_1_GetAwaiter_mBC5D4AD566D449CFA4CDD164DD4A28E81BF3E9A8_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m907E69DF8E28A5DF95F852487D4B4AD711B7DDF0 (TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m23B9774CF68B8D4751B3FA2D7C0A10DFDA86BC34_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>,Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m25AF9B6C3389328CC826E454AD9251D95618215F (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* __this, TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F* ___awaiter0, U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476*, TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F*, U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m8ACDB88D875F16BCD7ACF7774F581ED95E5230E7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m80BE4B25A47EF60DCC63742702883C9013D3C19C (TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7BE13DEB70EC3AEE02DD30BBC8F25298BD25021F_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m91ED08403342FA2CA2CD5FB031E48D1B5436802F (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m2E575629BCD46EA73D32EA85764E79315C353E13_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m5E606F38327F042BCD3B70BFD7FBC134DFC9472A (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* __this, int32_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476*, int32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m718D4EE45CDBF257976C193933CBE5478FFC14E3_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestAccessAsyncU3Ed__7_MoveNext_mD8E233B1557146BA6EF2C3781635F2A646EE26C1 (U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mD69B1DF72CE4F99563A36A26D4A4574F6A5E62AF (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mBE5F26838D7801B8250806F352A6915A7F9AA2E5_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestAccessAsyncU3Ed__7_SetStateMachine_mFF50D7155F8F277E57669B06BC6D0CC49A754D28 (U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.ObjectModel>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m602AF5F1312566B28C047BE2F77BC80FDC1EE8B7 (Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m2516BAE60331FFBC28497DE5E439CBAC3D6013ED_gshared)(__this, ___object0, ___method1, method);
}
// Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create<Microsoft.Azure.ObjectAnchors.ObjectModel>(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
inline Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2* Promise_Create_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_m7F2017269440511684350FDA0A96C7B00E5B4B44 (Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* ___factory0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2* (*) (Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Promise_Create_TisRuntimeObject_m35845B93E48D66B62455897AB34326EC9A5E0459_gshared)(___factory0, ___cancellationToken1, method);
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_load_object_model_async(System.IntPtr,System.Byte[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_load_object_model_async_m3B2C767C2D16C261EC85EBA20EEF182B63B22D5B (intptr_t ___handle0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___buffer_count2, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle3, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::get_Task()
inline Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* Promise_1_get_Task_m4261C0D308AA6CA383CA7379BFDF51F861C46229 (Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* (*) (Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2*, const RuntimeMethod*))Promise_1_get_Task_mDFA7493374C4E36028038C2B31DB601724078B10_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::GetAwaiter()
inline TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06 Task_1_GetAwaiter_m18B15251A2F6D36855A9002486452B7961FDCA35 (Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06 (*) (Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m558CC4667D9E2665B3ECAD2EAA12084219911A0E (TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectModel>,Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m07C388B70B050978A9DF4ED09031AF2DAD7DA140 (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* __this, TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06* ___awaiter0, U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF*, TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06*, U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m6501FB08CAA4DEB17AC8932355C0EC1EAF9E381C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::GetResult()
inline ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* TaskAwaiter_1_GetResult_m8336E9ACE91AA12E62DA9AC4028CEAD7D875237A (TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06* __this, const RuntimeMethod* method)
{
	return ((  ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* (*) (TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m608B0AEA53B48154F6BBE69EDCAFDDB0866D7691 (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mD37CD5BAFE87DA1C2E56B2810E9A762240C28ACC (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* __this, ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF*, ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mA514219B7B4DAD6E5A1C7DD05B88330C89254ED1 (U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.ObjectModel>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m7E71DAEDE609FF2AF0C883AA47713E21D09740E0 (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m55B435C738BA173E37802BD0EB190C8B49D77A1A (U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0AFF9605021BEB388644DBFDBB64462A481C1B41 (Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m2516BAE60331FFBC28497DE5E439CBAC3D6013ED_gshared)(__this, ___object0, ___method1, method);
}
// Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
inline Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514* Promise_Create_TisList_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B_m6B0ACA8BC1020CF6BC0A0535CBDCE5182A3074A5 (Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* ___factory0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514* (*) (Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Promise_Create_TisRuntimeObject_m35845B93E48D66B62455897AB34326EC9A5E0459_gshared)(___factory0, ___cancellationToken1, method);
}
// System.Void System.Func`2<Microsoft.Azure.ObjectAnchors.ObjectQuery,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m38EE5C9516ECE6257346D4170932387595ABF0D5 (Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mCFF797116B0034B0CAE461E61D2265AFA3534601_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Microsoft.Azure.ObjectAnchors.ObjectQuery,System.IntPtr>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D_TisIntPtr_t_m12C7A9120C9D5DC5FD648965DF713797A957B0D9 (RuntimeObject* ___source0, Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisIntPtr_t_mF13D435581F8F251725050F377835CD7649BF8BB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.IntPtr>(System.Collections.Generic.IEnumerable`1<TSource>)
inline IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Enumerable_ToArray_TisIntPtr_t_m53FD16B186A5FF0E489639334D7548F7EC179680 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIntPtr_t_m53FD16B186A5FF0E489639334D7548F7EC179680_gshared)(___source0, method);
}
// T[] System.Array::Empty<System.IntPtr>()
inline IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method)
{
	return ((  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* (*) (const RuntimeMethod*))Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline)(method);
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_detect_async_queries(System.IntPtr,System.IntPtr[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_detect_async_queries_m1B292487BD51D39402396E686344C0D93B99569C (intptr_t ___handle0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___queries1, int32_t ___queries_count2, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle3, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::get_Task()
inline Task_1_tD3CF804A93285D651521AB991ABAF9C2A03DE94F* Promise_1_get_Task_m834FFF6350EFA057F2D0935E0EF8DB3181B1FC2F (Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tD3CF804A93285D651521AB991ABAF9C2A03DE94F* (*) (Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514*, const RuntimeMethod*))Promise_1_get_Task_mDFA7493374C4E36028038C2B31DB601724078B10_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::GetAwaiter()
inline TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218 Task_1_GetAwaiter_mE2E409EF2D436B7B8B220D4E8C4F66CB1EA0A6C5 (Task_1_tD3CF804A93285D651521AB991ABAF9C2A03DE94F* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218 (*) (Task_1_tD3CF804A93285D651521AB991ABAF9C2A03DE94F*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC252F2224B7ADEF66D47B67AA1CCC5F484CD3709 (TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>,Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mE6068DC360C61314099FEF493219489127CADC61 (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* __this, TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218* ___awaiter0, U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120*, TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218*, U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mFE7AB29F5804CF5627A7A32B2BFDEE0FE4B350A7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::GetResult()
inline List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B* TaskAwaiter_1_GetResult_mED7E6FE2BCD55EFC94EFA175EF4F2F01E9128521 (TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218* __this, const RuntimeMethod* method)
{
	return ((  List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B* (*) (TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m885D6BD05470D4862130660D1A60981433DF3E66 (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m9153AA51D45F43594589627D81145AE32B0CD319 (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDetectAsyncU3Ed__10_MoveNext_m5074BC9F7BF5C61570BF7A868EF8680FC68E3391 (U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0EBF275B2CCB163CFB068E1F9893B5E91C81F9C4 (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDetectAsyncU3Ed__10_SetStateMachine_m5B537FAFC0B2D21C8D82DCCBCC77A83F3C10A93E (U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectObserver__ctor_m39EF15974253C7081F80FB6643F69AC975381AAB (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_query_release_m918F3FEE1860316B5C5C059406B3048DA88EF8BC (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_query_create_object_model_model_m3B988FA265ABD9C5F2AF1CE8BA3920B492BEB02A (intptr_t ___model0, intptr_t* ___instance1, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model_object_observation_mode_observation_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectObservationMode,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_m549793C8DA150FA759D6B6CA547EFA83D6B61203 (intptr_t ___model0, int32_t ___observation_mode1, intptr_t* ___instance2, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_query_dispose_m7D51D2B682C08D212D19602D517D829874CFB075 (intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mCBC218CE25034242D2EB33B3E59933295CE93C56 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<System.IntPtr>()
inline int32_t Marshal_SizeOf_TisIntPtr_t_m63E57DCAAB0465C36C8C5E5BD6DAB3D5C5C998AB (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Marshal_SizeOf_TisIntPtr_t_m63E57DCAAB0465C36C8C5E5BD6DAB3D5C5C998AB_gshared)(method);
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteThunk(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04 (intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorThunk(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538 (intptr_t ___context0, intptr_t ___handle1, int32_t ___result2, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressThunk(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6 (intptr_t ___context0, float ___progress1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCreate(Microsoft.Azure.ObjectAnchors.PromiseCreateOptions&,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_PromiseCreate_m8593C3A02B6779E944AF8963A4FF50EB315E8752 (PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0* ___options0, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3** ___promiseHandle1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationToken_Register_m0D080EBDFC1F9651EE5BCBEF183925CF23CA638D (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationTokenRegistration::op_Inequality(System.Threading.CancellationTokenRegistration,System.Threading.CancellationTokenRegistration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationTokenRegistration_op_Inequality_m0EF32918A81CF2967D0BF160943F9C19DE7C648D (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___left0, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___right1, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___obj0, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorHandler(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnErrorHandler_mF1DD93E5243087620BE39B03DECBB7BE9B70BA03 (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, intptr_t ___handle0, int32_t ___result1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressHandler(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnProgressHandler_m9D06313E19BB3335526A08C82DFA2F175BE4DDA7 (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, float ___progress0, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aoa_promise_on_complete__ctor_m4DF27D6D9A2EA9FF945885D307AD59C366F65D89 (aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aoa_promise_on_error__ctor_mCA12121041883994E452F43AEE2FA524E7A44D26 (aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aoa_promise_on_progress__ctor_mBB85BD6380018A4F1716F782CAEF412A55242EF5 (aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCancel(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_PromiseCancel_mE7B4745D3BD81D29885C3560C52A4F810AD1102F (PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared)(__this, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase__ctor_m2D3C8E47A95D02C074872193D2BF533BAB4CC8FF (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___progressCallback0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m0DE68CD123975A4FE4C64B8A538E832658FA96F4 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_SetException_m0DE68CD123975A4FE4C64B8A538E832658FA96F4_gshared)(__this, ___exception0, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m2AE0BE5D28A984B7E8945A3F6A7667AAD25237E9 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m2AE0BE5D28A984B7E8945A3F6A7667AAD25237E9_gshared)(__this, method);
}
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, bool, const RuntimeMethod*))TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.Promise::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise__ctor_m03D897F250C1C44FBBB4D7198076E34F68AC7C68 (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___progressCallback0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_PromiseDestroy_m31F1EC010862774B326F43687DE1448065D776AE (intptr_t ___promiseHandle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_diagnostics_session_release_mE1BC96B20B4FE1AEC6B77757DE0588CA0A44D641 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes(System.IntPtr,System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m23882D8E8E363C61AD5CAFF70DB604663B225447 (intptr_t ___observer0, uint32_t ___max_session_size_in_mega_bytes1, intptr_t* ___instance2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_m0458C1EFEA1FB623D22DF5DFD11117AD8D2B5787 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_m0458C1EFEA1FB623D22DF5DFD11117AD8D2B5787_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::Create()
inline AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A AsyncTaskMethodBuilder_1_Create_m66D617E1A0A1614427855E805A9065579E9C4612 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mA40B8A53C4AB16DDDC272E1BD7361CEB160C2A03_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::Start<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_mE30179A4D8AD044ADE484A51938988CEAEDBA916 (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* __this, U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A*, U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_mFE753A406E65D9434B30F1BBF16B2F8EE6F431CF_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::get_Task()
inline Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* AsyncTaskMethodBuilder_1_get_Task_m5E11FB1F0C8CB8935A83BCAB349253F33B8B1810 (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* (*) (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m228C453A630CC50C7517D9F9A31BFAFBBD0DDBA8_gshared)(__this, method);
}
// Microsoft.Azure.ObjectAnchors.Promise Microsoft.Azure.ObjectAnchors.Promise::Create(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* Promise_Create_m1A1C563E7F5655DF7740491112ED981429EB8C43 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_close_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_diagnostics_session_close_async_m10D362F37C1641A8CC52CD122A3318EE2BB1AA3D (intptr_t ___handle0, String_t* ___diagnostics_file_path1, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle2, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Promise::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Promise_get_Task_m035C3D97953EA1145C38819C2AA5A276B59B94D8 (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_mBC19FDCA3BEDC2CFEB1CFA5C0D0C194606A6A4A6 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_mBC19FDCA3BEDC2CFEB1CFA5C0D0C194606A6A4A6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseAsyncU3Ed__8_MoveNext_m7CF6D37DD9AC71291F67A804BD4D31D969C21DE1 (U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseAsyncU3Ed__8_SetStateMachine_m1EBDAC81B48839A74C4037D4F72EF58F58A90A51 (U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01AFDB8C77FCC1C78E22AD3A80BA2B580DD9DD05 (U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB65A73963077FF8476A27691D24555FF1C840440 (Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m2A6ED89EC371323698C0584E0B5F895DB6434502_gshared)(__this, ___object0, ___method1, method);
}
// Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
inline Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A* Promise_Create_TisObjectDiagnosticsUploadStatus_t0239212469F17F9A6909C3510179A29E27928DA2_m8BC0C1DEB531145E01A82F1FB1E9BE6CDA7A271A (Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* ___factory0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A* (*) (Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Promise_Create_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m46BAEDEF6EF1A37571A902E7067F2270AE02002E_gshared)(___factory0, ___cancellationToken1, method);
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_upload_diagnostics_async(System.String,System.IntPtr,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m9B7D05843765CA480E30BF3DAB662B5205330634 (String_t* ___diagnostics_file_path0, intptr_t ___object_anchors_session1, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle2, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::get_Task()
inline Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* Promise_1_get_Task_mB367383462E6575117DA1AD2B55001947AA3FEC2 (Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* (*) (Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A*, const RuntimeMethod*))Promise_1_get_Task_m93F24A1AF03888A93BB730401DC3EA2A39DD2B03_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::GetAwaiter()
inline TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602 Task_1_GetAwaiter_m0671F069CF34A6C300AC23D45B037150062B0E13 (Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602 (*) (Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80*, const RuntimeMethod*))Task_1_GetAwaiter_mBC5D4AD566D449CFA4CDD164DD4A28E81BF3E9A8_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE141C4D77C22133392CFDFCDB022FD89CAAFDAF2 (TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m23B9774CF68B8D4751B3FA2D7C0A10DFDA86BC34_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_m12D17F15356746A684F7F4704DA45364BE239B8B (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* __this, TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602* ___awaiter0, U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A*, TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602*, U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_m2A9BC4B382B4A28BB7189FE5BDDD9F0FC6591DCD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m310753FCFC36330CC205FB62006ED45F4F5FBD77 (TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7BE13DEB70EC3AEE02DD30BBC8F25298BD25021F_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mD082D98CAF72598019B3E4A93F80695370DB02F0 (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m2E575629BCD46EA73D32EA85764E79315C353E13_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m6A2ECAE9BFEE5F71A54E6A447AF1D40F19CAE6F3 (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* __this, int32_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A*, int32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m718D4EE45CDBF257976C193933CBE5478FFC14E3_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mCC3E081BD79DE5465CC3F4FAA59C990A9F2CF422 (U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m2B7A3B82DCAF057647278B109FCA8DAA813B1635 (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mBE5F26838D7801B8250806F352A6915A7F9AA2E5_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m3291BFA4E3406141D6098524EDE2CACBA5E1AAD7 (U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_addref_m35B0CF90736E18CD1144EFF0CCBD9C09EC5A9C8B (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_release_m46A77788AB5EFD5A878BC508DCAFDE8D6107F2D4 (intptr_t ___handle0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_compute_origin_for_view(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_compute_origin_for_view_mA4823B64F20E55AF8A0C539698FC4AC331BB1E8A (intptr_t ___handle0, SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285 ___view_in_world1, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ___world_to_reference2, SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285* ___result3, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_create(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[],System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_try_create_m29DC8959620CDD5F06B672A8874BD82DE47F9642 (SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 ___reference_coordinate_system0, SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* ___control_points1, int32_t ___control_points_count2, intptr_t* ___result3, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_get_control_points(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_get_control_points_mBF9935D04F470A8C1C285C428686BAC59F65CD2A (intptr_t ___handle0, SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503** ___result1, int32_t* ___result_count2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_m9F96915A2337BE8DA159065E2A7B36D4FF88EC56 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_m9F96915A2337BE8DA159065E2A7B36D4FF88EC56_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mEDB1D5D2D3F15664E275522650D22376DC4D6729 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mEDB1D5D2D3F15664E275522650D22376DC4D6729_gshared)(__this, ___stateMachine0, method);
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* SpatialGraphPlacement_GetOrCreateInstance_mE4DF4D34D18C5AF7A3C49B5C11CFB0477CB4A813 (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m6AD62AB371A913601CC7347C6BDF2E0040D15679 (U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.UInt64,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4CB9AF189F8241B24A59077350F7880CF989E32B (Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m8BF32B786C08064B96551A1585CEE266EF9F7CB5_gshared)(__this, ___object0, ___method1, method);
}
// T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>(System.UInt64,System.Func`2<System.UInt64,T>)
inline SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* ProjectedObjectCache_GetOrCreate_TisSpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_m644A9C42097B75CB6C69F172520B4AC3C5F91655 (uint64_t ___cookie0, Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B* ___createFactory1, const RuntimeMethod* method)
{
	return ((  SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* (*) (uint64_t, Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B*, const RuntimeMethod*))ProjectedObjectCache_GetOrCreate_TisRuntimeObject_m94BE0F8184CC21BB697692D68DFF726EF6DED7BC_gshared)(___cookie0, ___createFactory1, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE2018794C8304BC79225DA23728B01E817604E3 (U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m56DCABD7C62878BE0D748CFFBFB3D0710A9BBB6B (Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m56DCABD7C62878BE0D748CFFBFB3D0710A9BBB6B_gshared)(__this, ___object0, ___method1, method);
}
// Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create<System.Boolean>(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
inline Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* Promise_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9E998C4329D57B4B440BC6EB7BD138BEC2CFA9 (Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* ___factory0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* (*) (Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Promise_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9E998C4329D57B4B440BC6EB7BD138BEC2CFA9_gshared)(___factory0, ___cancellationToken1, method);
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_persist_static_nodes_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_try_persist_static_nodes_async_m7F3FB2B867B1491A56F334616792DF3C3DE2915E (intptr_t ___handle0, String_t* ___name1, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle2, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Promise_1_get_Task_mD621B8B22BCEF83D92E817161CEDE0256FCD9F98 (Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B*, const RuntimeMethod*))Promise_1_get_Task_mD621B8B22BCEF83D92E817161CEDE0256FCD9F98_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_mF7755EF298529822CFA5217E5A71DC0F1D8DCB9C (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_mF7755EF298529822CFA5217E5A71DC0F1D8DCB9C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m17AAD994DEA34FBC3E7002CD73E1D41AA982FB01 (U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_mBF6933F15533A601839F4274F4CE51C85A5882BE (U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_unpersist_static_nodes_async(System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_unpersist_static_nodes_async_m6B017BDBC317585C226943851EE72A25485C0DD4 (String_t* ___name0, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mF776502466C12E767C5664E0E9D6F42788CD9329 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mF776502466C12E767C5664E0E9D6F42788CD9329_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mC9814C708197084546FC512AE63CE6724D41A012 (U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m633EDD6564A7795DE8208877ADA07D9B7884B97A (U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphPlacement__ctor_mCAF85DC29B2FF4091A3E3EEB97ACC006035765A0 (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_promise_create(PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke*, void**);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_promise_cancel(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_promise_destroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_wide(Guid_t, Il2CppChar*, Il2CppChar*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_account_information_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_get_error_details_wide(intptr_t, Il2CppChar**, Il2CppChar**, Il2CppChar**);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_anchors_session_create_account_information_account_information(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_anchors_session_create_object_observer(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_anchors_session_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_changed_event_args_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_changed_event_args_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_dispose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_get_mode(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_get_model_id(intptr_t, Guid_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_set_changed(intptr_t, uint64_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_set_mode(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_state_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_state_get_center(intptr_t, SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_state_get_last_updated_time(intptr_t, int64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_state_get_scale_change(intptr_t, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_state_get_surface_coverage(intptr_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_state_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_state_try_create_placement(intptr_t, SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_instance_try_get_current_state(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_dispose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_get_bounding_box(intptr_t, SpatialOrientedBox_tE146C24275514A892525922FE5A5F87AE603A08E*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_get_id(intptr_t, Guid_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_get_origin_to_center_transform(intptr_t, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_get_triangle_index_count(intptr_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_get_triangle_indices(intptr_t, uint32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_get_vertex_count(intptr_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_get_vertex_normals(intptr_t, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_get_vertex_positions(intptr_t, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_model_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_observer_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_observer_detect_async_queries(intptr_t, intptr_t*, int32_t, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_observer_dispose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_observer_is_supported(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_observer_load_object_model_async(intptr_t, uint8_t*, int32_t, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_observer_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_observer_request_access_async(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_query_create_object_model_model(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_query_create_object_model_model_object_observation_mode_observation_mode(intptr_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_query_dispose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_query_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_set_projected_object_cleanup(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_diagnostics_session_close_async_wide(intptr_t, Il2CppChar*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes(intptr_t, uint32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_diagnostics_session_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_object_diagnostics_session_upload_diagnostics_async_wide(Il2CppChar*, intptr_t, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_spatial_graph_placement_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_spatial_graph_placement_compute_origin_for_view(intptr_t, SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072, SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_spatial_graph_placement_get_control_points(intptr_t, SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605**, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_spatial_graph_placement_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_spatial_graph_placement_try_create(SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96, SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605*, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_spatial_graph_placement_try_persist_static_nodes_async_wide(intptr_t, Il2CppChar*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL aoa_spatial_graph_placement_unpersist_static_nodes_async_wide(Il2CppChar*, void*);
#endif
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
// System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(Microsoft.Azure.ObjectAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (value == status.OK)
		int32_t L_0 = ___value0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// string fullMessage = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_1;
		int32_t L_2 = ___value0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)22))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = ___value0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004f;
			}
		}
	}
	{
		int32_t L_4 = ___value0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)12))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = ___value0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)22))))
		{
			goto IL_005d;
		}
	}
	{
		return;
	}

IL_002c:
	{
		int32_t L_6 = ___value0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)38))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = ___value0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_8 = ___value0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)38))))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}

IL_003c:
	{
		int32_t L_9 = ___value0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)59))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_10 = ___value0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)77))))
		{
			goto IL_007e;
		}
	}
	{
		return;
	}

IL_0047:
	{
		// return;
		return;
	}

IL_0048:
	{
		// throw new InvalidOperationException(fullMessage);
		String_t* L_11 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413_RuntimeMethod_var)));
	}

IL_004f:
	{
		// throw new ObjectDisposedException(fullMessage);
		String_t* L_13 = V_0;
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_14 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413_RuntimeMethod_var)));
	}

IL_0056:
	{
		// throw new OutOfMemoryException(fullMessage);
		String_t* L_15 = V_0;
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_16 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		OutOfMemoryException__ctor_mE62C7219737CDB3698CA55D4502AE609649C701A(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413_RuntimeMethod_var)));
	}

IL_005d:
	{
		// throw new ArgumentException(fullMessage);
		String_t* L_17 = V_0;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413_RuntimeMethod_var)));
	}

IL_0064:
	{
		// throw new ArgumentOutOfRangeException(string.Empty, fullMessage);
		String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		String_t* L_20 = V_0;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_21 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_21, L_19, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413_RuntimeMethod_var)));
	}

IL_0070:
	{
		// throw new NotImplementedException(fullMessage);
		String_t* L_22 = V_0;
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_23 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_23, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413_RuntimeMethod_var)));
	}

IL_0077:
	{
		// throw new OperationCanceledException(fullMessage);
		String_t* L_24 = V_0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_25 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		OperationCanceledException__ctor_m980BF7ABCE5C603648AA46FB4C75437D110D0B5D(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413_RuntimeMethod_var)));
	}

IL_007e:
	{
		// throw new KeyNotFoundException(fullMessage);
		String_t* L_26 = V_0;
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_27 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_27, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2289F1737C939FD5C0F268A12CDEF12056F4D1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBCC3E626DA18D7C50720A259C46253C6D72D0F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC01655CCC809F2F9C9DBB30DFFF78C5BC267E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		// if (value == status.OK)
		int32_t L_0 = ___value1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// Microsoft.Azure.ObjectAnchors.status code = Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_get_error_details(handle, out message, out requestCorrelationVector, out responseCorrelationVector);
		intptr_t L_1 = ___handle0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_get_error_details_mDB6005415D7C6E5BA815A36346CD66CD404F047E(L_1, (&V_0), (&V_1), (&V_2), NULL);
		V_3 = L_2;
		// if (code == status.Failed)
		int32_t L_3 = V_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		// throw new InvalidOperationException("Unexpected error in exception handling.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral255FBA2ECA71FFA96DC210DD7D19B7E371913A64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var)));
	}

IL_0020:
	{
		// else if (code != status.OK)
		int32_t L_5 = V_3;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// fullMessage = "Exception thrown and an unexpected error in exception handling.";
		V_4 = _stringLiteral2289F1737C939FD5C0F268A12CDEF12056F4D1B2;
		goto IL_0071;
	}

IL_002c:
	{
		// fullMessage = message + ".";
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_4 = L_7;
		// if (!string.IsNullOrEmpty(requestCorrelationVector))
		String_t* L_8 = V_1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		// fullMessage += " Request CV: " + requestCorrelationVector + ".";
		String_t* L_10 = V_4;
		String_t* L_11 = V_1;
		String_t* L_12;
		L_12 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_10, _stringLiteralEFC01655CCC809F2F9C9DBB30DFFF78C5BC267E2, L_11, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_4 = L_12;
	}

IL_0055:
	{
		// if (!string.IsNullOrEmpty(responseCorrelationVector))
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
		if (L_14)
		{
			goto IL_0071;
		}
	}
	{
		// fullMessage += " Response CV: " + responseCorrelationVector + ".";
		String_t* L_15 = V_4;
		String_t* L_16 = V_2;
		String_t* L_17;
		L_17 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_15, _stringLiteralDBCC3E626DA18D7C50720A259C46253C6D72D0F3, L_16, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_4 = L_17;
	}

IL_0071:
	{
		int32_t L_18 = ___value1;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)22))))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_19 = ___value1;
		switch (L_19)
		{
			case 0:
			{
				goto IL_00ae;
			}
			case 1:
			{
				goto IL_00af;
			}
			case 2:
			{
				goto IL_00b7;
			}
		}
	}
	{
		int32_t L_20 = ___value1;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)12))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_21 = ___value1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)22))))
		{
			goto IL_00c7;
		}
	}
	{
		return;
	}

IL_0093:
	{
		int32_t L_22 = ___value1;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)38))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_23 = ___value1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)34))))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_24 = ___value1;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)38))))
		{
			goto IL_00dc;
		}
	}
	{
		return;
	}

IL_00a3:
	{
		int32_t L_25 = ___value1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)59))))
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_26 = ___value1;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)77))))
		{
			goto IL_00ec;
		}
	}
	{
		return;
	}

IL_00ae:
	{
		// return;
		return;
	}

IL_00af:
	{
		// throw new InvalidOperationException(fullMessage);
		String_t* L_27 = V_4;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_28 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var)));
	}

IL_00b7:
	{
		// throw new ObjectDisposedException(fullMessage);
		String_t* L_29 = V_4;
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_30 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var)));
	}

IL_00bf:
	{
		// throw new OutOfMemoryException(fullMessage);
		String_t* L_31 = V_4;
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_32 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
		NullCheck(L_32);
		OutOfMemoryException__ctor_mE62C7219737CDB3698CA55D4502AE609649C701A(L_32, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var)));
	}

IL_00c7:
	{
		// throw new ArgumentException(fullMessage);
		String_t* L_33 = V_4;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var)));
	}

IL_00cf:
	{
		// throw new ArgumentOutOfRangeException(string.Empty, fullMessage);
		String_t* L_35 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		String_t* L_36 = V_4;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_37 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_37, L_35, L_36, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var)));
	}

IL_00dc:
	{
		// throw new NotImplementedException(fullMessage);
		String_t* L_38 = V_4;
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_39 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_39);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_39, L_38, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var)));
	}

IL_00e4:
	{
		// throw new OperationCanceledException(fullMessage);
		String_t* L_40 = V_4;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_41 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)));
		NullCheck(L_41);
		OperationCanceledException__ctor_m980BF7ABCE5C603648AA46FB4C75437D110D0B5D(L_41, L_40, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var)));
	}

IL_00ec:
	{
		// throw new KeyNotFoundException(fullMessage);
		String_t* L_42 = V_4;
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_43 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_43);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_43, L_42, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8_RuntimeMethod_var)));
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
// System.UInt64 Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertHandleToCookie(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handle == IntPtr.Zero)
		intptr_t L_0 = ___handle0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ArgumentException("Invalid handle.", nameof(handle));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FA4AF8CCEA6268C5E66D1C425E81865807A8330)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFE3A1B73CD7FC81540FBBE737435B0A887629D5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502_RuntimeMethod_var)));
	}

IL_001d:
	{
		// return (ulong)handle.ToInt64();
		int64_t L_4;
		L_4 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&___handle0), NULL);
		return L_4;
	}
}
// System.IntPtr Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertCookieToHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C (uint64_t ___cookie0, const RuntimeMethod* method) 
{
	{
		// return new IntPtr((long)cookie);
		uint64_t L_0 = ___cookie0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::Clear(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectEventHandlerCache_Clear_mD977A00FF1AC25F04A8C99FA6B472C4E5FC069E0 (uint64_t ___cookie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t100004F4BC5309A9FFD563D3BC25B2D85189C9C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (cookie == default)
		uint64_t L_0 = ___cookie0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentException($"The cookie is not valid: {cookie}.", nameof(cookie));
		uint64_t L_1 = ___cookie0;
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE752B33F2E24F2A0E23FA5F8192074CF99B4D04)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProjectedObjectEventHandlerCache_Clear_mD977A00FF1AC25F04A8C99FA6B472C4E5FC069E0_RuntimeMethod_var)));
	}

IL_001e:
	{
		// lock (tracked)
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var))->___tracked_0;
		V_0 = L_6;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					bool L_7 = V_1;
					if (!L_7)
					{
						goto IL_0045;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_8, NULL);
				}

IL_0045:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_9, (&V_1), NULL);
			// tracked.Remove(cookie);
			il2cpp_codegen_runtime_class_init_inline(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
			RuntimeObject* L_10 = ((ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var))->___tracked_0;
			uint64_t L_11 = ___cookie0;
			NullCheck(L_10);
			bool L_12;
			L_12 = InterfaceFuncInvoker1< bool, uint64_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>::Remove(TKey) */, IDictionary_2_t100004F4BC5309A9FFD563D3BC25B2D85189C9C5_il2cpp_TypeInfo_var, L_10, L_11);
			// }
			goto IL_0046;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Delegate> Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetOrInitializeEvents(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProjectedObjectEventHandlerCache_GetOrInitializeEvents_m7EF4288C45F8767B89B7D7E29CA80176A7AFAEC7 (uint64_t ___cookie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m36DEAFFBAD76530491287EB5B89A912440E860F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t100004F4BC5309A9FFD563D3BC25B2D85189C9C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (!tracked.TryGetValue(cookie, out IDictionary<string, Delegate> events))
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var))->___tracked_0;
		uint64_t L_1 = ___cookie0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, uint64_t, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>::TryGetValue(TKey,TValue&) */, IDictionary_2_t100004F4BC5309A9FFD563D3BC25B2D85189C9C5_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// events = new Dictionary<string, Delegate>(StringComparer.Ordinal);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_3;
		L_3 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6* L_4 = (Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6*)il2cpp_codegen_object_new(Dictionary_2_tB14BC85C9EF5609A18FF14EC110F222FCF09EDB6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m36DEAFFBAD76530491287EB5B89A912440E860F1(L_4, L_3, Dictionary_2__ctor_m36DEAFFBAD76530491287EB5B89A912440E860F1_RuntimeMethod_var);
		V_0 = L_4;
		// tracked[cookie] = events;
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var))->___tracked_0;
		uint64_t L_6 = ___cookie0;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint64_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.UInt64,System.Collections.Generic.IDictionary`2<System.String,System.Delegate>>::set_Item(TKey,TValue) */, IDictionary_2_t100004F4BC5309A9FFD563D3BC25B2D85189C9C5_il2cpp_TypeInfo_var, L_5, L_6, L_7);
	}

IL_0026:
	{
		// return events;
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectEventHandlerCache__cctor_mDC38F3C4BC3C2BEC03B536B8E60AAA0EE66768A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m610867A06D69C090EDAD34574A265E4F0E0E75D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCB653D45C1BAA5C44BFA024B24C53B89399C9114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly static IDictionary<ulong, IDictionary<string, Delegate>> tracked = new Dictionary<ulong, IDictionary<string, Delegate>>();
		Dictionary_2_tCB653D45C1BAA5C44BFA024B24C53B89399C9114* L_0 = (Dictionary_2_tCB653D45C1BAA5C44BFA024B24C53B89399C9114*)il2cpp_codegen_object_new(Dictionary_2_tCB653D45C1BAA5C44BFA024B24C53B89399C9114_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m610867A06D69C090EDAD34574A265E4F0E0E75D9(L_0, Dictionary_2__ctor_m610867A06D69C090EDAD34574A265E4F0E0E75D9_RuntimeMethod_var);
		((ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var))->___tracked_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var))->___tracked_0), (void*)L_0);
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
extern "C" void CDECL ReversePInvokeWrapper_ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52(intptr_t ___handle0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52(___handle0, NULL);

}
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCache__cctor_m764ACEAE7CBBCC107AB15239EFDFF87BAADC3BB7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7F30C5BC54E0CB684E79A457BB8F7DEFC331167E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<ulong, System.WeakReference<ICachedObject>> tracked = new Dictionary<ulong, System.WeakReference<ICachedObject>>();
		Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_0 = (Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39*)il2cpp_codegen_object_new(Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m7F30C5BC54E0CB684E79A457BB8F7DEFC331167E(L_0, Dictionary_2__ctor_m7F30C5BC54E0CB684E79A457BB8F7DEFC331167E_RuntimeMethod_var);
		((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___tracked_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___tracked_0), (void*)L_0);
		// private static readonly Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative projectedObjectCleanupHandlerDelegate = ProjectedObjectCleanupHandler;
		ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* L_1 = (ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631*)il2cpp_codegen_object_new(ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ProjectedObjectCleanupNative__ctor_m83373B05236846D92DCA22C157AB32F95AF7784A(L_1, NULL, (intptr_t)((void*)ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52_RuntimeMethod_var), NULL);
		((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___projectedObjectCleanupHandlerDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___projectedObjectCleanupHandlerDelegate_1), (void*)L_1);
		// NativeLibraryHelpers.CheckStatus(NativeLibrary.aoa_set_projected_object_cleanup(projectedObjectCleanupHandlerDelegate));
		ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* L_2 = ((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___projectedObjectCleanupHandlerDelegate_1;
		int32_t L_3;
		L_3 = NativeLibrary_aoa_set_projected_object_cleanup_mDB1445F204E9BCFAE519456EB94468086731F4EC(L_2, NULL);
		NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413(L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Add(Microsoft.Azure.ObjectAnchors.ICachedObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42 (RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m15CC0CF393B3CED6174604714515953BCC76BBE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5A3172C8E526A1AE4BB2A572819B13001A44B88C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_SetTarget_mEFEC77626F3784DF22350B22B38027ED62CA66F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_TryGetTarget_m827E095D5D29B71FA1580C93B702A5350A591011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1__ctor_m0D20CC4ED15974B80DB3E3E306D0A4943B33CFCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* V_0 = NULL;
	bool V_1 = false;
	WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// if (instance is null)
		RuntimeObject* L_0 = ___instance0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(instance));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (instance.Cookie == default)
		RuntimeObject* L_2 = ___instance0;
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie() */, ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		// throw new ArgumentException($"The value of {nameof(ICachedObject.Cookie)} is not valid.", nameof(instance));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF4789EEB525946F5C07362FFB655ED124126927)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42_RuntimeMethod_var)));
	}

IL_0026:
	{
		// lock (tracked)
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_5 = ((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___tracked_0;
		V_0 = L_5;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_1;
					if (!L_6)
					{
						goto IL_007e;
					}
				}
				{
					Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_7 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
				}

IL_007e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_8 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, (&V_1), NULL);
				// if (!tracked.TryGetValue(instance.Cookie, out WeakReference<ICachedObject> cachedReference))
				il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
				Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_9 = ((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___tracked_0;
				RuntimeObject* L_10 = ___instance0;
				NullCheck(L_10);
				uint64_t L_11;
				L_11 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie() */, ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var, L_10);
				NullCheck(L_9);
				bool L_12;
				L_12 = Dictionary_2_TryGetValue_m15CC0CF393B3CED6174604714515953BCC76BBE6(L_9, L_11, (&V_2), Dictionary_2_TryGetValue_m15CC0CF393B3CED6174604714515953BCC76BBE6_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0062_1;
				}
			}
			{
				// tracked[instance.Cookie] = new System.WeakReference<ICachedObject>(instance);
				il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
				Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_13 = ((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___tracked_0;
				RuntimeObject* L_14 = ___instance0;
				NullCheck(L_14);
				uint64_t L_15;
				L_15 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie() */, ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var, L_14);
				RuntimeObject* L_16 = ___instance0;
				WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74* L_17 = (WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74*)il2cpp_codegen_object_new(WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				WeakReference_1__ctor_m0D20CC4ED15974B80DB3E3E306D0A4943B33CFCD(L_17, L_16, WeakReference_1__ctor_m0D20CC4ED15974B80DB3E3E306D0A4943B33CFCD_RuntimeMethod_var);
				NullCheck(L_13);
				Dictionary_2_set_Item_m5A3172C8E526A1AE4BB2A572819B13001A44B88C(L_13, L_15, L_17, Dictionary_2_set_Item_m5A3172C8E526A1AE4BB2A572819B13001A44B88C_RuntimeMethod_var);
				// return;
				goto IL_007f;
			}

IL_0062_1:
			{
				// if (!cachedReference.TryGetTarget(out _))
				WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74* L_18 = V_2;
				NullCheck(L_18);
				bool L_19;
				L_19 = WeakReference_1_TryGetTarget_m827E095D5D29B71FA1580C93B702A5350A591011(L_18, (&V_3), WeakReference_1_TryGetTarget_m827E095D5D29B71FA1580C93B702A5350A591011_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0073_1;
				}
			}
			{
				// cachedReference.SetTarget(instance);
				WeakReference_1_t5086E355D494246A8575822849F1DE137244AD74* L_20 = V_2;
				RuntimeObject* L_21 = ___instance0;
				NullCheck(L_20);
				WeakReference_1_SetTarget_mEFEC77626F3784DF22350B22B38027ED62CA66F4(L_20, L_21, WeakReference_1_SetTarget_mEFEC77626F3784DF22350B22B38027ED62CA66F4_RuntimeMethod_var);
			}

IL_0073_1:
			{
				// }
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Remove(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCache_Remove_mC9F1C7A3512B17B749D38B863B9C2B2A44527243 (uint64_t ___cookie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC519DF81E8D29355A914414FD3F438BF6DB9B557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* V_0 = NULL;
	bool V_1 = false;
	{
		// if (cookie == default)
		uint64_t L_0 = ___cookie0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentException($"The cookie is not valid: {cookie}.", nameof(cookie));
		uint64_t L_1 = ___cookie0;
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE752B33F2E24F2A0E23FA5F8192074CF99B4D04)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProjectedObjectCache_Remove_mC9F1C7A3512B17B749D38B863B9C2B2A44527243_RuntimeMethod_var)));
	}

IL_001e:
	{
		// lock (tracked)
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_6 = ((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___tracked_0;
		V_0 = L_6;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					bool L_7 = V_1;
					if (!L_7)
					{
						goto IL_0045;
					}
				}
				{
					Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_8 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_8, NULL);
				}

IL_0045:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_9 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_9, (&V_1), NULL);
			// tracked.Remove(cookie);
			il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
			Dictionary_2_t4269289BBF97DD4BC239E890BEEB3DBF8831BA39* L_10 = ((ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_StaticFields*)il2cpp_codegen_static_fields_for(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var))->___tracked_0;
			uint64_t L_11 = ___cookie0;
			NullCheck(L_10);
			bool L_12;
			L_12 = Dictionary_2_Remove_mC519DF81E8D29355A914414FD3F438BF6DB9B557(L_10, L_11, Dictionary_2_Remove_mC519DF81E8D29355A914414FD3F438BF6DB9B557_RuntimeMethod_var);
			// }
			goto IL_0046;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::ProjectedObjectCleanupHandler(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCache_ProjectedObjectCleanupHandler_mB2D94D7C37F6FFDB9AA8CC892F5B15547AE5DB52 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ulong cookie = ProjectedObjectHelpers.ConvertHandleToCookie(handle);
		intptr_t L_0 = ___handle0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		// Remove(cookie);
		uint64_t L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ProjectedObjectCache_Remove_mC9F1C7A3512B17B749D38B863B9C2B2A44527243(L_2, NULL);
		// ProjectedObjectEventHandlerCache.Clear(cookie);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		ProjectedObjectEventHandlerCache_Clear_mD977A00FF1AC25F04A8C99FA6B472C4E5FC069E0(L_2, NULL);
		// }
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
void ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5_Multicast(ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* currentDelegate = reinterpret_cast<ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint64_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___cookie0, ___args1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5_OpenInst(ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint64_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___cookie0, ___args1, method);
}
void ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5_OpenStatic(ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint64_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___cookie0, ___args1, method);
}
void ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5_OpenStaticInvoker(ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< uint64_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___cookie0, ___args1);
}
void ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5_ClosedStaticInvoker(ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, uint64_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___cookie0, ___args1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995 (ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint64_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___cookie0, ___args1);

}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceChangedHandlerNative__ctor_mAC1EAA2DBC650998CE9422E1A699C7761327CB76 (ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5_Multicast;
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::Invoke(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceChangedHandlerNative_Invoke_m42CE5BE57F3AE71206C223EA11CDB6FB50D151C5 (ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint64_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___cookie0, ___args1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A_Multicast(ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* currentDelegate = reinterpret_cast<ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___handle0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A_OpenInst(ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___handle0, method);
}
void ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A_OpenStatic(ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___handle0, method);
}
void ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A_OpenStaticInvoker(ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___handle0);
}
void ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A_ClosedStaticInvoker(ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___handle0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631 (ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___handle0);

}
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCleanupNative__ctor_m83373B05236846D92DCA22C157AB32F95AF7784A (ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A_Multicast;
}
// System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectedObjectCleanupNative_Invoke_mDF77601361A66FA45A933A92F410DA7C2545549A (ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handle0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCreate(Microsoft.Azure.ObjectAnchors.PromiseCreateOptions&,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_PromiseCreate_m8593C3A02B6779E944AF8963A4FF50EB315E8752 (PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0* ___options0, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3** ___promiseHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}


	typedef int32_t (CDECL *PInvokeFunc) (PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke*, void**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke*) + sizeof(void**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_promise_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___options0' to native representation
	PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke* ____options0_marshaled = NULL;
	PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke ____options0_marshaled_dereferenced = {};
	PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_pinvoke(*___options0, ____options0_marshaled_dereferenced);
	____options0_marshaled = &____options0_marshaled_dereferenced;

	// Marshaling of parameter '___promiseHandle1' to native representation
	void* ____promiseHandle1_empty = NULL;
	void** ____promiseHandle1_marshaled = &____promiseHandle1_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_promise_create)(____options0_marshaled, ____promiseHandle1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____options0_marshaled, ____promiseHandle1_marshaled);
	#endif

	// Marshaling of parameter '___options0' back from native representation
	PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0 _____options0_marshaled_unmarshaled_dereferenced;
	memset((&_____options0_marshaled_unmarshaled_dereferenced), 0, sizeof(_____options0_marshaled_unmarshaled_dereferenced));
	PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_pinvoke_back(*____options0_marshaled, _____options0_marshaled_unmarshaled_dereferenced);
	PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_pinvoke_cleanup(*____options0_marshaled);
	*___options0 = _____options0_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___options0)->___onComplete_1), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___options0)->___onError_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___options0)->___onProgress_3), (void*)NULL);
	#endif

	// Marshaling of parameter '___promiseHandle1' back from native representation
	PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* _____promiseHandle1_marshaled_unmarshaled_dereferenced = (PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3*)il2cpp_codegen_object_new(PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3_il2cpp_TypeInfo_var);
	PromiseSafeHandle__ctor_m62B40FF9DAB6D0DC91D141DF1717CD1439DF1822(_____promiseHandle1_marshaled_unmarshaled_dereferenced, NULL);
	intptr_t _____promiseHandle1_marshaled_unmarshaled_dereferenced_handle_temp;
	_____promiseHandle1_marshaled_unmarshaled_dereferenced_handle_temp = (intptr_t)*____promiseHandle1_marshaled;
	(_____promiseHandle1_marshaled_unmarshaled_dereferenced)->___handle_0 = _____promiseHandle1_marshaled_unmarshaled_dereferenced_handle_temp;
	*___promiseHandle1 = _____promiseHandle1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___promiseHandle1, (void*)____promiseHandle1_marshaled);

	return returnValue;
}
// System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCancel(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_PromiseCancel_mE7B4745D3BD81D29885C3560C52A4F810AD1102F (PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_promise_cancel", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___promiseHandle0' to native representation
	void* ____promiseHandle0_marshaled = NULL;
	if (___promiseHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("promiseHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____promiseHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___promiseHandle0, (&___safeHandle_reference_incremented_for____promiseHandle0), NULL);
	____promiseHandle0_marshaled = reinterpret_cast<void*>((___promiseHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_promise_cancel)(____promiseHandle0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____promiseHandle0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___promiseHandle0' native representation
	if (___safeHandle_reference_incremented_for____promiseHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___promiseHandle0, NULL);
	}

	return returnValue;
}
// System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_PromiseDestroy_m31F1EC010862774B326F43687DE1448065D776AE (intptr_t ___promiseHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_promise_destroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_promise_destroy)(___promiseHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___promiseHandle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_create_guid_account_id_string_account_key_string_account_domain(System.Guid,System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_mCE1E4F15A4CD31616E2223E073A1ED791E6F66D6 (Guid_t ___account_id0, String_t* ___account_key1, String_t* ___account_domain2, intptr_t* ___instance3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Guid_t, Il2CppChar*, Il2CppChar*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Guid_t) + sizeof(Il2CppChar*) + sizeof(Il2CppChar*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___account_key1' to native representation
	Il2CppChar* ____account_key1_marshaled = NULL;
	if (___account_key1 != NULL)
	{
		____account_key1_marshaled = &___account_key1->____firstChar_5;
	}

	// Marshaling of parameter '___account_domain2' to native representation
	Il2CppChar* ____account_domain2_marshaled = NULL;
	if (___account_domain2 != NULL)
	{
		____account_domain2_marshaled = &___account_domain2->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_wide)(___account_id0, ____account_key1_marshaled, ____account_domain2_marshaled, ___instance3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___account_id0, ____account_key1_marshaled, ____account_domain2_marshaled, ___instance3);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_account_information_release_m0FD4F1D4102DE753F632CC3ABB463DB71FC856B6 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_account_information_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_account_information_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_get_error_details(System.IntPtr,System.String&,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_get_error_details_mDB6005415D7C6E5BA815A36346CD66CD404F047E (intptr_t ___handle0, String_t** ___result_message1, String_t** ___result_requestCorrelationVector2, String_t** ___result_responseCorrelationVector3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppChar**, Il2CppChar**, Il2CppChar**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar**) + sizeof(Il2CppChar**) + sizeof(Il2CppChar**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_get_error_details_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result_message1' to native representation
	Il2CppChar* ____result_message1_empty = NULL;
	Il2CppChar** ____result_message1_marshaled = &____result_message1_empty;

	// Marshaling of parameter '___result_requestCorrelationVector2' to native representation
	Il2CppChar* ____result_requestCorrelationVector2_empty = NULL;
	Il2CppChar** ____result_requestCorrelationVector2_marshaled = &____result_requestCorrelationVector2_empty;

	// Marshaling of parameter '___result_responseCorrelationVector3' to native representation
	Il2CppChar* ____result_responseCorrelationVector3_empty = NULL;
	Il2CppChar** ____result_responseCorrelationVector3_marshaled = &____result_responseCorrelationVector3_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_get_error_details_wide)(___handle0, ____result_message1_marshaled, ____result_requestCorrelationVector2_marshaled, ____result_responseCorrelationVector3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____result_message1_marshaled, ____result_requestCorrelationVector2_marshaled, ____result_responseCorrelationVector3_marshaled);
	#endif

	// Marshaling of parameter '___result_message1' back from native representation
	String_t* _____result_message1_marshaled_unmarshaled_dereferenced = NULL;
	_____result_message1_marshaled_unmarshaled_dereferenced = il2cpp_codegen_marshal_wstring_result(*____result_message1_marshaled);
	*___result_message1 = _____result_message1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___result_message1, (void*)____result_message1_marshaled);

	// Marshaling cleanup of parameter '___result_message1' native representation
	il2cpp_codegen_marshal_free(*____result_message1_marshaled);
	*____result_message1_marshaled = NULL;

	// Marshaling of parameter '___result_requestCorrelationVector2' back from native representation
	String_t* _____result_requestCorrelationVector2_marshaled_unmarshaled_dereferenced = NULL;
	_____result_requestCorrelationVector2_marshaled_unmarshaled_dereferenced = il2cpp_codegen_marshal_wstring_result(*____result_requestCorrelationVector2_marshaled);
	*___result_requestCorrelationVector2 = _____result_requestCorrelationVector2_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___result_requestCorrelationVector2, (void*)____result_requestCorrelationVector2_marshaled);

	// Marshaling cleanup of parameter '___result_requestCorrelationVector2' native representation
	il2cpp_codegen_marshal_free(*____result_requestCorrelationVector2_marshaled);
	*____result_requestCorrelationVector2_marshaled = NULL;

	// Marshaling of parameter '___result_responseCorrelationVector3' back from native representation
	String_t* _____result_responseCorrelationVector3_marshaled_unmarshaled_dereferenced = NULL;
	_____result_responseCorrelationVector3_marshaled_unmarshaled_dereferenced = il2cpp_codegen_marshal_wstring_result(*____result_responseCorrelationVector3_marshaled);
	*___result_responseCorrelationVector3 = _____result_responseCorrelationVector3_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___result_responseCorrelationVector3, (void*)____result_responseCorrelationVector3_marshaled);

	// Marshaling cleanup of parameter '___result_responseCorrelationVector3' native representation
	il2cpp_codegen_marshal_free(*____result_responseCorrelationVector3_marshaled);
	*____result_responseCorrelationVector3_marshaled = NULL;

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_account_information_account_information(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m84826BA72FAA6171FE800E167C3E65657F0ADFE1 (intptr_t ___account_information0, intptr_t* ___instance1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_anchors_session_create_account_information_account_information", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_anchors_session_create_account_information_account_information)(___account_information0, ___instance1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___account_information0, ___instance1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_object_observer(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_anchors_session_create_object_observer_m6CA8E154CF1FC8FE0CEEC23508563CCFA9AF1005 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_anchors_session_create_object_observer", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_anchors_session_create_object_observer)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_anchors_session_release_m75A9936B2D2D7BD99EC182310DC5E7E2B7108153 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_anchors_session_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_anchors_session_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_addref_m62FEEF7CDF1629ECDA3DD270011D1716ECDA2AF0 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_changed_event_args_addref_m1A75869E3F8D665F4CFDAC6F02E1CCA4009F52FB (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_changed_event_args_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_changed_event_args_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_changed_event_args_release_m4CAD47B4C09C7E7DC61CA25AAFACD2923776CC4D (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_changed_event_args_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_changed_event_args_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_dispose_m34FDE1A7311ACFE0B12CF204CC69378B85FA9E57 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_dispose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_dispose)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_get_mode_m3816517887E73CCED77FC2B171FA20C332C338C9 (intptr_t ___handle0, int32_t* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_get_mode", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_get_mode)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_model_id(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_get_model_id_mC481768872DEBD327EA9F6CE4802123A944EEE6B (intptr_t ___handle0, Guid_t* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Guid_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_get_model_id", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_get_model_id)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_release_mC5E8CEF6C36F776245F6687124F10A0DFA534068 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_changed(System.IntPtr,System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_set_changed_mFAE6F8699161276829375885BAAF6AD2828F0C4E (intptr_t ___handle0, uint64_t ___value1, ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* ___value_fn2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint64_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_set_changed", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value_fn2' to native representation
	Il2CppMethodPointer ____value_fn2_marshaled = NULL;
	____value_fn2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___value_fn2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_set_changed)(___handle0, ___value1, ____value_fn2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1, ____value_fn2_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_set_mode_m0F604051EE7BF1F2A6626E0C3B2DEAA7CDD67DA7 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_set_mode", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_set_mode)(___handle0, ___value1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_addref_mE66712A3C1558B6CF02BC006FC6C441F5E4A6F74 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_state_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_state_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_center(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_get_center_mC377F02A8728E39D4B9F2B2B2535DD9210A7F0AD (intptr_t ___handle0, SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_state_get_center", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_state_get_center)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_last_updated_time(System.IntPtr,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_get_last_updated_time_mD7323F01B96EF6A0BFF7D0A53791A2BE2DA84FAC (intptr_t ___handle0, int64_t* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_state_get_last_updated_time", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_state_get_last_updated_time)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_scale_change(System.IntPtr,System.Numerics.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_get_scale_change_mDD853F393BFDB8D6F94A4EC23B4CA074A3C616C2 (intptr_t ___handle0, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_state_get_scale_change", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_state_get_scale_change)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_surface_coverage(System.IntPtr,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_get_surface_coverage_mCD8C0A7576A08137BF9621E54CA9CC3531CE9A98 (intptr_t ___handle0, float* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_state_get_surface_coverage", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_state_get_surface_coverage)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_release_m7012960A6C1B5D79822BE66ACA08F1B686BFB13C (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_state_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_state_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_try_create_placement(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_state_try_create_placement_m5D2D326A3C17C98BED129373849D22700BDC9026 (intptr_t ___handle0, SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 ___reference_coordinate_system1, intptr_t* ___result2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_state_try_create_placement", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_state_try_create_placement)(___handle0, ___reference_coordinate_system1, ___result2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___reference_coordinate_system1, ___result2);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_try_get_current_state(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_instance_try_get_current_state_m719D10D455BFF484ABF73F17AF9F894DEE286ED9 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_instance_try_get_current_state", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_instance_try_get_current_state)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_addref_m7ED9667367B396143BA9F997C10CCCB214FE1267 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_dispose_mECE71BBBE8DB7BDADDB568CC00283448F86B1197 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_dispose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_dispose)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_bounding_box(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_bounding_box_m13A4D6D293A567F11CEC835C6835C1D27EE2069A (intptr_t ___handle0, SpatialOrientedBox_tE146C24275514A892525922FE5A5F87AE603A08E* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, SpatialOrientedBox_tE146C24275514A892525922FE5A5F87AE603A08E*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(SpatialOrientedBox_tE146C24275514A892525922FE5A5F87AE603A08E*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_get_bounding_box", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_get_bounding_box)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_id(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_id_m863EE16F2E2D4A7D400F621C4109F59C23912B8A (intptr_t ___handle0, Guid_t* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Guid_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_get_id", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_get_id)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_origin_to_center_transform(System.IntPtr,System.Numerics.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_origin_to_center_transform_m1D36E22AC2AED88DDD1675580DC89B15949C3078 (intptr_t ___handle0, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_get_origin_to_center_transform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_get_origin_to_center_transform)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_index_count(System.IntPtr,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_triangle_index_count_m6E9CB072C4E8EEDA1E89FE3CAAEE2E696E8108D4 (intptr_t ___handle0, uint32_t* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_get_triangle_index_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_get_triangle_index_count)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_indices(System.IntPtr,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_triangle_indices_m3BB460D4B5EF1BA4E6A90F541F3085837570276E (intptr_t ___handle0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___indices1, int32_t ___indices_count2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_get_triangle_indices", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___indices1' to native representation
	uint32_t* ____indices1_marshaled = NULL;
	if (___indices1 != NULL)
	{
		il2cpp_array_size_t ____indices1_Length = (___indices1)->max_length;
		____indices1_marshaled = il2cpp_codegen_marshal_allocate_array<uint32_t>(____indices1_Length);
		memset(____indices1_marshaled, 0, ____indices1_Length * sizeof(uint32_t));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_get_triangle_indices)(___handle0, ____indices1_marshaled, ___indices_count2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____indices1_marshaled, ___indices_count2);
	#endif

	// Marshaling of parameter '___indices1' back from native representation
	if (____indices1_marshaled != NULL)
	{
		il2cpp_array_size_t ____indices1_Length = (___indices1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____indices1_Length); i++)
		{
			(___indices1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____indices1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___indices1' native representation
	il2cpp_codegen_marshal_free(____indices1_marshaled);
	____indices1_marshaled = NULL;

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_count(System.IntPtr,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_vertex_count_mC547894FF1FA6977ACF65BA3CC57998168FF2E8C (intptr_t ___handle0, uint32_t* ___result1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_get_vertex_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_get_vertex_count)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_normals(System.IntPtr,System.Numerics.Vector3[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_vertex_normals_m8B96F0ADDA83331626681729B08AE4FA86DDD455 (intptr_t ___handle0, Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* ___normals1, int32_t ___normals_count2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_get_vertex_normals", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___normals1' to native representation
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* ____normals1_marshaled = NULL;
	if (___normals1 != NULL)
	{
		il2cpp_array_size_t ____normals1_Length = (___normals1)->max_length;
		____normals1_marshaled = il2cpp_codegen_marshal_allocate_array<Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D>(____normals1_Length);
		memset(____normals1_marshaled, 0, ____normals1_Length * sizeof(Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_get_vertex_normals)(___handle0, ____normals1_marshaled, ___normals_count2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____normals1_marshaled, ___normals_count2);
	#endif

	// Marshaling of parameter '___normals1' back from native representation
	if (____normals1_marshaled != NULL)
	{
		il2cpp_array_size_t ____normals1_Length = (___normals1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____normals1_Length); i++)
		{
			(___normals1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____normals1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___normals1' native representation
	il2cpp_codegen_marshal_free(____normals1_marshaled);
	____normals1_marshaled = NULL;

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_positions(System.IntPtr,System.Numerics.Vector3[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_get_vertex_positions_m5F0ED96A2A7AE8B8006075FB3F66F4D315824F53 (intptr_t ___handle0, Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* ___vertices1, int32_t ___vertices_count2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_get_vertex_positions", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___vertices1' to native representation
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D* ____vertices1_marshaled = NULL;
	if (___vertices1 != NULL)
	{
		il2cpp_array_size_t ____vertices1_Length = (___vertices1)->max_length;
		____vertices1_marshaled = il2cpp_codegen_marshal_allocate_array<Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D>(____vertices1_Length);
		memset(____vertices1_marshaled, 0, ____vertices1_Length * sizeof(Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_get_vertex_positions)(___handle0, ____vertices1_marshaled, ___vertices_count2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____vertices1_marshaled, ___vertices_count2);
	#endif

	// Marshaling of parameter '___vertices1' back from native representation
	if (____vertices1_marshaled != NULL)
	{
		il2cpp_array_size_t ____vertices1_Length = (___vertices1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____vertices1_Length); i++)
		{
			(___vertices1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____vertices1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___vertices1' native representation
	il2cpp_codegen_marshal_free(____vertices1_marshaled);
	____vertices1_marshaled = NULL;

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_model_release_m2D680F2CDFA8370FD50A851A2B4731B6F5F6C91C (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_model_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_model_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_addref_m57DFE16660F9016520034B74F16D355F162A258D (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_observer_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_observer_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_detect_async_queries(System.IntPtr,System.IntPtr[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_detect_async_queries_m1B292487BD51D39402396E686344C0D93B99569C (intptr_t ___handle0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___queries1, int32_t ___queries_count2, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*, int32_t, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_observer_detect_async_queries", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___queries1' to native representation
	intptr_t* ____queries1_marshaled = NULL;
	if (___queries1 != NULL)
	{
		____queries1_marshaled = reinterpret_cast<intptr_t*>((___queries1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___promiseHandle3' to native representation
	void* ____promiseHandle3_marshaled = NULL;
	if (___promiseHandle3 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("promiseHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____promiseHandle3 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___promiseHandle3, (&___safeHandle_reference_incremented_for____promiseHandle3), NULL);
	____promiseHandle3_marshaled = reinterpret_cast<void*>((___promiseHandle3)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_observer_detect_async_queries)(___handle0, ____queries1_marshaled, ___queries_count2, ____promiseHandle3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____queries1_marshaled, ___queries_count2, ____promiseHandle3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___promiseHandle3' native representation
	if (___safeHandle_reference_incremented_for____promiseHandle3)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___promiseHandle3, NULL);
	}

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_dispose_m0194881EB4DF511F5B3BDD5FA3840983FB16B8B7 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_observer_dispose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_observer_dispose)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_is_supported(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_is_supported_m473C73622C54D56858E7007CEC01FADD90C28CD9 (bool* ___result0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_observer_is_supported", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_observer_is_supported)(reinterpret_cast<uint8_t*>(___result0));
	#else
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<uint8_t*>(___result0));
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_load_object_model_async(System.IntPtr,System.Byte[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_load_object_model_async_m3B2C767C2D16C261EC85EBA20EEF182B63B22D5B (intptr_t ___handle0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___buffer_count2, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_observer_load_object_model_async", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___promiseHandle3' to native representation
	void* ____promiseHandle3_marshaled = NULL;
	if (___promiseHandle3 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("promiseHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____promiseHandle3 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___promiseHandle3, (&___safeHandle_reference_incremented_for____promiseHandle3), NULL);
	____promiseHandle3_marshaled = reinterpret_cast<void*>((___promiseHandle3)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_observer_load_object_model_async)(___handle0, ____buffer1_marshaled, ___buffer_count2, ____promiseHandle3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____buffer1_marshaled, ___buffer_count2, ____promiseHandle3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___promiseHandle3' native representation
	if (___safeHandle_reference_incremented_for____promiseHandle3)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___promiseHandle3, NULL);
	}

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_release_mBD9171A46D1E52BA9A54A22D8774429AD31C243C (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_observer_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_observer_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_request_access_async(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_observer_request_access_async_mE4E9B78DB51AC66CFF39495502C2E71D59E80C04 (PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_observer_request_access_async", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___promiseHandle0' to native representation
	void* ____promiseHandle0_marshaled = NULL;
	if (___promiseHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("promiseHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____promiseHandle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___promiseHandle0, (&___safeHandle_reference_incremented_for____promiseHandle0), NULL);
	____promiseHandle0_marshaled = reinterpret_cast<void*>((___promiseHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_observer_request_access_async)(____promiseHandle0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____promiseHandle0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___promiseHandle0' native representation
	if (___safeHandle_reference_incremented_for____promiseHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___promiseHandle0, NULL);
	}

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_query_create_object_model_model_m3B988FA265ABD9C5F2AF1CE8BA3920B492BEB02A (intptr_t ___model0, intptr_t* ___instance1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_query_create_object_model_model", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_query_create_object_model_model)(___model0, ___instance1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___model0, ___instance1);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model_object_observation_mode_observation_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectObservationMode,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_m549793C8DA150FA759D6B6CA547EFA83D6B61203 (intptr_t ___model0, int32_t ___observation_mode1, intptr_t* ___instance2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_query_create_object_model_model_object_observation_mode_observation_mode", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_query_create_object_model_model_object_observation_mode_observation_mode)(___model0, ___observation_mode1, ___instance2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___model0, ___observation_mode1, ___instance2);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_query_dispose_m7D51D2B682C08D212D19602D517D829874CFB075 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_query_dispose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_query_dispose)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_query_release_m918F3FEE1860316B5C5C059406B3048DA88EF8BC (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_query_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_query_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_set_projected_object_cleanup(Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_set_projected_object_cleanup_mDB1445F204E9BCFAE519456EB94468086731F4EC (ProjectedObjectCleanupNative_tF6ABD7F88E05A815ECED3187834ADE02576AE631* ___callback0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_set_projected_object_cleanup", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_set_projected_object_cleanup)(____callback0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____callback0_marshaled);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_Multicast(ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* currentDelegate = reinterpret_cast<ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___args1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenInst(ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	typedef void (*FunctionPointerType) (RuntimeObject*, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___args1, method);
}
void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenStatic(ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___args1, method);
}
void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenStaticInvoker(ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___args1);
}
void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_ClosedStaticInvoker(ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___args1);
}
void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenVirtual(ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	VirtualActionInvoker1< ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___args1);
}
void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenInterface(ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	InterfaceActionInvoker1< ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___args1);
}
void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenGenericVirtual(ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericVirtualActionInvoker1< ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* >::Invoke(method, ___sender0, ___args1);
}
void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenGenericInterface(ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericInterfaceActionInvoker1< ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* >::Invoke(method, ___sender0, ___args1);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceChangedHandler__ctor_m618157E05034AC02CA5A85EDDB510F8827986F19 (ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_Multicast;
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::Invoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4 (ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___args1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountInformation_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE6819C69C5B79BC0A398703896C5C629A67FA016 (AccountInformation_tCE80CDBF2885D8A7DCBFDC90F90974789161FDF2* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_account_information_release(this.handle);
		intptr_t L_0 = __this->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_account_information_release_m0FD4F1D4102DE753F632CC3ABB463DB71FC856B6(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::.ctor(System.Guid,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountInformation__ctor_mAE7D3A92A8D49265D359418B8FB937DF1B0FB83B (AccountInformation_tCE80CDBF2885D8A7DCBFDC90F90974789161FDF2* __this, Guid_t ___accountId0, String_t* ___accountKey1, String_t* ___accountDomain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public AccountInformation(System.Guid accountId, string accountKey, string accountDomain)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Microsoft.Azure.ObjectAnchors.status resultStatus = (Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_account_information_create_guid_account_id_string_account_key_string_account_domain(accountId, accountKey, accountDomain, out this.handle));
		Guid_t L_0 = ___accountId0;
		String_t* L_1 = ___accountKey1;
		String_t* L_2 = ___accountDomain2;
		intptr_t* L_3 = (&__this->___handle_0);
		int32_t L_4;
		L_4 = NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_mCE1E4F15A4CD31616E2223E073A1ED791E6F66D6(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
		intptr_t L_5 = __this->___handle_0;
		int32_t L_6 = V_0;
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_5, L_6, NULL);
		// Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.Add(this);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountInformation_Finalize_m3B9A494282334E57EDD40BB1B49DA42FF60559FE (AccountInformation_tCE80CDBF2885D8A7DCBFDC90F90974789161FDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_account_information_release(this.handle));
			intptr_t L_0 = __this->___handle_0;
			intptr_t L_1 = __this->___handle_0;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_account_information_release_m0FD4F1D4102DE753F632CC3ABB463DB71FC856B6(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			// this.handle = IntPtr.Zero;
			intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			__this->___handle_0 = L_3;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m2DFA469EC9E960A98B850089429F348AC179D3FF (AccountInformation_tCE80CDBF2885D8A7DCBFDC90F90974789161FDF2* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mEF46F3CC29F48A747501659CD5A754AB959CBE4F (ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_anchors_session_release(this.handle);
		intptr_t L_0 = __this->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_object_anchors_session_release_m75A9936B2D2D7BD99EC182310DC5E7E2B7108153(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::.ctor(Microsoft.Azure.ObjectAnchors.AccountInformation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectAnchorsSession__ctor_mE617C1F564FB90CA51764C5A938066BA9BD8AE92 (ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* __this, AccountInformation_tCE80CDBF2885D8A7DCBFDC90F90974789161FDF2* ___accountInformation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public ObjectAnchorsSession(Microsoft.Azure.ObjectAnchors.AccountInformation accountInformation)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Microsoft.Azure.ObjectAnchors.status resultStatus = (Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_anchors_session_create_account_information_account_information(accountInformation != null ? accountInformation.handle : IntPtr.Zero, out this.handle));
		AccountInformation_tCE80CDBF2885D8A7DCBFDC90F90974789161FDF2* L_0 = ___accountInformation0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		AccountInformation_tCE80CDBF2885D8A7DCBFDC90F90974789161FDF2* L_2 = ___accountInformation0;
		NullCheck(L_2);
		intptr_t L_3 = L_2->___handle_0;
		G_B3_0 = L_3;
	}

IL_0016:
	{
		intptr_t* L_4 = (&__this->___handle_0);
		int32_t L_5;
		L_5 = NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m84826BA72FAA6171FE800E167C3E65657F0ADFE1(G_B3_0, L_4, NULL);
		V_0 = L_5;
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
		intptr_t L_6 = __this->___handle_0;
		int32_t L_7 = V_0;
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_6, L_7, NULL);
		// Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.Add(this);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectAnchorsSession_Finalize_m35AEEBBAC039376F172532821EE35141E462B2F5 (ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_anchors_session_release(this.handle));
			intptr_t L_0 = __this->___handle_0;
			intptr_t L_1 = __this->___handle_0;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_object_anchors_session_release_m75A9936B2D2D7BD99EC182310DC5E7E2B7108153(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			// this.handle = IntPtr.Zero;
			intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			__this->___handle_0 = L_3;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::CreateObjectObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* ObjectAnchorsSession_CreateObjectObserver_m15F64098164B463468752A3F1530F03D1735DDB8 (ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_anchors_session_create_object_observer(this.handle, out result_handle));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_anchors_session_create_object_observer_m6CA8E154CF1FC8FE0CEEC23508563CCFA9AF1005(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// result_object = (result_handle != IntPtr.Zero) ? Microsoft.Azure.ObjectAnchors.ObjectObserver.GetOrCreateInstance(result_handle, transfer: true) : null;
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		return (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61*)NULL;
	}

IL_0027:
	{
		intptr_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_7;
		L_7 = ObjectObserver_GetOrCreateInstance_mDFDE2BA332BA73AD7FE96030BD51792F8374CFC8(L_6, (bool)1, NULL);
		// return result_object;
		return L_7;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mBB5611B713CD5A071908F84211D2CB6CCD2C8FC4 (ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceChangedEventArgs__ctor_mE5AC62BF85E233EEEE135E37CB6FB43530A54464 (ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ObjectInstanceChangedEventArgs(IntPtr ahandle, bool transfer)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->___handle_1 = L_0;
		// if (!transfer)
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_changed_event_args_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_aoa_object_instance_changed_event_args_addref_m1A75869E3F8D665F4CFDAC6F02E1CCA4009F52FB(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mE817A63216155066F5DAA1F430AE6D4C9E3C2B7B (ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_changed_event_args_release(this.handle);
		intptr_t L_0 = __this->___handle_1;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_object_instance_changed_event_args_release_m4CAD47B4C09C7E7DC61CA25AAFACD2923776CC4D(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceChangedEventArgs_Finalize_m2954F2098CE7558EA62B1DFFA884E29C83313E60 (ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_changed_event_args_release(this.handle));
			intptr_t L_0 = __this->___handle_1;
			intptr_t L_1 = __this->___handle_1;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_object_instance_changed_event_args_release_m4CAD47B4C09C7E7DC61CA25AAFACD2923776CC4D(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			// this.handle = IntPtr.Zero;
			intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			__this->___handle_1 = L_3;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m121E073D4344C71B158E4B1EC8B873AC4DA57B9A (ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_1;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ObjectInstanceChangedEventArgs_GetOrCreateInstance_mC17D992315543E1871CA7895B24DAD70D30F7114 (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) 
{
	{
		// => GetOrCreateInstance(ProjectedObjectHelpers.ConvertHandleToCookie(handle), transfer);
		intptr_t L_0 = ___handle0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		bool L_2 = ___transfer1;
		ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* L_3;
		L_3 = ObjectInstanceChangedEventArgs_GetOrCreateInstance_m836F457EE3340E6865AD3EDBCB33D1A88A9B345D(L_1, L_2, NULL);
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ObjectInstanceChangedEventArgs_GetOrCreateInstance_m836F457EE3340E6865AD3EDBCB33D1A88A9B345D (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_GetOrCreate_TisObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83_mA23FC0644818F1E29B8D840D0FCB3C05237B7BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_m3165AD48C8CDAF4BF62D17CB471B66E091FCDC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* V_0 = NULL;
	ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* L_0 = (U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m5C58331BE3B22EF148128473CB8DADBC53B6789C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* L_1 = V_0;
		bool L_2 = ___transfer1;
		NullCheck(L_1);
		L_1->___transfer_2 = L_2;
		// IntPtr handle = ProjectedObjectHelpers.ConvertCookieToHandle(cookie);
		U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* L_3 = V_0;
		uint64_t L_4 = ___cookie0;
		intptr_t L_5;
		L_5 = ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C(L_4, NULL);
		NullCheck(L_3);
		L_3->___handle_1 = L_5;
		// bool created = false;
		U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* L_6 = V_0;
		NullCheck(L_6);
		L_6->___created_0 = (bool)0;
		// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs result = Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs>(
		//     cookie,
		//     _ =>
		//     {
		//         created = true;
		//         return new Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs(handle, transfer: transfer);
		//     }
		// );
		uint64_t L_7 = ___cookie0;
		U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* L_8 = V_0;
		Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81* L_9 = (Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81*)il2cpp_codegen_object_new(Func_2_tEB5A0AA5D1BC28B04B2762FCFB911189AAC7DD81_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m113BC79B23A27391EB157D14821C40A85B8BE8AA(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_m3165AD48C8CDAF4BF62D17CB471B66E091FCDC9F_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* L_10;
		L_10 = ProjectedObjectCache_GetOrCreate_TisObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83_mA23FC0644818F1E29B8D840D0FCB3C05237B7BCB(L_7, L_9, ProjectedObjectCache_GetOrCreate_TisObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83_mA23FC0644818F1E29B8D840D0FCB3C05237B7BCB_RuntimeMethod_var);
		V_1 = L_10;
		// if (!created && transfer)
		U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___created_0;
		U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->___transfer_2;
		if (!((int32_t)(((((int32_t)L_12) == ((int32_t)0))? 1 : 0)&(int32_t)L_14)))
		{
			goto IL_004b;
		}
	}
	{
		// ((IReferenceCounted)result).DecreaseReferenceCount();
		ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* L_15 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.Azure.ObjectAnchors.IReferenceCounted::DecreaseReferenceCount() */, IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var, L_15);
	}

IL_004b:
	{
		// return result;
		ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* L_16 = V_1;
		return L_16;
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m5C58331BE3B22EF148128473CB8DADBC53B6789C (U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::<GetOrCreateInstance>b__0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_m3165AD48C8CDAF4BF62D17CB471B66E091FCDC9F (U3CU3Ec__DisplayClass8_0_t5838AEAAC57B355599333A310CDD3057034C9ACA* __this, uint64_t ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// created = true;
		__this->___created_0 = (bool)1;
		// return new Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs(handle, transfer: transfer);
		intptr_t L_0 = __this->___handle_1;
		bool L_1 = __this->___transfer_2;
		ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* L_2 = (ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83*)il2cpp_codegen_object_new(ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ObjectInstanceChangedEventArgs__ctor_mE5AC62BF85E233EEEE135E37CB6FB43530A54464(L_2, L_0, L_1, NULL);
		return L_2;
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
extern "C" void CDECL ReversePInvokeWrapper_ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A(uint64_t ___cookie0, intptr_t ___args1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A(___cookie0, ___args1, NULL);

}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance__ctor_m18DC843C177ECEB1ACC205C3EDB2BB70D0DD978B (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) 
{
	{
		// protected ObjectInstance(IntPtr ahandle, bool transfer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->___handle_0 = L_0;
		// if (!transfer)
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_aoa_object_instance_addref_m62FEEF7CDF1629ECDA3DD270011D1716ECDA2AF0(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m19CDF2488DD01A26E5EBC8EED1FF3B4C4E8D4C87 (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_release(this.handle);
		intptr_t L_0 = __this->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_object_instance_release_mC5E8CEF6C36F776245F6687124F10A0DFA534068(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance_Finalize_mE132979D1A0A58908AAD3F73F7BF8B270BE912B4 (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.aoa_object_instance_release(this.handle));
			intptr_t L_0 = __this->___handle_0;
			intptr_t L_1 = __this->___handle_0;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_object_instance_release_mC5E8CEF6C36F776245F6687124F10A0DFA534068(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance_Dispose_m76B9D7C6DB21564F13A4900E08655B95949D7631 (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, const RuntimeMethod* method) 
{
	{
		// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.aoa_object_instance_dispose(this.handle));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_instance_dispose_m34FDE1A7311ACFE0B12CF204CC69378B85FA9E57(L_1, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Guid Microsoft.Azure.ObjectAnchors.ObjectInstance::get_ModelId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t ObjectInstance_get_ModelId_m4FE3DCF93149B9D207AAB0B8F082293BE156D52F (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_get_model_id(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_instance_get_model_id_mC481768872DEBD327EA9F6CE4802123A944EEE6B(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		Guid_t L_3 = V_0;
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode Microsoft.Azure.ObjectAnchors.ObjectInstance::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectInstance_get_Mode_m782647FCC1F475E18B6A5FA55786E2EF3936FAD0 (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_get_mode(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_instance_get_mode_m3816517887E73CCED77FC2B171FA20C332C338C9(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::set_Mode(Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance_set_Mode_mF0F6C3568DB96EFA8A56AFA716236294D245AE45 (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_set_mode(this.handle, value));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2 = ___value0;
		int32_t L_3;
		L_3 = NativeLibrary_aoa_object_instance_set_mode_m0F604051EE7BF1F2A6626E0C3B2DEAA7CDD67DA7(L_1, L_2, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::ChangedStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_GetEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mBD779617296B551F54D9BD49203BA9D9B70DE8AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA433E10BF74FAFBC9D4DCA2388A4E661A58898);
		s_Il2CppMethodInitialized = true;
	}
	ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* V_0 = NULL;
	ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* G_B2_0 = NULL;
	ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* G_B1_0 = NULL;
	ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* G_B4_0 = NULL;
	ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* G_B3_0 = NULL;
	{
		// Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler handler =
		//     Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache.GetEventHandler<Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler>(
		//         cookie,
		//         nameof(Changed));
		uint64_t L_0 = ___cookie0;
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* L_1;
		L_1 = ProjectedObjectEventHandlerCache_GetEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mBD779617296B551F54D9BD49203BA9D9B70DE8AA(L_0, _stringLiteralBBA433E10BF74FAFBC9D4DCA2388A4E661A58898, ProjectedObjectEventHandlerCache_GetEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mBD779617296B551F54D9BD49203BA9D9B70DE8AA_RuntimeMethod_var);
		// Microsoft.Azure.ObjectAnchors.ObjectInstance instance = Microsoft.Azure.ObjectAnchors.ObjectInstance.GetOrCreateInstance(ProjectedObjectHelpers.ConvertCookieToHandle(cookie), transfer: false);
		uint64_t L_2 = ___cookie0;
		intptr_t L_3;
		L_3 = ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* L_4;
		L_4 = ObjectInstance_GetOrCreateInstance_mB079510528C2F87336C6FEAB20B13B38D4F57291(L_3, (bool)0, NULL);
		V_0 = L_4;
		// if (instance == null)
		ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* L_5 = V_0;
		G_B1_0 = L_1;
		if (L_5)
		{
			G_B2_0 = L_1;
			goto IL_0026;
		}
	}
	{
		// throw new System.InvalidOperationException("The object instance is not tracked by the cache.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF15767575F8E51FACC175148AE8F3B04EE1E0D1C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A_RuntimeMethod_var)));
	}

IL_0026:
	{
		// handler?.Invoke(instance, Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs.GetOrCreateInstance(args, transfer: false));
		ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* L_7 = G_B2_0;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* L_8 = V_0;
		intptr_t L_9 = ___args1;
		ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* L_10;
		L_10 = ObjectInstanceChangedEventArgs_GetOrCreateInstance_mC17D992315543E1871CA7895B24DAD70D30F7114(L_9, (bool)0, NULL);
		NullCheck(G_B4_0);
		ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_inline(G_B4_0, L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::add_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance_add_Changed_m6BF9396FAD42A4EEDE357DA0AE13DD68710DE63F (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_AddEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mD02A0577DB951C428B4C32F57DAC16028B5E81B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA433E10BF74FAFBC9D4DCA2388A4E661A58898);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache.AddEventHandler((this as ICachedObject).Cookie, nameof(this.Changed), value);
		uint64_t L_0;
		L_0 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie() */, ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var, __this);
		ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		ProjectedObjectEventHandlerCache_AddEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mD02A0577DB951C428B4C32F57DAC16028B5E81B8(L_0, _stringLiteralBBA433E10BF74FAFBC9D4DCA2388A4E661A58898, L_1, ProjectedObjectEventHandlerCache_AddEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_mD02A0577DB951C428B4C32F57DAC16028B5E81B8_RuntimeMethod_var);
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_set_changed(this.handle, ((ICachedObject)this).Cookie, ChangedStaticHandlerDelegate));
		intptr_t L_2 = __this->___handle_0;
		intptr_t L_3 = __this->___handle_0;
		uint64_t L_4;
		L_4 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie() */, ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var, __this);
		il2cpp_codegen_runtime_class_init_inline(ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* L_5 = ((ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_StaticFields*)il2cpp_codegen_static_fields_for(ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var))->___ChangedStaticHandlerDelegate_1;
		int32_t L_6;
		L_6 = NativeLibrary_aoa_object_instance_set_changed_mFAE6F8699161276829375885BAAF6AD2828F0C4E(L_3, L_4, L_5, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_2, L_6, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::remove_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance_remove_Changed_m221FFA5E62D6D4C7E10FA8B3D7DEF527857FE64E (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_RemoveEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_m07CAA85338B4DABC8296DDFF857247BA1B9A46AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA433E10BF74FAFBC9D4DCA2388A4E661A58898);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache.RemoveEventHandler((this as ICachedObject).Cookie, nameof(this.Changed), value))
		uint64_t L_0;
		L_0 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie() */, ICachedObject_tB98FE2192B8DDCD2BF715BC10674952F1E0A2737_il2cpp_TypeInfo_var, __this);
		ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectEventHandlerCache_tA94440757F29BA89325EC11A5E21BC3DE33ED8AA_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ProjectedObjectEventHandlerCache_RemoveEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_m07CAA85338B4DABC8296DDFF857247BA1B9A46AA(L_0, _stringLiteralBBA433E10BF74FAFBC9D4DCA2388A4E661A58898, L_1, ProjectedObjectEventHandlerCache_RemoveEventHandler_TisObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808_m07CAA85338B4DABC8296DDFF857247BA1B9A46AA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_set_changed(this.handle, 0, null));
		intptr_t L_3 = __this->___handle_0;
		intptr_t L_4 = __this->___handle_0;
		int32_t L_5;
		L_5 = NativeLibrary_aoa_object_instance_set_changed_mFAE6F8699161276829375885BAAF6AD2828F0C4E(L_4, ((int64_t)0), (ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995*)NULL, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_3, L_5, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstance::TryGetCurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* ObjectInstance_TryGetCurrentState_mD9695341F94849EB06C05482C26D904F73D644D6 (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_try_get_current_state(this.handle, out result_handle));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_instance_try_get_current_state_m719D10D455BFF484ABF73F17AF9F894DEE286ED9(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// result_object = (result_handle != IntPtr.Zero) ? Microsoft.Azure.ObjectAnchors.ObjectInstanceState.GetOrCreateInstance(result_handle, transfer: true) : null;
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		return (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344*)NULL;
	}

IL_0027:
	{
		intptr_t L_6 = V_0;
		ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* L_7;
		L_7 = ObjectInstanceState_GetOrCreateInstance_m2E2C12C75FBCDC9E98CFA443160EC840FC1471EC(L_6, (bool)1, NULL);
		// return result_object;
		return L_7;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mAA85C127263135D4BE22426DCE9F0A728DA61884 (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* ObjectInstance_GetOrCreateInstance_mB079510528C2F87336C6FEAB20B13B38D4F57291 (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetOrCreateInstance(ProjectedObjectHelpers.ConvertHandleToCookie(handle), transfer);
		intptr_t L_0 = ___handle0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		bool L_2 = ___transfer1;
		il2cpp_codegen_runtime_class_init_inline(ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* L_3;
		L_3 = ObjectInstance_GetOrCreateInstance_mDFF0FFA53C7FCBEC50B2BEF4D2B1BBF1018B9D2A(L_1, L_2, NULL);
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* ObjectInstance_GetOrCreateInstance_mDFF0FFA53C7FCBEC50B2BEF4D2B1BBF1018B9D2A (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_GetOrCreate_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_mC826C5E422B8F212250DF11A1B4BFEF168E435C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m460F8EEAD7B7383BD77A2C95378419769A277DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* V_0 = NULL;
	ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* L_0 = (U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass20_0__ctor_m6E60DD6C5407C0972664A1D9464E6F5A9E1518BF(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* L_1 = V_0;
		bool L_2 = ___transfer1;
		NullCheck(L_1);
		L_1->___transfer_2 = L_2;
		// IntPtr handle = ProjectedObjectHelpers.ConvertCookieToHandle(cookie);
		U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* L_3 = V_0;
		uint64_t L_4 = ___cookie0;
		intptr_t L_5;
		L_5 = ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C(L_4, NULL);
		NullCheck(L_3);
		L_3->___handle_1 = L_5;
		// bool created = false;
		U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* L_6 = V_0;
		NullCheck(L_6);
		L_6->___created_0 = (bool)0;
		// Microsoft.Azure.ObjectAnchors.ObjectInstance result = Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectInstance>(
		//     cookie,
		//     _ =>
		//     {
		//         created = true;
		//         return new Microsoft.Azure.ObjectAnchors.ObjectInstance(handle, transfer: transfer);
		//     }
		// );
		uint64_t L_7 = ___cookie0;
		U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* L_8 = V_0;
		Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2* L_9 = (Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2*)il2cpp_codegen_object_new(Func_2_t1C83F66898B1E1DF4890839C56976100E7EDB1F2_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m549B31C6835C9DD5685E3C9AB288C9AD1F3CACFF(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m460F8EEAD7B7383BD77A2C95378419769A277DAF_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* L_10;
		L_10 = ProjectedObjectCache_GetOrCreate_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_mC826C5E422B8F212250DF11A1B4BFEF168E435C4(L_7, L_9, ProjectedObjectCache_GetOrCreate_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_mC826C5E422B8F212250DF11A1B4BFEF168E435C4_RuntimeMethod_var);
		V_1 = L_10;
		// if (!created && transfer)
		U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___created_0;
		U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->___transfer_2;
		if (!((int32_t)(((((int32_t)L_12) == ((int32_t)0))? 1 : 0)&(int32_t)L_14)))
		{
			goto IL_004b;
		}
	}
	{
		// ((IReferenceCounted)result).DecreaseReferenceCount();
		ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* L_15 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.Azure.ObjectAnchors.IReferenceCounted::DecreaseReferenceCount() */, IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var, L_15);
	}

IL_004b:
	{
		// return result;
		ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* L_16 = V_1;
		return L_16;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstance__cctor_mA76D22DD6275F69DAE8C3488BA74EC3671F66695 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative ChangedStaticHandlerDelegate = ChangedStaticHandler;
		ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995* L_0 = (ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995*)il2cpp_codegen_object_new(ObjectInstanceChangedHandlerNative_t9D3AF9C4B01BD60618DA8523B69E88EF6DEB5995_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ObjectInstanceChangedHandlerNative__ctor_mAC1EAA2DBC650998CE9422E1A699C7761327CB76(L_0, NULL, (intptr_t)((void*)ObjectInstance_ChangedStaticHandler_m7D3006C864986B473129D12CC863D1DDC0B8968A_RuntimeMethod_var), NULL);
		((ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_StaticFields*)il2cpp_codegen_static_fields_for(ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var))->___ChangedStaticHandlerDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_StaticFields*)il2cpp_codegen_static_fields_for(ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var))->___ChangedStaticHandlerDelegate_1), (void*)L_0);
		// static ObjectInstance() => ObjectObserver.EnsureAppDomainUnloadHandlingInitialized();
		il2cpp_codegen_runtime_class_init_inline(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m3E0390043703CF76D47C4C4DB5518EAA99C4F135(NULL);
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m6E60DD6C5407C0972664A1D9464E6F5A9E1518BF (U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::<GetOrCreateInstance>b__0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m460F8EEAD7B7383BD77A2C95378419769A277DAF (U3CU3Ec__DisplayClass20_0_t8C4E753441E67E3464499D357A8D3F93E057EB2A* __this, uint64_t ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// created = true;
		__this->___created_0 = (bool)1;
		// return new Microsoft.Azure.ObjectAnchors.ObjectInstance(handle, transfer: transfer);
		intptr_t L_0 = __this->___handle_1;
		bool L_1 = __this->___transfer_2;
		ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* L_2 = (ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008*)il2cpp_codegen_object_new(ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ObjectInstance__ctor_m18DC843C177ECEB1ACC205C3EDB2BB70D0DD978B(L_2, L_0, L_1, NULL);
		return L_2;
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceState__ctor_m426B2657F74AE65D16E0C1E0A0CAF30E12C7A699 (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) 
{
	{
		// protected ObjectInstanceState(IntPtr ahandle, bool transfer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->___handle_0 = L_0;
		// if (!transfer)
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_state_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_aoa_object_instance_state_addref_mE66712A3C1558B6CF02BC006FC6C441F5E4A6F74(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceState_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mBBA5D3F1F7FED292D33FA650EA4D7882CDDC9660 (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_state_release(this.handle);
		intptr_t L_0 = __this->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_object_instance_state_release_m7012960A6C1B5D79822BE66ACA08F1B686BFB13C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInstanceState_Finalize_m0978365620BDD3E19A69090FA071A37F8FE7EDFB (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_state_release(this.handle));
			intptr_t L_0 = __this->___handle_0;
			intptr_t L_1 = __this->___handle_0;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_object_instance_state_release_m7012960A6C1B5D79822BE66ACA08F1B686BFB13C(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			// this.handle = IntPtr.Zero;
			intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			__this->___handle_0 = L_3;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.DateTimeOffset Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_LastUpdatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ObjectInstanceState_get_LastUpdatedTime_m1636B1CEF4902218403F77E6C7B07F8EA14616AC (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_state_get_last_updated_time(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_instance_state_get_last_updated_time_mD7323F01B96EF6A0BFF7D0A53791A2BE2DA84FAC(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return (result == 0) ? DateTimeOffset.MaxValue : DateTimeOffset.FromUnixTimeMilliseconds(result);
		int64_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		int64_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_5;
		L_5 = DateTimeOffset_FromUnixTimeMilliseconds_mFEEC87C901FDE77B4FFB4BDD49388E91A137FA72(L_4, NULL);
		return L_5;
	}

IL_0022:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_6 = ((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))->___MaxValue_1;
		return L_6;
	}
}
// System.Single Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_SurfaceCoverage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ObjectInstanceState_get_SurfaceCoverage_m8C9A36B96E27FE0675E5E5D8C7624C031C7BA089 (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_state_get_surface_coverage(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_instance_state_get_surface_coverage_mCD8C0A7576A08137BF9621E54CA9CC3531CE9A98(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		float L_3 = V_0;
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F ObjectInstanceState_get_Center_mAF79C48B4D95D2416EF2D49C3CEAD2D23FA1B9E6 (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, const RuntimeMethod* method) 
{
	SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_state_get_center(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_instance_state_get_center_mC377F02A8728E39D4B9F2B2B2535DD9210A7F0AD(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		SpatialGraphLocation_t063308B72883FF1F54C9256BF22B141FBCB6FA5F L_3 = V_0;
		return L_3;
	}
}
// System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_ScaleChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ObjectInstanceState_get_ScaleChange_m76CBAB6E8788971D5E0D79B79CD9F10EDBC0D719 (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, const RuntimeMethod* method) 
{
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_state_get_scale_change(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_instance_state_get_scale_change_mDD853F393BFDB8D6F94A4EC23B4CA074A3C616C2(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D L_3 = V_0;
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.ObjectInstanceState::TryCreatePlacement(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* ObjectInstanceState_TryCreatePlacement_mB65E72708797D5B7C9FEA79AD556117B094D8CB0 (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 ___referenceCoordinateSystem0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_instance_state_try_create_placement(this.handle, referenceCoordinateSystem, out result_handle));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 L_2 = ___referenceCoordinateSystem0;
		int32_t L_3;
		L_3 = NativeLibrary_aoa_object_instance_state_try_create_placement_m5D2D326A3C17C98BED129373849D22700BDC9026(L_1, L_2, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_3, NULL);
		// result_object = (result_handle != IntPtr.Zero) ? Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement.GetOrCreateInstance(result_handle, transfer: true) : null;
		intptr_t L_4 = V_0;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525*)NULL;
	}

IL_0028:
	{
		intptr_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_il2cpp_TypeInfo_var);
		SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_8;
		L_8 = SpatialGraphPlacement_GetOrCreateInstance_m5D2BE295B694798DF7C1EC463A3A0208B411C79C(L_7, (bool)1, NULL);
		// return result_object;
		return L_8;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ObjectInstanceState_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m5E48AECF47A3D357A8CCBF52B105CA8E55EF2238 (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* ObjectInstanceState_GetOrCreateInstance_m2E2C12C75FBCDC9E98CFA443160EC840FC1471EC (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) 
{
	{
		// => GetOrCreateInstance(ProjectedObjectHelpers.ConvertHandleToCookie(handle), transfer);
		intptr_t L_0 = ___handle0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		bool L_2 = ___transfer1;
		ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* L_3;
		L_3 = ObjectInstanceState_GetOrCreateInstance_mFD2DC4B5C401BA7EF4D7E75CF1896F3D3363DE93(L_1, L_2, NULL);
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* ObjectInstanceState_GetOrCreateInstance_mFD2DC4B5C401BA7EF4D7E75CF1896F3D3363DE93 (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD794B144DC680C5410F8354A109B1448389D71A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_GetOrCreate_TisObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344_m6075931B3AE2A2DB52C1D68579970B12F800E6A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_m6A783B55CB7AA5C0784CE446159F0C9624F075B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* V_0 = NULL;
	ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* L_0 = (U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_mA40DB6591218D8B653DE0D125BDF48C59F8BCD78(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* L_1 = V_0;
		bool L_2 = ___transfer1;
		NullCheck(L_1);
		L_1->___transfer_2 = L_2;
		// IntPtr handle = ProjectedObjectHelpers.ConvertCookieToHandle(cookie);
		U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* L_3 = V_0;
		uint64_t L_4 = ___cookie0;
		intptr_t L_5;
		L_5 = ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C(L_4, NULL);
		NullCheck(L_3);
		L_3->___handle_1 = L_5;
		// bool created = false;
		U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* L_6 = V_0;
		NullCheck(L_6);
		L_6->___created_0 = (bool)0;
		// Microsoft.Azure.ObjectAnchors.ObjectInstanceState result = Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectInstanceState>(
		//     cookie,
		//     _ =>
		//     {
		//         created = true;
		//         return new Microsoft.Azure.ObjectAnchors.ObjectInstanceState(handle, transfer: transfer);
		//     }
		// );
		uint64_t L_7 = ___cookie0;
		U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* L_8 = V_0;
		Func_2_tD794B144DC680C5410F8354A109B1448389D71A2* L_9 = (Func_2_tD794B144DC680C5410F8354A109B1448389D71A2*)il2cpp_codegen_object_new(Func_2_tD794B144DC680C5410F8354A109B1448389D71A2_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m948B09194D80E3E788E6533367221CE1E6428ADE(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_m6A783B55CB7AA5C0784CE446159F0C9624F075B3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* L_10;
		L_10 = ProjectedObjectCache_GetOrCreate_TisObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344_m6075931B3AE2A2DB52C1D68579970B12F800E6A9(L_7, L_9, ProjectedObjectCache_GetOrCreate_TisObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344_m6075931B3AE2A2DB52C1D68579970B12F800E6A9_RuntimeMethod_var);
		V_1 = L_10;
		// if (!created && transfer)
		U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___created_0;
		U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->___transfer_2;
		if (!((int32_t)(((((int32_t)L_12) == ((int32_t)0))? 1 : 0)&(int32_t)L_14)))
		{
			goto IL_004b;
		}
	}
	{
		// ((IReferenceCounted)result).DecreaseReferenceCount();
		ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* L_15 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.Azure.ObjectAnchors.IReferenceCounted::DecreaseReferenceCount() */, IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var, L_15);
	}

IL_004b:
	{
		// return result;
		ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* L_16 = V_1;
		return L_16;
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mA40DB6591218D8B653DE0D125BDF48C59F8BCD78 (U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::<GetOrCreateInstance>b__0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_m6A783B55CB7AA5C0784CE446159F0C9624F075B3 (U3CU3Ec__DisplayClass17_0_t431D19EE7D8DB5C657FE15EB0F5635B15550147A* __this, uint64_t ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// created = true;
		__this->___created_0 = (bool)1;
		// return new Microsoft.Azure.ObjectAnchors.ObjectInstanceState(handle, transfer: transfer);
		intptr_t L_0 = __this->___handle_1;
		bool L_1 = __this->___transfer_2;
		ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344* L_2 = (ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344*)il2cpp_codegen_object_new(ObjectInstanceState_tADCC44D421E3AADDDC82759E31B465BBBB6F9344_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ObjectInstanceState__ctor_m426B2657F74AE65D16E0C1E0A0CAF30E12C7A699(L_2, L_0, L_1, NULL);
		return L_2;
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectModel__ctor_mFD3D6B6EC088A9B07C3750207EE92600942444B0 (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) 
{
	{
		// protected ObjectModel(IntPtr ahandle, bool transfer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->___handle_0 = L_0;
		// if (!transfer)
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_aoa_object_model_addref_m7ED9667367B396143BA9F997C10CCCB214FE1267(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectModel_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m371AE6DB229D2DA0C2C85422AA45A917659803D3 (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_release(this.handle);
		intptr_t L_0 = __this->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_object_model_release_m2D680F2CDFA8370FD50A851A2B4731B6F5F6C91C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectModel_Finalize_m32CDFDFAB163C21E0ABBDAB0FF17F53AD94F740C (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.aoa_object_model_release(this.handle));
			intptr_t L_0 = __this->___handle_0;
			intptr_t L_1 = __this->___handle_0;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_object_model_release_m2D680F2CDFA8370FD50A851A2B4731B6F5F6C91C(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectModel_Dispose_m78603C50C498596C38C0D5C3938F9B975411BE31 (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, const RuntimeMethod* method) 
{
	{
		// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.aoa_object_model_dispose(this.handle));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_model_dispose_mECE71BBBE8DB7BDADDB568CC00283448F86B1197(L_1, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Guid Microsoft.Azure.ObjectAnchors.ObjectModel::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t ObjectModel_get_Id_mD7DD8C77C357C4E80E16810F8A86F025F433008F (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_get_id(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_model_get_id_m863EE16F2E2D4A7D400F621C4109F59C23912B8A(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		Guid_t L_3 = V_0;
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox Microsoft.Azure.ObjectAnchors.ObjectModel::get_BoundingBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialOrientedBox_tE146C24275514A892525922FE5A5F87AE603A08E ObjectModel_get_BoundingBox_mBBF89157E0E5366A8790CEEC510B3846416563D0 (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, const RuntimeMethod* method) 
{
	SpatialOrientedBox_tE146C24275514A892525922FE5A5F87AE603A08E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_get_bounding_box(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_model_get_bounding_box_m13A4D6D293A567F11CEC835C6835C1D27EE2069A(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		SpatialOrientedBox_tE146C24275514A892525922FE5A5F87AE603A08E L_3 = V_0;
		return L_3;
	}
}
// System.Numerics.Matrix4x4 Microsoft.Azure.ObjectAnchors.ObjectModel::get_OriginToCenterTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ObjectModel_get_OriginToCenterTransform_m3360DCB95BBF4FE57F1F584E3E7969DA5D31950E (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, const RuntimeMethod* method) 
{
	Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_get_origin_to_center_transform(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_model_get_origin_to_center_transform_m1D36E22AC2AED88DDD1675580DC89B15949C3078(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_3 = V_0;
		return L_3;
	}
}
// System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ObjectModel_get_VertexCount_mBA0EE48959FAE61DA0C7FD28378384F2E6DE9C91 (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_get_vertex_count(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_model_get_vertex_count_mC547894FF1FA6977ACF65BA3CC57998168FF2E8C(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		uint32_t L_3 = V_0;
		return L_3;
	}
}
// System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_TriangleIndexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ObjectModel_get_TriangleIndexCount_mEAAAFDA205F51F17C7332B13D05E4E52549CAB32 (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_get_triangle_index_count(this.handle, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_model_get_triangle_index_count_m6E9CB072C4E8EEDA1E89FE3CAAEE2E696E8108D4(L_1, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		uint32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexPositions(System.Numerics.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectModel_GetVertexPositions_m2AE28CC7DFFA532D74F042D24FACC9F8EB8C89F2 (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* ___vertices0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* G_B3_1 = NULL;
	intptr_t G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_get_vertex_positions(this.handle, vertices, vertices?.Length ?? 0));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* L_2 = ___vertices0;
		Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* L_3 = ___vertices0;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0016;
	}

IL_0013:
	{
		Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* L_4 = ___vertices0;
		NullCheck(L_4);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0016:
	{
		int32_t L_5;
		L_5 = NativeLibrary_aoa_object_model_get_vertex_positions_m5F0ED96A2A7AE8B8006075FB3F66F4D315824F53(G_B3_2, G_B3_1, G_B3_0, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(G_B3_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexNormals(System.Numerics.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectModel_GetVertexNormals_mFA7CE31BF282F3DCA84A2380EC6EEEDDF7DCB5DC (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* ___normals0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* G_B3_1 = NULL;
	intptr_t G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_get_vertex_normals(this.handle, normals, normals?.Length ?? 0));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* L_2 = ___normals0;
		Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* L_3 = ___normals0;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0016;
	}

IL_0013:
	{
		Vector3U5BU5D_t0038DE2D1B5514467003716C3B2CEEE7FA265051* L_4 = ___normals0;
		NullCheck(L_4);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0016:
	{
		int32_t L_5;
		L_5 = NativeLibrary_aoa_object_model_get_vertex_normals_m8B96F0ADDA83331626681729B08AE4FA86DDD455(G_B3_2, G_B3_1, G_B3_0, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(G_B3_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetTriangleIndices(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectModel_GetTriangleIndices_m17000683C07D3DE4B6CABA4DF2E81433B03A4E3B (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___indices0, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* G_B3_1 = NULL;
	intptr_t G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_model_get_triangle_indices(this.handle, indices, indices?.Length ?? 0));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___indices0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___indices0;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0016;
	}

IL_0013:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___indices0;
		NullCheck(L_4);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0016:
	{
		int32_t L_5;
		L_5 = NativeLibrary_aoa_object_model_get_triangle_indices_m3BB460D4B5EF1BA4E6A90F541F3085837570276E(G_B3_2, G_B3_1, G_B3_0, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(G_B3_3, L_5, NULL);
		// }
		return;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m5D5141D8130559761ED55CD895A41BC64A2C0D31 (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* ObjectModel_GetOrCreateInstance_mF01598ED4BBE4BE41077293895110C03A81ABE5D (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetOrCreateInstance(ProjectedObjectHelpers.ConvertHandleToCookie(handle), transfer);
		intptr_t L_0 = ___handle0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		bool L_2 = ___transfer1;
		il2cpp_codegen_runtime_class_init_inline(ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_il2cpp_TypeInfo_var);
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_3;
		L_3 = ObjectModel_GetOrCreateInstance_mE0831C63640A465C21C2994C1CD8DC74DF36422C(L_1, L_2, NULL);
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* ObjectModel_GetOrCreateInstance_mE0831C63640A465C21C2994C1CD8DC74DF36422C (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_GetOrCreate_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_mCE7F877519DF414C50E4775FA842CEF4C1EB2ADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_mDEE8E433DCDBF105F18B6117ABBDB2EC7DE30FD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* V_0 = NULL;
	ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* L_0 = (U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass23_0__ctor_m0A3B6959F71E23620460D7E8DF86E7B43FB0C494(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* L_1 = V_0;
		bool L_2 = ___transfer1;
		NullCheck(L_1);
		L_1->___transfer_2 = L_2;
		// IntPtr handle = ProjectedObjectHelpers.ConvertCookieToHandle(cookie);
		U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* L_3 = V_0;
		uint64_t L_4 = ___cookie0;
		intptr_t L_5;
		L_5 = ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C(L_4, NULL);
		NullCheck(L_3);
		L_3->___handle_1 = L_5;
		// bool created = false;
		U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* L_6 = V_0;
		NullCheck(L_6);
		L_6->___created_0 = (bool)0;
		// Microsoft.Azure.ObjectAnchors.ObjectModel result = Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectModel>(
		//     cookie,
		//     _ =>
		//     {
		//         created = true;
		//         return new Microsoft.Azure.ObjectAnchors.ObjectModel(handle, transfer: transfer);
		//     }
		// );
		uint64_t L_7 = ___cookie0;
		U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* L_8 = V_0;
		Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F* L_9 = (Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F*)il2cpp_codegen_object_new(Func_2_tFD00FD3D1EB854AFFD55FD5EC5FE9193FFC7C61F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_mEBF27EA8BC3CEDA1F4323E4E94BCB0E302C6CF5D(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_mDEE8E433DCDBF105F18B6117ABBDB2EC7DE30FD8_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_10;
		L_10 = ProjectedObjectCache_GetOrCreate_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_mCE7F877519DF414C50E4775FA842CEF4C1EB2ADD(L_7, L_9, ProjectedObjectCache_GetOrCreate_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_mCE7F877519DF414C50E4775FA842CEF4C1EB2ADD_RuntimeMethod_var);
		V_1 = L_10;
		// if (!created && transfer)
		U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___created_0;
		U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->___transfer_2;
		if (!((int32_t)(((((int32_t)L_12) == ((int32_t)0))? 1 : 0)&(int32_t)L_14)))
		{
			goto IL_004b;
		}
	}
	{
		// ((IReferenceCounted)result).DecreaseReferenceCount();
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_15 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.Azure.ObjectAnchors.IReferenceCounted::DecreaseReferenceCount() */, IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var, L_15);
	}

IL_004b:
	{
		// return result;
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_16 = V_1;
		return L_16;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectModel__cctor_m97B5900BA74AF84160CFBCFE2FE2DC2D9DD24BD1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static ObjectModel() => ObjectObserver.EnsureAppDomainUnloadHandlingInitialized();
		il2cpp_codegen_runtime_class_init_inline(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m3E0390043703CF76D47C4C4DB5518EAA99C4F135(NULL);
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m0A3B6959F71E23620460D7E8DF86E7B43FB0C494 (U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::<GetOrCreateInstance>b__0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_mDEE8E433DCDBF105F18B6117ABBDB2EC7DE30FD8 (U3CU3Ec__DisplayClass23_0_t49FC5F8AAF272469AB61D8DB1C538AC568852E99* __this, uint64_t ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// created = true;
		__this->___created_0 = (bool)1;
		// return new Microsoft.Azure.ObjectAnchors.ObjectModel(handle, transfer: transfer);
		intptr_t L_0 = __this->___handle_1;
		bool L_1 = __this->___transfer_2;
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_2 = (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C*)il2cpp_codegen_object_new(ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ObjectModel__ctor_mFD3D6B6EC088A9B07C3750207EE92600942444B0(L_2, L_0, L_1, NULL);
		return L_2;
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectObserver__ctor_m39EF15974253C7081F80FB6643F69AC975381AAB (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) 
{
	{
		// protected ObjectObserver(IntPtr ahandle, bool transfer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->___handle_0 = L_0;
		// if (!transfer)
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_observer_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_aoa_object_observer_addref_m57DFE16660F9016520034B74F16D355F162A258D(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectObserver_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mC266E4D767AF707C6914283E8683268D22CD4481 (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_observer_release(this.handle);
		intptr_t L_0 = __this->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_object_observer_release_mBD9171A46D1E52BA9A54A22D8774429AD31C243C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectObserver_Finalize_mC91AACDCAF96A657952F270501422DCE581E8895 (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.aoa_object_observer_release(this.handle));
			intptr_t L_0 = __this->___handle_0;
			intptr_t L_1 = __this->___handle_0;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_object_observer_release_mBD9171A46D1E52BA9A54A22D8774429AD31C243C(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectObserver_Dispose_m4BC8AA7A599D5E658B35A48B5D30B17C1425BCE0 (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* __this, const RuntimeMethod* method) 
{
	{
		// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.aoa_object_observer_dispose(this.handle));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_observer_dispose_m0194881EB4DF511F5B3BDD5FA3840983FB16B8B7(L_1, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.Azure.ObjectAnchors.ObjectObserver::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectObserver_IsSupported_m8B554E73E2369870E2FEE350CC547CE949E401DA (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_observer_is_supported(out result));
		int32_t L_0;
		L_0 = NativeLibrary_aoa_object_observer_is_supported_m473C73622C54D56858E7007CEC01FADD90C28CD9((&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413(L_0, NULL);
		// return result;
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver::RequestAccessAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* ObjectObserver_RequestAccessAsync_m9C57E7B366FF2D85D6AE417D2ECB9AEDC0BAA6E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mCAEDCA796C65036CAD1DEE4FC1841B980B2CFE25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m9D6313EBCCE1E4553C1440D7EA58C12486976FEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m828B4892C565D1842B955164F803857CA28C285C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mCAEDCA796C65036CAD1DEE4FC1841B980B2CFE25(AsyncTaskMethodBuilder_1_Create_mCAEDCA796C65036CAD1DEE4FC1841B980B2CFE25_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m9D6313EBCCE1E4553C1440D7EA58C12486976FEA(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m9D6313EBCCE1E4553C1440D7EA58C12486976FEA_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m828B4892C565D1842B955164F803857CA28C285C(L_2, AsyncTaskMethodBuilder_1_get_Task_m828B4892C565D1842B955164F803857CA28C285C_RuntimeMethod_var);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver::LoadObjectModelAsync(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* ObjectObserver_LoadObjectModelAsync_mB72C87826C57B6C608BF684597FF50434E590075 (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m9CCCFCF8594E37D294C2ED43AB1AEDD13135CE21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m23FE9F8C35B5709DFB957B96F0984C3228376620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mB5321597A21D51ED9948A323922E73958EC5F89B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m9CCCFCF8594E37D294C2ED43AB1AEDD13135CE21(AsyncTaskMethodBuilder_1_Create_m9CCCFCF8594E37D294C2ED43AB1AEDD13135CE21_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		(&V_0)->___buffer_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___buffer_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m23FE9F8C35B5709DFB957B96F0984C3228376620(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m23FE9F8C35B5709DFB957B96F0984C3228376620_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mB5321597A21D51ED9948A323922E73958EC5F89B(L_3, AsyncTaskMethodBuilder_1_get_Task_mB5321597A21D51ED9948A323922E73958EC5F89B_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver::DetectAsync(Microsoft.Azure.ObjectAnchors.ObjectQuery[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t47D802E51DF908085AEE11A8051A4DF26F20F712* ObjectObserver_DetectAsync_mBA6AF5E3F0EC94BCDDBDBEAF39B6513C8CEB8227 (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* __this, ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* ___queries0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m0DFA5495C52F7016F150A7D2188FAFCCE717C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mA79D6C87F7981A704A378E6AE4A2EF2AA6FFDACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mBE76BF127163426A964D540771B8D9D073E8F18B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m0DFA5495C52F7016F150A7D2188FAFCCE717C08B(AsyncTaskMethodBuilder_1_Create_m0DFA5495C52F7016F150A7D2188FAFCCE717C08B_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* L_1 = ___queries0;
		(&V_0)->___queries_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___queries_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mA79D6C87F7981A704A378E6AE4A2EF2AA6FFDACD(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mA79D6C87F7981A704A378E6AE4A2EF2AA6FFDACD_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t47D802E51DF908085AEE11A8051A4DF26F20F712* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mBE76BF127163426A964D540771B8D9D073E8F18B(L_3, AsyncTaskMethodBuilder_1_get_Task_mBE76BF127163426A964D540771B8D9D073E8F18B_RuntimeMethod_var);
		return L_4;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m284D7B517BB1D4F2767623B476E1C71F34C5D389 (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* ObjectObserver_GetOrCreateInstance_mDFDE2BA332BA73AD7FE96030BD51792F8374CFC8 (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetOrCreateInstance(ProjectedObjectHelpers.ConvertHandleToCookie(handle), transfer);
		intptr_t L_0 = ___handle0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		bool L_2 = ___transfer1;
		il2cpp_codegen_runtime_class_init_inline(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_3;
		L_3 = ObjectObserver_GetOrCreateInstance_mD21DE46DD4F483CB18D86435374DD5A54211DECA(L_1, L_2, NULL);
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* ObjectObserver_GetOrCreateInstance_mD21DE46DD4F483CB18D86435374DD5A54211DECA (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_GetOrCreate_TisObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_m9BD097F3EDA818AD237840AEFE047A98FD803925_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m7AB13C21089F585B655ECF83CB3B2A7780A2332C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* V_0 = NULL;
	ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* L_0 = (U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_mD61FA0C14E698DD84119F45E69C1F9F28535CDE2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* L_1 = V_0;
		bool L_2 = ___transfer1;
		NullCheck(L_1);
		L_1->___transfer_2 = L_2;
		// IntPtr handle = ProjectedObjectHelpers.ConvertCookieToHandle(cookie);
		U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* L_3 = V_0;
		uint64_t L_4 = ___cookie0;
		intptr_t L_5;
		L_5 = ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C(L_4, NULL);
		NullCheck(L_3);
		L_3->___handle_1 = L_5;
		// bool created = false;
		U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* L_6 = V_0;
		NullCheck(L_6);
		L_6->___created_0 = (bool)0;
		// Microsoft.Azure.ObjectAnchors.ObjectObserver result = Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.GetOrCreate<Microsoft.Azure.ObjectAnchors.ObjectObserver>(
		//     cookie,
		//     _ =>
		//     {
		//         created = true;
		//         return new Microsoft.Azure.ObjectAnchors.ObjectObserver(handle, transfer: transfer);
		//     }
		// );
		uint64_t L_7 = ___cookie0;
		U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* L_8 = V_0;
		Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252* L_9 = (Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252*)il2cpp_codegen_object_new(Func_2_t207DF9E845BF9D385D0D56C23A8FA8F3C1BCD252_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m993CB2C5D4A0B0E7DAC6BCFEC48DC2E1A0DB82C7(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m7AB13C21089F585B655ECF83CB3B2A7780A2332C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_10;
		L_10 = ProjectedObjectCache_GetOrCreate_TisObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_m9BD097F3EDA818AD237840AEFE047A98FD803925(L_7, L_9, ProjectedObjectCache_GetOrCreate_TisObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_m9BD097F3EDA818AD237840AEFE047A98FD803925_RuntimeMethod_var);
		V_1 = L_10;
		// if (!created && transfer)
		U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___created_0;
		U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->___transfer_2;
		if (!((int32_t)(((((int32_t)L_12) == ((int32_t)0))? 1 : 0)&(int32_t)L_14)))
		{
			goto IL_004b;
		}
	}
	{
		// ((IReferenceCounted)result).DecreaseReferenceCount();
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_15 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.Azure.ObjectAnchors.IReferenceCounted::DecreaseReferenceCount() */, IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var, L_15);
	}

IL_004b:
	{
		// return result;
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_16 = V_1;
		return L_16;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::EnsureAppDomainUnloadHandlingInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m3E0390043703CF76D47C4C4DB5518EAA99C4F135 (const RuntimeMethod* method) 
{
	{
		// internal static void EnsureAppDomainUnloadHandlingInitialized() { /* This just exists to indirectly invoke the static constructor */ }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectObserver__cctor_m8045C48D60D67577686A9AD8442DFC4AC21199DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly System.Threading.EventWaitHandle _appDomainUnloadRequested = new System.Threading.EventWaitHandle(false, System.Threading.EventResetMode.AutoReset);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)il2cpp_codegen_object_new(EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EventWaitHandle__ctor_m5B0D1FD902682B5D5E82A4B564363AB711F10F8E(L_0, (bool)0, 0, NULL);
		((ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_StaticFields*)il2cpp_codegen_static_fields_for(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var))->____appDomainUnloadRequested_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_StaticFields*)il2cpp_codegen_static_fields_for(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var))->____appDomainUnloadRequested_1), (void*)L_0);
		// static readonly System.Threading.EventWaitHandle _appDomainUnloadCompleted = new System.Threading.EventWaitHandle(false, System.Threading.EventResetMode.AutoReset);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_1 = (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)il2cpp_codegen_object_new(EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventWaitHandle__ctor_m5B0D1FD902682B5D5E82A4B564363AB711F10F8E(L_1, (bool)0, 0, NULL);
		((ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_StaticFields*)il2cpp_codegen_static_fields_for(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var))->____appDomainUnloadCompleted_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_StaticFields*)il2cpp_codegen_static_fields_for(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var))->____appDomainUnloadCompleted_2), (void*)L_1);
		// }
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5E60807EB24DFCCA5A16C582BFED1E1403AC1A70 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* L_0 = (U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069*)il2cpp_codegen_object_new(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mCF7AC74DF7B4CD8ABF57FE1712E635F6818FEE23(L_0, NULL);
		((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCF7AC74DF7B4CD8ABF57FE1712E635F6818FEE23 (U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<RequestAccessAsync>b__7_0(Microsoft.Azure.ObjectAnchors.PackedValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m129A12ED09A0C4064D170EC1931DFAED1BBE5B6A (U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* __this, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___pv_0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => (Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus)(int)(long)(pv_), System.Threading.CancellationToken.None))
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 L_0 = ___pv_0;
		il2cpp_codegen_runtime_class_init_inline(PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = PackedValue_op_Implicit_m6A4FB0AF18928E5FB960A49CAECC4300013CF7D6(L_0, NULL);
		return (int32_t)(((int32_t)L_1));
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<LoadObjectModelAsync>b__8_0(Microsoft.Azure.ObjectAnchors.PackedValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m21D026A83D00EC5FDE92AB139C60FF0C3AA7A16C (U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* __this, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___pv_0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => pv_.Pointer != IntPtr.Zero ? Microsoft.Azure.ObjectAnchors.ObjectModel.GetOrCreateInstance(pv_.Pointer, true) : default, System.Threading.CancellationToken.None))
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 L_0 = ___pv_0;
		intptr_t L_1 = L_0.___Pointer_3;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C*)NULL;
	}

IL_0014:
	{
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 L_4 = ___pv_0;
		intptr_t L_5 = L_4.___Pointer_3;
		il2cpp_codegen_runtime_class_init_inline(ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_il2cpp_TypeInfo_var);
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_6;
		L_6 = ObjectModel_GetOrCreateInstance_mF01598ED4BBE4BE41077293895110C03A81ABE5D(L_5, (bool)1, NULL);
		return L_6;
	}
}
// System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance> Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_0(Microsoft.Azure.ObjectAnchors.PackedValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B* U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m04E943AD9821534006BFFA0BFFCBF0145557ED5D (U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* __this, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___pv_0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackedValue_UnpackPtrs_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_m9233AE2984126ABF10C0763A7D9FF72529A01C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectAsyncU3Eb__10_1_mA078002DA68AF6DA8A7C5F5A0C1B259097BAD16A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE* G_B2_0 = NULL;
	PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE* G_B1_0 = NULL;
	PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	{
		// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => Microsoft.Azure.ObjectAnchors.PackedValue.UnpackPtrs(pv_, item => Microsoft.Azure.ObjectAnchors.ObjectInstance.GetOrCreateInstance(item, true)), System.Threading.CancellationToken.None))
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 L_0 = ___pv_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
		Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE* L_1 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__10_1_3;
		Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
		U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* L_3 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE* L_4 = (Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE*)il2cpp_codegen_object_new(Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m0C30E96938E319E3281AC205A164D0F490FFCBB3(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CDetectAsyncU3Eb__10_1_mA078002DA68AF6DA8A7C5F5A0C1B259097BAD16A_RuntimeMethod_var), NULL);
		Func_2_tA1AD786D2E5044D4430A4538C27B54ABD01BB5BE* L_5 = L_4;
		((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__10_1_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__10_1_3), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var);
		List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B* L_6;
		L_6 = PackedValue_UnpackPtrs_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_m9233AE2984126ABF10C0763A7D9FF72529A01C65(G_B2_1, G_B2_0, (bool)0, PackedValue_UnpackPtrs_TisObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_m9233AE2984126ABF10C0763A7D9FF72529A01C65_RuntimeMethod_var);
		return L_6;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_1(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* U3CU3Ec_U3CDetectAsyncU3Eb__10_1_mA078002DA68AF6DA8A7C5F5A0C1B259097BAD16A (U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* __this, intptr_t ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => Microsoft.Azure.ObjectAnchors.PackedValue.UnpackPtrs(pv_, item => Microsoft.Azure.ObjectAnchors.ObjectInstance.GetOrCreateInstance(item, true)), System.Threading.CancellationToken.None))
		intptr_t L_0 = ___item0;
		il2cpp_codegen_runtime_class_init_inline(ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008_il2cpp_TypeInfo_var);
		ObjectInstance_tC240696F88E6899E87BCB8D1E7F84D76BFBD8008* L_1;
		L_1 = ObjectInstance_GetOrCreateInstance_mB079510528C2F87336C6FEAB20B13B38D4F57291(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_2(Microsoft.Azure.ObjectAnchors.ObjectQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m9F433EF9DBE3E1A5551FF3E2852D8D39FF2EA27D (U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* __this, ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr[] queries_array = queries?.Select(x => x?.handle ?? IntPtr.Zero).ToArray() ?? Array.Empty<IntPtr>();
		ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_1;
	}

IL_0009:
	{
		ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* L_2 = ___x0;
		NullCheck(L_2);
		intptr_t L_3 = L_2->___handle_0;
		return L_3;
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestAccessAsyncU3Ed__7_MoveNext_mD8E233B1557146BA6EF2C3781635F2A646EE26C1 (U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m25AF9B6C3389328CC826E454AD9251D95618215F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m5E606F38327F042BCD3B70BFD7FBC134DFC9472A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_get_Task_mE6B431FCACAAAC9B5A8CFA8A67AF0A7CE84007CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_Create_TisObjectObserverAccessStatus_t57753A5D3B844A9C1474F644A823B8DEFCF04CC8_mDAD5FBA3096A17B6A66C1EF3287ECF1B2DE21E31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m80BE4B25A47EF60DCC63742702883C9013D3C19C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m907E69DF8E28A5DF95F852487D4B4AD711B7DDF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m9FDAC96588CF90BEC036102D8E15BFB3CAB0D4C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m129A12ED09A0C4064D170EC1931DFAED1BBE5B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* G_B4_0 = NULL;
	U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* G_B4_1 = NULL;
	Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* G_B3_0 = NULL;
	U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0039_1;
			}
		}
		{
			// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => (Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus)(int)(long)(pv_), System.Threading.CancellationToken.None))
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
			Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* L_2 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
			Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* L_3 = L_2;
			G_B3_0 = L_3;
			G_B3_1 = __this;
			if (L_3)
			{
				G_B4_0 = L_3;
				G_B4_1 = __this;
				goto IL_002a_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
			U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* L_4 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* L_5 = (Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA*)il2cpp_codegen_object_new(Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Func_2__ctor_m494946DDAD060D9E51E4587EEFB163FF058A8BFD(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m129A12ED09A0C4064D170EC1931DFAED1BBE5B6A_RuntimeMethod_var), NULL);
			Func_2_t292332A6C7A5BFB8694980352EDE59F4456927CA* L_6 = L_5;
			((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_6);
			G_B4_0 = L_6;
			G_B4_1 = G_B3_1;
		}

IL_002a_1:
		{
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7;
			L_7 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
			Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06* L_8;
			L_8 = Promise_Create_TisObjectObserverAccessStatus_t57753A5D3B844A9C1474F644A823B8DEFCF04CC8_mDAD5FBA3096A17B6A66C1EF3287ECF1B2DE21E31(G_B4_0, L_7, Promise_Create_TisObjectObserverAccessStatus_t57753A5D3B844A9C1474F644A823B8DEFCF04CC8_mDAD5FBA3096A17B6A66C1EF3287ECF1B2DE21E31_RuntimeMethod_var);
			G_B4_1->___U3Cpromise_U3E5__2_2 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3Cpromise_U3E5__2_2), (void*)L_8);
		}

IL_0039_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00b2_1:
				{// begin finally (depth: 2)
					{
						int32_t L_9 = V_0;
						if ((((int32_t)L_9) >= ((int32_t)0)))
						{
							goto IL_00c9_1;
						}
					}
					{
						Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06* L_10 = __this->___U3Cpromise_U3E5__2_2;
						if (!L_10)
						{
							goto IL_00c9_1;
						}
					}
					{
						Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06* L_11 = __this->___U3Cpromise_U3E5__2_2;
						NullCheck(L_11);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
					}

IL_00c9_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_12 = V_0;
					if (!L_12)
					{
						goto IL_008c_2;
					}
				}
				{
					// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_observer_request_access_async(promise_.Handle));
					Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06* L_13 = __this->___U3Cpromise_U3E5__2_2;
					NullCheck(L_13);
					PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_14 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)L_13)->___Handle_6;
					int32_t L_15;
					L_15 = NativeLibrary_aoa_object_observer_request_access_async_mE4E9B78DB51AC66CFF39495502C2E71D59E80C04(L_14, NULL);
					NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413(L_15, NULL);
					// return await promise_.Task;
					Promise_1_t373ABA42823E42138C6B8E85E6BF69FD5058DC06* L_16 = __this->___U3Cpromise_U3E5__2_2;
					NullCheck(L_16);
					Task_1_t174348AC8E5DBEAD587B983837FCF772AA8539BB* L_17;
					L_17 = Promise_1_get_Task_mE6B431FCACAAAC9B5A8CFA8A67AF0A7CE84007CB(L_16, Promise_1_get_Task_mE6B431FCACAAAC9B5A8CFA8A67AF0A7CE84007CB_RuntimeMethod_var);
					NullCheck(L_17);
					TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F L_18;
					L_18 = Task_1_GetAwaiter_m9FDAC96588CF90BEC036102D8E15BFB3CAB0D4C0(L_17, Task_1_GetAwaiter_m9FDAC96588CF90BEC036102D8E15BFB3CAB0D4C0_RuntimeMethod_var);
					V_2 = L_18;
					bool L_19;
					L_19 = TaskAwaiter_1_get_IsCompleted_m907E69DF8E28A5DF95F852487D4B4AD711B7DDF0((&V_2), TaskAwaiter_1_get_IsCompleted_m907E69DF8E28A5DF95F852487D4B4AD711B7DDF0_RuntimeMethod_var);
					if (L_19)
					{
						goto IL_00a8_2;
					}
				}
				{
					int32_t L_20 = 0;
					V_0 = L_20;
					__this->___U3CU3E1__state_0 = L_20;
					TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F L_21 = V_2;
					__this->___U3CU3Eu__1_3 = L_21;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* L_22 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m25AF9B6C3389328CC826E454AD9251D95618215F(L_22, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F_TisU3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7_m25AF9B6C3389328CC826E454AD9251D95618215F_RuntimeMethod_var);
					goto IL_00f5;
				}

IL_008c_2:
				{
					TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F L_23 = __this->___U3CU3Eu__1_3;
					V_2 = L_23;
					TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F* L_24 = (&__this->___U3CU3Eu__1_3);
					il2cpp_codegen_initobj(L_24, sizeof(TaskAwaiter_1_tE2FDF481011BBBD6FB28EF425B6527394EE83C8F));
					int32_t L_25 = (-1);
					V_0 = L_25;
					__this->___U3CU3E1__state_0 = L_25;
				}

IL_00a8_2:
				{
					int32_t L_26;
					L_26 = TaskAwaiter_1_GetResult_m80BE4B25A47EF60DCC63742702883C9013D3C19C((&V_2), TaskAwaiter_1_GetResult_m80BE4B25A47EF60DCC63742702883C9013D3C19C_RuntimeMethod_var);
					V_1 = L_26;
					goto IL_00e1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ca;
		}
		throw e;
	}

CATCH_00ca:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* L_27 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_28 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m91ED08403342FA2CA2CD5FB031E48D1B5436802F(L_27, L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m91ED08403342FA2CA2CD5FB031E48D1B5436802F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f5;
	}// end catch (depth: 1)

IL_00e1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* L_29 = (&__this->___U3CU3Et__builder_1);
		int32_t L_30 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m5E606F38327F042BCD3B70BFD7FBC134DFC9472A(L_29, L_30, AsyncTaskMethodBuilder_1_SetResult_m5E606F38327F042BCD3B70BFD7FBC134DFC9472A_RuntimeMethod_var);
	}

IL_00f5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestAccessAsyncU3Ed__7_MoveNext_mD8E233B1557146BA6EF2C3781635F2A646EE26C1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7*>(__this + _offset);
	U3CRequestAccessAsyncU3Ed__7_MoveNext_mD8E233B1557146BA6EF2C3781635F2A646EE26C1(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestAccessAsyncU3Ed__7_SetStateMachine_mFF50D7155F8F277E57669B06BC6D0CC49A754D28 (U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mD69B1DF72CE4F99563A36A26D4A4574F6A5E62AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t24CDD6B860EF50114EF8C714516C9C2823ABF476* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mD69B1DF72CE4F99563A36A26D4A4574F6A5E62AF(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mD69B1DF72CE4F99563A36A26D4A4574F6A5E62AF_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestAccessAsyncU3Ed__7_SetStateMachine_mFF50D7155F8F277E57669B06BC6D0CC49A754D28_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestAccessAsyncU3Ed__7_t7BADC1940E710908CE3BD97BD1165431E5863AA7*>(__this + _offset);
	U3CRequestAccessAsyncU3Ed__7_SetStateMachine_mFF50D7155F8F277E57669B06BC6D0CC49A754D28(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mA514219B7B4DAD6E5A1C7DD05B88330C89254ED1 (U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m07C388B70B050978A9DF4ED09031AF2DAD7DA140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mD37CD5BAFE87DA1C2E56B2810E9A762240C28ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_get_Task_m4261C0D308AA6CA383CA7379BFDF51F861C46229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_Create_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_m7F2017269440511684350FDA0A96C7B00E5B4B44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m8336E9ACE91AA12E62DA9AC4028CEAD7D875237A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m558CC4667D9E2665B3ECAD2EAA12084219911A0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m18B15251A2F6D36855A9002486452B7961FDCA35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m21D026A83D00EC5FDE92AB139C60FF0C3AA7A16C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* V_1 = NULL;
	ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* V_2 = NULL;
	TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* G_B4_0 = NULL;
	U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* G_B4_1 = NULL;
	Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* G_B3_0 = NULL;
	U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* G_B3_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B9_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B9_1 = NULL;
	intptr_t G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	intptr_t G_B9_3;
	memset((&G_B9_3), 0, sizeof(G_B9_3));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B8_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B8_1 = NULL;
	intptr_t G_B8_2;
	memset((&G_B8_2), 0, sizeof(G_B8_2));
	intptr_t G_B8_3;
	memset((&G_B8_3), 0, sizeof(G_B8_3));
	int32_t G_B10_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B10_1 = NULL;
	intptr_t G_B10_2;
	memset((&G_B10_2), 0, sizeof(G_B10_2));
	intptr_t G_B10_3;
	memset((&G_B10_3), 0, sizeof(G_B10_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0040_1;
			}
		}
		{
			// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => pv_.Pointer != IntPtr.Zero ? Microsoft.Azure.ObjectAnchors.ObjectModel.GetOrCreateInstance(pv_.Pointer, true) : default, System.Threading.CancellationToken.None))
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
			Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* L_3 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2;
			Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* L_4 = L_3;
			G_B3_0 = L_4;
			G_B3_1 = __this;
			if (L_4)
			{
				G_B4_0 = L_4;
				G_B4_1 = __this;
				goto IL_0031_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
			U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* L_5 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* L_6 = (Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F*)il2cpp_codegen_object_new(Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			Func_2__ctor_m602AF5F1312566B28C047BE2F77BC80FDC1EE8B7(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m21D026A83D00EC5FDE92AB139C60FF0C3AA7A16C_RuntimeMethod_var), NULL);
			Func_2_tB47EF232FA2490DCE68A0AF2442D7C724196BC0F* L_7 = L_6;
			((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2), (void*)L_7);
			G_B4_0 = L_7;
			G_B4_1 = G_B3_1;
		}

IL_0031_1:
		{
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8;
			L_8 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
			Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2* L_9;
			L_9 = Promise_Create_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_m7F2017269440511684350FDA0A96C7B00E5B4B44(G_B4_0, L_8, Promise_Create_TisObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C_m7F2017269440511684350FDA0A96C7B00E5B4B44_RuntimeMethod_var);
			G_B4_1->___U3Cpromise_U3E5__2_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3Cpromise_U3E5__2_4), (void*)L_9);
		}

IL_0040_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00da_1:
				{// begin finally (depth: 2)
					{
						int32_t L_10 = V_0;
						if ((((int32_t)L_10) >= ((int32_t)0)))
						{
							goto IL_00f1_1;
						}
					}
					{
						Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2* L_11 = __this->___U3Cpromise_U3E5__2_4;
						if (!L_11)
						{
							goto IL_00f1_1;
						}
					}
					{
						Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2* L_12 = __this->___U3Cpromise_U3E5__2_4;
						NullCheck(L_12);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
					}

IL_00f1_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_13 = V_0;
					if (!L_13)
					{
						goto IL_00b4_2;
					}
				}
				{
					// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_observer_load_object_model_async(this.handle, buffer, buffer?.Length ?? 0, promise_.Handle));
					ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_14 = V_1;
					NullCheck(L_14);
					intptr_t L_15 = L_14->___handle_0;
					ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_16 = V_1;
					NullCheck(L_16);
					intptr_t L_17 = L_16->___handle_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___buffer_3;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___buffer_3;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19;
					G_B8_0 = L_20;
					G_B8_1 = L_18;
					G_B8_2 = L_17;
					G_B8_3 = L_15;
					if (L_20)
					{
						G_B9_0 = L_20;
						G_B9_1 = L_18;
						G_B9_2 = L_17;
						G_B9_3 = L_15;
						goto IL_0063_2;
					}
				}
				{
					G_B10_0 = 0;
					G_B10_1 = G_B8_1;
					G_B10_2 = G_B8_2;
					G_B10_3 = G_B8_3;
					goto IL_0065_2;
				}

IL_0063_2:
				{
					NullCheck(G_B9_0);
					G_B10_0 = ((int32_t)(((RuntimeArray*)G_B9_0)->max_length));
					G_B10_1 = G_B9_1;
					G_B10_2 = G_B9_2;
					G_B10_3 = G_B9_3;
				}

IL_0065_2:
				{
					Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2* L_21 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_21);
					PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_22 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)L_21)->___Handle_6;
					int32_t L_23;
					L_23 = NativeLibrary_aoa_object_observer_load_object_model_async_m3B2C767C2D16C261EC85EBA20EEF182B63B22D5B(G_B10_2, G_B10_1, G_B10_0, L_22, NULL);
					NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(G_B10_3, L_23, NULL);
					// return await promise_.Task;
					Promise_1_t13F7E67A42820E363E3D361472CA54943489BEA2* L_24 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_24);
					Task_1_t65AA4393A60D681FD8FC211D7FCF1E76E841F83B* L_25;
					L_25 = Promise_1_get_Task_m4261C0D308AA6CA383CA7379BFDF51F861C46229(L_24, Promise_1_get_Task_m4261C0D308AA6CA383CA7379BFDF51F861C46229_RuntimeMethod_var);
					NullCheck(L_25);
					TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06 L_26;
					L_26 = Task_1_GetAwaiter_m18B15251A2F6D36855A9002486452B7961FDCA35(L_25, Task_1_GetAwaiter_m18B15251A2F6D36855A9002486452B7961FDCA35_RuntimeMethod_var);
					V_3 = L_26;
					bool L_27;
					L_27 = TaskAwaiter_1_get_IsCompleted_m558CC4667D9E2665B3ECAD2EAA12084219911A0E((&V_3), TaskAwaiter_1_get_IsCompleted_m558CC4667D9E2665B3ECAD2EAA12084219911A0E_RuntimeMethod_var);
					if (L_27)
					{
						goto IL_00d0_2;
					}
				}
				{
					int32_t L_28 = 0;
					V_0 = L_28;
					__this->___U3CU3E1__state_0 = L_28;
					TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06 L_29 = V_3;
					__this->___U3CU3Eu__1_5 = L_29;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* L_30 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m07C388B70B050978A9DF4ED09031AF2DAD7DA140(L_30, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06_TisU3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43_m07C388B70B050978A9DF4ED09031AF2DAD7DA140_RuntimeMethod_var);
					goto IL_011f;
				}

IL_00b4_2:
				{
					TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06 L_31 = __this->___U3CU3Eu__1_5;
					V_3 = L_31;
					TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06* L_32 = (&__this->___U3CU3Eu__1_5);
					il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_t6976DCD0BBA17E3EAF43EF61E7C304B2E6053A06));
					int32_t L_33 = (-1);
					V_0 = L_33;
					__this->___U3CU3E1__state_0 = L_33;
				}

IL_00d0_2:
				{
					ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_34;
					L_34 = TaskAwaiter_1_GetResult_m8336E9ACE91AA12E62DA9AC4028CEAD7D875237A((&V_3), TaskAwaiter_1_GetResult_m8336E9ACE91AA12E62DA9AC4028CEAD7D875237A_RuntimeMethod_var);
					V_2 = L_34;
					goto IL_010b;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f2;
		}
		throw e;
	}

CATCH_00f2:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* L_35 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_36 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m608B0AEA53B48154F6BBE69EDCAFDDB0866D7691(L_35, L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m608B0AEA53B48154F6BBE69EDCAFDDB0866D7691_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011f;
	}// end catch (depth: 1)

IL_010b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* L_37 = (&__this->___U3CU3Et__builder_1);
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_38 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mD37CD5BAFE87DA1C2E56B2810E9A762240C28ACC(L_37, L_38, AsyncTaskMethodBuilder_1_SetResult_mD37CD5BAFE87DA1C2E56B2810E9A762240C28ACC_RuntimeMethod_var);
	}

IL_011f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mA514219B7B4DAD6E5A1C7DD05B88330C89254ED1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43*>(__this + _offset);
	U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mA514219B7B4DAD6E5A1C7DD05B88330C89254ED1(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m55B435C738BA173E37802BD0EB190C8B49D77A1A (U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m7E71DAEDE609FF2AF0C883AA47713E21D09740E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t3DA49A654697746E6D9E011B4CBAF285195FFBAF* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m7E71DAEDE609FF2AF0C883AA47713E21D09740E0(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m7E71DAEDE609FF2AF0C883AA47713E21D09740E0_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m55B435C738BA173E37802BD0EB190C8B49D77A1A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadObjectModelAsyncU3Ed__8_t3EB00A396C3624E4C5EB7C46889846B6A1F50E43*>(__this + _offset);
	U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_m55B435C738BA173E37802BD0EB190C8B49D77A1A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDetectAsyncU3Ed__10_MoveNext_m5074BC9F7BF5C61570BF7A868EF8680FC68E3391 (U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mE6068DC360C61314099FEF493219489127CADC61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m9153AA51D45F43594589627D81145AE32B0CD319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D_TisIntPtr_t_m12C7A9120C9D5DC5FD648965DF713797A957B0D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIntPtr_t_m53FD16B186A5FF0E489639334D7548F7EC179680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_get_Task_m834FFF6350EFA057F2D0935E0EF8DB3181B1FC2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_Create_TisList_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B_m6B0ACA8BC1020CF6BC0A0535CBDCE5182A3074A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mED7E6FE2BCD55EFC94EFA175EF4F2F01E9128521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC252F2224B7ADEF66D47B67AA1CCC5F484CD3709_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mE2E409EF2D436B7B8B220D4E8C4F66CB1EA0A6C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m04E943AD9821534006BFFA0BFFCBF0145557ED5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m9F433EF9DBE3E1A5551FF3E2852D8D39FF2EA27D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_3 = NULL;
	TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* G_B4_0 = NULL;
	U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* G_B4_1 = NULL;
	Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* G_B3_0 = NULL;
	U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* G_B3_1 = NULL;
	ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* G_B9_0 = NULL;
	ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* G_B8_0 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* G_B12_0 = NULL;
	Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E* G_B11_0 = NULL;
	ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* G_B11_1 = NULL;
	Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E* G_B10_0 = NULL;
	ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* G_B10_1 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* G_B14_0 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* G_B13_0 = NULL;
	ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* G_B16_0 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* G_B16_1 = NULL;
	intptr_t G_B16_2;
	memset((&G_B16_2), 0, sizeof(G_B16_2));
	intptr_t G_B16_3;
	memset((&G_B16_3), 0, sizeof(G_B16_3));
	ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* G_B15_0 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* G_B15_1 = NULL;
	intptr_t G_B15_2;
	memset((&G_B15_2), 0, sizeof(G_B15_2));
	intptr_t G_B15_3;
	memset((&G_B15_3), 0, sizeof(G_B15_3));
	int32_t G_B17_0 = 0;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* G_B17_1 = NULL;
	intptr_t G_B17_2;
	memset((&G_B17_2), 0, sizeof(G_B17_2));
	intptr_t G_B17_3;
	memset((&G_B17_3), 0, sizeof(G_B17_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0040_1;
			}
		}
		{
			// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => Microsoft.Azure.ObjectAnchors.PackedValue.UnpackPtrs(pv_, item => Microsoft.Azure.ObjectAnchors.ObjectInstance.GetOrCreateInstance(item, true)), System.Threading.CancellationToken.None))
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
			Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* L_3 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_4;
			Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* L_4 = L_3;
			G_B3_0 = L_4;
			G_B3_1 = __this;
			if (L_4)
			{
				G_B4_0 = L_4;
				G_B4_1 = __this;
				goto IL_0031_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
			U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* L_5 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* L_6 = (Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8*)il2cpp_codegen_object_new(Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			Func_2__ctor_m0AFF9605021BEB388644DBFDBB64462A481C1B41(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m04E943AD9821534006BFFA0BFFCBF0145557ED5D_RuntimeMethod_var), NULL);
			Func_2_t32D0C8D95CE955B1E92627975445A0DADB177ED8* L_7 = L_6;
			((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_4 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_4), (void*)L_7);
			G_B4_0 = L_7;
			G_B4_1 = G_B3_1;
		}

IL_0031_1:
		{
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8;
			L_8 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
			Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514* L_9;
			L_9 = Promise_Create_TisList_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B_m6B0ACA8BC1020CF6BC0A0535CBDCE5182A3074A5(G_B4_0, L_8, Promise_Create_TisList_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B_m6B0ACA8BC1020CF6BC0A0535CBDCE5182A3074A5_RuntimeMethod_var);
			G_B4_1->___U3Cpromise_U3E5__2_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3Cpromise_U3E5__2_4), (void*)L_9);
		}

IL_0040_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_011b_1:
				{// begin finally (depth: 2)
					{
						int32_t L_10 = V_0;
						if ((((int32_t)L_10) >= ((int32_t)0)))
						{
							goto IL_0132_1;
						}
					}
					{
						Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514* L_11 = __this->___U3Cpromise_U3E5__2_4;
						if (!L_11)
						{
							goto IL_0132_1;
						}
					}
					{
						Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514* L_12 = __this->___U3Cpromise_U3E5__2_4;
						NullCheck(L_12);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
					}

IL_0132_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_13 = V_0;
					if (!L_13)
					{
						goto IL_00f4_2;
					}
				}
				{
					// IntPtr[] queries_array = queries?.Select(x => x?.handle ?? IntPtr.Zero).ToArray() ?? Array.Empty<IntPtr>();
					ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* L_14 = __this->___queries_2;
					ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* L_15 = L_14;
					G_B8_0 = L_15;
					if (L_15)
					{
						G_B9_0 = L_15;
						goto IL_0054_2;
					}
				}
				{
					G_B12_0 = ((IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(NULL));
					goto IL_007d_2;
				}

IL_0054_2:
				{
					il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
					Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E* L_16 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__10_2_5;
					Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E* L_17 = L_16;
					G_B10_0 = L_17;
					G_B10_1 = G_B9_0;
					if (L_17)
					{
						G_B11_0 = L_17;
						G_B11_1 = G_B9_0;
						goto IL_0073_2;
					}
				}
				{
					il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var);
					U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069* L_18 = ((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9_0;
					Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E* L_19 = (Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E*)il2cpp_codegen_object_new(Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E_il2cpp_TypeInfo_var);
					NullCheck(L_19);
					Func_2__ctor_m38EE5C9516ECE6257346D4170932387595ABF0D5(L_19, L_18, (intptr_t)((void*)U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m9F433EF9DBE3E1A5551FF3E2852D8D39FF2EA27D_RuntimeMethod_var), NULL);
					Func_2_tF5911BDDA471FD1C04B45A947514309E3A83BE8E* L_20 = L_19;
					((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__10_2_5 = L_20;
					Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97F96817847947F938D6CD23E39F0FFCE22CF069_il2cpp_TypeInfo_var))->___U3CU3E9__10_2_5), (void*)L_20);
					G_B11_0 = L_20;
					G_B11_1 = G_B10_1;
				}

IL_0073_2:
				{
					RuntimeObject* L_21;
					L_21 = Enumerable_Select_TisObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D_TisIntPtr_t_m12C7A9120C9D5DC5FD648965DF713797A957B0D9((RuntimeObject*)G_B11_1, G_B11_0, Enumerable_Select_TisObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D_TisIntPtr_t_m12C7A9120C9D5DC5FD648965DF713797A957B0D9_RuntimeMethod_var);
					IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_22;
					L_22 = Enumerable_ToArray_TisIntPtr_t_m53FD16B186A5FF0E489639334D7548F7EC179680(L_21, Enumerable_ToArray_TisIntPtr_t_m53FD16B186A5FF0E489639334D7548F7EC179680_RuntimeMethod_var);
					G_B12_0 = L_22;
				}

IL_007d_2:
				{
					IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_23 = G_B12_0;
					G_B13_0 = L_23;
					if (L_23)
					{
						G_B14_0 = L_23;
						goto IL_0086_2;
					}
				}
				{
					IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_24;
					L_24 = Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline(Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_RuntimeMethod_var);
					G_B14_0 = L_24;
				}

IL_0086_2:
				{
					V_3 = G_B14_0;
					// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_observer_detect_async_queries(this.handle, queries_array, queries?.Length ?? 0, promise_.Handle));
					ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_25 = V_1;
					NullCheck(L_25);
					intptr_t L_26 = L_25->___handle_0;
					ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_27 = V_1;
					NullCheck(L_27);
					intptr_t L_28 = L_27->___handle_0;
					IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_29 = V_3;
					ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* L_30 = __this->___queries_2;
					ObjectQueryU5BU5D_t7F83EADADA074F503F5BEFCBE68505D1A5172106* L_31 = L_30;
					G_B15_0 = L_31;
					G_B15_1 = L_29;
					G_B15_2 = L_28;
					G_B15_3 = L_26;
					if (L_31)
					{
						G_B16_0 = L_31;
						G_B16_1 = L_29;
						G_B16_2 = L_28;
						G_B16_3 = L_26;
						goto IL_00a1_2;
					}
				}
				{
					G_B17_0 = 0;
					G_B17_1 = G_B15_1;
					G_B17_2 = G_B15_2;
					G_B17_3 = G_B15_3;
					goto IL_00a3_2;
				}

IL_00a1_2:
				{
					NullCheck(G_B16_0);
					G_B17_0 = ((int32_t)(((RuntimeArray*)G_B16_0)->max_length));
					G_B17_1 = G_B16_1;
					G_B17_2 = G_B16_2;
					G_B17_3 = G_B16_3;
				}

IL_00a3_2:
				{
					Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514* L_32 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_32);
					PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_33 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)L_32)->___Handle_6;
					int32_t L_34;
					L_34 = NativeLibrary_aoa_object_observer_detect_async_queries_m1B292487BD51D39402396E686344C0D93B99569C(G_B17_2, G_B17_1, G_B17_0, L_33, NULL);
					NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(G_B17_3, L_34, NULL);
					// return await promise_.Task;
					Promise_1_t777BBDB0856F9B24491227CCD3BD36DB13FD8514* L_35 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_35);
					Task_1_tD3CF804A93285D651521AB991ABAF9C2A03DE94F* L_36;
					L_36 = Promise_1_get_Task_m834FFF6350EFA057F2D0935E0EF8DB3181B1FC2F(L_35, Promise_1_get_Task_m834FFF6350EFA057F2D0935E0EF8DB3181B1FC2F_RuntimeMethod_var);
					NullCheck(L_36);
					TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218 L_37;
					L_37 = Task_1_GetAwaiter_mE2E409EF2D436B7B8B220D4E8C4F66CB1EA0A6C5(L_36, Task_1_GetAwaiter_mE2E409EF2D436B7B8B220D4E8C4F66CB1EA0A6C5_RuntimeMethod_var);
					V_4 = L_37;
					bool L_38;
					L_38 = TaskAwaiter_1_get_IsCompleted_mC252F2224B7ADEF66D47B67AA1CCC5F484CD3709((&V_4), TaskAwaiter_1_get_IsCompleted_mC252F2224B7ADEF66D47B67AA1CCC5F484CD3709_RuntimeMethod_var);
					if (L_38)
					{
						goto IL_0111_2;
					}
				}
				{
					int32_t L_39 = 0;
					V_0 = L_39;
					__this->___U3CU3E1__state_0 = L_39;
					TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218 L_40 = V_4;
					__this->___U3CU3Eu__1_5 = L_40;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* L_41 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mE6068DC360C61314099FEF493219489127CADC61(L_41, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218_TisU3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615_mE6068DC360C61314099FEF493219489127CADC61_RuntimeMethod_var);
					goto IL_0160;
				}

IL_00f4_2:
				{
					TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218 L_42 = __this->___U3CU3Eu__1_5;
					V_4 = L_42;
					TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218* L_43 = (&__this->___U3CU3Eu__1_5);
					il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_1_tDD14564D0650A9D5010E6FF94920881DF53B1218));
					int32_t L_44 = (-1);
					V_0 = L_44;
					__this->___U3CU3E1__state_0 = L_44;
				}

IL_0111_2:
				{
					List_1_tAFC4414932C8F5DEBF82A2124A301DFC69452A0B* L_45;
					L_45 = TaskAwaiter_1_GetResult_mED7E6FE2BCD55EFC94EFA175EF4F2F01E9128521((&V_4), TaskAwaiter_1_GetResult_mED7E6FE2BCD55EFC94EFA175EF4F2F01E9128521_RuntimeMethod_var);
					V_2 = L_45;
					goto IL_014c;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0133;
		}
		throw e;
	}

CATCH_0133:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* L_46 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_47 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m885D6BD05470D4862130660D1A60981433DF3E66(L_46, L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m885D6BD05470D4862130660D1A60981433DF3E66_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0160;
	}// end catch (depth: 1)

IL_014c:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* L_48 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_49 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m9153AA51D45F43594589627D81145AE32B0CD319(L_48, L_49, AsyncTaskMethodBuilder_1_SetResult_m9153AA51D45F43594589627D81145AE32B0CD319_RuntimeMethod_var);
	}

IL_0160:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDetectAsyncU3Ed__10_MoveNext_m5074BC9F7BF5C61570BF7A868EF8680FC68E3391_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615*>(__this + _offset);
	U3CDetectAsyncU3Ed__10_MoveNext_m5074BC9F7BF5C61570BF7A868EF8680FC68E3391(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDetectAsyncU3Ed__10_SetStateMachine_m5B537FAFC0B2D21C8D82DCCBCC77A83F3C10A93E (U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0EBF275B2CCB163CFB068E1F9893B5E91C81F9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t71428258836497D86E2849F304E4DF0320BDD120* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0EBF275B2CCB163CFB068E1F9893B5E91C81F9C4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0EBF275B2CCB163CFB068E1F9893B5E91C81F9C4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDetectAsyncU3Ed__10_SetStateMachine_m5B537FAFC0B2D21C8D82DCCBCC77A83F3C10A93E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDetectAsyncU3Ed__10_t3B823311D4B9753C62B0C429611FFC4094C82615*>(__this + _offset);
	U3CDetectAsyncU3Ed__10_SetStateMachine_m5B537FAFC0B2D21C8D82DCCBCC77A83F3C10A93E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mD61FA0C14E698DD84119F45E69C1F9F28535CDE2 (U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::<GetOrCreateInstance>b__0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m7AB13C21089F585B655ECF83CB3B2A7780A2332C (U3CU3Ec__DisplayClass15_0_tDF5AEE7DD8B72F283ADB9A827BDE3303671F869F* __this, uint64_t ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// created = true;
		__this->___created_0 = (bool)1;
		// return new Microsoft.Azure.ObjectAnchors.ObjectObserver(handle, transfer: transfer);
		intptr_t L_0 = __this->___handle_1;
		bool L_1 = __this->___transfer_2;
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_2 = (ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61*)il2cpp_codegen_object_new(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ObjectObserver__ctor_m39EF15974253C7081F80FB6643F69AC975381AAB(L_2, L_0, L_1, NULL);
		return L_2;
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
// System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectQuery_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mCA01E27C4E16C22954F48B3CE4FC7717873A050A (ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_query_release(this.handle);
		intptr_t L_0 = __this->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_object_query_release_m918F3FEE1860316B5C5C059406B3048DA88EF8BC(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectQuery__ctor_m773E598F6F08E4DE14101C8C701164ABFB2E7A9F (ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* __this, ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* ___model0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public ObjectQuery(Microsoft.Azure.ObjectAnchors.ObjectModel model)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Microsoft.Azure.ObjectAnchors.status resultStatus = (Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_query_create_object_model_model(model != null ? model.handle : IntPtr.Zero, out this.handle));
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_0 = ___model0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_2 = ___model0;
		NullCheck(L_2);
		intptr_t L_3 = L_2->___handle_0;
		G_B3_0 = L_3;
	}

IL_0016:
	{
		intptr_t* L_4 = (&__this->___handle_0);
		int32_t L_5;
		L_5 = NativeLibrary_aoa_object_query_create_object_model_model_m3B988FA265ABD9C5F2AF1CE8BA3920B492BEB02A(G_B3_0, L_4, NULL);
		V_0 = L_5;
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
		intptr_t L_6 = __this->___handle_0;
		int32_t L_7 = V_0;
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_6, L_7, NULL);
		// Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.Add(this);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel,Microsoft.Azure.ObjectAnchors.ObjectObservationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectQuery__ctor_m5BE393E0CF9B1818534BAB75FD3A0B54B0D4C11D (ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* __this, ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* ___model0, int32_t ___observationMode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public ObjectQuery(Microsoft.Azure.ObjectAnchors.ObjectModel model, Microsoft.Azure.ObjectAnchors.ObjectObservationMode observationMode)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Microsoft.Azure.ObjectAnchors.status resultStatus = (Microsoft.Azure.ObjectAnchors.NativeLibrary.aoa_object_query_create_object_model_model_object_observation_mode_observation_mode(model != null ? model.handle : IntPtr.Zero, observationMode, out this.handle));
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_0 = ___model0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		ObjectModel_t6D8D3BF2A65A6823BDE1EC06AB6D847B389B780C* L_2 = ___model0;
		NullCheck(L_2);
		intptr_t L_3 = L_2->___handle_0;
		G_B3_0 = L_3;
	}

IL_0016:
	{
		int32_t L_4 = ___observationMode1;
		intptr_t* L_5 = (&__this->___handle_0);
		int32_t L_6;
		L_6 = NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_m549793C8DA150FA759D6B6CA547EFA83D6B61203(G_B3_0, L_4, L_5, NULL);
		V_0 = L_6;
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
		intptr_t L_7 = __this->___handle_0;
		int32_t L_8 = V_0;
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_7, L_8, NULL);
		// Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.Add(this);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectQuery_Finalize_mE2E36DCF20E30652255BB083D06EEE2BE684F6CB (ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.aoa_object_query_release(this.handle));
			intptr_t L_0 = __this->___handle_0;
			intptr_t L_1 = __this->___handle_0;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_object_query_release_m918F3FEE1860316B5C5C059406B3048DA88EF8BC(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectQuery_Dispose_m2E54622260BA5B1AA9FB01184F86EF4C5D658821 (ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* __this, const RuntimeMethod* method) 
{
	{
		// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.aoa_object_query_dispose(this.handle));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_object_query_dispose_m7D51D2B682C08D212D19602D517D829874CFB075(L_1, NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m4E510E7683969753B65BE9D9CA86C17E7290A28E (ObjectQuery_tB23981B2108902F654D2C017A4ED6AA75F51A12D* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectQuery__cctor_m9F5E0A70A102E8005CC671AB6970E3ACCBDB8996 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static ObjectQuery() => ObjectObserver.EnsureAppDomainUnloadHandlingInitialized();
		il2cpp_codegen_runtime_class_init_inline(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m3E0390043703CF76D47C4C4DB5518EAA99C4F135(NULL);
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
// System.Int64 Microsoft.Azure.ObjectAnchors.PackedValue::op_Implicit(Microsoft.Azure.ObjectAnchors.PackedValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PackedValue_op_Implicit_m6A4FB0AF18928E5FB960A49CAECC4300013CF7D6 (PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___packedValue0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator long(PackedValue packedValue) => packedValue.Type == PackedValueType.Int64 ? packedValue.Int64 : throw new InvalidCastException();
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 L_0 = ___packedValue0;
		int32_t L_1 = L_0.___Type_1;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_000f;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mCBC218CE25034242D2EB33B3E59933295CE93C56(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PackedValue_op_Implicit_m6A4FB0AF18928E5FB960A49CAECC4300013CF7D6_RuntimeMethod_var)));
	}

IL_000f:
	{
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 L_3 = ___packedValue0;
		int64_t L_4 = L_3.___Int64_5;
		return L_4;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PackedValue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackedValue__cctor_mEB70E46220AC6DD50E146E2A130065CF00A75B92 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisIntPtr_t_m63E57DCAAB0465C36C8C5E5BD6DAB3D5C5C998AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly static int IntPtrSize = Marshal.SizeOf<IntPtr>();
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_SizeOf_TisIntPtr_t_m63E57DCAAB0465C36C8C5E5BD6DAB3D5C5C998AB(Marshal_SizeOf_TisIntPtr_t_m63E57DCAAB0465C36C8C5E5BD6DAB3D5C5C998AB_RuntimeMethod_var);
		((PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_StaticFields*)il2cpp_codegen_static_fields_for(PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var))->___IntPtrSize_0 = L_0;
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
extern "C" void CDECL ReversePInvokeWrapper_PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04(intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04(___context0, ___value1, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538(intptr_t ___context0, intptr_t ___handle1, int32_t ___result2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538(___context0, ___handle1, ___result2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6(intptr_t ___context0, float ___progress1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6(___context0, ___progress1, NULL);

}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase__ctor_m2D3C8E47A95D02C074872193D2BF533BAB4CC8FF (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___progressCallback0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_U3C_ctorU3Eb__7_0_m20631ADBD9971E3F35C78730BE3C7829C83AEE54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// protected PromiseBase(Action<float> progressCallback, CancellationToken cancellationToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.progressCallback = progressCallback;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ___progressCallback0;
		__this->___progressCallback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progressCallback_4), (void*)L_0);
		// this.gcHandle = GCHandle.Alloc(this);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(__this, NULL);
		__this->___gcHandle_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			// this.createOptions = new PromiseCreateOptions()
			// {
			//     context = GCHandle.ToIntPtr(this.gcHandle),
			//     onComplete = PromiseBase.OnCompleteDelegate,
			//     onError = PromiseBase.OnErrorDelegate,
			//     onProgress = PromiseBase.OnProgressDelegate,
			// };
			il2cpp_codegen_initobj((&V_0), sizeof(PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0));
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = __this->___gcHandle_1;
			intptr_t L_3;
			L_3 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_2, NULL);
			(&V_0)->___context_0 = L_3;
			il2cpp_codegen_runtime_class_init_inline(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var);
			aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* L_4 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields*)il2cpp_codegen_static_fields_for(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var))->___OnCompleteDelegate_7;
			(&V_0)->___onComplete_1 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___onComplete_1), (void*)L_4);
			aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* L_5 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields*)il2cpp_codegen_static_fields_for(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var))->___OnErrorDelegate_8;
			(&V_0)->___onError_2 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___onError_2), (void*)L_5);
			aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* L_6 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields*)il2cpp_codegen_static_fields_for(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var))->___OnProgressDelegate_9;
			(&V_0)->___onProgress_3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___onProgress_3), (void*)L_6);
			PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0 L_7 = V_0;
			__this->___createOptions_3 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___createOptions_3))->___onComplete_1), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___createOptions_3))->___onError_2), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___createOptions_3))->___onProgress_3), (void*)NULL);
			#endif
			// int result = NativeLibrary.PromiseCreate(ref this.createOptions, out this.Handle);
			PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0* L_8 = (&__this->___createOptions_3);
			PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3** L_9 = (&__this->___Handle_6);
			int32_t L_10;
			L_10 = NativeLibrary_PromiseCreate_m8593C3A02B6779E944AF8963A4FF50EB315E8752(L_8, L_9, NULL);
			// if (result != 0)
			if (!L_10)
			{
				goto IL_0077_1;
			}
		}
		{
			// throw new InvalidOperationException();
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			NullCheck(L_11);
			InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_11, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PromiseBase__ctor_m2D3C8E47A95D02C074872193D2BF533BAB4CC8FF_RuntimeMethod_var)));
		}

IL_0077_1:
		{
			// this.cancellationTokenRegistration = cancellationToken.Register(() => NativeLibrary.PromiseCancel(this.Handle));
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, __this, (intptr_t)((void*)PromiseBase_U3C_ctorU3Eb__7_0_m20631ADBD9971E3F35C78730BE3C7829C83AEE54_RuntimeMethod_var), NULL);
			CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13;
			L_13 = CancellationToken_Register_m0D080EBDFC1F9651EE5BCBEF183925CF23CA638D((&___cancellationToken1), L_12, NULL);
			__this->___cancellationTokenRegistration_2 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration_2))->___m_callbackInfo_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration_2))->___m_registrationInfo_1))->____source_0), (void*)NULL);
			#endif
			// this.synchronizationContext = SynchronizationContext.Current;
			SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_14;
			L_14 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
			__this->___synchronizationContext_5 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___synchronizationContext_5), (void*)L_14);
			// }
			goto IL_00f1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009d;
		}
		throw e;
	}

CATCH_009d:
	{// begin catch(System.Object)
		{
			// catch
			// if (this.cancellationTokenRegistration != default)
			CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_15 = __this->___cancellationTokenRegistration_2;
			il2cpp_codegen_initobj((&V_1), sizeof(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389));
			CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_16 = V_1;
			bool L_17;
			L_17 = CancellationTokenRegistration_op_Inequality_m0EF32918A81CF2967D0BF160943F9C19DE7C648D(L_15, L_16, NULL);
			if (!L_17)
			{
				goto IL_00bf;
			}
		}
		{
			// this.cancellationTokenRegistration.Dispose();
			CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_18 = (&__this->___cancellationTokenRegistration_2);
			CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_18, NULL);
		}

IL_00bf:
		{
			// if (!this.Handle.IsInvalid)
			PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_19 = __this->___Handle_6;
			NullCheck(L_19);
			bool L_20;
			L_20 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_19);
			if (L_20)
			{
				goto IL_00d7;
			}
		}
		{
			// ((IDisposable)this.Handle).Dispose();
			PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_21 = __this->___Handle_6;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var)), L_21);
		}

IL_00d7:
		{
			// if (this.gcHandle.IsAllocated)
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_22 = (&__this->___gcHandle_1);
			bool L_23;
			L_23 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_22, NULL);
			if (!L_23)
			{
				goto IL_00ef;
			}
		}
		{
			// this.gcHandle.Free();
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_24 = (&__this->___gcHandle_1);
			GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_24, NULL);
		}

IL_00ef:
		{
			// throw;
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
	}// end catch (depth: 1)

IL_00f1:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_Finalize_m16DB61DBDF3F15DB3E035DF1A43E7AC3133162F5 (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// this.Dispose(disposing: false);
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_Dispose_m9EC360C95FA46ED5F89A4C1544ACB8AE2E0ECF29 (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Dispose(disposing: true);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_Dispose_mA0F3B5DD66DB4373861B8182B7102B337E1B7AA5 (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!this.disposed)
		bool L_0 = __this->___disposed_0;
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		// ((IDisposable)this.cancellationTokenRegistration).Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_1 = __this->___cancellationTokenRegistration_2;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_2 = L_1;
		RuntimeObject* L_3 = Box(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var, &L_2);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)UnBox(L_3, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var), NULL);
		// ((IDisposable)this.Handle).Dispose();
		PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_4 = __this->___Handle_6;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
		// if (this.gcHandle.IsAllocated)
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5 = __this->___gcHandle_1;
		V_0 = L_5;
		bool L_6;
		L_6 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_0), NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// this.gcHandle.Free();
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7 = __this->___gcHandle_1;
		V_0 = L_7;
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
	}

IL_0041:
	{
		// this.disposed = true;
		__this->___disposed_0 = (bool)1;
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressHandler(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnProgressHandler_m9D06313E19BB3335526A08C82DFA2F175BE4DDA7 (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, float ___progress0, const RuntimeMethod* method) 
{
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B2_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B1_0 = NULL;
	{
		// this.progressCallback?.Invoke(progress);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___progressCallback_4;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		float L_2 = ___progress0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorHandler(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnErrorHandler_mF1DD93E5243087620BE39B03DECBB7BE9B70BA03 (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, intptr_t ___handle0, int32_t ___result1, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (result == status.OperationCanceled)
		int32_t L_0 = ___result1;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_000c;
		}
	}
	{
		// OnCanceledHandler();
		VirtualActionInvoker0::Invoke(6 /* System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCanceledHandler() */, __this);
		return;
	}

IL_000c:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (handle != IntPtr.Zero)
			intptr_t L_1 = ___handle0;
			intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var))))->___Zero_1;
			bool L_3;
			L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
			if (!L_3)
			{
				goto IL_0023_1;
			}
		}
		{
			// NativeLibraryHelpers.CheckStatus(handle, result);
			intptr_t L_4 = ___handle0;
			int32_t L_5 = ___result1;
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_4, L_5, NULL);
			goto IL_0029_1;
		}

IL_0023_1:
		{
			// NativeLibraryHelpers.CheckStatus(result);
			int32_t L_6 = ___result1;
			NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413(L_6, NULL);
		}

IL_0029_1:
		{
			// }
			goto IL_0035;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002b;
		}
		throw e;
	}

CATCH_002b:
	{// begin catch(System.Exception)
		// catch(Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// OnExceptionHandler(e);
		Exception_t* L_7 = V_0;
		VirtualActionInvoker1< Exception_t* >::Invoke(7 /* System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnExceptionHandler(System.Exception) */, __this, L_7);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	}// end catch (depth: 1)

IL_0035:
	{
		// throw new ArgumentException($"Invalid value passed as error - {result}", nameof(result));
		int32_t L_8 = ___result1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&status_tF6E66D7C8DFFB75FF74E493F2793847185D5BA29_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral448627E76D874E9A9D103F8794752ADE004CA21F)), L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_12, L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PromiseBase_OnErrorHandler_mF1DD93E5243087620BE39B03DECBB7BE9B70BA03_RuntimeMethod_var)));
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteThunk(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04 (intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GCHandle handle = GCHandle.FromIntPtr(context);
		intptr_t L_0 = ___context0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		// PromiseBase promise = (PromiseBase)handle.Target;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		// promise.OnCompleteHandler(value);
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* L_3 = ___value1;
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 L_4 = (*(PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9*)L_3);
		NullCheck(((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)CastclassClass((RuntimeObject*)L_2, PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var)));
		VirtualActionInvoker1< PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 >::Invoke(8 /* System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue) */, ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)CastclassClass((RuntimeObject*)L_2, PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var)), L_4);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorThunk(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538 (intptr_t ___context0, intptr_t ___handle1, int32_t ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GCHandle promiseHandle = GCHandle.FromIntPtr(context);
		intptr_t L_0 = ___context0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		// PromiseBase promise = (PromiseBase)promiseHandle.Target;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		// promise.OnErrorHandler(handle, result);
		intptr_t L_3 = ___handle1;
		int32_t L_4 = ___result2;
		NullCheck(((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)CastclassClass((RuntimeObject*)L_2, PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var)));
		PromiseBase_OnErrorHandler_mF1DD93E5243087620BE39B03DECBB7BE9B70BA03(((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)CastclassClass((RuntimeObject*)L_2, PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var)), L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressThunk(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6 (intptr_t ___context0, float ___progress1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GCHandle handle = GCHandle.FromIntPtr(context);
		intptr_t L_0 = ___context0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		// PromiseBase promise = (PromiseBase)handle.Target;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		// promise.OnProgressHandler(progress);
		float L_3 = ___progress1;
		NullCheck(((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)CastclassClass((RuntimeObject*)L_2, PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var)));
		PromiseBase_OnProgressHandler_m9D06313E19BB3335526A08C82DFA2F175BE4DDA7(((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)CastclassClass((RuntimeObject*)L_2, PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var)), L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase__cctor_m0E4F671C88CF847257D42F3F317605C951D7D243 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly aoa_promise_on_complete OnCompleteDelegate = OnCompleteThunk;
		aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* L_0 = (aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855*)il2cpp_codegen_object_new(aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		aoa_promise_on_complete__ctor_m4DF27D6D9A2EA9FF945885D307AD59C366F65D89(L_0, NULL, (intptr_t)((void*)PromiseBase_OnCompleteThunk_m0ABDA7CBA809BF12EBC680D99BE641B41D7C5E04_RuntimeMethod_var), NULL);
		((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields*)il2cpp_codegen_static_fields_for(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var))->___OnCompleteDelegate_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields*)il2cpp_codegen_static_fields_for(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var))->___OnCompleteDelegate_7), (void*)L_0);
		// private static readonly aoa_promise_on_error OnErrorDelegate = OnErrorThunk;
		aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* L_1 = (aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8*)il2cpp_codegen_object_new(aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		aoa_promise_on_error__ctor_mCA12121041883994E452F43AEE2FA524E7A44D26(L_1, NULL, (intptr_t)((void*)PromiseBase_OnErrorThunk_mC371DE2D8173614E9FE1B4E8CB66BBBD07457538_RuntimeMethod_var), NULL);
		((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields*)il2cpp_codegen_static_fields_for(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var))->___OnErrorDelegate_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields*)il2cpp_codegen_static_fields_for(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var))->___OnErrorDelegate_8), (void*)L_1);
		// private static readonly aoa_promise_on_progress OnProgressDelegate = OnProgressThunk;
		aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* L_2 = (aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646*)il2cpp_codegen_object_new(aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		aoa_promise_on_progress__ctor_mBB85BD6380018A4F1716F782CAEF412A55242EF5(L_2, NULL, (intptr_t)((void*)PromiseBase_OnProgressThunk_m37B076617EFD6CB9BC405267C44D17ED226BE8A6_RuntimeMethod_var), NULL);
		((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields*)il2cpp_codegen_static_fields_for(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var))->___OnProgressDelegate_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_StaticFields*)il2cpp_codegen_static_fields_for(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var))->___OnProgressDelegate_9), (void*)L_2);
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::<.ctor>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseBase_U3C_ctorU3Eb__7_0_m20631ADBD9971E3F35C78730BE3C7829C83AEE54 (PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD* __this, const RuntimeMethod* method) 
{
	{
		// this.cancellationTokenRegistration = cancellationToken.Register(() => NativeLibrary.PromiseCancel(this.Handle));
		PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_0 = __this->___Handle_6;
		int32_t L_1;
		L_1 = NativeLibrary_PromiseCancel_mE7B4745D3BD81D29885C3560C52A4F810AD1102F(L_0, NULL);
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
// System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Promise::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Promise_get_Task_m035C3D97953EA1145C38819C2AA5A276B59B94D8 (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Task Task => this.taskCompletionSource.Task;
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = __this->___taskCompletionSource_10;
		NullCheck(L_0);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1;
		L_1 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_0, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.Promise::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise__ctor_m03D897F250C1C44FBBB4D7198076E34F68AC7C68 (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___progressCallback0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly TaskCompletionSource<bool> taskCompletionSource = new TaskCompletionSource<bool>();
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_0, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		__this->___taskCompletionSource_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___taskCompletionSource_10), (void*)L_0);
		// : base(progressCallback, cancellationToken)
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = ___progressCallback0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD_il2cpp_TypeInfo_var);
		PromiseBase__ctor_m2D3C8E47A95D02C074872193D2BF533BAB4CC8FF(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.Promise::OnExceptionHandler(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_OnExceptionHandler_m5DDF1CD5A25FB75FC2272D3705E10805264FE847 (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m0DE68CD123975A4FE4C64B8A538E832658FA96F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.taskCompletionSource.SetException(exception);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = __this->___taskCompletionSource_10;
		Exception_t* L_1 = ___exception0;
		NullCheck(L_0);
		TaskCompletionSource_1_SetException_m0DE68CD123975A4FE4C64B8A538E832658FA96F4(L_0, L_1, TaskCompletionSource_1_SetException_m0DE68CD123975A4FE4C64B8A538E832658FA96F4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.Promise::OnCanceledHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_OnCanceledHandler_m18FFAC0312A1E6A6DCB0F5F9F175C3D4B9EEA54E (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m2AE0BE5D28A984B7E8945A3F6A7667AAD25237E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.taskCompletionSource.SetCanceled();
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = __this->___taskCompletionSource_10;
		NullCheck(L_0);
		TaskCompletionSource_1_SetCanceled_m2AE0BE5D28A984B7E8945A3F6A7667AAD25237E9(L_0, TaskCompletionSource_1_SetCanceled_m2AE0BE5D28A984B7E8945A3F6A7667AAD25237E9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.Promise::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_OnCompleteHandler_m0FE9B7390F5A8838E28B433C207E6F6ABEA513D5 (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* __this, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_U3COnCompleteHandlerU3Eb__6_0_mF1D27FBF561FE76D21E37DAC6CC3B87C9EC04C06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.synchronizationContext != null)
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)__this)->___synchronizationContext_5;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// this.synchronizationContext.Post(_ => this.taskCompletionSource.SetResult(true), null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_1 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)__this)->___synchronizationContext_5;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_2 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_2, __this, (intptr_t)((void*)Promise_U3COnCompleteHandlerU3Eb__6_0_mF1D27FBF561FE76D21E37DAC6CC3B87C9EC04C06_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_1, L_2, NULL);
		return;
	}

IL_0021:
	{
		// this.taskCompletionSource.SetResult(true);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_3 = __this->___taskCompletionSource_10;
		NullCheck(L_3);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_3, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		// }
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.Promise Microsoft.Azure.ObjectAnchors.Promise::Create(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* Promise_Create_m1A1C563E7F5655DF7740491112ED981429EB8C43 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Promise(null, cancellationToken);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___cancellationToken0;
		Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_1 = (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1*)il2cpp_codegen_object_new(Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Promise__ctor_m03D897F250C1C44FBBB4D7198076E34F68AC7C68(L_1, (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)NULL, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.Promise::<OnCompleteHandler>b__6_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_U3COnCompleteHandlerU3Eb__6_0_mF1D27FBF561FE76D21E37DAC6CC3B87C9EC04C06 (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.synchronizationContext.Post(_ => this.taskCompletionSource.SetResult(true), null);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = __this->___taskCompletionSource_10;
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_0, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
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
void aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14_Multicast(aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* __this, intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* currentDelegate = reinterpret_cast<aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14_OpenInst(aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* __this, intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___value1, method);
}
void aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14_OpenStatic(aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* __this, intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___value1, method);
}
void aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14_OpenStaticInvoker(aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* __this, intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___value1);
}
void aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14_ClosedStaticInvoker(aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* __this, intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___value1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855 (aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* __this, intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0, ___value1);

}
// System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aoa_promise_on_complete__ctor_m4DF27D6D9A2EA9FF945885D307AD59C366F65D89 (aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14_Multicast;
}
// System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::Invoke(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aoa_promise_on_complete_Invoke_mD80D94E12FD742A9D06B4F70F3EA200462C65F14 (aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855* __this, intptr_t ___context0, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3_Multicast(aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* __this, intptr_t ___context0, intptr_t ___handle1, int32_t ___result2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* currentDelegate = reinterpret_cast<aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, ___handle1, ___result2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3_OpenInst(aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* __this, intptr_t ___context0, intptr_t ___handle1, int32_t ___result2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___handle1, ___result2, method);
}
void aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3_OpenStatic(aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* __this, intptr_t ___context0, intptr_t ___handle1, int32_t ___result2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___handle1, ___result2, method);
}
void aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3_OpenStaticInvoker(aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* __this, intptr_t ___context0, intptr_t ___handle1, int32_t ___result2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___handle1, ___result2);
}
void aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3_ClosedStaticInvoker(aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* __this, intptr_t ___context0, intptr_t ___handle1, int32_t ___result2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___handle1, ___result2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8 (aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* __this, intptr_t ___context0, intptr_t ___handle1, int32_t ___result2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0, ___handle1, ___result2);

}
// System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aoa_promise_on_error__ctor_mCA12121041883994E452F43AEE2FA524E7A44D26 (aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3_Multicast;
}
// System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::Invoke(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aoa_promise_on_error_Invoke_mAE7AB86ACB32792C3A1E04BD599AB436BA8FDED3 (aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8* __this, intptr_t ___context0, intptr_t ___handle1, int32_t ___result2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, ___handle1, ___result2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED_Multicast(aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* __this, intptr_t ___context0, float ___progress1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* currentDelegate = reinterpret_cast<aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, ___progress1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED_OpenInst(aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* __this, intptr_t ___context0, float ___progress1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___progress1, method);
}
void aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED_OpenStatic(aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* __this, intptr_t ___context0, float ___progress1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___progress1, method);
}
void aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED_OpenStaticInvoker(aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* __this, intptr_t ___context0, float ___progress1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, float >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___progress1);
}
void aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED_ClosedStaticInvoker(aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* __this, intptr_t ___context0, float ___progress1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___progress1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646 (aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* __this, intptr_t ___context0, float ___progress1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0, ___progress1);

}
// System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aoa_promise_on_progress__ctor_mBB85BD6380018A4F1716F782CAEF412A55242EF5 (aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED_Multicast;
}
// System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::Invoke(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aoa_promise_on_progress_Invoke_m76D79178FCDAE0B3F9359CF8DD243E29AE66CCED (aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646* __this, intptr_t ___context0, float ___progress1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, ___progress1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.Azure.ObjectAnchors.PromiseCreateOptions
IL2CPP_EXTERN_C void PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_pinvoke(const PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0& unmarshaled, PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke& marshaled)
{
	marshaled.___context_0 = unmarshaled.___context_0;
	marshaled.___onComplete_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___onComplete_1));
	marshaled.___onError_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___onError_2));
	marshaled.___onProgress_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___onProgress_3));
}
IL2CPP_EXTERN_C void PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_pinvoke_back(const PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke& marshaled, PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledcontext_temp_0;
	memset((&unmarshaledcontext_temp_0), 0, sizeof(unmarshaledcontext_temp_0));
	unmarshaledcontext_temp_0 = marshaled.___context_0;
	unmarshaled.___context_0 = unmarshaledcontext_temp_0;
	unmarshaled.___onComplete_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855>(marshaled.___onComplete_1, aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___onComplete_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855>(marshaled.___onComplete_1, aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855_il2cpp_TypeInfo_var));
	unmarshaled.___onError_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8>(marshaled.___onError_2, aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___onError_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8>(marshaled.___onError_2, aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8_il2cpp_TypeInfo_var));
	unmarshaled.___onProgress_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646>(marshaled.___onProgress_3, aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___onProgress_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646>(marshaled.___onProgress_3, aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Azure.ObjectAnchors.PromiseCreateOptions
IL2CPP_EXTERN_C void PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_pinvoke_cleanup(PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Azure.ObjectAnchors.PromiseCreateOptions
IL2CPP_EXTERN_C void PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_com(const PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0& unmarshaled, PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_com& marshaled)
{
	marshaled.___context_0 = unmarshaled.___context_0;
	marshaled.___onComplete_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___onComplete_1));
	marshaled.___onError_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___onError_2));
	marshaled.___onProgress_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___onProgress_3));
}
IL2CPP_EXTERN_C void PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_com_back(const PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_com& marshaled, PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledcontext_temp_0;
	memset((&unmarshaledcontext_temp_0), 0, sizeof(unmarshaledcontext_temp_0));
	unmarshaledcontext_temp_0 = marshaled.___context_0;
	unmarshaled.___context_0 = unmarshaledcontext_temp_0;
	unmarshaled.___onComplete_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855>(marshaled.___onComplete_1, aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___onComplete_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855>(marshaled.___onComplete_1, aoa_promise_on_complete_tEA844C6A3BF970A93DF51C730DE2EA4C865F2855_il2cpp_TypeInfo_var));
	unmarshaled.___onError_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8>(marshaled.___onError_2, aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___onError_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8>(marshaled.___onError_2, aoa_promise_on_error_tE4ECFFEC3645496D1C26FF99E41D1A40F03FEBD8_il2cpp_TypeInfo_var));
	unmarshaled.___onProgress_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646>(marshaled.___onProgress_3, aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___onProgress_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646>(marshaled.___onProgress_3, aoa_promise_on_progress_tC8991F5AEF4081B392BD0B340235957475628646_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Azure.ObjectAnchors.PromiseCreateOptions
IL2CPP_EXTERN_C void PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshal_com_cleanup(PromiseCreateOptions_t7A5F5A10C94214F859BAC50D9C4732D5DD7515C0_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseSafeHandle__ctor_m62B40FF9DAB6D0DC91D141DF1717CD1439DF1822 (PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(IntPtr.Zero, true)
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PromiseSafeHandle_get_IsInvalid_m250166FA8644F5206486EFDA8C38BB03A37BB89A (PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool IsInvalid => this.handle == IntPtr.Zero;
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PromiseSafeHandle_ReleaseHandle_mC48AC4E638E114B0DBA2A687740B1334A457BBBE (PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* __this, const RuntimeMethod* method) 
{
	{
		// NativeLibrary.PromiseDestroy(this.handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_PromiseDestroy_m31F1EC010862774B326F43687DE1448065D776AE(L_0, NULL);
		// return true;
		return (bool)1;
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
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_close_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_diagnostics_session_close_async_m10D362F37C1641A8CC52CD122A3318EE2BB1AA3D (intptr_t ___handle0, String_t* ___diagnostics_file_path1, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_diagnostics_session_close_async_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___diagnostics_file_path1' to native representation
	Il2CppChar* ____diagnostics_file_path1_marshaled = NULL;
	if (___diagnostics_file_path1 != NULL)
	{
		____diagnostics_file_path1_marshaled = &___diagnostics_file_path1->____firstChar_5;
	}

	// Marshaling of parameter '___promiseHandle2' to native representation
	void* ____promiseHandle2_marshaled = NULL;
	if (___promiseHandle2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("promiseHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____promiseHandle2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___promiseHandle2, (&___safeHandle_reference_incremented_for____promiseHandle2), NULL);
	____promiseHandle2_marshaled = reinterpret_cast<void*>((___promiseHandle2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_diagnostics_session_close_async_wide)(___handle0, ____diagnostics_file_path1_marshaled, ____promiseHandle2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____diagnostics_file_path1_marshaled, ____promiseHandle2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___promiseHandle2' native representation
	if (___safeHandle_reference_incremented_for____promiseHandle2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___promiseHandle2, NULL);
	}

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes(System.IntPtr,System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m23882D8E8E363C61AD5CAFF70DB604663B225447 (intptr_t ___observer0, uint32_t ___max_session_size_in_mega_bytes1, intptr_t* ___instance2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes)(___observer0, ___max_session_size_in_mega_bytes1, ___instance2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___observer0, ___max_session_size_in_mega_bytes1, ___instance2);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_diagnostics_session_release_mE1BC96B20B4FE1AEC6B77757DE0588CA0A44D641 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_diagnostics_session_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_diagnostics_session_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_upload_diagnostics_async(System.String,System.IntPtr,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m9B7D05843765CA480E30BF3DAB662B5205330634 (String_t* ___diagnostics_file_path0, intptr_t ___object_anchors_session1, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Il2CppChar*, intptr_t, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_object_diagnostics_session_upload_diagnostics_async_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___diagnostics_file_path0' to native representation
	Il2CppChar* ____diagnostics_file_path0_marshaled = NULL;
	if (___diagnostics_file_path0 != NULL)
	{
		____diagnostics_file_path0_marshaled = &___diagnostics_file_path0->____firstChar_5;
	}

	// Marshaling of parameter '___promiseHandle2' to native representation
	void* ____promiseHandle2_marshaled = NULL;
	if (___promiseHandle2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("promiseHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____promiseHandle2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___promiseHandle2, (&___safeHandle_reference_incremented_for____promiseHandle2), NULL);
	____promiseHandle2_marshaled = reinterpret_cast<void*>((___promiseHandle2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_object_diagnostics_session_upload_diagnostics_async_wide)(____diagnostics_file_path0_marshaled, ___object_anchors_session1, ____promiseHandle2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____diagnostics_file_path0_marshaled, ___object_anchors_session1, ____promiseHandle2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___promiseHandle2' native representation
	if (___safeHandle_reference_incremented_for____promiseHandle2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___promiseHandle2, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mFC2F7589E97831702A27D3A311BD78F7BAB9FE91 (ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary.aoa_object_diagnostics_session_release(this.handle);
		intptr_t L_0 = __this->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_object_diagnostics_session_release_mE1BC96B20B4FE1AEC6B77757DE0588CA0A44D641(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.ctor(Microsoft.Azure.ObjectAnchors.ObjectObserver,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDiagnosticsSession__ctor_mFB753BFB2606242CCB9329DB0D9DC8EE22CC44B8 (ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* __this, ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* ___observer0, uint32_t ___maxSessionSizeInMegaBytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// public ObjectDiagnosticsSession(Microsoft.Azure.ObjectAnchors.ObjectObserver observer, uint maxSessionSizeInMegaBytes)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Microsoft.Azure.ObjectAnchors.status resultStatus = (Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary.aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes(observer != null ? observer.handle : IntPtr.Zero, maxSessionSizeInMegaBytes, out this.handle));
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_0 = ___observer0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61* L_2 = ___observer0;
		NullCheck(L_2);
		intptr_t L_3 = L_2->___handle_0;
		G_B3_0 = L_3;
	}

IL_0016:
	{
		uint32_t L_4 = ___maxSessionSizeInMegaBytes1;
		intptr_t* L_5 = (&__this->___handle_0);
		int32_t L_6;
		L_6 = NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m23882D8E8E363C61AD5CAFF70DB604663B225447(G_B3_0, L_4, L_5, NULL);
		V_0 = L_6;
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
		intptr_t L_7 = __this->___handle_0;
		int32_t L_8 = V_0;
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_7, L_8, NULL);
		// Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.Add(this);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		ProjectedObjectCache_Add_mA44320D3FB449D81A498C8DB4951A03C248E9F42(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDiagnosticsSession_Finalize_mAB558C0742FE20A018C2CE720AB1C0528DB5A2CB (ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary.aoa_object_diagnostics_session_release(this.handle));
			intptr_t L_0 = __this->___handle_0;
			intptr_t L_1 = __this->___handle_0;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_object_diagnostics_session_release_mE1BC96B20B4FE1AEC6B77757DE0588CA0A44D641(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			// this.handle = IntPtr.Zero;
			intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			__this->___handle_0 = L_3;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::CloseAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ObjectDiagnosticsSession_CloseAsync_m64DE0FAC87A5BADDC060BB76F038429D07CAA38D (ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* __this, String_t* ___diagnosticsFilePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_m0458C1EFEA1FB623D22DF5DFD11117AD8D2B5787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___diagnosticsFilePath0;
		(&V_0)->___diagnosticsFilePath_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___diagnosticsFilePath_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_m0458C1EFEA1FB623D22DF5DFD11117AD8D2B5787(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_m0458C1EFEA1FB623D22DF5DFD11117AD8D2B5787_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::UploadDiagnosticsAsync(System.String,Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* ObjectDiagnosticsSession_UploadDiagnosticsAsync_mA7F1F022477FF74A615BAC27C55127FD664B00D6 (String_t* ___diagnosticsFilePath0, ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* ___objectAnchorsSession1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m66D617E1A0A1614427855E805A9065579E9C4612_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_mE30179A4D8AD044ADE484A51938988CEAEDBA916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m5E11FB1F0C8CB8935A83BCAB349253F33B8B1810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m66D617E1A0A1614427855E805A9065579E9C4612(AsyncTaskMethodBuilder_1_Create_m66D617E1A0A1614427855E805A9065579E9C4612_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___diagnosticsFilePath0;
		(&V_0)->___diagnosticsFilePath_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___diagnosticsFilePath_2), (void*)L_1);
		ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* L_2 = ___objectAnchorsSession1;
		(&V_0)->___objectAnchorsSession_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___objectAnchorsSession_3), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_mE30179A4D8AD044ADE484A51938988CEAEDBA916(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_mE30179A4D8AD044ADE484A51938988CEAEDBA916_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m5E11FB1F0C8CB8935A83BCAB349253F33B8B1810(L_4, AsyncTaskMethodBuilder_1_get_Task_m5E11FB1F0C8CB8935A83BCAB349253F33B8B1810_RuntimeMethod_var);
		return L_5;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD757786A395F5408516AE5C6CD3FCB8E8BE9CDB8 (ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDiagnosticsSession__cctor_m245EC59596F188A5B9CA7E95A3CCE41A6873E47D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static ObjectDiagnosticsSession() => ObjectObserver.EnsureAppDomainUnloadHandlingInitialized();
		il2cpp_codegen_runtime_class_init_inline(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m3E0390043703CF76D47C4C4DB5518EAA99C4F135(NULL);
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
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseAsyncU3Ed__8_MoveNext_m7CF6D37DD9AC71291F67A804BD4D31D969C21DE1 (U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_mBC19FDCA3BEDC2CFEB1CFA5C0D0C194606A6A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0021_1;
			}
		}
		{
			// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(System.Threading.CancellationToken.None))
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
			L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
			Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_4;
			L_4 = Promise_Create_m1A1C563E7F5655DF7740491112ED981429EB8C43(L_3, NULL);
			__this->___U3Cpromise_U3E5__2_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cpromise_U3E5__2_4), (void*)L_4);
		}

IL_0021_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00ab_1:
				{// begin finally (depth: 2)
					{
						int32_t L_5 = V_0;
						if ((((int32_t)L_5) >= ((int32_t)0)))
						{
							goto IL_00c2_1;
						}
					}
					{
						Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_6 = __this->___U3Cpromise_U3E5__2_4;
						if (!L_6)
						{
							goto IL_00c2_1;
						}
					}
					{
						Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_7 = __this->___U3Cpromise_U3E5__2_4;
						NullCheck(L_7);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
					}

IL_00c2_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_8 = V_0;
					if (!L_8)
					{
						goto IL_0086_2;
					}
				}
				{
					// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary.aoa_object_diagnostics_session_close_async(this.handle, diagnosticsFilePath, promise_.Handle));
					ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* L_9 = V_1;
					NullCheck(L_9);
					intptr_t L_10 = L_9->___handle_0;
					ObjectDiagnosticsSession_tBA16BF52E45447DCAC5E6908E170DC009A824A30* L_11 = V_1;
					NullCheck(L_11);
					intptr_t L_12 = L_11->___handle_0;
					String_t* L_13 = __this->___diagnosticsFilePath_3;
					Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_14 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_14);
					PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_15 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)L_14)->___Handle_6;
					int32_t L_16;
					L_16 = NativeLibrary_aoa_object_diagnostics_session_close_async_m10D362F37C1641A8CC52CD122A3318EE2BB1AA3D(L_12, L_13, L_15, NULL);
					NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_10, L_16, NULL);
					// await promise_.Task;
					Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_17 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_17);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
					L_18 = Promise_get_Task_m035C3D97953EA1145C38819C2AA5A276B59B94D8(L_17, NULL);
					NullCheck(L_18);
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_19;
					L_19 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_18, NULL);
					V_2 = L_19;
					bool L_20;
					L_20 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
					if (L_20)
					{
						goto IL_00a2_2;
					}
				}
				{
					int32_t L_21 = 0;
					V_0 = L_21;
					__this->___U3CU3E1__state_0 = L_21;
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_22 = V_2;
					__this->___U3CU3Eu__1_5 = L_22;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_23 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_mBC19FDCA3BEDC2CFEB1CFA5C0D0C194606A6A4A6(L_23, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2_mBC19FDCA3BEDC2CFEB1CFA5C0D0C194606A6A4A6_RuntimeMethod_var);
					goto IL_00f6;
				}

IL_0086_2:
				{
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_24 = __this->___U3CU3Eu__1_5;
					V_2 = L_24;
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_25 = (&__this->___U3CU3Eu__1_5);
					il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
					int32_t L_26 = (-1);
					V_0 = L_26;
					__this->___U3CU3E1__state_0 = L_26;
				}

IL_00a2_2:
				{
					TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
					// }
					goto IL_00c3_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00c3_1:
		{
			__this->___U3Cpromise_U3E5__2_4 = (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cpromise_U3E5__2_4), (void*)(Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1*)NULL);
			goto IL_00e3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cc;
		}
		throw e;
	}

CATCH_00cc:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_28 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_27, L_28, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f6;
	}// end catch (depth: 1)

IL_00e3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_29 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_29, NULL);
	}

IL_00f6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCloseAsyncU3Ed__8_MoveNext_m7CF6D37DD9AC71291F67A804BD4D31D969C21DE1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2*>(__this + _offset);
	U3CCloseAsyncU3Ed__8_MoveNext_m7CF6D37DD9AC71291F67A804BD4D31D969C21DE1(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseAsyncU3Ed__8_SetStateMachine_m1EBDAC81B48839A74C4037D4F72EF58F58A90A51 (U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCloseAsyncU3Ed__8_SetStateMachine_m1EBDAC81B48839A74C4037D4F72EF58F58A90A51_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCloseAsyncU3Ed__8_t807E36247BBFA65A6FEE97CD9A36BE4F8305FCC2*>(__this + _offset);
	U3CCloseAsyncU3Ed__8_SetStateMachine_m1EBDAC81B48839A74C4037D4F72EF58F58A90A51(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE695E00E70F6B0E9CAB4261FA51A9B3B259041B4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE* L_0 = (U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE*)il2cpp_codegen_object_new(U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m01AFDB8C77FCC1C78E22AD3A80BA2B580DD9DD05(L_0, NULL);
		((U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01AFDB8C77FCC1C78E22AD3A80BA2B580DD9DD05 (U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::<UploadDiagnosticsAsync>b__9_0(Microsoft.Azure.ObjectAnchors.PackedValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_m6FF931079B8C65C1BF697B879860B3173B2FAC54 (U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE* __this, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___pv_0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => (Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus)(int)(long)(pv_), System.Threading.CancellationToken.None))
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 L_0 = ___pv_0;
		il2cpp_codegen_runtime_class_init_inline(PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = PackedValue_op_Implicit_m6A4FB0AF18928E5FB960A49CAECC4300013CF7D6(L_0, NULL);
		return (int32_t)(((int32_t)L_1));
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
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mCC3E081BD79DE5465CC3F4FAA59C990A9F2CF422 (U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_m12D17F15356746A684F7F4704DA45364BE239B8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m6A2ECAE9BFEE5F71A54E6A447AF1D40F19CAE6F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_get_Task_mB367383462E6575117DA1AD2B55001947AA3FEC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_Create_TisObjectDiagnosticsUploadStatus_t0239212469F17F9A6909C3510179A29E27928DA2_m8BC0C1DEB531145E01A82F1FB1E9BE6CDA7A271A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m310753FCFC36330CC205FB62006ED45F4F5FBD77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE141C4D77C22133392CFDFCDB022FD89CAAFDAF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m0671F069CF34A6C300AC23D45B037150062B0E13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_m6FF931079B8C65C1BF697B879860B3173B2FAC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* G_B4_0 = NULL;
	U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* G_B4_1 = NULL;
	Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* G_B3_0 = NULL;
	U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* G_B3_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B8_0 = NULL;
	intptr_t G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	String_t* G_B10_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0039_1;
			}
		}
		{
			// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => (Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus)(int)(long)(pv_), System.Threading.CancellationToken.None))
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var);
			Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* L_2 = ((U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
			Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* L_3 = L_2;
			G_B3_0 = L_3;
			G_B3_1 = __this;
			if (L_3)
			{
				G_B4_0 = L_3;
				G_B4_1 = __this;
				goto IL_002a_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var);
			U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE* L_4 = ((U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* L_5 = (Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80*)il2cpp_codegen_object_new(Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Func_2__ctor_mB65A73963077FF8476A27691D24555FF1C840440(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_m6FF931079B8C65C1BF697B879860B3173B2FAC54_RuntimeMethod_var), NULL);
			Func_2_t6E0E70C2FBE6C814F262697191FA5BBD4F637C80* L_6 = L_5;
			((U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E61E52D4F0CC5D4FC6E5262F3BF8D4B5EB171BE_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_6);
			G_B4_0 = L_6;
			G_B4_1 = G_B3_1;
		}

IL_002a_1:
		{
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7;
			L_7 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
			Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A* L_8;
			L_8 = Promise_Create_TisObjectDiagnosticsUploadStatus_t0239212469F17F9A6909C3510179A29E27928DA2_m8BC0C1DEB531145E01A82F1FB1E9BE6CDA7A271A(G_B4_0, L_7, Promise_Create_TisObjectDiagnosticsUploadStatus_t0239212469F17F9A6909C3510179A29E27928DA2_m8BC0C1DEB531145E01A82F1FB1E9BE6CDA7A271A_RuntimeMethod_var);
			G_B4_1->___U3Cpromise_U3E5__2_4 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3Cpromise_U3E5__2_4), (void*)L_8);
		}

IL_0039_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00d2_1:
				{// begin finally (depth: 2)
					{
						int32_t L_9 = V_0;
						if ((((int32_t)L_9) >= ((int32_t)0)))
						{
							goto IL_00e9_1;
						}
					}
					{
						Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A* L_10 = __this->___U3Cpromise_U3E5__2_4;
						if (!L_10)
						{
							goto IL_00e9_1;
						}
					}
					{
						Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A* L_11 = __this->___U3Cpromise_U3E5__2_4;
						NullCheck(L_11);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
					}

IL_00e9_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_12 = V_0;
					if (!L_12)
					{
						goto IL_00ac_2;
					}
				}
				{
					// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary.aoa_object_diagnostics_session_upload_diagnostics_async(diagnosticsFilePath, objectAnchorsSession != null ? objectAnchorsSession.handle : IntPtr.Zero, promise_.Handle));
					String_t* L_13 = __this->___diagnosticsFilePath_2;
					ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* L_14 = __this->___objectAnchorsSession_3;
					G_B8_0 = L_13;
					if (L_14)
					{
						G_B9_0 = L_13;
						goto IL_0052_2;
					}
				}
				{
					intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					G_B10_0 = L_15;
					G_B10_1 = G_B8_0;
					goto IL_005d_2;
				}

IL_0052_2:
				{
					ObjectAnchorsSession_tF65C263748842139CBC0F87292849FF3D16CAF71* L_16 = __this->___objectAnchorsSession_3;
					NullCheck(L_16);
					intptr_t L_17 = L_16->___handle_0;
					G_B10_0 = L_17;
					G_B10_1 = G_B9_0;
				}

IL_005d_2:
				{
					Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A* L_18 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_18);
					PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_19 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)L_18)->___Handle_6;
					int32_t L_20;
					L_20 = NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m9B7D05843765CA480E30BF3DAB662B5205330634(G_B10_1, G_B10_0, L_19, NULL);
					NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413(L_20, NULL);
					// return await promise_.Task;
					Promise_1_t3739AAA700D362F011C5D6531C154D39F12AB49A* L_21 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_21);
					Task_1_tA0FA737864E6B2F35F76DFC25D8052FA2370BA80* L_22;
					L_22 = Promise_1_get_Task_mB367383462E6575117DA1AD2B55001947AA3FEC2(L_21, Promise_1_get_Task_mB367383462E6575117DA1AD2B55001947AA3FEC2_RuntimeMethod_var);
					NullCheck(L_22);
					TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602 L_23;
					L_23 = Task_1_GetAwaiter_m0671F069CF34A6C300AC23D45B037150062B0E13(L_22, Task_1_GetAwaiter_m0671F069CF34A6C300AC23D45B037150062B0E13_RuntimeMethod_var);
					V_2 = L_23;
					bool L_24;
					L_24 = TaskAwaiter_1_get_IsCompleted_mE141C4D77C22133392CFDFCDB022FD89CAAFDAF2((&V_2), TaskAwaiter_1_get_IsCompleted_mE141C4D77C22133392CFDFCDB022FD89CAAFDAF2_RuntimeMethod_var);
					if (L_24)
					{
						goto IL_00c8_2;
					}
				}
				{
					int32_t L_25 = 0;
					V_0 = L_25;
					__this->___U3CU3E1__state_0 = L_25;
					TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602 L_26 = V_2;
					__this->___U3CU3Eu__1_5 = L_26;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* L_27 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_m12D17F15356746A684F7F4704DA45364BE239B8B(L_27, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602_TisU3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489_m12D17F15356746A684F7F4704DA45364BE239B8B_RuntimeMethod_var);
					goto IL_0115;
				}

IL_00ac_2:
				{
					TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602 L_28 = __this->___U3CU3Eu__1_5;
					V_2 = L_28;
					TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602* L_29 = (&__this->___U3CU3Eu__1_5);
					il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_1_t9B4E88A2453935C74548BA3A6A674C695779E602));
					int32_t L_30 = (-1);
					V_0 = L_30;
					__this->___U3CU3E1__state_0 = L_30;
				}

IL_00c8_2:
				{
					int32_t L_31;
					L_31 = TaskAwaiter_1_GetResult_m310753FCFC36330CC205FB62006ED45F4F5FBD77((&V_2), TaskAwaiter_1_GetResult_m310753FCFC36330CC205FB62006ED45F4F5FBD77_RuntimeMethod_var);
					V_1 = L_31;
					goto IL_0101;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ea;
		}
		throw e;
	}

CATCH_00ea:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mD082D98CAF72598019B3E4A93F80695370DB02F0(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mD082D98CAF72598019B3E4A93F80695370DB02F0_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0115;
	}// end catch (depth: 1)

IL_0101:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* L_34 = (&__this->___U3CU3Et__builder_1);
		int32_t L_35 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m6A2ECAE9BFEE5F71A54E6A447AF1D40F19CAE6F3(L_34, L_35, AsyncTaskMethodBuilder_1_SetResult_m6A2ECAE9BFEE5F71A54E6A447AF1D40F19CAE6F3_RuntimeMethod_var);
	}

IL_0115:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mCC3E081BD79DE5465CC3F4FAA59C990A9F2CF422_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489*>(__this + _offset);
	U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mCC3E081BD79DE5465CC3F4FAA59C990A9F2CF422(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m3291BFA4E3406141D6098524EDE2CACBA5E1AAD7 (U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m2B7A3B82DCAF057647278B109FCA8DAA813B1635_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tB910D3FD357D905ECB369DF6A51476BCBF0AEC7A* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m2B7A3B82DCAF057647278B109FCA8DAA813B1635(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m2B7A3B82DCAF057647278B109FCA8DAA813B1635_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m3291BFA4E3406141D6098524EDE2CACBA5E1AAD7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUploadDiagnosticsAsyncU3Ed__9_t315F723C0F237B04411D93C78E41315C7ED8F489*>(__this + _offset);
	U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m3291BFA4E3406141D6098524EDE2CACBA5E1AAD7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_addref_m35B0CF90736E18CD1144EFF0CCBD9C09EC5A9C8B (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_spatial_graph_placement_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_spatial_graph_placement_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_compute_origin_for_view(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_compute_origin_for_view_mA4823B64F20E55AF8A0C539698FC4AC331BB1E8A (intptr_t ___handle0, SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285 ___view_in_world1, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ___world_to_reference2, SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285* ___result3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072, SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285) + sizeof(Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072) + sizeof(SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_spatial_graph_placement_compute_origin_for_view", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_spatial_graph_placement_compute_origin_for_view)(___handle0, ___view_in_world1, ___world_to_reference2, ___result3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___view_in_world1, ___world_to_reference2, ___result3);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_get_control_points(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_get_control_points_mBF9935D04F470A8C1C285C428686BAC59F65CD2A (intptr_t ___handle0, SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503** ___result1, int32_t* ___result_count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605**, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605**) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_spatial_graph_placement_get_control_points", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result1' to native representation
	SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605* ____result1_empty = NULL;
	SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605** ____result1_marshaled = &____result1_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_spatial_graph_placement_get_control_points)(___handle0, ____result1_marshaled, ___result_count2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____result1_marshaled, ___result_count2);
	#endif

	// Marshaling of parameter '___result1' back from native representation
	SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* _____result1_marshaled_unmarshaled_dereferenced = NULL;
	if (*____result1_marshaled != NULL)
	{
		if (_____result1_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____result1_marshaled_unmarshaled_dereferenced = reinterpret_cast<SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503*>((SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503*)SZArrayNew(SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503_il2cpp_TypeInfo_var, static_cast<int32_t>(*___result_count2)));
		}
		il2cpp_array_size_t _arrayLength = (_____result1_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____result1_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____result1_marshaled)[i]);
		}
	}
	*___result1 = _____result1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___result1, (void*)____result1_marshaled);

	// Marshaling cleanup of parameter '___result1' native representation
	if (*____result1_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____result1_marshaled);
		*____result1_marshaled = NULL;
	}

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_release_m46A77788AB5EFD5A878BC508DCAFDE8D6107F2D4 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_spatial_graph_placement_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_spatial_graph_placement_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_create(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[],System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_try_create_m29DC8959620CDD5F06B672A8874BD82DE47F9642 (SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 ___reference_coordinate_system0, SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* ___control_points1, int32_t ___control_points_count2, intptr_t* ___result3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96, SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605*, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_spatial_graph_placement_try_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___control_points1' to native representation
	SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605* ____control_points1_marshaled = NULL;
	if (___control_points1 != NULL)
	{
		____control_points1_marshaled = reinterpret_cast<SpatialGraphPlacementControlPoint_t3A71945028A5D1C21773ECEA4B4E8A93DF98E605*>((___control_points1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_spatial_graph_placement_try_create)(___reference_coordinate_system0, ____control_points1_marshaled, ___control_points_count2, ___result3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___reference_coordinate_system0, ____control_points1_marshaled, ___control_points_count2, ___result3);
	#endif

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_persist_static_nodes_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_try_persist_static_nodes_async_m7F3FB2B867B1491A56F334616792DF3C3DE2915E (intptr_t ___handle0, String_t* ___name1, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_spatial_graph_placement_try_persist_static_nodes_async_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name1' to native representation
	Il2CppChar* ____name1_marshaled = NULL;
	if (___name1 != NULL)
	{
		____name1_marshaled = &___name1->____firstChar_5;
	}

	// Marshaling of parameter '___promiseHandle2' to native representation
	void* ____promiseHandle2_marshaled = NULL;
	if (___promiseHandle2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("promiseHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____promiseHandle2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___promiseHandle2, (&___safeHandle_reference_incremented_for____promiseHandle2), NULL);
	____promiseHandle2_marshaled = reinterpret_cast<void*>((___promiseHandle2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_spatial_graph_placement_try_persist_static_nodes_async_wide)(___handle0, ____name1_marshaled, ____promiseHandle2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____name1_marshaled, ____promiseHandle2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___promiseHandle2' native representation
	if (___safeHandle_reference_incremented_for____promiseHandle2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___promiseHandle2, NULL);
	}

	return returnValue;
}
// Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_unpersist_static_nodes_async(System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_aoa_spatial_graph_placement_unpersist_static_nodes_async_m6B017BDBC317585C226943851EE72A25485C0DD4 (String_t* ___name0, PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* ___promiseHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Il2CppChar*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.Azure.ObjectAnchors.dll"), "aoa_spatial_graph_placement_unpersist_static_nodes_async_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___name0' to native representation
	Il2CppChar* ____name0_marshaled = NULL;
	if (___name0 != NULL)
	{
		____name0_marshaled = &___name0->____firstChar_5;
	}

	// Marshaling of parameter '___promiseHandle1' to native representation
	void* ____promiseHandle1_marshaled = NULL;
	if (___promiseHandle1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("promiseHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____promiseHandle1 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___promiseHandle1, (&___safeHandle_reference_incremented_for____promiseHandle1), NULL);
	____promiseHandle1_marshaled = reinterpret_cast<void*>((___promiseHandle1)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_Azure_ObjectAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(aoa_spatial_graph_placement_unpersist_static_nodes_async_wide)(____name0_marshaled, ____promiseHandle1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____name0_marshaled, ____promiseHandle1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___promiseHandle1' native representation
	if (___safeHandle_reference_incremented_for____promiseHandle1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___promiseHandle1, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphPlacement__ctor_mCAF85DC29B2FF4091A3E3EEB97ACC006035765A0 (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method) 
{
	{
		// protected SpatialGraphPlacement(IntPtr ahandle, bool transfer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->___handle_0 = L_0;
		// if (!transfer)
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary.aoa_spatial_graph_placement_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_aoa_spatial_graph_placement_addref_m35B0CF90736E18CD1144EFF0CCBD9C09EC5A9C8B(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m3737BC5B29433AFB44EC0936F411D0D415364285 (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* __this, const RuntimeMethod* method) 
{
	{
		// Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary.aoa_spatial_graph_placement_release(this.handle);
		intptr_t L_0 = __this->___handle_0;
		int32_t L_1;
		L_1 = NativeLibrary_aoa_spatial_graph_placement_release_m46A77788AB5EFD5A878BC508DCAFDE8D6107F2D4(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphPlacement_Finalize_mADCF36AD87830BC516111B150127225967396042 (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary.aoa_spatial_graph_placement_release(this.handle));
			intptr_t L_0 = __this->___handle_0;
			intptr_t L_1 = __this->___handle_0;
			int32_t L_2;
			L_2 = NativeLibrary_aoa_spatial_graph_placement_release_m46A77788AB5EFD5A878BC508DCAFDE8D6107F2D4(L_1, NULL);
			NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
			// this.handle = IntPtr.Zero;
			intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			__this->___handle_0 = L_3;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::ComputeOriginForView(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285 SpatialGraphPlacement_ComputeOriginForView_m41D839016E9954EEC6A96A0966E4905DE06F115D (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* __this, SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285 ___viewInWorld0, Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ___worldToReference1, const RuntimeMethod* method) 
{
	SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary.aoa_spatial_graph_placement_compute_origin_for_view(this.handle, viewInWorld, worldToReference, out result));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285 L_2 = ___viewInWorld0;
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 L_3 = ___worldToReference1;
		int32_t L_4;
		L_4 = NativeLibrary_aoa_spatial_graph_placement_compute_origin_for_view_mA4823B64F20E55AF8A0C539698FC4AC331BB1E8A(L_1, L_2, L_3, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_4, NULL);
		// return result;
		SpatialPose_t17F98D9B6C5AE0C4F72CD8DE080B55F8EDAFE285 L_5 = V_0;
		return L_5;
	}
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::TryCreate(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* SpatialGraphPlacement_TryCreate_m69189E59B042BAF5EC8E47E69B8BE5A34E054BCD (SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 ___referenceCoordinateSystem0, SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* ___controlPoints1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* G_B2_0 = NULL;
	SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* G_B1_0 = NULL;
	SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	int32_t G_B3_0 = 0;
	SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* G_B3_1 = NULL;
	SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary.aoa_spatial_graph_placement_try_create(referenceCoordinateSystem, controlPoints, controlPoints?.Length ?? 0, out result_handle));
		SpatialGraphCoordinateSystem_tD8BD7E3437757416A25D198EBBF22C255FA14D96 L_0 = ___referenceCoordinateSystem0;
		SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* L_1 = ___controlPoints1;
		SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* L_2 = ___controlPoints1;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000b;
	}

IL_0008:
	{
		SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* L_3 = ___controlPoints1;
		NullCheck(L_3);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000b:
	{
		int32_t L_4;
		L_4 = NativeLibrary_aoa_spatial_graph_placement_try_create_m29DC8959620CDD5F06B672A8874BD82DE47F9642(G_B3_2, G_B3_1, G_B3_0, (&V_0), NULL);
		NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413(L_4, NULL);
		// result_object = (result_handle != IntPtr.Zero) ? Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement.GetOrCreateInstance(result_handle, transfer: true) : null;
		intptr_t L_5 = V_0;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_7;
		L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0026;
		}
	}
	{
		return (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525*)NULL;
	}

IL_0026:
	{
		intptr_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_il2cpp_TypeInfo_var);
		SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_9;
		L_9 = SpatialGraphPlacement_GetOrCreateInstance_m5D2BE295B694798DF7C1EC463A3A0208B411C79C(L_8, (bool)1, NULL);
		// return result_object;
		return L_9;
	}
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[] Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetControlPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* SpatialGraphPlacement_GetControlPoints_m733FCE0F8F6ED17985106236419F1D60E782294C (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* __this, const RuntimeMethod* method) 
{
	SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary.aoa_spatial_graph_placement_get_control_points(this.handle, out result, out result_length));
		intptr_t L_0 = __this->___handle_0;
		intptr_t L_1 = __this->___handle_0;
		int32_t L_2;
		L_2 = NativeLibrary_aoa_spatial_graph_placement_get_control_points_mBF9935D04F470A8C1C285C428686BAC59F65CD2A(L_1, (&V_0), (&V_1), NULL);
		NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_0, L_2, NULL);
		// return result;
		SpatialGraphPlacementControlPointU5BU5D_tE1F145C4E91790471DDD4586FB0C5E66834C4503* L_3 = V_0;
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::TryPersistStaticNodesAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* SpatialGraphPlacement_TryPersistStaticNodesAsync_m579728FBE3AA46D73CDEA5E991E0F4641714BE32 (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_m9F96915A2337BE8DA159065E2A7B36D4FF88EC56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D(AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___name0;
		(&V_0)->___name_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_m9F96915A2337BE8DA159065E2A7B36D4FF88EC56(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_m9F96915A2337BE8DA159065E2A7B36D4FF88EC56_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_3, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::UnpersistStaticNodesAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SpatialGraphPlacement_UnpersistStaticNodesAsync_mD573A9CCD34042B11C821A260C8A7290FCF8C67A (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mEDB1D5D2D3F15664E275522650D22376DC4D6729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___name0;
		(&V_0)->___name_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mEDB1D5D2D3F15664E275522650D22376DC4D6729(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mEDB1D5D2D3F15664E275522650D22376DC4D6729_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.UInt64 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD13D07620D525A42AF521999197ACDBA81AB0417 (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* __this, const RuntimeMethod* method) 
{
	{
		// ulong ICachedObject.Cookie => ProjectedObjectHelpers.ConvertHandleToCookie(this.handle);
		intptr_t L_0 = __this->___handle_0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		return L_1;
	}
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* SpatialGraphPlacement_GetOrCreateInstance_m5D2BE295B694798DF7C1EC463A3A0208B411C79C (intptr_t ___handle0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetOrCreateInstance(ProjectedObjectHelpers.ConvertHandleToCookie(handle), transfer);
		intptr_t L_0 = ___handle0;
		uint64_t L_1;
		L_1 = ProjectedObjectHelpers_ConvertHandleToCookie_mDA4DDF957D03BAED7519D8D8A6CFFEAF6609C502(L_0, NULL);
		bool L_2 = ___transfer1;
		il2cpp_codegen_runtime_class_init_inline(SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_il2cpp_TypeInfo_var);
		SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_3;
		L_3 = SpatialGraphPlacement_GetOrCreateInstance_mE4DF4D34D18C5AF7A3C49B5C11CFB0477CB4A813(L_1, L_2, NULL);
		return L_3;
	}
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* SpatialGraphPlacement_GetOrCreateInstance_mE4DF4D34D18C5AF7A3C49B5C11CFB0477CB4A813 (uint64_t ___cookie0, bool ___transfer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_GetOrCreate_TisSpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_m644A9C42097B75CB6C69F172520B4AC3C5F91655_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_mEE5281FF9369093FD72678A5719514A85D083DD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* V_0 = NULL;
	SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* L_0 = (U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m6AD62AB371A913601CC7347C6BDF2E0040D15679(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* L_1 = V_0;
		bool L_2 = ___transfer1;
		NullCheck(L_1);
		L_1->___transfer_2 = L_2;
		// IntPtr handle = ProjectedObjectHelpers.ConvertCookieToHandle(cookie);
		U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* L_3 = V_0;
		uint64_t L_4 = ___cookie0;
		intptr_t L_5;
		L_5 = ProjectedObjectHelpers_ConvertCookieToHandle_m91D94EC574C0FAE4A1F6009BBB4141BA1059CF3C(L_4, NULL);
		NullCheck(L_3);
		L_3->___handle_1 = L_5;
		// bool created = false;
		U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* L_6 = V_0;
		NullCheck(L_6);
		L_6->___created_0 = (bool)0;
		// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement result = Microsoft.Azure.ObjectAnchors.ProjectedObjectCache.GetOrCreate<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>(
		//     cookie,
		//     _ =>
		//     {
		//         created = true;
		//         return new Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement(handle, transfer: transfer);
		//     }
		// );
		uint64_t L_7 = ___cookie0;
		U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* L_8 = V_0;
		Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B* L_9 = (Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B*)il2cpp_codegen_object_new(Func_2_tC173F3BB15F62FB14AC8707DF74A1E42B22FA87B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m4CB9AF189F8241B24A59077350F7880CF989E32B(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_mEE5281FF9369093FD72678A5719514A85D083DD5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ProjectedObjectCache_t9E057B99D7CA87B1188E36416C8F75C946445C96_il2cpp_TypeInfo_var);
		SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_10;
		L_10 = ProjectedObjectCache_GetOrCreate_TisSpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_m644A9C42097B75CB6C69F172520B4AC3C5F91655(L_7, L_9, ProjectedObjectCache_GetOrCreate_TisSpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_m644A9C42097B75CB6C69F172520B4AC3C5F91655_RuntimeMethod_var);
		V_1 = L_10;
		// if (!created && transfer)
		U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___created_0;
		U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->___transfer_2;
		if (!((int32_t)(((((int32_t)L_12) == ((int32_t)0))? 1 : 0)&(int32_t)L_14)))
		{
			goto IL_004b;
		}
	}
	{
		// ((IReferenceCounted)result).DecreaseReferenceCount();
		SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_15 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.Azure.ObjectAnchors.IReferenceCounted::DecreaseReferenceCount() */, IReferenceCounted_tA72091E2D66B237D68C5DB746A839E041868B775_il2cpp_TypeInfo_var, L_15);
	}

IL_004b:
	{
		// return result;
		SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_16 = V_1;
		return L_16;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphPlacement__cctor_m426FCEC2EA2CEF4EF0A04DC298B6BFC1D053CAED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static SpatialGraphPlacement() => ObjectObserver.EnsureAppDomainUnloadHandlingInitialized();
		il2cpp_codegen_runtime_class_init_inline(ObjectObserver_t95A678390E1E145BC21B6E9FBB87955FB00CEC61_il2cpp_TypeInfo_var);
		ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m3E0390043703CF76D47C4C4DB5518EAA99C4F135(NULL);
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
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6AF8471B3CF512C3C572BAE3C6AEAB203D86CB14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855* L_0 = (U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855*)il2cpp_codegen_object_new(U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAE2018794C8304BC79225DA23728B01E817604E3(L_0, NULL);
		((U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE2018794C8304BC79225DA23728B01E817604E3 (U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::<TryPersistStaticNodesAsync>b__8_0(Microsoft.Azure.ObjectAnchors.PackedValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_m1BB04D357781B22934D2928201359A820182E452 (U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855* __this, PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 ___pv_0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => ((long)(pv_)) != 0, System.Threading.CancellationToken.None))
		PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9 L_0 = ___pv_0;
		il2cpp_codegen_runtime_class_init_inline(PackedValue_t4BFFEFD50AEA9FDF74D18C984BAAC148D2D7B3A9_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = PackedValue_op_Implicit_m6A4FB0AF18928E5FB960A49CAECC4300013CF7D6(L_0, NULL);
		return (bool)((!(((uint64_t)L_1) <= ((uint64_t)((int64_t)0))))? 1 : 0);
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
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m17AAD994DEA34FBC3E7002CD73E1D41AA982FB01 (U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_mF7755EF298529822CFA5217E5A71DC0F1D8DCB9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_get_Task_mD621B8B22BCEF83D92E817161CEDE0256FCD9F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9E998C4329D57B4B440BC6EB7BD138BEC2CFA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_m1BB04D357781B22934D2928201359A820182E452_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* V_1 = NULL;
	bool V_2 = false;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* G_B4_0 = NULL;
	U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* G_B4_1 = NULL;
	Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* G_B3_0 = NULL;
	U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0040_1;
			}
		}
		{
			// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(pv_ => ((long)(pv_)) != 0, System.Threading.CancellationToken.None))
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var);
			Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* L_3 = ((U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
			Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* L_4 = L_3;
			G_B3_0 = L_4;
			G_B3_1 = __this;
			if (L_4)
			{
				G_B4_0 = L_4;
				G_B4_1 = __this;
				goto IL_0031_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var);
			U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855* L_5 = ((U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* L_6 = (Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3*)il2cpp_codegen_object_new(Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			Func_2__ctor_m56DCABD7C62878BE0D748CFFBFB3D0710A9BBB6B(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_m1BB04D357781B22934D2928201359A820182E452_RuntimeMethod_var), NULL);
			Func_2_t488F707CA69DA17EA300A8BA2B67435EE44F51C3* L_7 = L_6;
			((U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB90266CAFA1A4DC8AB8DC432579491A14655855_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_7);
			G_B4_0 = L_7;
			G_B4_1 = G_B3_1;
		}

IL_0031_1:
		{
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8;
			L_8 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
			Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* L_9;
			L_9 = Promise_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9E998C4329D57B4B440BC6EB7BD138BEC2CFA9(G_B4_0, L_8, Promise_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9E998C4329D57B4B440BC6EB7BD138BEC2CFA9_RuntimeMethod_var);
			G_B4_1->___U3Cpromise_U3E5__2_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3Cpromise_U3E5__2_4), (void*)L_9);
		}

IL_0040_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00cb_1:
				{// begin finally (depth: 2)
					{
						int32_t L_10 = V_0;
						if ((((int32_t)L_10) >= ((int32_t)0)))
						{
							goto IL_00e2_1;
						}
					}
					{
						Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* L_11 = __this->___U3Cpromise_U3E5__2_4;
						if (!L_11)
						{
							goto IL_00e2_1;
						}
					}
					{
						Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* L_12 = __this->___U3Cpromise_U3E5__2_4;
						NullCheck(L_12);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
					}

IL_00e2_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_13 = V_0;
					if (!L_13)
					{
						goto IL_00a5_2;
					}
				}
				{
					// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary.aoa_spatial_graph_placement_try_persist_static_nodes_async(this.handle, name, promise_.Handle));
					SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_14 = V_1;
					NullCheck(L_14);
					intptr_t L_15 = L_14->___handle_0;
					SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_16 = V_1;
					NullCheck(L_16);
					intptr_t L_17 = L_16->___handle_0;
					String_t* L_18 = __this->___name_3;
					Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* L_19 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_19);
					PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_20 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)L_19)->___Handle_6;
					int32_t L_21;
					L_21 = NativeLibrary_aoa_spatial_graph_placement_try_persist_static_nodes_async_m7F3FB2B867B1491A56F334616792DF3C3DE2915E(L_17, L_18, L_20, NULL);
					NativeLibraryHelpers_CheckStatus_m692706872F9D4B84D6A05633E75469FA4B9047E8(L_15, L_21, NULL);
					// return await promise_.Task;
					Promise_1_tF1C1F1C9C760C6CE3FA30B87C4B38C5FB176FB1B* L_22 = __this->___U3Cpromise_U3E5__2_4;
					NullCheck(L_22);
					Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_23;
					L_23 = Promise_1_get_Task_mD621B8B22BCEF83D92E817161CEDE0256FCD9F98(L_22, Promise_1_get_Task_mD621B8B22BCEF83D92E817161CEDE0256FCD9F98_RuntimeMethod_var);
					NullCheck(L_23);
					TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_24;
					L_24 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_23, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
					V_3 = L_24;
					bool L_25;
					L_25 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_3), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
					if (L_25)
					{
						goto IL_00c1_2;
					}
				}
				{
					int32_t L_26 = 0;
					V_0 = L_26;
					__this->___U3CU3E1__state_0 = L_26;
					TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_27 = V_3;
					__this->___U3CU3Eu__1_5 = L_27;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_28 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_mF7755EF298529822CFA5217E5A71DC0F1D8DCB9C(L_28, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C_mF7755EF298529822CFA5217E5A71DC0F1D8DCB9C_RuntimeMethod_var);
					goto IL_0110;
				}

IL_00a5_2:
				{
					TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_29 = __this->___U3CU3Eu__1_5;
					V_3 = L_29;
					TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_30 = (&__this->___U3CU3Eu__1_5);
					il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
					int32_t L_31 = (-1);
					V_0 = L_31;
					__this->___U3CU3E1__state_0 = L_31;
				}

IL_00c1_2:
				{
					bool L_32;
					L_32 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_3), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
					V_2 = L_32;
					goto IL_00fc;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e3;
		}
		throw e;
	}

CATCH_00e3:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_33 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_34 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_33, L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0110;
	}// end catch (depth: 1)

IL_00fc:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_35 = (&__this->___U3CU3Et__builder_1);
		bool L_36 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_35, L_36, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_0110:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m17AAD994DEA34FBC3E7002CD73E1D41AA982FB01_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C*>(__this + _offset);
	U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m17AAD994DEA34FBC3E7002CD73E1D41AA982FB01(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_mBF6933F15533A601839F4274F4CE51C85A5882BE (U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_mBF6933F15533A601839F4274F4CE51C85A5882BE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTryPersistStaticNodesAsyncU3Ed__8_t077E5ED1E4433CCEAB6013D4FCEF7BA67936CD0C*>(__this + _offset);
	U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_mBF6933F15533A601839F4274F4CE51C85A5882BE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mC9814C708197084546FC512AE63CE6724D41A012 (U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mF776502466C12E767C5664E0E9D6F42788CD9329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_001a_1;
			}
		}
		{
			// using (var promise_ = Microsoft.Azure.ObjectAnchors.Promise.Create(System.Threading.CancellationToken.None))
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2;
			L_2 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
			Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_3;
			L_3 = Promise_Create_m1A1C563E7F5655DF7740491112ED981429EB8C43(L_2, NULL);
			__this->___U3Cpromise_U3E5__2_3 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cpromise_U3E5__2_3), (void*)L_3);
		}

IL_001a_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0098_1:
				{// begin finally (depth: 2)
					{
						int32_t L_4 = V_0;
						if ((((int32_t)L_4) >= ((int32_t)0)))
						{
							goto IL_00af_1;
						}
					}
					{
						Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_5 = __this->___U3Cpromise_U3E5__2_3;
						if (!L_5)
						{
							goto IL_00af_1;
						}
					}
					{
						Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_6 = __this->___U3Cpromise_U3E5__2_3;
						NullCheck(L_6);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
					}

IL_00af_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_0073_2;
					}
				}
				{
					// Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers.CheckStatus(Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary.aoa_spatial_graph_placement_unpersist_static_nodes_async(name, promise_.Handle));
					String_t* L_8 = __this->___name_2;
					Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_9 = __this->___U3Cpromise_U3E5__2_3;
					NullCheck(L_9);
					PromiseSafeHandle_tB1B5DF39C767E9E81D1DF83B5D818A4D53C65FF3* L_10 = ((PromiseBase_t4E9049A8642C06CFD6220BDCA26FE7A262D0C9FD*)L_9)->___Handle_6;
					int32_t L_11;
					L_11 = NativeLibrary_aoa_spatial_graph_placement_unpersist_static_nodes_async_m6B017BDBC317585C226943851EE72A25485C0DD4(L_8, L_10, NULL);
					NativeLibraryHelpers_CheckStatus_m88D14D3D7F9A3E3D83EC6F31662AB18F6CDCA413(L_11, NULL);
					// await promise_.Task;
					Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1* L_12 = __this->___U3Cpromise_U3E5__2_3;
					NullCheck(L_12);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
					L_13 = Promise_get_Task_m035C3D97953EA1145C38819C2AA5A276B59B94D8(L_12, NULL);
					NullCheck(L_13);
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14;
					L_14 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_13, NULL);
					V_1 = L_14;
					bool L_15;
					L_15 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
					if (L_15)
					{
						goto IL_008f_2;
					}
				}
				{
					int32_t L_16 = 0;
					V_0 = L_16;
					__this->___U3CU3E1__state_0 = L_16;
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17 = V_1;
					__this->___U3CU3Eu__1_4 = L_17;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_18 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mF776502466C12E767C5664E0E9D6F42788CD9329(L_18, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12_mF776502466C12E767C5664E0E9D6F42788CD9329_RuntimeMethod_var);
					goto IL_00e3;
				}

IL_0073_2:
				{
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_19 = __this->___U3CU3Eu__1_4;
					V_1 = L_19;
					TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_20 = (&__this->___U3CU3Eu__1_4);
					il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
					int32_t L_21 = (-1);
					V_0 = L_21;
					__this->___U3CU3E1__state_0 = L_21;
				}

IL_008f_2:
				{
					TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
					// }
					goto IL_00b0_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00b0_1:
		{
			__this->___U3Cpromise_U3E5__2_3 = (Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cpromise_U3E5__2_3), (void*)(Promise_t2F4414C119ABF435715AEF6621609C211B6B92F1*)NULL);
			goto IL_00d0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b9;
		}
		throw e;
	}

CATCH_00b9:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_2;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e3;
	}// end catch (depth: 1)

IL_00d0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_24, NULL);
	}

IL_00e3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mC9814C708197084546FC512AE63CE6724D41A012_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12*>(__this + _offset);
	U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mC9814C708197084546FC512AE63CE6724D41A012(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m633EDD6564A7795DE8208877ADA07D9B7884B97A (U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m633EDD6564A7795DE8208877ADA07D9B7884B97A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUnpersistStaticNodesAsyncU3Ed__9_t492CA71230D2EA20FA626CD1CC02ECB20761BD12*>(__this + _offset);
	U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m633EDD6564A7795DE8208877ADA07D9B7884B97A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m6AD62AB371A913601CC7347C6BDF2E0040D15679 (U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::<GetOrCreateInstance>b__0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_mEE5281FF9369093FD72678A5719514A85D083DD5 (U3CU3Ec__DisplayClass13_0_t3B2F98FD34A594E39D883383ED7331218F9D1FD6* __this, uint64_t ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// created = true;
		__this->___created_0 = (bool)1;
		// return new Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement(handle, transfer: transfer);
		intptr_t L_0 = __this->___handle_1;
		bool L_1 = __this->___transfer_2;
		SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525* L_2 = (SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525*)il2cpp_codegen_object_new(SpatialGraphPlacement_t6A9E72DB7D86ECB48D292AC0AB4B0416C9C6C525_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SpatialGraphPlacement__ctor_mCAF85DC29B2FF4091A3E3EEB97ACC006035765A0(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinal_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectInstanceChangedHandler_Invoke_m5D75A1BCED45FFFC6E000F473328D68DCF07C9C4_inline (ObjectInstanceChangedHandler_t865A1FB4BCC07F76D79B1791DA92D6E4F1E66808* __this, RuntimeObject* ___sender0, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83* ___args1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ObjectInstanceChangedEventArgs_t55755ECCD785FC4D732C477296BA28C9A480EB83*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___args1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ((EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)__this->____task_0;
		return L_0;
	}
}

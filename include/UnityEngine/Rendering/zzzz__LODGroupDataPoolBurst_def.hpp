#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupDataPoolBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroupDataPoolBurst)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2;
}
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct LODGroupData;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst*, "UnityEngine.Rendering", "LODGroupDataPoolBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*, "UnityEngine.Rendering",
                    "LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*, "UnityEngine.Rendering",
                    "LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*, "UnityEngine.Rendering",
                    "LODGroupDataPoolBurst/FreeLODGroupData_000002F2$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*, "UnityEngine.Rendering",
                    "LODGroupDataPoolBurst/FreeLODGroupData_000002F2$PostfixBurstDelegate");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/FreeLODGroupData_000002F2$PostfixBurstDelegate
class CORDL_TYPE LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c688ac, size 0x128, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> destroyedLODGroupsID,
                                             ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                                             ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                                             ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
                                             ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_5);

  /// @brief Method EndInvoke, addr 0x6c689d4, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c68898, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> destroyedLODGroupsID,
                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                        ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles);

  static inline ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                         ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6c68818, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate(LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate(LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18291 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/FreeLODGroupData_000002F2$BurstDirectCall
class CORDL_TYPE LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6c68b04, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6c689f8, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c68124, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> destroyedLODGroupsID,
                               ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                               ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                               ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall(LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall(LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18292 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate
class CORDL_TYPE LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c68bb0, size 0x190, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> lodGroupsID,
                                             ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                                             ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
                                             ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                                             ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
                                             ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances,
                                             ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_7);

  /// @brief Method EndInvoke, addr 0x6c68d40, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c68b9c, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> lodGroupsID,
                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
                        ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
                        ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances);

  static inline ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                                           ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6c68b1c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18293 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall
class CORDL_TYPE LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6c68e70, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6c68d64, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c681ec, size 0xec, virtual false, abstract: false, final false
  static inline int32_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> lodGroupsID,
                               ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                               ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
                               ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                               ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
                               ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18294 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst
class CORDL_TYPE LODGroupDataPoolBurst : public ::System::Object {
public:
  // Declarations
  using AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall = ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall;

  using AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate = ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate;

  using FreeLODGroupData_000002F2$BurstDirectCall = ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall;

  using FreeLODGroupData_000002F2$PostfixBurstDelegate = ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate;

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.LODGroupDataPoolBurst::AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate))]
  /// @brief Method AllocateOrGetLODGroupDataInstances, addr 0x6c67f74, size 0x4, virtual false, abstract: false, final false
  static inline int32_t AllocateOrGetLODGroupDataInstances(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> lodGroupsID,
                                                           ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                                                           ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
                                                           ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                                                           ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
                                                           ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// @brief Method AllocateOrGetLODGroupDataInstances$BurstManaged, addr 0x6c68538, size 0x2e0, virtual false, abstract: false, final false
  static inline int32_t AllocateOrGetLODGroupDataInstances$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> lodGroupsID,
                                                                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                                                                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>> lodGroupCullingData,
                                                                        ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                                                                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles,
                                                                        ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupInstances);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.LODGroupDataPoolBurst::FreeLODGroupData_000002F2$PostfixBurstDelegate))]
  /// @brief Method FreeLODGroupData, addr 0x6c67f78, size 0x4, virtual false, abstract: false, final false
  static inline int32_t FreeLODGroupData(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> destroyedLODGroupsID,
                                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                                         ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                                         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// @brief Method FreeLODGroupData$BurstManaged, addr 0x6c682d8, size 0x260, virtual false, abstract: false, final false
  static inline int32_t FreeLODGroupData$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>> destroyedLODGroupsID,
                                                      ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>> lodGroupsData,
                                                      ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>> lodGroupDataHash,
                                                      ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>> freeLODGroupDataHandles);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupDataPoolBurst();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroupDataPoolBurst(LODGroupDataPoolBurst&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroupDataPoolBurst(LODGroupDataPoolBurst const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18295 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering

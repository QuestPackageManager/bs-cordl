#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystemBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystemBurst)
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
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelMultiHashMap_2;
}
namespace UnityEngine::Rendering {
struct CPUInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUPerCameraInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedRendererData;
}
namespace UnityEngine::Rendering {
struct InstanceAllocators;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst*, "UnityEngine.Rendering", "InstanceDataSystemBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall*, "UnityEngine.Rendering",
                    "InstanceDataSystemBurst/FreeInstances_000002A2$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate*, "UnityEngine.Rendering",
                    "InstanceDataSystemBurst/FreeInstances_000002A2$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*, "UnityEngine.Rendering",
                    "InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*, "UnityEngine.Rendering",
                    "InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*, "UnityEngine.Rendering",
                    "InstanceDataSystemBurst/ReallocateInstances_000002A0$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*, "UnityEngine.Rendering",
                    "InstanceDataSystemBurst/ReallocateInstances_000002A0$PostfixBurstDelegate");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/ReallocateInstances_000002A0$PostfixBurstDelegate
class CORDL_TYPE InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c632dc, size 0x248, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> rendererGroupIDs,
                                             /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> const> packedRendererData,
                                             /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceOffsets,
                                             /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceCounts,
                                             ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                                             ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                                             ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                                             ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>> instances,
                                             ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash,
                                             ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_12);

  /// @brief Method EndInvoke, addr 0x6c63524, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c632b4, size 0x28, virtual true, abstract: false, final false
  inline void Invoke(bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> rendererGroupIDs,
                     /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> const> packedRendererData,
                     /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceOffsets,
                     /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators,
                     ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                     ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>> instances,
                     ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  static inline ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                              ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6c63248, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate(InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate(InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18249 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/ReallocateInstances_000002A0$BurstDirectCall
class CORDL_TYPE InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6c6363c, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6c63530, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c62598, size 0x130, virtual false, abstract: false, final false
  static inline void Invoke(bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> rendererGroupIDs,
                            /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> const> packedRendererData,
                            /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceOffsets,
                            /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators,
                            ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                            ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                            ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>> instances,
                            ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall(InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall(InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18250 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$PostfixBurstDelegate
class CORDL_TYPE InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c636e8, size 0x190, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroupsID,
                                             ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                                             ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                                             ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                                             ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash,
                                             ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_7);

  /// @brief Method EndInvoke, addr 0x6c63878, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c636d4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroupsID,
                     ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                     ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                     ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  static inline ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                                     ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6c63654, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18251 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeRendererGroupInstances_000002A1$BurstDirectCall
class CORDL_TYPE InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6c63990, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6c63884, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c626c8, size 0xec, virtual false, abstract: false, final false
  static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroupsID,
                            ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                            ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                            ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall(InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18252 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeInstances_000002A2$PostfixBurstDelegate
class CORDL_TYPE InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c63a3c, size 0x190, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle> const> instances,
                                             ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                                             ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                                             ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                                             ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash,
                                             ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_7);

  /// @brief Method EndInvoke, addr 0x6c63bcc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c63a28, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle> const> instances,
                     ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                     ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                     ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  static inline ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                        ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6c639a8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate(InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate(InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18253 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst/FreeInstances_000002A2$BurstDirectCall
class CORDL_TYPE InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6c63ce4, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6c63bd8, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c627b4, size 0xec, virtual false, abstract: false, final false
  static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle> const> instances,
                            ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                            ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                            ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall(InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall(InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18254 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystemBurst
class CORDL_TYPE InstanceDataSystemBurst : public ::System::Object {
public:
  // Declarations
  using FreeInstances_000002A2$BurstDirectCall = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall;

  using FreeInstances_000002A2$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$PostfixBurstDelegate;

  using FreeRendererGroupInstances_000002A1$BurstDirectCall = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall;

  using FreeRendererGroupInstances_000002A1$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate;

  using ReallocateInstances_000002A0$BurstDirectCall = ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall;

  using ReallocateInstances_000002A0$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate;

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.InstanceDataSystemBurst::FreeInstances_000002A2$PostfixBurstDelegate))]
  /// @brief Method FreeInstances, addr 0x6c62594, size 0x4, virtual false, abstract: false, final false
  static inline void FreeInstances(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle> const> instances,
                                   ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                                   ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                                   ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// @brief Method FreeInstances$BurstManaged, addr 0x6c62f10, size 0x338, virtual false, abstract: false, final false
  static inline void FreeInstances$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle> const> instances,
                                                ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                                                ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                                                ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                                                ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.InstanceDataSystemBurst::FreeRendererGroupInstances_000002A1$PostfixBurstDelegate))]
  /// @brief Method FreeRendererGroupInstances, addr 0x6c62590, size 0x4, virtual false, abstract: false, final false
  static inline void FreeRendererGroupInstances(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroupsID,
                                                ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                                                ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                                                ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                                                ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// @brief Method FreeRendererGroupInstances$BurstManaged, addr 0x6c62c70, size 0x2a0, virtual false, abstract: false, final false
  static inline void
  FreeRendererGroupInstances$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroupsID,
                                          ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                                          ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                                          ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                                          ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.InstanceDataSystemBurst::ReallocateInstances_000002A0$PostfixBurstDelegate))]
  /// @brief Method ReallocateInstances, addr 0x6c6257c, size 0x14, virtual false, abstract: false, final false
  static inline void ReallocateInstances(bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> rendererGroupIDs,
                                         /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> const> packedRendererData,
                                         /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceOffsets,
                                         /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceCounts,
                                         ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                                         ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                                         ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                                         ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>> instances,
                                         ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// @brief Method ReallocateInstances$BurstManaged, addr 0x6c628a0, size 0x3d0, virtual false, abstract: false, final false
  static inline void ReallocateInstances$BurstManaged(bool implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> rendererGroupIDs,
                                                      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> const> packedRendererData,
                                                      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceOffsets,
                                                      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t> const> instanceCounts,
                                                      ::by_ref<::UnityEngine::Rendering::InstanceAllocators> instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData,
                                                      ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData> perCameraInstanceData,
                                                      ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData> sharedInstanceData,
                                                      ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>> instances,
                                                      ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>> rendererGroupInstanceMultiHash);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystemBurst();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystemBurst(InstanceDataSystemBurst&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystemBurst", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystemBurst(InstanceDataSystemBurst const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18255 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceDataSystemBurst) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering

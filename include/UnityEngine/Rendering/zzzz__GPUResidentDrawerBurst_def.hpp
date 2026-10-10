#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GPUResidentDrawerBurst)
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
template <typename T> struct NativeHashSet_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2_ReadOnly;
}
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct SmallEntityIdArray;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst*, "UnityEngine.Rendering", "GPUResidentDrawerBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*, "UnityEngine.Rendering",
                    "GPUResidentDrawerBurst/ClassifyMaterials_000000EA$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*, "UnityEngine.Rendering",
                    "GPUResidentDrawerBurst/ClassifyMaterials_000000EA$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*, "UnityEngine.Rendering",
                    "GPUResidentDrawerBurst/FindUnsupportedRenderers_000000EB$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*, "UnityEngine.Rendering",
                    "GPUResidentDrawerBurst/FindUnsupportedRenderers_000000EB$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*, "UnityEngine.Rendering",
                    "GPUResidentDrawerBurst/GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*, "UnityEngine.Rendering",
                    "GPUResidentDrawerBurst/GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/ClassifyMaterials_000000EA$PostfixBurstDelegate
class CORDL_TYPE GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c46bb0, size 0x148, virtual true, abstract: false, final false
  inline ::System::IAsyncResult*
  BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
              /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
              ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
              ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas,
              ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_6);

  /// @brief Method EndInvoke, addr 0x6c46cf8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c46b9c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
                     /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
                     ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs,
                     ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
                     ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas);

  static inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                           ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6c46b1c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate(GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate(GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18130 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/ClassifyMaterials_000000EA$BurstDirectCall
class CORDL_TYPE GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6c46e10, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6c46d04, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c460b8, size 0xe0, virtual false, abstract: false, final false
  static inline void
  Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
         /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
         ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall(GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall(GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18131 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/FindUnsupportedRenderers_000000EB$PostfixBurstDelegate
class CORDL_TYPE GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c46ebc, size 0x128, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> unsupportedMaterials,
                                             /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray> const> materialIDArrays,
                                             /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroups,
                                             ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                             ::System::Object* _cordl_fixed_empty_name_whitespace_param_5);

  /// @brief Method EndInvoke, addr 0x6c46fe4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c46ea8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> unsupportedMaterials,
                     /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray> const> materialIDArrays,
                     /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroups,
                     ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers);

  static inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                                  ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6c46e28, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate(GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate(GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18132 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/FindUnsupportedRenderers_000000EB$BurstDirectCall
class CORDL_TYPE GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6c470fc, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6c46ff0, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c46198, size 0xc8, virtual false, abstract: false, final false
  static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> unsupportedMaterials,
                            /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray> const> materialIDArrays,
                            /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroups,
                            ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall(GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall(GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18133 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate
class CORDL_TYPE GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c471a8, size 0x128, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDatas,
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialHash,
      ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials, ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
      ::System::Object* _cordl_fixed_empty_name_whitespace_param_5);

  /// @brief Method EndInvoke, addr 0x6c472d0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c47194, size 0x14, virtual true, abstract: false, final false
  inline void
  Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
         /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDatas,
         /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialHash,
         ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials);

  static inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*
  New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6c47114, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate(GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate(GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate const&) =
      delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18134 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall
class CORDL_TYPE GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6c473e8, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6c472dc, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c46260, size 0x17c, virtual false, abstract: false, final false
  static inline void
  Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
         /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDatas,
         /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialHash,
         ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall(GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall(GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18135 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst
class CORDL_TYPE GPUResidentDrawerBurst : public ::System::Object {
public:
  // Declarations
  using ClassifyMaterials_000000EA$BurstDirectCall = ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall;

  using ClassifyMaterials_000000EA$PostfixBurstDelegate = ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate;

  using FindUnsupportedRenderers_000000EB$BurstDirectCall = ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall;

  using FindUnsupportedRenderers_000000EB$PostfixBurstDelegate = ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate;

  using GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall = ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall;

  using GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate = ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate;

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.GPUResidentDrawerBurst::ClassifyMaterials_000000EA$PostfixBurstDelegate))]
  /// @brief Method ClassifyMaterials, addr 0x6c45b54, size 0x4, virtual false, abstract: false, final false
  static inline void
  ClassifyMaterials(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
                    /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
                    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs,
                    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
                    ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// @brief Method ClassifyMaterials$BurstManaged, addr 0x6c463dc, size 0x480, virtual false, abstract: false, final false
  static inline void ClassifyMaterials$BurstManaged(
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> const> batchMaterialHash,
      ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedMaterialIDs,
      ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.GPUResidentDrawerBurst::FindUnsupportedRenderers_000000EB$PostfixBurstDelegate))]
  /// @brief Method FindUnsupportedRenderers, addr 0x6c45b58, size 0x4, virtual false, abstract: false, final false
  static inline void FindUnsupportedRenderers(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> unsupportedMaterials,
                                              /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray> const> materialIDArrays,
                                              /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroups,
                                              ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// @brief Method FindUnsupportedRenderers$BurstManaged, addr 0x6c4685c, size 0x1cc, virtual false, abstract: false, final false
  static inline void
  FindUnsupportedRenderers$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> unsupportedMaterials,
                                        /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray> const> materialIDArrays,
                                        /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId> const> rendererGroups,
                                        ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>> unsupportedRenderers);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.GPUResidentDrawerBurst::GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate))]
  /// @brief Method GetMaterialsWithChangedPackedMaterial, addr 0x6c45b5c, size 0x4, virtual false, abstract: false, final false
  static inline void GetMaterialsWithChangedPackedMaterial(
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDatas,
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialHash,
      ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// @brief Method GetMaterialsWithChangedPackedMaterial$BurstManaged, addr 0x6c46a28, size 0xf4, virtual false, abstract: false, final false
  static inline void GetMaterialsWithChangedPackedMaterial$BurstManaged(
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const> materialIDs,
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialDatas,
      /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const> packedMaterialHash,
      ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>> filteredMaterials);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerBurst();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawerBurst(GPUResidentDrawerBurst&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawerBurst(GPUResidentDrawerBurst const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18136 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering

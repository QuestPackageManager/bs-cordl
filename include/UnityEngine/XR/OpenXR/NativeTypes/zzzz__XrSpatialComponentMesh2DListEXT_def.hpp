#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentMesh2DListEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialComponentMesh2DListEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialMeshDataEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentMesh2DListEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMesh2DListEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMesh2DListEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialComponentMesh2DListEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialComponentMesh2DListEXT
struct CORDL_TYPE XrSpatialComponentMesh2DListEXT {
public:
  // Declarations
  __declspec(property(get = get_meshCount)) uint32_t meshCount;

  __declspec(property(get = get_meshes)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT* meshes;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e452c8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t meshCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT* meshes);

  /// @brief Method .ctor, addr 0x6e45358, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT> meshes);

  /// @brief Method .ctor, addr 0x6e45448, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT> meshes);

  /// @brief Method .ctor, addr 0x6e452ac, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t meshCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT* meshes);

  /// @brief Method .ctor, addr 0x6e452e4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT> meshes);

  /// @brief Method .ctor, addr 0x6e453c0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT> meshes);

  /// [CompilerGenerated]
  /// @brief Method get_meshCount, addr 0x6e4529c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_meshCount();

  /// [CompilerGenerated]
  /// @brief Method get_meshes, addr 0x6e452a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT* get_meshes();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e45294, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e4528c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialComponentMesh2DListEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_meshCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "_meshes_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialComponentMesh2DListEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _meshCount_k__BackingField,
                                            ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT* _meshes_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17592 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <meshCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _meshCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <meshes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMeshDataEXT* _meshes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMesh2DListEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMesh2DListEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMesh2DListEXT, _meshCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMesh2DListEXT, _meshes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMesh2DListEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

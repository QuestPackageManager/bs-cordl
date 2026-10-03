#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentPolygon2DListEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialComponentPolygon2DListEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPolygon2DDataEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentPolygon2DListEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPolygon2DListEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPolygon2DListEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialComponentPolygon2DListEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialComponentPolygon2DListEXT
struct CORDL_TYPE XrSpatialComponentPolygon2DListEXT {
public:
  // Declarations
  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_polygonCount)) uint32_t polygonCount;

  __declspec(property(get = get_polygons)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT* polygons;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e487b0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t polygonCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT* polygons);

  /// @brief Method .ctor, addr 0x6e487e8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT> polygons);

  /// @brief Method .ctor, addr 0x6e488c4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT> polygons);

  /// @brief Method .ctor, addr 0x6e487cc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t polygonCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT* polygons);

  /// @brief Method .ctor, addr 0x6e4885c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT> polygons);

  /// @brief Method .ctor, addr 0x6e4894c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT> polygons);

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e48798, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_polygonCount, addr 0x6e487a0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_polygonCount();

  /// [CompilerGenerated]
  /// @brief Method get_polygons, addr 0x6e487a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT* get_polygons();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e48790, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialComponentPolygon2DListEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_polygonCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "_polygons_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialComponentPolygon2DListEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _polygonCount_k__BackingField,
                                               ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT* _polygons_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17595 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <polygonCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _polygonCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <polygons>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT* _polygons_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPolygon2DListEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPolygon2DListEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPolygon2DListEXT, _polygonCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPolygon2DListEXT, _polygons_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPolygon2DListEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

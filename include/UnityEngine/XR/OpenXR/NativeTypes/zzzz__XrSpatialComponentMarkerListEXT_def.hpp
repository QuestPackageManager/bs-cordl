#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentMarkerListEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialComponentMarkerListEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialMarkerDataEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentMarkerListEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMarkerListEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMarkerListEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialComponentMarkerListEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialComponentMarkerListEXT
struct CORDL_TYPE XrSpatialComponentMarkerListEXT {
public:
  // Declarations
  __declspec(property(get = get_markerCount)) uint32_t markerCount;

  __declspec(property(get = get_markers)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT* markers;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e441ac, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t markerCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT* markers);

  /// @brief Method .ctor, addr 0x6e4423c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT> markers);

  /// @brief Method .ctor, addr 0x6e4432c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT> markers);

  /// @brief Method .ctor, addr 0x6e44190, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t markerCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT* markers);

  /// @brief Method .ctor, addr 0x6e441c8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT> markers);

  /// @brief Method .ctor, addr 0x6e442a4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT> markers);

  /// [CompilerGenerated]
  /// @brief Method get_markerCount, addr 0x6e44180, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_markerCount();

  /// [CompilerGenerated]
  /// @brief Method get_markers, addr 0x6e44188, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT* get_markers();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e44178, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e44170, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialComponentMarkerListEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_markerCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "_markers_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialComponentMarkerListEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _markerCount_k__BackingField,
                                            ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT* _markers_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17571 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <markerCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _markerCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <markers>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT* _markers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMarkerListEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMarkerListEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMarkerListEXT, _markerCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMarkerListEXT, _markers_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentMarkerListEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

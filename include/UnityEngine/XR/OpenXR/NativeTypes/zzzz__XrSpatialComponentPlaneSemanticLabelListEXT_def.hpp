#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentPlaneSemanticLabelListEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialComponentPlaneSemanticLabelListEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPlaneSemanticLabelEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentPlaneSemanticLabelListEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneSemanticLabelListEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneSemanticLabelListEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialComponentPlaneSemanticLabelListEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialComponentPlaneSemanticLabelListEXT
struct CORDL_TYPE XrSpatialComponentPlaneSemanticLabelListEXT {
public:
  // Declarations
  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_semanticLabelCount)) uint32_t semanticLabelCount;

  __declspec(property(get = get_semanticLabels)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT* semanticLabels;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e48578, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t semanticLabelCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT* semanticLabels);

  /// @brief Method .ctor, addr 0x6e485b0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT> semanticLabels);

  /// @brief Method .ctor, addr 0x6e4868c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT> semanticLabels);

  /// @brief Method .ctor, addr 0x6e48594, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t semanticLabelCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT* semanticLabels);

  /// @brief Method .ctor, addr 0x6e48624, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT> semanticLabels);

  /// @brief Method .ctor, addr 0x6e48714, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT> semanticLabels);

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e48560, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_semanticLabelCount, addr 0x6e48568, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_semanticLabelCount();

  /// [CompilerGenerated]
  /// @brief Method get_semanticLabels, addr 0x6e48570, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT* get_semanticLabels();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e48558, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialComponentPlaneSemanticLabelListEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_semanticLabelCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_semanticLabels_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT*", modifiers: "", def_value: None, comment: None
  // }]
  constexpr XrSpatialComponentPlaneSemanticLabelListEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                        uint32_t _semanticLabelCount_k__BackingField,
                                                        ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT* _semanticLabels_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17594 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <semanticLabelCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _semanticLabelCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <semanticLabels>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneSemanticLabelEXT* _semanticLabels_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneSemanticLabelListEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneSemanticLabelListEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneSemanticLabelListEXT, _semanticLabelCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneSemanticLabelListEXT, _semanticLabels_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneSemanticLabelListEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentParentListEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialComponentParentListEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentParentListEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentParentListEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentParentListEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialComponentParentListEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialComponentParentListEXT
struct CORDL_TYPE XrSpatialComponentParentListEXT {
public:
  // Declarations
  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_parentCount)) uint32_t parentCount;

  __declspec(property(get = get_parents)) uint64_t* parents;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e4251c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t parentCount, uint64_t* parents);

  /// @brief Method .ctor, addr 0x6e42554, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<uint64_t> parents);

  /// @brief Method .ctor, addr 0x6e42630, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<uint64_t> parents);

  /// @brief Method .ctor, addr 0x6e42538, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t parentCount, uint64_t* parents);

  /// @brief Method .ctor, addr 0x6e425c8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<uint64_t> parents);

  /// @brief Method .ctor, addr 0x6e426b8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<uint64_t> parents);

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e42504, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_parentCount, addr 0x6e4250c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_parentCount();

  /// [CompilerGenerated]
  /// @brief Method get_parents, addr 0x6e42514, size 0x8, virtual false, abstract: false, final false
  inline uint64_t* get_parents();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e424fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialComponentParentListEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_parentCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "_parents_k__BackingField", ty: "uint64_t*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialComponentParentListEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _parentCount_k__BackingField,
                                            uint64_t* _parents_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17548 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <parentCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _parentCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <parents>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t* _parents_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentParentListEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentParentListEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentParentListEXT, _parentCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentParentListEXT, _parents_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentParentListEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

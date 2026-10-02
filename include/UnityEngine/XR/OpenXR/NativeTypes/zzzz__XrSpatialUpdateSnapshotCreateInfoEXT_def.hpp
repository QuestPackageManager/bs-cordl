#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialUpdateSnapshotCreateInfoEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialUpdateSnapshotCreateInfoEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentTypeEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialUpdateSnapshotCreateInfoEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialUpdateSnapshotCreateInfoEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialUpdateSnapshotCreateInfoEXT
struct CORDL_TYPE XrSpatialUpdateSnapshotCreateInfoEXT {
public:
  // Declarations
  __declspec(property(get = get_baseSpace)) uint64_t baseSpace;

  __declspec(property(get = get_componentTypeCount)) uint32_t componentTypeCount;

  __declspec(property(get = get_componentTypes)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes;

  __declspec(property(get = get_entities)) uint64_t* entities;

  __declspec(property(get = get_entityCount)) uint32_t entityCount;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_time)) int64_t time;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e437c8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(uint32_t entityCount, uint64_t* entities, uint32_t componentTypeCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes, uint64_t baseSpace,
                    int64_t time);

  /// @brief Method .ctor, addr 0x6e437a0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t entityCount, uint64_t* entities, uint32_t componentTypeCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes,
                    uint64_t baseSpace, int64_t time);

  /// [CompilerGenerated]
  /// @brief Method get_baseSpace, addr 0x6e43790, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_baseSpace();

  /// [CompilerGenerated]
  /// @brief Method get_componentTypeCount, addr 0x6e43780, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_componentTypeCount();

  /// [CompilerGenerated]
  /// @brief Method get_componentTypes, addr 0x6e43788, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* get_componentTypes();

  /// [CompilerGenerated]
  /// @brief Method get_entities, addr 0x6e43778, size 0x8, virtual false, abstract: false, final false
  inline uint64_t* get_entities();

  /// [CompilerGenerated]
  /// @brief Method get_entityCount, addr 0x6e43770, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_entityCount();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e43768, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_time, addr 0x6e43798, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_time();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e43760, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialUpdateSnapshotCreateInfoEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entityCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "_entities_k__BackingField", ty: "uint64_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_componentTypeCount_k__BackingField", ty: "uint32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_componentTypes_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "_baseSpace_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_time_k__BackingField", ty:
  // "int64_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialUpdateSnapshotCreateInfoEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _entityCount_k__BackingField,
                                                 uint64_t* _entities_k__BackingField, uint32_t _componentTypeCount_k__BackingField,
                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _componentTypes_k__BackingField, uint64_t _baseSpace_k__BackingField,
                                                 int64_t _time_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17564 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <entityCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _entityCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <entities>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t* _entities_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <componentTypeCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
  uint32_t _componentTypeCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <componentTypes>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _componentTypes_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <baseSpace>k__BackingField, offset: 0x30, size: 0x8, def value: None
  uint64_t _baseSpace_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <time>k__BackingField, offset: 0x38, size: 0x8, def value: None
  int64_t _time_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT, _entityCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT, _entities_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT, _componentTypeCount_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT, _componentTypes_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT, _baseSpace_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT, _time_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialUpdateSnapshotCreateInfoEXT) == 0x40, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

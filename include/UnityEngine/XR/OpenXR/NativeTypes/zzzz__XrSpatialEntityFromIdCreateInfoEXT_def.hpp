#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialEntityFromIdCreateInfoEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialEntityFromIdCreateInfoEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialEntityFromIdCreateInfoEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialEntityFromIdCreateInfoEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialEntityFromIdCreateInfoEXT
struct CORDL_TYPE XrSpatialEntityFromIdCreateInfoEXT {
public:
  // Declarations
  __declspec(property(get = get_entityId)) uint64_t entityId;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e3fa3c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint64_t entityId);

  /// @brief Method .ctor, addr 0x6e43704, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint64_t entityId);

  /// [CompilerGenerated]
  /// @brief Method get_entityId, addr 0x6e436fc, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_entityId();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e436f4, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e436ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialEntityFromIdCreateInfoEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entityId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None
  // }]
  constexpr XrSpatialEntityFromIdCreateInfoEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint64_t _entityId_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17562 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <entityId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  uint64_t _entityId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT, _entityId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

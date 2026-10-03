#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialCapabilityConfigurationBaseHeaderEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialCapabilityConfigurationBaseHeaderEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentTypeEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityConfigurationBaseHeaderEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialCapabilityConfigurationBaseHeaderEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrSpatialCapabilityEXT, UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialCapabilityConfigurationBaseHeaderEXT
struct CORDL_TYPE XrSpatialCapabilityConfigurationBaseHeaderEXT {
public:
  // Declarations
  __declspec(property(get = get_capability)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability;

  __declspec(property(get = get_enabledComponentCount)) uint32_t enabledComponentCount;

  __declspec(property(get = get_enabledComponents)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* enabledComponents;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e42d38, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, uint32_t enabledComponentCount,
                    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* enabledComponents);

  /// @brief Method .ctor, addr 0x6e42dc8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability,
                    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> enabledComponents);

  /// @brief Method .ctor, addr 0x6e42d24, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type, void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, uint32_t enabledComponentCount,
                    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* enabledComponents);

  /// @brief Method .ctor, addr 0x6e42d4c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type, void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability,
                    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> enabledComponents);

  /// [CompilerGenerated]
  /// @brief Method get_capability, addr 0x6e42d0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT get_capability();

  /// [CompilerGenerated]
  /// @brief Method get_enabledComponentCount, addr 0x6e42d14, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_enabledComponentCount();

  /// [CompilerGenerated]
  /// @brief Method get_enabledComponents, addr 0x6e42d1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* get_enabledComponents();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e42d04, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e42cfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialCapabilityConfigurationBaseHeaderEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_capability_k__BackingField", ty:
  // "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT", modifiers: "", def_value: None, comment: None }, CppParam { name: "_enabledComponentCount_k__BackingField", ty: "uint32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_enabledComponents_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*", modifiers: "",
  // def_value: None, comment: None }]
  constexpr XrSpatialCapabilityConfigurationBaseHeaderEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                          ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT _capability_k__BackingField, uint32_t _enabledComponentCount_k__BackingField,
                                                          ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _enabledComponents_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17557 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <capability>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT _capability_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <enabledComponentCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
  uint32_t _enabledComponentCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <enabledComponents>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _enabledComponents_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT, _capability_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT, _enabledComponentCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT, _enabledComponents_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

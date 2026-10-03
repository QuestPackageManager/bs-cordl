#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialCapabilityComponentTypesEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialCapabilityComponentTypesEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentTypeEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityComponentTypesEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialCapabilityComponentTypesEXT");
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialCapabilityComponentTypesEXT
struct CORDL_TYPE XrSpatialCapabilityComponentTypesEXT {
public:
  // Declarations
  __declspec(property(get = get_componentTypeCapacityInput, put = set_componentTypeCapacityInput)) uint32_t componentTypeCapacityInput;

  __declspec(property(get = get_componentTypeCountOutput, put = set_componentTypeCountOutput)) uint32_t componentTypeCountOutput;

  __declspec(property(get = get_componentTypes, put = set_componentTypes)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes;

  __declspec(property(get = get_next, put = set_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e42c7c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t componentTypeCapacityInput, uint32_t componentTypeCountOutput, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes);

  /// @brief Method .ctor, addr 0x6e42ce0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t componentTypeCapacityInput, uint32_t componentTypeCountOutput, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes);

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_componentTypeCapacityInput, addr 0x6e42cb0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_componentTypeCapacityInput();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_componentTypeCountOutput, addr 0x6e42cc0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_componentTypeCountOutput();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_componentTypes, addr 0x6e42cd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* get_componentTypes();

  /// @brief Method get_defaultValue, addr 0x6e3f180, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT get_defaultValue();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e42ca0, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e42c98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  /// [CompilerGenerated]
  /// @brief Method set_componentTypeCapacityInput, addr 0x6e42cb8, size 0x8, virtual false, abstract: false, final false
  inline void set_componentTypeCapacityInput(uint32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_componentTypeCountOutput, addr 0x6e42cc8, size 0x8, virtual false, abstract: false, final false
  inline void set_componentTypeCountOutput(uint32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_componentTypes, addr 0x6e42cd8, size 0x8, virtual false, abstract: false, final false
  inline void set_componentTypes(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* value);

  /// [CompilerGenerated]
  /// @brief Method set_next, addr 0x6e42ca8, size 0x8, virtual false, abstract: false, final false
  inline void set_next(void* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialCapabilityComponentTypesEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_componentTypeCapacityInput_k__BackingField", ty: "uint32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "_componentTypeCountOutput_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_componentTypes_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialCapabilityComponentTypesEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                 uint32_t _componentTypeCapacityInput_k__BackingField, uint32_t _componentTypeCountOutput_k__BackingField,
                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _componentTypes_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17556 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <componentTypeCapacityInput>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _componentTypeCapacityInput_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <componentTypeCountOutput>k__BackingField, offset: 0x14, size: 0x4, def value: None
  uint32_t _componentTypeCountOutput_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <componentTypes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _componentTypes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT, _componentTypeCapacityInput_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT, _componentTypeCountOutput_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT, _componentTypes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityComponentTypesEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

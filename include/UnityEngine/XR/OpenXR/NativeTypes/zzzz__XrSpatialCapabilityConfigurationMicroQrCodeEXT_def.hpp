#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialCapabilityConfigurationMicroQrCodeEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialCapabilityConfigurationMicroQrCodeEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
class ISpatialCapabilityConfiguration;
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
struct XrSpatialCapabilityConfigurationMicroQrCodeEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationMicroQrCodeEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationMicroQrCodeEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialCapabilityConfigurationMicroQrCodeEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrSpatialCapabilityEXT, UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialCapabilityConfigurationMicroQrCodeEXT
struct CORDL_TYPE XrSpatialCapabilityConfigurationMicroQrCodeEXT {
public:
  // Declarations
  __declspec(property(get = get_capability)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability;

  __declspec(property(get = get_enabledComponentCount)) uint32_t enabledComponentCount;

  __declspec(property(get = get_enabledComponents)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* enabledComponents;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Convert operator to "::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration"
  constexpr operator ::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*();

  /// @brief Method .ctor, addr 0x6e43d34, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t enabledComponentCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* enabledComponents);

  /// @brief Method .ctor, addr 0x6e43dc4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> enabledComponents);

  /// @brief Method .ctor, addr 0x6e43eb4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> enabledComponents);

  /// @brief Method .ctor, addr 0x6e43d18, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t enabledComponentCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* enabledComponents);

  /// @brief Method .ctor, addr 0x6e43d50, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> enabledComponents);

  /// @brief Method .ctor, addr 0x6e43e2c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> enabledComponents);

  /// [CompilerGenerated]
  /// @brief Method get_capability, addr 0x6e43d00, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT get_capability();

  /// [CompilerGenerated]
  /// @brief Method get_enabledComponentCount, addr 0x6e43d08, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_enabledComponentCount();

  /// [CompilerGenerated]
  /// @brief Method get_enabledComponents, addr 0x6e43d10, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* get_enabledComponents();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e43cf8, size 0x8, virtual true, abstract: false, final true
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e43cf0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  /// @brief Convert to "::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration"
  constexpr ::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration* i___UnityEngine__XR__OpenXR__NativeTypes__ISpatialCapabilityConfiguration();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialCapabilityConfigurationMicroQrCodeEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_capability_k__BackingField", ty:
  // "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT", modifiers: "", def_value: None, comment: None }, CppParam { name: "_enabledComponentCount_k__BackingField", ty: "uint32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_enabledComponents_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*", modifiers: "",
  // def_value: None, comment: None }]
  constexpr XrSpatialCapabilityConfigurationMicroQrCodeEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                           ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT _capability_k__BackingField, uint32_t _enabledComponentCount_k__BackingField,
                                                           ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _enabledComponents_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17569 };

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
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationMicroQrCodeEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationMicroQrCodeEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationMicroQrCodeEXT, _capability_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationMicroQrCodeEXT, _enabledComponentCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationMicroQrCodeEXT, _enabledComponents_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationMicroQrCodeEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

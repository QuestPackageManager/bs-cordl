#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialContextCreateInfoEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialContextCreateInfoEXT)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityConfigurationBaseHeaderEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialContextCreateInfoEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialContextCreateInfoEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialContextCreateInfoEXT
struct CORDL_TYPE XrSpatialContextCreateInfoEXT {
public:
  // Declarations
  __declspec(property(get = get_capabilityConfigCount)) uint32_t capabilityConfigCount;

  __declspec(property(get = get_capabilityConfigs)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* capabilityConfigs;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e43148, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t capabilityConfigCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* capabilityConfigs);

  /// @brief Method .ctor, addr 0x6e431d8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<::System::IntPtr> capabilityConfigs);

  /// @brief Method .ctor, addr 0x6e432c8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr> capabilityConfigs);

  /// @brief Method .ctor, addr 0x6e4312c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t capabilityConfigCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* capabilityConfigs);

  /// @brief Method .ctor, addr 0x6e43164, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1<::System::IntPtr> capabilityConfigs);

  /// @brief Method .ctor, addr 0x6e43240, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr> capabilityConfigs);

  /// [CompilerGenerated]
  /// @brief Method get_capabilityConfigCount, addr 0x6e4311c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_capabilityConfigCount();

  /// [CompilerGenerated]
  /// @brief Method get_capabilityConfigs, addr 0x6e43124, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* get_capabilityConfigs();

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e43114, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e4310c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialContextCreateInfoEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_capabilityConfigCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_capabilityConfigs_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT*", modifiers: "", def_value:
  // None, comment: None }]
  constexpr XrSpatialContextCreateInfoEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _capabilityConfigCount_k__BackingField,
                                          ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* _capabilityConfigs_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17560 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <capabilityConfigCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _capabilityConfigCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <capabilityConfigs>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* _capabilityConfigs_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT, _capabilityConfigCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT, _capabilityConfigs_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

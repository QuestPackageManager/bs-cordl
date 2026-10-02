#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/ISpatialCapabilityConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ISpatialCapabilityConfiguration)
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
class ISpatialCapabilityConfiguration;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*, "UnityEngine.XR.OpenXR.NativeTypes", "ISpatialCapabilityConfiguration");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.ISpatialCapabilityConfiguration
class CORDL_TYPE ISpatialCapabilityConfiguration {
public:
  // Declarations
  __declspec(property(get = get_capability)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability;

  __declspec(property(get = get_enabledComponentCount)) uint32_t enabledComponentCount;

  __declspec(property(get = get_enabledComponents)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* enabledComponents;

  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method get_capability, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT get_capability();

  /// @brief Method get_enabledComponentCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t get_enabledComponentCount();

  /// @brief Method get_enabledComponents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* get_enabledComponents();

  /// @brief Method get_next, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void* get_next();

  /// @brief Method get_type, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters [CppParam { name: "", ty: "ISpatialCapabilityConfiguration", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISpatialCapabilityConfiguration(ISpatialCapabilityConfiguration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::OpenXR::NativeTypes

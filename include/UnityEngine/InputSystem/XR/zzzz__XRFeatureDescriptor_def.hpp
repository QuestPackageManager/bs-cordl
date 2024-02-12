#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__FeatureType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRFeatureDescriptor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem::XR {
struct FeatureType;
}
namespace UnityEngine::InputSystem::XR {
struct UsageHint;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct XRFeatureDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::XRFeatureDescriptor);
// Type: UnityEngine.InputSystem.XR::XRFeatureDescriptor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5592))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5594))
// CS Name: ::UnityEngine.InputSystem.XR::XRFeatureDescriptor
struct CORDL_TYPE XRFeatureDescriptor {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "usageHints", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>*", modifiers: "", def_value: None }, CppParam { name: "featureType", ty:
  // "::UnityEngine::InputSystem::XR::FeatureType", modifiers: "", def_value: None }, CppParam { name: "customSize", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr XRFeatureDescriptor(::StringW name, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>* usageHints, ::UnityEngine::InputSystem::XR::FeatureType featureType,
                                uint32_t customSize) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRFeatureDescriptor();

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field usageHints, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>* usageHints;

  /// @brief Field featureType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XR::FeatureType featureType;

  /// @brief Field customSize, offset: 0x14, size: 0x4, def value: None
  uint32_t customSize;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRFeatureDescriptor, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRFeatureDescriptor, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRFeatureDescriptor, usageHints) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRFeatureDescriptor, featureType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRFeatureDescriptor, customSize) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRFeatureDescriptor, "UnityEngine.InputSystem.XR", "XRFeatureDescriptor");

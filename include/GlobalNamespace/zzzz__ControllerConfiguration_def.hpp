#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ControllerConfiguration)
namespace GlobalNamespace {
class UnityXRController;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class ControllerConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ControllerConfiguration);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControllerConfiguration
class CORDL_TYPE ControllerConfiguration : public ::System::Object {
public:
  // Declarations
  /// @brief Field <orientationActionReference>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__orientationActionReference_k__BackingField,
                      put = __cordl_internal_set__orientationActionReference_k__BackingField)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _orientationActionReference_k__BackingField;

  /// @brief Field <positionActionReference>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__positionActionReference_k__BackingField,
                      put = __cordl_internal_set__positionActionReference_k__BackingField)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _positionActionReference_k__BackingField;

  /// @brief Field <thumbstickActionReference>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstickActionReference_k__BackingField,
                      put = __cordl_internal_set__thumbstickActionReference_k__BackingField)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _thumbstickActionReference_k__BackingField;

  __declspec(property(get = get_orientationActionReference, put = set_orientationActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> orientationActionReference;

  __declspec(property(get = get_positionActionReference, put = set_positionActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> positionActionReference;

  __declspec(property(get = get_thumbstickActionReference, put = set_thumbstickActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> thumbstickActionReference;

  /// @brief Method CreateUnityXRController, addr 0x56a4d4c, size 0xc0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* CreateUnityXRController(::UnityEngine::XR::XRNode node);

  static inline ::GlobalNamespace::ControllerConfiguration* New_ctor();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__orientationActionReference_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__orientationActionReference_k__BackingField();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__positionActionReference_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__positionActionReference_k__BackingField();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__thumbstickActionReference_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__thumbstickActionReference_k__BackingField();

  constexpr void __cordl_internal_set__orientationActionReference_k__BackingField(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__positionActionReference_k__BackingField(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__thumbstickActionReference_k__BackingField(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  /// @brief Method .ctor, addr 0x56a4ec8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_orientationActionReference, addr 0x56a4d2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_orientationActionReference();

  /// @brief Method get_positionActionReference, addr 0x56a4d1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_positionActionReference();

  /// @brief Method get_thumbstickActionReference, addr 0x56a4d3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_thumbstickActionReference();

  /// @brief Method set_orientationActionReference, addr 0x56a4d34, size 0x8, virtual false, abstract: false, final false
  inline void set_orientationActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_positionActionReference, addr 0x56a4d24, size 0x8, virtual false, abstract: false, final false
  inline void set_positionActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_thumbstickActionReference, addr 0x56a4d44, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstickActionReference(::UnityEngine::InputSystem::InputActionReference* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerConfiguration(ControllerConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerConfiguration(ControllerConfiguration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20301 };

  /// @brief Field <positionActionReference>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____positionActionReference_k__BackingField;

  /// @brief Field <orientationActionReference>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____orientationActionReference_k__BackingField;

  /// @brief Field <thumbstickActionReference>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____thumbstickActionReference_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerConfiguration, ____positionActionReference_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerConfiguration, ____orientationActionReference_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerConfiguration, ____thumbstickActionReference_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ControllerConfiguration, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ControllerConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ControllerConfiguration*, "", "ControllerConfiguration");

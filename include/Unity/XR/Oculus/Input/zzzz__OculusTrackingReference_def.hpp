#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Input/OculusTrackingReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
CORDL_MODULE_EXPORT(OculusTrackingReference)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusTrackingReference;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Input::OculusTrackingReference);
// Dependencies UnityEngine.InputSystem.TrackedDevice
namespace Unity::XR::Oculus::Input {
// Is value type: false
// CS Name: Unity.XR.Oculus.Input.OculusTrackingReference
class CORDL_TYPE OculusTrackingReference : public ::UnityEngine::InputSystem::TrackedDevice {
public:
  // Declarations
  /// @brief Field <isTracked>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  __declspec(property(get = get_isTracked, put = set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  /// @brief Method FinishSetup, addr 0x631b800, size 0xc0, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::Oculus::Input::OculusTrackingReference* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__isTracked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method .ctor, addr 0x631b8c0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isTracked, addr 0x631b7f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_trackingState, addr 0x631b7e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_isTracked, addr 0x631b7f8, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackingState, addr 0x631b7e8, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusTrackingReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusTrackingReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusTrackingReference(OculusTrackingReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusTrackingReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusTrackingReference(OculusTrackingReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8580 };

  /// @brief Field <trackingState>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::Input::OculusTrackingReference, ____trackingState_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusTrackingReference, ____isTracked_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::OculusTrackingReference, 0x1b8>, "Size mismatch!");

} // namespace Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusTrackingReference);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusTrackingReference*, "Unity.XR.Oculus.Input", "OculusTrackingReference");

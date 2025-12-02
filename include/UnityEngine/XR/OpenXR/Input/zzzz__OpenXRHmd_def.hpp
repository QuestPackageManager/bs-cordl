#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRHmd.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(OpenXRHmd)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRHmd;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Input::OpenXRHmd);
// Dependencies UnityEngine.InputSystem.XR.XRHMD
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRHmd
class CORDL_TYPE OpenXRHmd : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  /// @brief Field <userPresence>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresence_k__BackingField,
                      put = __cordl_internal_set__userPresence_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField;

  __declspec(property(get = get_userPresence, put = set_userPresence)) ::UnityEngine::InputSystem::Controls::ButtonControl* userPresence;

  /// @brief Method FinishSetup, addr 0x67beb9c, size 0x7c, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Input::OpenXRHmd* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__userPresence_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__userPresence_k__BackingField();

  constexpr void __cordl_internal_set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x67bec18, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_userPresence, addr 0x67beb8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence();

  /// @brief Method set_userPresence, addr 0x67beb94, size 0x8, virtual false, abstract: false, final false
  inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRHmd();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRHmd", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRHmd(OpenXRHmd&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRHmd", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRHmd(OpenXRHmd const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18494 };

  /// @brief Field <userPresence>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____userPresence_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::OpenXRHmd, ____userPresence_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRHmd, 0x1e0>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRHmd);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRHmd*, "UnityEngine.XR.OpenXR.Input", "OpenXRHmd");

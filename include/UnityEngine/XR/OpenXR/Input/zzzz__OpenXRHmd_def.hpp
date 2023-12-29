#pragma once
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
// Type: UnityEngine.XR.OpenXR.Input::OpenXRHmd
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 432, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14430))
// CS Name: ::UnityEngine.XR.OpenXR.Input::OpenXRHmd*
class CORDL_TYPE OpenXRHmd : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  /// @brief Field <userPresence>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__userPresence_k__BackingField, put = __set__userPresence_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField;

  __declspec(property(get = get_userPresence, put = set_userPresence))::UnityEngine::InputSystem::Controls::ButtonControl* userPresence;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__userPresence_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__userPresence_k__BackingField() const;

  constexpr void __set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_userPresence addr 0x2b036a8 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence();

  /// @brief Method set_userPresence addr 0x2b036b0 size 0x8 virtual false final false
  inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method FinishSetup addr 0x2b036b8 size 0x7c virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Input::OpenXRHmd* New_ctor();

  /// @brief Method .ctor addr 0x2b03734 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRHmd", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRHmd(OpenXRHmd&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRHmd", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRHmd(OpenXRHmd const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRHmd();

public:
  /// @brief Field <userPresence>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____userPresence_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRHmd, 0x1b0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::OpenXRHmd, ____userPresence_k__BackingField) == 0x1a8, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRHmd);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRHmd*, "UnityEngine.XR.OpenXR.Input", "OpenXRHmd");

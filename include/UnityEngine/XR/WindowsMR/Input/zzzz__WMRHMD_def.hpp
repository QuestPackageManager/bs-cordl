#pragma once
// IWYU pragma private; include "UnityEngine\XR\WindowsMR\Input\WMRHMD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(WMRHMD)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::XR::WindowsMR::Input {
class WMRHMD;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::WindowsMR::Input::WMRHMD*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::WindowsMR::Input::WMRHMD*, "UnityEngine.XR.WindowsMR.Input", "WMRHMD");
// Dependencies UnityEngine.InputSystem.XR.XRHMD
namespace UnityEngine::XR::WindowsMR::Input {
// Is value type: false
// CS Name: UnityEngine.XR.WindowsMR.Input.WMRHMD
class CORDL_TYPE WMRHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  /// @brief Field <userPresence>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresence_k__BackingField,
                      put = __cordl_internal_set__userPresence_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField;

  __declspec(property(get = get_userPresence, put = set_userPresence)) ::UnityEngine::InputSystem::Controls::ButtonControl* userPresence;

  /// @brief Method FinishSetup, addr 0x64d27c0, size 0x7c, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::WindowsMR::Input::WMRHMD* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__userPresence_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__userPresence_k__BackingField();

  constexpr void __cordl_internal_set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x64d283c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_userPresence, addr 0x64d27b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence();

  /// @brief Method set_userPresence, addr 0x64d27b8, size 0x8, virtual false, abstract: false, final false
  inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WMRHMD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WMRHMD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WMRHMD(WMRHMD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WMRHMD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WMRHMD(WMRHMD const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8605 };

  /// @brief Field <userPresence>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____userPresence_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRHMD, ____userPresence_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::WindowsMR::Input::WMRHMD) == 0x1e0, "Size mismatch!");

} // namespace UnityEngine::XR::WindowsMR::Input

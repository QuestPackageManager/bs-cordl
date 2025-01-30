#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRResetOrientation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRResetOrientation)
// Forward declare root types
namespace GlobalNamespace {
class OVRResetOrientation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRResetOrientation);
// Dependencies OVRInput::RawButton, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRResetOrientation
class CORDL_TYPE OVRResetOrientation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field resetButton, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_resetButton, put = __cordl_internal_set_resetButton)) ::GlobalNamespace::OVRInput_RawButton resetButton;

  static inline ::GlobalNamespace::OVRResetOrientation* New_ctor();

  /// @brief Method Update, addr 0x4043010, size 0xe0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_resetButton() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_resetButton();

  constexpr void __cordl_internal_set_resetButton(::GlobalNamespace::OVRInput_RawButton value);

  /// @brief Method .ctor, addr 0x40430f0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRResetOrientation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRResetOrientation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRResetOrientation(OVRResetOrientation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRResetOrientation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRResetOrientation(OVRResetOrientation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8474 };

  /// @brief Field resetButton, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___resetButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRResetOrientation, ___resetButton) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRResetOrientation, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRResetOrientation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResetOrientation*, "", "OVRResetOrientation");

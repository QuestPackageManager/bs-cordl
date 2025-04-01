#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRModeParms.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRModeParms)
// Forward declare root types
namespace GlobalNamespace {
class OVRModeParms;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRModeParms);
// Dependencies OVRInput::RawButton, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRModeParms
class CORDL_TYPE OVRModeParms : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field resetButton, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_resetButton, put = __cordl_internal_set_resetButton)) ::GlobalNamespace::OVRInput_RawButton resetButton;

  static inline ::GlobalNamespace::OVRModeParms* New_ctor();

  /// @brief Method Start, addr 0x40361c4, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TestPowerStateMode, addr 0x403630c, size 0xa4, virtual false, abstract: false, final false
  inline void TestPowerStateMode();

  /// @brief Method Update, addr 0x4036260, size 0xac, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_resetButton() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_resetButton();

  constexpr void __cordl_internal_set_resetButton(::GlobalNamespace::OVRInput_RawButton value);

  /// @brief Method .ctor, addr 0x40363b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRModeParms();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRModeParms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRModeParms(OVRModeParms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRModeParms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRModeParms(OVRModeParms const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8454 };

  /// @brief Field resetButton, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___resetButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRModeParms, ___resetButton) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRModeParms, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRModeParms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRModeParms*, "", "OVRModeParms");

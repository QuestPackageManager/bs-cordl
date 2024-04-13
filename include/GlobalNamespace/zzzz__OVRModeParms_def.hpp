#pragma once
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
// Type: ::OVRModeParms
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRModeParms*
class CORDL_TYPE OVRModeParms : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field resetButton, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_resetButton, put = __cordl_internal_set_resetButton))::GlobalNamespace::__OVRInput__RawButton resetButton;

  static inline ::GlobalNamespace::OVRModeParms* New_ctor();

  /// @brief Method Start, addr 0x2a8cbc8, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TestPowerStateMode, addr 0x2a8cd10, size 0xa4, virtual false, abstract: false, final false
  inline void TestPowerStateMode();

  /// @brief Method Update, addr 0x2a8cc64, size 0xac, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_resetButton() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_resetButton();

  constexpr void __cordl_internal_set_resetButton(::GlobalNamespace::__OVRInput__RawButton value);

  /// @brief Method .ctor, addr 0x2a8cdb4, size 0x10, virtual false, abstract: false, final false
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

  /// @brief Field resetButton, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___resetButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRModeParms, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRModeParms, ___resetButton) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRModeParms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRModeParms*, "", "OVRModeParms");

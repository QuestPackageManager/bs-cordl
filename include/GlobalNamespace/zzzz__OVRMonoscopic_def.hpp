#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRMonoscopic)
// Forward declare root types
namespace GlobalNamespace {
class OVRMonoscopic;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMonoscopic);
// Type: ::OVRMonoscopic
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRMonoscopic*
class CORDL_TYPE OVRMonoscopic : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field monoscopic, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_monoscopic, put = __cordl_internal_set_monoscopic)) bool monoscopic;

  /// @brief Field toggleButton, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_toggleButton, put = __cordl_internal_set_toggleButton))::GlobalNamespace::__OVRInput__RawButton toggleButton;

  static inline ::GlobalNamespace::OVRMonoscopic* New_ctor();

  /// @brief Method Update, addr 0x2b88674, size 0xf0, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_monoscopic() const;

  constexpr bool& __cordl_internal_get_monoscopic();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_toggleButton() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_toggleButton();

  constexpr void __cordl_internal_set_monoscopic(bool value);

  constexpr void __cordl_internal_set_toggleButton(::GlobalNamespace::__OVRInput__RawButton value);

  /// @brief Method .ctor, addr 0x2b88764, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMonoscopic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMonoscopic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMonoscopic(OVRMonoscopic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMonoscopic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMonoscopic(OVRMonoscopic const&) = delete;

  /// @brief Field toggleButton, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___toggleButton;

  /// @brief Field monoscopic, offset: 0x1c, size: 0x1, def value: None
  bool ___monoscopic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMonoscopic, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMonoscopic, ___toggleButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMonoscopic, ___monoscopic) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMonoscopic);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMonoscopic*, "", "OVRMonoscopic");

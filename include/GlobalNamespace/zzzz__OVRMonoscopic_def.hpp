#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMonoscopic.hpp"
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
// Dependencies OVRInput::RawButton, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMonoscopic
class CORDL_TYPE OVRMonoscopic : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field monoscopic, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_monoscopic, put = __cordl_internal_set_monoscopic)) bool monoscopic;

  /// @brief Field toggleButton, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_toggleButton, put = __cordl_internal_set_toggleButton)) ::GlobalNamespace::OVRInput_RawButton toggleButton;

  static inline ::GlobalNamespace::OVRMonoscopic* New_ctor();

  /// @brief Method Update, addr 0x403b334, size 0xf0, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_monoscopic() const;

  constexpr bool& __cordl_internal_get_monoscopic();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_toggleButton() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_toggleButton();

  constexpr void __cordl_internal_set_monoscopic(bool value);

  constexpr void __cordl_internal_set_toggleButton(::GlobalNamespace::OVRInput_RawButton value);

  /// @brief Method .ctor, addr 0x403b424, size 0x10, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8455 };

  /// @brief Field toggleButton, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___toggleButton;

  /// @brief Field monoscopic, offset: 0x24, size: 0x1, def value: None
  bool ___monoscopic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMonoscopic, ___toggleButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMonoscopic, ___monoscopic) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMonoscopic, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMonoscopic);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMonoscopic*, "", "OVRMonoscopic");

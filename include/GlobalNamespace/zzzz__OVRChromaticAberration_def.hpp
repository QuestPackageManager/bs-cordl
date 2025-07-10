#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRChromaticAberration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRChromaticAberration)
// Forward declare root types
namespace GlobalNamespace {
class OVRChromaticAberration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRChromaticAberration);
// Dependencies OVRInput::RawButton, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRChromaticAberration
class CORDL_TYPE OVRChromaticAberration : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field chromatic, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_chromatic, put = __cordl_internal_set_chromatic)) bool chromatic;

  /// @brief Field toggleButton, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_toggleButton, put = __cordl_internal_set_toggleButton)) ::GlobalNamespace::OVRInput_RawButton toggleButton;

  static inline ::GlobalNamespace::OVRChromaticAberration* New_ctor();

  /// @brief Method Start, addr 0x4029b48, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x4029be4, size 0xf0, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_chromatic() const;

  constexpr bool& __cordl_internal_get_chromatic();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_toggleButton() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_toggleButton();

  constexpr void __cordl_internal_set_chromatic(bool value);

  constexpr void __cordl_internal_set_toggleButton(::GlobalNamespace::OVRInput_RawButton value);

  /// @brief Method .ctor, addr 0x4029cd4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRChromaticAberration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRChromaticAberration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRChromaticAberration(OVRChromaticAberration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRChromaticAberration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRChromaticAberration(OVRChromaticAberration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8394 };

  /// @brief Field toggleButton, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___toggleButton;

  /// @brief Field chromatic, offset: 0x24, size: 0x1, def value: None
  bool ___chromatic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRChromaticAberration, ___toggleButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRChromaticAberration, ___chromatic) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRChromaticAberration, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRChromaticAberration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRChromaticAberration*, "", "OVRChromaticAberration");

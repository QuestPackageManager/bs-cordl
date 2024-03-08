#pragma once
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
// Type: ::OVRChromaticAberration
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRChromaticAberration*
class CORDL_TYPE OVRChromaticAberration : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field chromatic, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_chromatic, put = __cordl_internal_set_chromatic)) bool chromatic;

  /// @brief Field toggleButton, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_toggleButton, put = __cordl_internal_set_toggleButton))::GlobalNamespace::__OVRInput__RawButton toggleButton;

  static inline ::GlobalNamespace::OVRChromaticAberration* New_ctor();

  /// @brief Method Start, addr 0x28f52d8, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x28f5374, size 0xf0, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_chromatic() const;

  constexpr bool& __cordl_internal_get_chromatic();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_toggleButton() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_toggleButton();

  constexpr void __cordl_internal_set_chromatic(bool value);

  constexpr void __cordl_internal_set_toggleButton(::GlobalNamespace::__OVRInput__RawButton value);

  /// @brief Method .ctor, addr 0x28f5464, size 0x10, virtual false, abstract: false, final false
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

  /// @brief Field toggleButton, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___toggleButton;

  /// @brief Field chromatic, offset: 0x1c, size: 0x1, def value: None
  bool ___chromatic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRChromaticAberration, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRChromaticAberration, ___toggleButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRChromaticAberration, ___chromatic) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRChromaticAberration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRChromaticAberration*, "", "OVRChromaticAberration");

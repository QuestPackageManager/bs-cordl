#pragma once
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
// Type: ::OVRResetOrientation
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7588)), TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8160))
// CS Name: ::OVRResetOrientation*
class CORDL_TYPE OVRResetOrientation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field resetButton, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_resetButton, put = __cordl_internal_set_resetButton))::GlobalNamespace::__OVRInput__RawButton resetButton;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_resetButton();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_resetButton() const;

  constexpr void __cordl_internal_set_resetButton(::GlobalNamespace::__OVRInput__RawButton value);

  /// @brief Method Update, addr 0x27baa44, size 0xe0, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::OVRResetOrientation* New_ctor();

  /// @brief Method .ctor, addr 0x27bab24, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRResetOrientation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRResetOrientation(OVRResetOrientation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRResetOrientation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRResetOrientation(OVRResetOrientation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRResetOrientation();

public:
  /// @brief Field resetButton, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___resetButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRResetOrientation, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRResetOrientation, ___resetButton) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRResetOrientation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResetOrientation*, "", "OVRResetOrientation");

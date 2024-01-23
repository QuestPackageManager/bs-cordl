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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7588)), TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8139))
// CS Name: ::OVRMonoscopic*
class CORDL_TYPE OVRMonoscopic : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field toggleButton, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_toggleButton, put = __cordl_internal_set_toggleButton))::GlobalNamespace::__OVRInput__RawButton toggleButton;

  /// @brief Field monoscopic, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_monoscopic, put = __cordl_internal_set_monoscopic)) bool monoscopic;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_toggleButton();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_toggleButton() const;

  constexpr void __cordl_internal_set_toggleButton(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr bool& __cordl_internal_get_monoscopic();

  constexpr bool const& __cordl_internal_get_monoscopic() const;

  constexpr void __cordl_internal_set_monoscopic(bool value);

  /// @brief Method Update, addr 0x27b469c, size 0xf0, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::OVRMonoscopic* New_ctor();

  /// @brief Method .ctor, addr 0x27b478c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRMonoscopic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMonoscopic(OVRMonoscopic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMonoscopic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMonoscopic(OVRMonoscopic const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMonoscopic();

public:
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

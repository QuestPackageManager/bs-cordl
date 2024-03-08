#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DemoGUIMessage)
// Forward declare root types
namespace RootMotion {
class DemoGUIMessage;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::DemoGUIMessage);
// Type: RootMotion::DemoGUIMessage
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::DemoGUIMessage*
class CORDL_TYPE DemoGUIMessage : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field color, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Color color;

  /// @brief Field text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text))::StringW text;

  static inline ::RootMotion::DemoGUIMessage* New_ctor();

  /// @brief Method OnGUI, addr 0x13412d4, size 0xf8, virtual false, abstract: false, final false
  inline void OnGUI();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_text(::StringW value);

  /// @brief Method .ctor, addr 0x13413cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DemoGUIMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DemoGUIMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DemoGUIMessage(DemoGUIMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DemoGUIMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DemoGUIMessage(DemoGUIMessage const&) = delete;

  /// @brief Field text, offset: 0x18, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::DemoGUIMessage, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::DemoGUIMessage, ___text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::DemoGUIMessage, ___color) == 0x20, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::DemoGUIMessage);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::DemoGUIMessage*, "RootMotion", "DemoGUIMessage");

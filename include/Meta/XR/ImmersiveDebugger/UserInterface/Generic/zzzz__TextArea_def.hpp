#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/TextArea.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Value_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextArea)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class TextArea;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Value
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.TextArea
class CORDL_TYPE TextArea : public ::Meta::XR::ImmersiveDebugger::UserInterface::Value {
public:
  // Declarations
  __declspec(property(get = get_Content, put = set_Content)) ::StringW Content;

  __declspec(property(get = get_Text)) ::UnityW<::UnityEngine::UI::Text> Text;

  __declspec(property(get = get_TextAreaHeight)) float_t TextAreaHeight;

  /// @brief Method CalculateHeight, addr 0x58aedf8, size 0x204, virtual false, abstract: false, final false
  inline float_t CalculateHeight(float_t textWidth);

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea* New_ctor();

  /// @brief Method OnTransparencyChanged, addr 0x58aed7c, size 0x64, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method Setup, addr 0x58aeb88, size 0xbc, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method UpdateLayoutSize, addr 0x58aed0c, size 0x70, virtual false, abstract: false, final false
  inline void UpdateLayoutSize();

  /// @brief Method .ctor, addr 0x58aeffc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Content, addr 0x58aec44, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW get_Content();

  /// @brief Method get_Text, addr 0x58aeb70, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_Text();

  /// @brief Method get_TextAreaHeight, addr 0x58aede0, size 0x18, virtual false, abstract: false, final false
  inline float_t get_TextAreaHeight();

  /// @brief Method set_Content, addr 0x58aec70, size 0x9c, virtual true, abstract: false, final false
  inline void set_Content(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextArea();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextArea", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextArea(TextArea&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextArea", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextArea(TextArea const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea, 0x88>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "TextArea");

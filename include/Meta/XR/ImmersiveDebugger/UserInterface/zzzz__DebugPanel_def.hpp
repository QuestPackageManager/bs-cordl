#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/DebugPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__OverlayCanvasPanel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugPanel)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ButtonWithIcon;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Label;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class DebugPanel;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvasPanel
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.DebugPanel
class CORDL_TYPE DebugPanel : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel {
public:
  // Declarations
  __declspec(property(get = get_Icon, put = set_Icon)) ::UnityW<::UnityEngine::Texture2D> Icon;

  __declspec(property(get = get_Title, put = set_Title)) ::StringW Title;

  /// @brief Field <Icon>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__Icon_k__BackingField, put = __cordl_internal_set__Icon_k__BackingField)) ::UnityW<::UnityEngine::Texture2D> _Icon_k__BackingField;

  /// @brief Field _closeIcon, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__closeIcon, put = __cordl_internal_set__closeIcon)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> _closeIcon;

  /// @brief Field _title, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__title, put = __cordl_internal_set__title)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _title;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel* New_ctor();

  /// @brief Method Setup, addr 0x58344f0, size 0x34c, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__Icon_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__Icon_k__BackingField();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> const& __cordl_internal_get__closeIcon() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon>& __cordl_internal_get__closeIcon();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__title() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__title();

  constexpr void __cordl_internal_set__Icon_k__BackingField(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__closeIcon(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> value);

  constexpr void __cordl_internal_set__title(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  /// @brief Method .ctor, addr 0x5836974, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Icon, addr 0x58394cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_Icon();

  /// @brief Method get_Title, addr 0x58394dc, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_Title();

  /// @brief Method set_Icon, addr 0x58394d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Icon(::UnityEngine::Texture2D* value);

  /// @brief Method set_Title, addr 0x5838f90, size 0x2c, virtual false, abstract: false, final false
  inline void set_Title(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugPanel(DebugPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugPanel(DebugPanel const&) = delete;

  /// @brief Field DynamicPixelsPerUnit offset 0xffffffff size 0x4
  static constexpr float_t DynamicPixelsPerUnit{ static_cast<float_t>(10.0f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18317 };

  /// @brief Field _title, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____title;

  /// @brief Field _closeIcon, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon> ____closeIcon;

  /// @brief Field <Icon>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____Icon_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel, ____title) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel, ____closeIcon) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel, ____Icon_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel, 0xe0>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel*, "Meta.XR.ImmersiveDebugger.UserInterface", "DebugPanel");

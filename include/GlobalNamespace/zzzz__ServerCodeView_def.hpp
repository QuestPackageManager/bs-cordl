#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerCodeView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerCodeView)
namespace HMUI {
class ButtonBinder;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerCodeView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ServerCodeView);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerCodeView
class CORDL_TYPE ServerCodeView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _buttonBinder, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _codeIsShown, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__codeIsShown, put = __cordl_internal_set__codeIsShown)) bool _codeIsShown;

  /// @brief Field _serverCode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__serverCode, put = __cordl_internal_set__serverCode)) ::StringW _serverCode;

  /// @brief Field _serverCodeText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__serverCodeText, put = __cordl_internal_set__serverCodeText)) ::UnityW<::TMPro::TextMeshProUGUI> _serverCodeText;

  /// @brief Method HandleShowServerCodeButtonPressed, addr 0x3b0a014, size 0x10, virtual false, abstract: false, final false
  inline void HandleShowServerCodeButtonPressed();

  static inline ::GlobalNamespace::ServerCodeView* New_ctor();

  /// @brief Method OnDisable, addr 0x3b09ff8, size 0x1c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3b09f64, size 0x94, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshText, addr 0x3b09ec8, size 0x9c, virtual false, abstract: false, final false
  inline void RefreshText(bool showCode);

  /// @brief Method SetCode, addr 0x3b09ebc, size 0xc, virtual false, abstract: false, final false
  inline void SetCode(::StringW serverCode);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr bool const& __cordl_internal_get__codeIsShown() const;

  constexpr bool& __cordl_internal_get__codeIsShown();

  constexpr ::StringW const& __cordl_internal_get__serverCode() const;

  constexpr ::StringW& __cordl_internal_get__serverCode();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__serverCodeText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__serverCodeText();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__codeIsShown(bool value);

  constexpr void __cordl_internal_set__serverCode(::StringW value);

  constexpr void __cordl_internal_set__serverCodeText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3b0a024, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerCodeView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerCodeView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerCodeView(ServerCodeView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerCodeView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerCodeView(ServerCodeView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5006 };

  /// @brief Field _serverCodeText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____serverCodeText;

  /// @brief Field _button, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief Field _buttonBinder, offset: 0x30, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _serverCode, offset: 0x38, size: 0x8, def value: None
  ::StringW ____serverCode;

  /// @brief Field _codeIsShown, offset: 0x40, size: 0x1, def value: None
  bool ____codeIsShown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerCodeView, ____serverCodeText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeView, ____button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeView, ____buttonBinder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeView, ____serverCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeView, ____codeIsShown) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerCodeView, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerCodeView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerCodeView*, "", "ServerCodeView");

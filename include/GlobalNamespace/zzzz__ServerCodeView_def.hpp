#pragma once
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
// Type: ::ServerCodeView
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5811))
// CS Name: ::ServerCodeView*
class CORDL_TYPE ServerCodeView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _serverCodeText, offset 0x18, size 0x8
  __declspec(property(get = __get__serverCodeText, put = __set__serverCodeText))::TMPro::TextMeshProUGUI* _serverCodeText;

  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __get__button, put = __set__button))::UnityEngine::UI::Button* _button;

  /// @brief Field _buttonBinder, offset 0x28, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _serverCode, offset 0x30, size 0x8
  __declspec(property(get = __get__serverCode, put = __set__serverCode))::StringW _serverCode;

  /// @brief Field _codeIsShown, offset 0x38, size 0x1
  __declspec(property(get = __get__codeIsShown, put = __set__codeIsShown)) bool _codeIsShown;

  constexpr ::TMPro::TextMeshProUGUI*& __get__serverCodeText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__serverCodeText() const;

  constexpr void __set__serverCodeText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Button*& __get__button();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__button() const;

  constexpr void __set__button(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr ::StringW& __get__serverCode();

  constexpr ::StringW const& __get__serverCode() const;

  constexpr void __set__serverCode(::StringW value);

  constexpr bool& __get__codeIsShown();

  constexpr bool const& __get__codeIsShown() const;

  constexpr void __set__codeIsShown(bool value);

  /// @brief Method SetCode addr 0x22e9838 size 0xc virtual false final false
  inline void SetCode(::StringW serverCode);

  /// @brief Method OnEnable addr 0x22e98e4 size 0x98 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x22e997c size 0x1c virtual false final false
  inline void OnDisable();

  /// @brief Method HandleShowServerCodeButtonPressed addr 0x22e9998 size 0x10 virtual false final false
  inline void HandleShowServerCodeButtonPressed();

  /// @brief Method RefreshText addr 0x22e9844 size 0xa0 virtual false final false
  inline void RefreshText(bool showCode);

  static inline ::GlobalNamespace::ServerCodeView* New_ctor();

  /// @brief Method .ctor addr 0x22e99a8 size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ServerCodeView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerCodeView(ServerCodeView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerCodeView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerCodeView(ServerCodeView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerCodeView();

public:
  /// @brief Field _serverCodeText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____serverCodeText;

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____button;

  /// @brief Field _buttonBinder, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _serverCode, offset: 0x30, size: 0x8, def value: None
  ::StringW ____serverCode;

  /// @brief Field _codeIsShown, offset: 0x38, size: 0x1, def value: None
  bool ____codeIsShown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerCodeView, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerCodeView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerCodeView*, "", "ServerCodeView");

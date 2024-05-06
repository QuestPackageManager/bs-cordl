#pragma once
// IWYU pragma private; include "GlobalNamespace/SignalOnUIButtonClick.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SignalOnUIButtonClick)
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalOnUIButtonClick;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalOnUIButtonClick);
// Type: ::SignalOnUIButtonClick
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SignalOnUIButtonClick*
class CORDL_TYPE SignalOnUIButtonClick : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button))::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _buttonClickedSignal, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonClickedSignal, put = __cordl_internal_set__buttonClickedSignal))::UnityW<::GlobalNamespace::Signal> _buttonClickedSignal;

  static inline ::GlobalNamespace::SignalOnUIButtonClick* New_ctor();

  /// @brief Method OnDestroy, addr 0x24d7a80, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnReset, addr 0x24d79a4, size 0x50, virtual false, abstract: false, final false
  inline void OnReset();

  /// @brief Method Start, addr 0x24d79f4, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__buttonClickedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__buttonClickedSignal();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buttonClickedSignal(::UnityW<::GlobalNamespace::Signal> value);

  /// @brief Method .ctor, addr 0x24d7b50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalOnUIButtonClick();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalOnUIButtonClick", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalOnUIButtonClick(SignalOnUIButtonClick&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalOnUIButtonClick", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalOnUIButtonClick(SignalOnUIButtonClick const&) = delete;

  /// @brief Field _buttonClickedSignal, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____buttonClickedSignal;

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalOnUIButtonClick, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SignalOnUIButtonClick, ____buttonClickedSignal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SignalOnUIButtonClick, ____button) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalOnUIButtonClick);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalOnUIButtonClick*, "", "SignalOnUIButtonClick");

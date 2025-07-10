#pragma once
// IWYU pragma private; include "HMUI/RangeValuesTextSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RangeValuesTextSlider)
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class TextSlider;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace HMUI {
class RangeValuesTextSlider;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::RangeValuesTextSlider);
// Dependencies HMUI.TextSlider
namespace HMUI {
// Is value type: false
// CS Name: HMUI.RangeValuesTextSlider
class CORDL_TYPE RangeValuesTextSlider : public ::HMUI::TextSlider {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _decButton, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__decButton, put = __cordl_internal_set__decButton)) ::UnityW<::UnityEngine::UI::Button> _decButton;

  /// @brief Field _incButton, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__incButton, put = __cordl_internal_set__incButton)) ::UnityW<::UnityEngine::UI::Button> _incButton;

  /// @brief Field _maxValue, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get__maxValue, put = __cordl_internal_set__maxValue)) float_t _maxValue;

  /// @brief Field _minValue, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get__minValue, put = __cordl_internal_set__minValue)) float_t _minValue;

  __declspec(property(put = set_interactable)) bool interactable;

  __declspec(property(get = get_maxValue, put = set_maxValue)) float_t maxValue;

  __declspec(property(get = get_minValue, put = set_minValue)) float_t minValue;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Field valueDidChangeEvent, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_valueDidChangeEvent,
                      put = __cordl_internal_set_valueDidChangeEvent)) ::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* valueDidChangeEvent;

  /// @brief Method Awake, addr 0x39f12d0, size 0x1e0, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ConvertFromNormalizedValue, addr 0x39f1150, size 0x18, virtual false, abstract: false, final false
  inline float_t ConvertFromNormalizedValue(float_t normalizedValue);

  /// @brief Method HandleNormalizedValueDidChange, addr 0x39f1548, size 0x34, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::TextSlider* slider, float_t normalizedValue);

  static inline ::HMUI::RangeValuesTextSlider* New_ctor();

  /// @brief Method NormalizeValue, addr 0x39f1108, size 0x18, virtual false, abstract: false, final false
  inline float_t NormalizeValue(float_t rangeValue);

  /// @brief Method OnDestroy, addr 0x39f14b0, size 0x98, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method TextForNormalizedValue, addr 0x39f157c, size 0x24, virtual true, abstract: false, final false
  inline ::StringW TextForNormalizedValue(float_t normalizedValue);

  /// @brief Method TextForValue, addr 0x39f15a0, size 0x68, virtual true, abstract: false, final false
  inline ::StringW TextForValue(float_t value);

  /// @brief Method <Awake>b__19_0, addr 0x39f1608, size 0x44, virtual false, abstract: false, final false
  inline void _Awake_b__19_0();

  /// @brief Method <Awake>b__19_1, addr 0x39f1654, size 0x44, virtual false, abstract: false, final false
  inline void _Awake_b__19_1();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__decButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__decButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__incButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__incButton();

  constexpr float_t const& __cordl_internal_get__maxValue() const;

  constexpr float_t& __cordl_internal_get__maxValue();

  constexpr float_t const& __cordl_internal_get__minValue() const;

  constexpr float_t& __cordl_internal_get__minValue();

  constexpr ::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* const& __cordl_internal_get_valueDidChangeEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*& __cordl_internal_get_valueDidChangeEvent();

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__decButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__incButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__maxValue(float_t value);

  constexpr void __cordl_internal_set__minValue(float_t value);

  constexpr void __cordl_internal_set_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value);

  /// @brief Method .ctor, addr 0x39f0ec8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueDidChangeEvent, addr 0x39f1168, size 0xb4, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value);

  /// @brief Method get_maxValue, addr 0x39f1064, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxValue();

  /// @brief Method get_minValue, addr 0x39f0fdc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minValue();

  /// @brief Method get_value, addr 0x39f1128, size 0x28, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method remove_valueDidChangeEvent, addr 0x39f121c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value);

  /// @brief Method set_interactable, addr 0x39f0f6c, size 0x70, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method set_maxValue, addr 0x39f106c, size 0x80, virtual false, abstract: false, final false
  inline void set_maxValue(float_t value);

  /// @brief Method set_minValue, addr 0x39f0fe4, size 0x80, virtual false, abstract: false, final false
  inline void set_minValue(float_t value);

  /// @brief Method set_value, addr 0x39f10ec, size 0x1c, virtual false, abstract: false, final false
  inline void set_value(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeValuesTextSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RangeValuesTextSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeValuesTextSlider(RangeValuesTextSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeValuesTextSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeValuesTextSlider(RangeValuesTextSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16059 };

  /// @brief Field _minValue, offset: 0x144, size: 0x4, def value: None
  float_t ____minValue;

  /// @brief Field _maxValue, offset: 0x148, size: 0x4, def value: None
  float_t ____maxValue;

  /// @brief Field _decButton, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____decButton;

  /// @brief Field _incButton, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____incButton;

  /// @brief Field valueDidChangeEvent, offset: 0x160, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* ___valueDidChangeEvent;

  /// @brief Field _buttonBinder, offset: 0x168, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____minValue) == 0x144, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____maxValue) == 0x148, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____decButton) == 0x150, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____incButton) == 0x158, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ___valueDidChangeEvent) == 0x160, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____buttonBinder) == 0x168, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::RangeValuesTextSlider, 0x170>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::RangeValuesTextSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::RangeValuesTextSlider*, "HMUI", "RangeValuesTextSlider");

#pragma once
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
// Type: HMUI::RangeValuesTextSlider
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 360, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::RangeValuesTextSlider*
class CORDL_TYPE RangeValuesTextSlider : public ::HMUI::TextSlider {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _decButton, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__decButton, put = __cordl_internal_set__decButton))::UnityW<::UnityEngine::UI::Button> _decButton;

  /// @brief Field _incButton, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__incButton, put = __cordl_internal_set__incButton))::UnityW<::UnityEngine::UI::Button> _incButton;

  /// @brief Field _maxValue, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get__maxValue, put = __cordl_internal_set__maxValue)) float_t _maxValue;

  /// @brief Field _minValue, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get__minValue, put = __cordl_internal_set__minValue)) float_t _minValue;

  __declspec(property(get = get_maxValue, put = set_maxValue)) float_t maxValue;

  __declspec(property(get = get_minValue, put = set_minValue)) float_t minValue;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Field valueDidChangeEvent, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_valueDidChangeEvent,
                      put = __cordl_internal_set_valueDidChangeEvent))::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* valueDidChangeEvent;

  /// @brief Method Awake, addr 0x240c950, size 0x1ec, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ConvertFromNormalizedValue, addr 0x240c7d0, size 0x18, virtual false, abstract: false, final false
  inline float_t ConvertFromNormalizedValue(float_t normalizedValue);

  /// @brief Method HandleNormalizedValueDidChange, addr 0x240cbd4, size 0x34, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::TextSlider* slider, float_t normalizedValue);

  static inline ::HMUI::RangeValuesTextSlider* New_ctor();

  /// @brief Method NormalizeValue, addr 0x240c788, size 0x18, virtual false, abstract: false, final false
  inline float_t NormalizeValue(float_t rangeValue);

  /// @brief Method OnDestroy, addr 0x240cb3c, size 0x98, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method TextForNormalizedValue, addr 0x240cc08, size 0x24, virtual true, abstract: false, final false
  inline ::StringW TextForNormalizedValue(float_t normalizedValue);

  /// @brief Method TextForValue, addr 0x240cc2c, size 0x68, virtual true, abstract: false, final false
  inline ::StringW TextForValue(float_t value);

  /// @brief Method <Awake>b__17_0, addr 0x240cc94, size 0x44, virtual false, abstract: false, final false
  inline void _Awake_b__17_0();

  /// @brief Method <Awake>b__17_1, addr 0x240cce0, size 0x44, virtual false, abstract: false, final false
  inline void _Awake_b__17_1();

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__decButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__decButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__incButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__incButton();

  constexpr float_t const& __cordl_internal_get__maxValue() const;

  constexpr float_t& __cordl_internal_get__maxValue();

  constexpr float_t const& __cordl_internal_get__minValue() const;

  constexpr float_t& __cordl_internal_get__minValue();

  constexpr ::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*& __cordl_internal_get_valueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*> const& __cordl_internal_get_valueDidChangeEvent() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__decButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__incButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__maxValue(float_t value);

  constexpr void __cordl_internal_set__minValue(float_t value);

  constexpr void __cordl_internal_set_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value);

  /// @brief Method .ctor, addr 0x240c5b8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueDidChangeEvent, addr 0x240c7e8, size 0xb4, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value);

  /// @brief Method get_maxValue, addr 0x240c6e4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxValue();

  /// @brief Method get_minValue, addr 0x240c65c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minValue();

  /// @brief Method get_value, addr 0x240c7a8, size 0x28, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method remove_valueDidChangeEvent, addr 0x240c89c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value);

  /// @brief Method set_maxValue, addr 0x240c6ec, size 0x80, virtual false, abstract: false, final false
  inline void set_maxValue(float_t value);

  /// @brief Method set_minValue, addr 0x240c664, size 0x80, virtual false, abstract: false, final false
  inline void set_minValue(float_t value);

  /// @brief Method set_value, addr 0x240c76c, size 0x1c, virtual false, abstract: false, final false
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

  /// @brief Field _minValue, offset: 0x13c, size: 0x4, def value: None
  float_t ____minValue;

  /// @brief Field _maxValue, offset: 0x140, size: 0x4, def value: None
  float_t ____maxValue;

  /// @brief Field _decButton, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____decButton;

  /// @brief Field _incButton, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____incButton;

  /// @brief Field valueDidChangeEvent, offset: 0x158, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* ___valueDidChangeEvent;

  /// @brief Field _buttonBinder, offset: 0x160, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::RangeValuesTextSlider, 0x168>, "Size mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____minValue) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____maxValue) == 0x140, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____decButton) == 0x148, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____incButton) == 0x150, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ___valueDidChangeEvent) == 0x158, "Offset mismatch!");

static_assert(offsetof(::HMUI::RangeValuesTextSlider, ____buttonBinder) == 0x160, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::RangeValuesTextSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::RangeValuesTextSlider*, "HMUI", "RangeValuesTextSlider");

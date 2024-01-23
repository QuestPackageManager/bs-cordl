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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13560))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13558))
// CS Name: ::HMUI::RangeValuesTextSlider*
class CORDL_TYPE RangeValuesTextSlider : public ::HMUI::TextSlider {
public:
  // Declarations
  /// @brief Field _minValue, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get__minValue, put = __cordl_internal_set__minValue)) float_t _minValue;

  /// @brief Field _maxValue, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get__maxValue, put = __cordl_internal_set__maxValue)) float_t _maxValue;

  /// @brief Field _decButton, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__decButton, put = __cordl_internal_set__decButton))::UnityW<::UnityEngine::UI::Button> _decButton;

  /// @brief Field _incButton, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__incButton, put = __cordl_internal_set__incButton))::UnityW<::UnityEngine::UI::Button> _incButton;

  /// @brief Field valueDidChangeEvent, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_valueDidChangeEvent,
                      put = __cordl_internal_set_valueDidChangeEvent))::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* valueDidChangeEvent;

  /// @brief Field _buttonBinder, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  __declspec(property(get = get_minValue, put = set_minValue)) float_t minValue;

  __declspec(property(get = get_maxValue, put = set_maxValue)) float_t maxValue;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  constexpr float_t& __cordl_internal_get__minValue();

  constexpr float_t const& __cordl_internal_get__minValue() const;

  constexpr void __cordl_internal_set__minValue(float_t value);

  constexpr float_t& __cordl_internal_get__maxValue();

  constexpr float_t const& __cordl_internal_get__maxValue() const;

  constexpr void __cordl_internal_set__maxValue(float_t value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__decButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__decButton() const;

  constexpr void __cordl_internal_set__decButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__incButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__incButton() const;

  constexpr void __cordl_internal_set__incButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*& __cordl_internal_get_valueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>*> const& __cordl_internal_get_valueDidChangeEvent() const;

  constexpr void __cordl_internal_set_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value);

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method get_minValue, addr 0x21224f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minValue();

  /// @brief Method set_minValue, addr 0x2122500, size 0x80, virtual false, abstract: false, final false
  inline void set_minValue(float_t value);

  /// @brief Method get_maxValue, addr 0x2122580, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxValue();

  /// @brief Method set_maxValue, addr 0x2122588, size 0x80, virtual false, abstract: false, final false
  inline void set_maxValue(float_t value);

  /// @brief Method set_value, addr 0x2122608, size 0x1c, virtual false, abstract: false, final false
  inline void set_value(float_t value);

  /// @brief Method get_value, addr 0x2122644, size 0x28, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method add_valueDidChangeEvent, addr 0x2122684, size 0xb4, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value);

  /// @brief Method remove_valueDidChangeEvent, addr 0x2122738, size 0xb4, virtual false, abstract: false, final false
  inline void remove_valueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::RangeValuesTextSlider>, float_t>* value);

  /// @brief Method Awake, addr 0x21227ec, size 0x1ec, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x21229d8, size 0x98, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNormalizedValueDidChange, addr 0x2122a70, size 0x34, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::TextSlider* slider, float_t normalizedValue);

  /// @brief Method ConvertFromNormalizedValue, addr 0x212266c, size 0x18, virtual false, abstract: false, final false
  inline float_t ConvertFromNormalizedValue(float_t normalizedValue);

  /// @brief Method NormalizeValue, addr 0x2122624, size 0x18, virtual false, abstract: false, final false
  inline float_t NormalizeValue(float_t rangeValue);

  /// @brief Method TextForNormalizedValue, addr 0x2122aa4, size 0x24, virtual true, abstract: false, final false
  inline ::StringW TextForNormalizedValue(float_t normalizedValue);

  /// @brief Method TextForValue, addr 0x2122ac8, size 0x68, virtual true, abstract: false, final false
  inline ::StringW TextForValue(float_t value);

  static inline ::HMUI::RangeValuesTextSlider* New_ctor();

  /// @brief Method .ctor, addr 0x2122454, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__17_0, addr 0x2122b30, size 0x44, virtual false, abstract: false, final false
  inline void _Awake_b__17_0();

  /// @brief Method <Awake>b__17_1, addr 0x2122b7c, size 0x44, virtual false, abstract: false, final false
  inline void _Awake_b__17_1();

  // Ctor Parameters [CppParam { name: "", ty: "RangeValuesTextSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeValuesTextSlider(RangeValuesTextSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeValuesTextSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeValuesTextSlider(RangeValuesTextSlider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeValuesTextSlider();

public:
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

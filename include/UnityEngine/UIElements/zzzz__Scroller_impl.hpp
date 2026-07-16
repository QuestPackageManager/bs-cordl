#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Scroller.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Slider_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Scroller_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__RepeatButton_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scroller_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__Slider_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller_ScrollerSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller_ScrollerSlider::*)(float_t, float_t, ::UnityEngine::UIElements::SliderDirection, float_t)>(
    &::UnityEngine::UIElements::Scroller_ScrollerSlider::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6d6c45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller_ScrollerSlider*>(),
                            { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller_ScrollerSlider.SliderNormalizeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Scroller_ScrollerSlider::*)(float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::Scroller_ScrollerSlider::SliderNormalizeValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6d6cb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller_ScrollerSlider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::Scroller_ScrollerSlider*>(), 165 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Scroller_ScrollerSlider::_ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller_ScrollerSlider*>(),
                          { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, direction, pageSize);
}
inline float_t UnityEngine::UIElements::Scroller_ScrollerSlider::SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Scroller_ScrollerSlider*>(), 165 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, currentValue, lowerValue, higherValue);
}
inline ::UnityEngine::UIElements::Scroller_ScrollerSlider* UnityEngine::UIElements::Scroller_ScrollerSlider::New_ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction,
                                                                                                                      float_t pageSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Scroller_ScrollerSlider*>(start, end, direction, pageSize));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Scroller_ScrollerSlider::Scroller_ScrollerSlider() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller_UxmlFactory::*)()>(&::UnityEngine::UIElements::Scroller_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d6cbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Scroller_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Scroller_UxmlFactory* UnityEngine::UIElements::Scroller_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Scroller_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Scroller_UxmlFactory::Scroller_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::Scroller_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6d6cc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::Scroller_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller_UxmlTraits::*)()>(&::UnityEngine::UIElements::Scroller_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6d6ce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_get_m_LowValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_get_m_LowValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr void UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LowValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_get_m_HighValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_get_m_HighValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr void UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*& UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_get_m_Direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* const&
UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_get_m_Direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr void
UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_set_m_Direction(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Direction = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UIElements::Scroller_UxmlTraits::__cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
inline void UnityEngine::UIElements::Scroller_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                               ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Scroller_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::Scroller_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Scroller_UxmlTraits* UnityEngine::UIElements::Scroller_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Scroller_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Scroller_UxmlTraits::Scroller_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.add_valueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(::System::Action_1<float_t>*)>(&::UnityEngine::UIElements::Scroller::add_valueChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d6bf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "add_valueChanged", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.remove_valueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(::System::Action_1<float_t>*)>(&::UnityEngine::UIElements::Scroller::remove_valueChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d6bff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "remove_valueChanged", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.get_slider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Slider* (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::get_slider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6c0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_slider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.get_lowButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::RepeatButton* (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::get_lowButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6c0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_lowButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.get_highButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::RepeatButton* (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::get_highButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6c0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_highButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::get_value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d64968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(float_t)>(&::UnityEngine::UIElements::Scroller::set_value)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6d64b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.get_lowValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::get_lowValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6d69c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_lowValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.set_lowValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(float_t)>(&::UnityEngine::UIElements::Scroller::set_lowValue)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6d6a28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "set_lowValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.get_highValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::get_highValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6d66024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_highValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.set_highValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(float_t)>(&::UnityEngine::UIElements::Scroller::set_highValue)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6d6a3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "set_highValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.get_direction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::SliderDirection (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::get_direction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d6c0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_direction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.set_direction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(::UnityEngine::UIElements::SliderDirection)>(
    &::UnityEngine::UIElements::Scroller::set_direction)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6d6c190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "set_direction", {}, { ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d6c448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(float_t, float_t, ::System::Action_1<float_t>*, ::UnityEngine::UIElements::SliderDirection)>(
    &::UnityEngine::UIElements::Scroller::_ctor)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6d67294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::Scroller*>(),
            { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action_1<float_t>*>(), ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.Adjust
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(float_t)>(&::UnityEngine::UIElements::Scroller::Adjust)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d6a214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "Adjust", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.OnSliderValueChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(::UnityEngine::UIElements::ChangeEvent_1<float_t>*)>(
    &::UnityEngine::UIElements::Scroller::OnSliderValueChange)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6d6c4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(),
                                                                                           { "OnSliderValueChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.ScrollPageUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::ScrollPageUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6c5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "ScrollPageUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.ScrollPageDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)()>(&::UnityEngine::UIElements::Scroller::ScrollPageDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6c674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "ScrollPageDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.ScrollPageUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(float_t)>(&::UnityEngine::UIElements::Scroller::ScrollPageUp)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d6c5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "ScrollPageUp", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Scroller.ScrollPageDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Scroller::*)(float_t)>(&::UnityEngine::UIElements::Scroller::ScrollPageDown)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d6c67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "ScrollPageDown", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<float_t>*& UnityEngine::UIElements::Scroller::__cordl_internal_get_valueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChanged;
}
constexpr ::System::Action_1<float_t>* const& UnityEngine::UIElements::Scroller::__cordl_internal_get_valueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChanged;
}
constexpr void UnityEngine::UIElements::Scroller::__cordl_internal_set_valueChanged(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueChanged = value;
}
constexpr ::UnityEngine::UIElements::Slider*& UnityEngine::UIElements::Scroller::__cordl_internal_get__slider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Slider* const& UnityEngine::UIElements::Scroller::__cordl_internal_get__slider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider_k__BackingField;
}
constexpr void UnityEngine::UIElements::Scroller::__cordl_internal_set__slider_k__BackingField(::UnityEngine::UIElements::Slider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____slider_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::RepeatButton*& UnityEngine::UIElements::Scroller::__cordl_internal_get__lowButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowButton_k__BackingField;
}
constexpr ::UnityEngine::UIElements::RepeatButton* const& UnityEngine::UIElements::Scroller::__cordl_internal_get__lowButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowButton_k__BackingField;
}
constexpr void UnityEngine::UIElements::Scroller::__cordl_internal_set__lowButton_k__BackingField(::UnityEngine::UIElements::RepeatButton* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lowButton_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::RepeatButton*& UnityEngine::UIElements::Scroller::__cordl_internal_get__highButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highButton_k__BackingField;
}
constexpr ::UnityEngine::UIElements::RepeatButton* const& UnityEngine::UIElements::Scroller::__cordl_internal_get__highButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highButton_k__BackingField;
}
constexpr void UnityEngine::UIElements::Scroller::__cordl_internal_set__highButton_k__BackingField(::UnityEngine::UIElements::RepeatButton* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highButton_k__BackingField = value;
}
inline void UnityEngine::UIElements::Scroller::setStaticF_valueProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "valueProperty", ::UnityEngine::UIElements::Scroller*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Scroller::getStaticF_valueProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "valueProperty", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::setStaticF_lowValueProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "lowValueProperty", ::UnityEngine::UIElements::Scroller*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Scroller::getStaticF_lowValueProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "lowValueProperty", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::setStaticF_highValueProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "highValueProperty", ::UnityEngine::UIElements::Scroller*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Scroller::getStaticF_highValueProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "highValueProperty", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::setStaticF_directionProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "directionProperty", ::UnityEngine::UIElements::Scroller*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Scroller::getStaticF_directionProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "directionProperty", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Scroller*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Scroller::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::setStaticF_horizontalVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "horizontalVariantUssClassName", ::UnityEngine::UIElements::Scroller*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Scroller::getStaticF_horizontalVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "horizontalVariantUssClassName", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::setStaticF_verticalVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalVariantUssClassName", ::UnityEngine::UIElements::Scroller*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Scroller::getStaticF_verticalVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalVariantUssClassName", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::setStaticF_sliderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "sliderUssClassName", ::UnityEngine::UIElements::Scroller*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Scroller::getStaticF_sliderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "sliderUssClassName", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::setStaticF_lowButtonUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "lowButtonUssClassName", ::UnityEngine::UIElements::Scroller*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Scroller::getStaticF_lowButtonUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "lowButtonUssClassName", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::setStaticF_highButtonUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "highButtonUssClassName", ::UnityEngine::UIElements::Scroller*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Scroller::getStaticF_highButtonUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "highButtonUssClassName", ::UnityEngine::UIElements::Scroller*>();
}
inline void UnityEngine::UIElements::Scroller::add_valueChanged(::System::Action_1<float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "add_valueChanged", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Scroller::remove_valueChanged(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "remove_valueChanged", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Slider* UnityEngine::UIElements::Scroller::get_slider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_slider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Slider*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RepeatButton* UnityEngine::UIElements::Scroller::get_lowButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_lowButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RepeatButton*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RepeatButton* UnityEngine::UIElements::Scroller::get_highButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_highButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RepeatButton*>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::Scroller::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Scroller::set_value(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::Scroller::get_lowValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_lowValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Scroller::set_lowValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "set_lowValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::Scroller::get_highValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_highValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Scroller::set_highValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "set_highValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::SliderDirection UnityEngine::UIElements::Scroller::get_direction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "get_direction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SliderDirection>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Scroller::set_direction(::UnityEngine::UIElements::SliderDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "set_direction", {}, { ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Scroller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Scroller::_ctor(float_t lowValue, float_t highValue, ::System::Action_1<float_t>* valueChanged, ::UnityEngine::UIElements::SliderDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Scroller*>(),
          { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action_1<float_t>*>(), ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowValue, highValue, valueChanged, direction);
}
inline void UnityEngine::UIElements::Scroller::Adjust(float_t factor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "Adjust", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factor);
}
inline void UnityEngine::UIElements::Scroller::OnSliderValueChange(::UnityEngine::UIElements::ChangeEvent_1<float_t>* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(),
                                                                                         { "OnSliderValueChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Scroller::ScrollPageUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "ScrollPageUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Scroller::ScrollPageDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "ScrollPageDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Scroller::ScrollPageUp(float_t factor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "ScrollPageUp", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factor);
}
inline void UnityEngine::UIElements::Scroller::ScrollPageDown(float_t factor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Scroller*>(), { "ScrollPageDown", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factor);
}
inline ::UnityEngine::UIElements::Scroller* UnityEngine::UIElements::Scroller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Scroller*>());
}
inline ::UnityEngine::UIElements::Scroller* UnityEngine::UIElements::Scroller::New_ctor(float_t lowValue, float_t highValue, ::System::Action_1<float_t>* valueChanged,
                                                                                        ::UnityEngine::UIElements::SliderDirection direction) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Scroller*>(lowValue, highValue, valueChanged, direction));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Scroller::Scroller() {}

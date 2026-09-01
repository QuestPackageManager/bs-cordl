#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Slider.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Slider_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__DeltaSpeed_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__Slider_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Slider_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Slider_UxmlFactory::*)()>(&::UnityEngine::UIElements::Slider_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d70f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Slider_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Slider_UxmlFactory* UnityEngine::UIElements::Slider_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Slider_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Slider_UxmlFactory::Slider_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Slider_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Slider_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::Slider_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6d70fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::Slider_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Slider_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Slider_UxmlTraits::*)()>(&::UnityEngine::UIElements::Slider_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6d712a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_LowValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_LowValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr void UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LowValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_HighValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_HighValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr void UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_PageSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageSize;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_PageSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageSize;
}
constexpr void UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_set_m_PageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PageSize = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_ShowInputField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowInputField;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_ShowInputField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowInputField;
}
constexpr void UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_set_m_ShowInputField(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowInputField = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_Direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* const&
UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_Direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr void
UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_set_m_Direction(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Direction = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_Inverted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inverted;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_get_m_Inverted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inverted;
}
constexpr void UnityEngine::UIElements::Slider_UxmlTraits::__cordl_internal_set_m_Inverted(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Inverted = value;
}
inline void UnityEngine::UIElements::Slider_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                             ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Slider_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::Slider_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Slider_UxmlTraits* UnityEngine::UIElements::Slider_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Slider_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Slider_UxmlTraits::Slider_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Slider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Slider::*)()>(&::UnityEngine::UIElements::Slider::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d70638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Slider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Slider::*)(float_t, float_t, ::UnityEngine::UIElements::SliderDirection, float_t)>(
    &::UnityEngine::UIElements::Slider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d70094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(),
                            { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Slider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Slider::*)(::StringW, float_t, float_t, ::UnityEngine::UIElements::SliderDirection, float_t)>(
    &::UnityEngine::UIElements::Slider::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6d70650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ".ctor",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                    ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Slider.ApplyInputDeviceDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Slider::*)(::UnityEngine::Vector3, ::UnityEngine::UIElements::DeltaSpeed, float_t)>(
    &::UnityEngine::UIElements::Slider::ApplyInputDeviceDelta)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6d707a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 163 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Slider.SliderLerpUnclamped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Slider::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::Slider::SliderLerpUnclamped)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6d708b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 164 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Slider.SliderNormalizeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Slider::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::Slider::SliderNormalizeValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6d700c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 165 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Slider.SliderRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Slider::*)()>(&::UnityEngine::UIElements::Slider::SliderRange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6d70b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 166 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Slider.ParseStringToValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Slider::*)(::StringW, ::StringW)>(&::UnityEngine::UIElements::Slider::ParseStringToValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d70c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 167 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Slider.ComputeValueFromKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Slider::*)(::UnityEngine::UIElements::BaseSlider_1_SliderKey<float_t>, bool)>(
    &::UnityEngine::UIElements::Slider::ComputeValueFromKey)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6d70c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 168 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Slider::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Slider*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Slider::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Slider*>();
}
inline void UnityEngine::UIElements::Slider::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Slider*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Slider::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Slider*>();
}
inline void UnityEngine::UIElements::Slider::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Slider*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Slider::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Slider*>();
}
inline void UnityEngine::UIElements::Slider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Slider::_ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(),
                          { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, direction, pageSize);
}
inline void UnityEngine::UIElements::Slider::_ctor(::StringW label, float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Slider*>(), { ".ctor",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                         ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, start, end, direction, pageSize);
}
inline void UnityEngine::UIElements::Slider::ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, float_t startValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 163 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta, speed, startValue);
}
inline float_t UnityEngine::UIElements::Slider::SliderLerpUnclamped(float_t a, float_t b, float_t interpolant) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 164 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, a, b, interpolant);
}
inline float_t UnityEngine::UIElements::Slider::SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 165 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, currentValue, lowerValue, higherValue);
}
inline float_t UnityEngine::UIElements::Slider::SliderRange() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 166 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::Slider::ParseStringToValue(::StringW previousValue, ::StringW newValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 167 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, previousValue, newValue);
}
inline void UnityEngine::UIElements::Slider::ComputeValueFromKey(::UnityEngine::UIElements::BaseSlider_1_SliderKey<float_t> sliderKey, bool isShift) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Slider*>(), 168 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderKey, isShift);
}
inline ::UnityEngine::UIElements::Slider* UnityEngine::UIElements::Slider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Slider*>());
}
inline ::UnityEngine::UIElements::Slider* UnityEngine::UIElements::Slider::New_ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Slider*>(start, end, direction, pageSize));
}
inline ::UnityEngine::UIElements::Slider* UnityEngine::UIElements::Slider::New_ctor(::StringW label, float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction,
                                                                                    float_t pageSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Slider*>(label, start, end, direction, pageSize));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Slider::Slider() {}

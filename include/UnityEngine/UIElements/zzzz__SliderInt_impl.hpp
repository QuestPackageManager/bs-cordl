#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SliderInt.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SliderInt_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__DeltaSpeed_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliderInt_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SliderInt_UxmlFactory::*)()>(&::UnityEngine::UIElements::SliderInt_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d6eccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::SliderInt_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::SliderInt_UxmlFactory* UnityEngine::UIElements::SliderInt_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::SliderInt_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SliderInt_UxmlFactory::SliderInt_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SliderInt_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::SliderInt_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x6d6ed34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SliderInt_UxmlTraits::*)()>(&::UnityEngine::UIElements::SliderInt_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6d6f044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_LowValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_LowValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr void UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_set_m_LowValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LowValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_HighValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_HighValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr void UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_set_m_HighValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_PageSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageSize;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_PageSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageSize;
}
constexpr void UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_set_m_PageSize(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PageSize = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_ShowInputField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowInputField;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_ShowInputField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowInputField;
}
constexpr void UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_set_m_ShowInputField(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowInputField = value;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_Direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* const&
UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_Direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr void
UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_set_m_Direction(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Direction = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_Inverted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inverted;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_get_m_Inverted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inverted;
}
constexpr void UnityEngine::UIElements::SliderInt_UxmlTraits::__cordl_internal_set_m_Inverted(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Inverted = value;
}
inline void UnityEngine::UIElements::SliderInt_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::SliderInt_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::SliderInt_UxmlTraits* UnityEngine::UIElements::SliderInt_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::SliderInt_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SliderInt_UxmlTraits::SliderInt_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SliderInt::*)()>(&::UnityEngine::UIElements::SliderInt::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d6df8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SliderInt::*)(::StringW, int32_t, int32_t, ::UnityEngine::UIElements::SliderDirection, float_t)>(
    &::UnityEngine::UIElements::SliderInt::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6d6dfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ".ctor",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt.get_pageSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::SliderInt::*)()>(&::UnityEngine::UIElements::SliderInt::get_pageSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6d6e0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 159 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt.set_pageSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SliderInt::*)(float_t)>(&::UnityEngine::UIElements::SliderInt::set_pageSize)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6d6e140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 160 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt.ApplyInputDeviceDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SliderInt::*)(::UnityEngine::Vector3, ::UnityEngine::UIElements::DeltaSpeed, int32_t)>(
    &::UnityEngine::UIElements::SliderInt::ApplyInputDeviceDelta)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6d6e264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 163 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt.SliderLerpUnclamped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::SliderInt::*)(int32_t, int32_t, float_t)>(&::UnityEngine::UIElements::SliderInt::SliderLerpUnclamped)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6d6e410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 164 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt.SliderNormalizeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::SliderInt::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::UIElements::SliderInt::SliderNormalizeValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6d6e500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 165 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt.SliderRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::SliderInt::*)()>(&::UnityEngine::UIElements::SliderInt::SliderRange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6d6e528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 166 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt.ParseStringToValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::SliderInt::*)(::StringW, ::StringW)>(&::UnityEngine::UIElements::SliderInt::ParseStringToValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6d6e5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 167 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt.ComputeValueAndDirectionFromClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SliderInt::*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::SliderInt::ComputeValueAndDirectionFromClick)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6d6e638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 169 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SliderInt.ComputeValueFromKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SliderInt::*)(::UnityEngine::UIElements::BaseSlider_1_SliderKey<int32_t>, bool)>(
    &::UnityEngine::UIElements::SliderInt::ComputeValueFromKey)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6d6e940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 168 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::SliderInt::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::SliderInt*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::SliderInt::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::SliderInt*>();
}
inline void UnityEngine::UIElements::SliderInt::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::SliderInt*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::SliderInt::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::SliderInt*>();
}
inline void UnityEngine::UIElements::SliderInt::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::SliderInt*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::SliderInt::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::SliderInt*>();
}
inline void UnityEngine::UIElements::SliderInt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::SliderInt::_ctor(::StringW label, int32_t start, int32_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), { ".ctor",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<::UnityEngine::UIElements::SliderDirection>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, start, end, direction, pageSize);
}
inline float_t UnityEngine::UIElements::SliderInt::get_pageSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 159 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::SliderInt::set_pageSize(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 160 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::SliderInt::ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int32_t startValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 163 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta, speed, startValue);
}
inline int32_t UnityEngine::UIElements::SliderInt::SliderLerpUnclamped(int32_t a, int32_t b, float_t interpolant) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 164 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b, interpolant);
}
inline float_t UnityEngine::UIElements::SliderInt::SliderNormalizeValue(int32_t currentValue, int32_t lowerValue, int32_t higherValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 165 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, currentValue, lowerValue, higherValue);
}
inline int32_t UnityEngine::UIElements::SliderInt::SliderRange() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 166 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::SliderInt::ParseStringToValue(::StringW previousValue, ::StringW newValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 167 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, previousValue, newValue);
}
inline void UnityEngine::UIElements::SliderInt::ComputeValueAndDirectionFromClick(float_t sliderLength, float_t dragElementLength, float_t dragElementPos, float_t dragElementLastPos) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 169 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderLength, dragElementLength, dragElementPos, dragElementLastPos);
}
inline void UnityEngine::UIElements::SliderInt::ComputeValueFromKey(::UnityEngine::UIElements::BaseSlider_1_SliderKey<int32_t> sliderKey, bool isShift) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SliderInt*>(), 168 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderKey, isShift);
}
inline ::UnityEngine::UIElements::SliderInt* UnityEngine::UIElements::SliderInt::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::SliderInt*>());
}
inline ::UnityEngine::UIElements::SliderInt* UnityEngine::UIElements::SliderInt::New_ctor(::StringW label, int32_t start, int32_t end, ::UnityEngine::UIElements::SliderDirection direction,
                                                                                          float_t pageSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::SliderInt*>(label, start, end, direction, pageSize));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SliderInt::SliderInt() {}

#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/RuntimeElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Timeline/zzzz__IInterval_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeElement.get_intervalStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Timeline::RuntimeElement::*)()>(&::UnityEngine::Timeline::RuntimeElement::get_intervalStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeElement.get_intervalEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Timeline::RuntimeElement::*)()>(&::UnityEngine::Timeline::RuntimeElement::get_intervalEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeElement.get_intervalBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::RuntimeElement::*)()>(&::UnityEngine::Timeline::RuntimeElement::get_intervalBit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c0300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { "get_intervalBit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeElement.set_intervalBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeElement::*)(int32_t)>(&::UnityEngine::Timeline::RuntimeElement::set_intervalBit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c0308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { "set_intervalBit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeElement.set_enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeElement::*)(bool)>(&::UnityEngine::Timeline::RuntimeElement::set_enable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeElement.EvaluateAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeElement::*)(double_t, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::RuntimeElement::EvaluateAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeElement.DisableAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeElement::*)(double_t, double_t, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::RuntimeElement::DisableAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeElement::*)()>(&::UnityEngine::Timeline::RuntimeElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69bf948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Timeline::RuntimeElement::__cordl_internal_get__intervalBit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intervalBit_k__BackingField;
}
constexpr int32_t const& UnityEngine::Timeline::RuntimeElement::__cordl_internal_get__intervalBit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intervalBit_k__BackingField;
}
constexpr void UnityEngine::Timeline::RuntimeElement::__cordl_internal_set__intervalBit_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intervalBit_k__BackingField = value;
}
inline int64_t UnityEngine::Timeline::RuntimeElement::get_intervalStart() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t UnityEngine::Timeline::RuntimeElement::get_intervalEnd() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::RuntimeElement::get_intervalBit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { "get_intervalBit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::RuntimeElement::set_intervalBit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { "set_intervalBit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::RuntimeElement::set_enable(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::RuntimeElement::EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localTime, frameData);
}
inline void UnityEngine::Timeline::RuntimeElement::DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localTime, rootDuration, frameData);
}
inline void UnityEngine::Timeline::RuntimeElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::RuntimeElement* UnityEngine::Timeline::RuntimeElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::RuntimeElement*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::IInterval"
constexpr UnityEngine::Timeline::RuntimeElement::operator ::UnityEngine::Timeline::IInterval*() noexcept {
  return static_cast<::UnityEngine::Timeline::IInterval*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::IInterval"
constexpr ::UnityEngine::Timeline::IInterval* UnityEngine::Timeline::RuntimeElement::i___UnityEngine__Timeline__IInterval() noexcept {
  return static_cast<::UnityEngine::Timeline::IInterval*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::RuntimeElement::RuntimeElement() {}

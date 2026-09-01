#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRProfile.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRProfile_def.hpp"
#include "GlobalNamespace/zzzz__OVRProfile_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRProfile_State::OVRProfile_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRProfile_State::OVRProfile_State() {}
constexpr ::GlobalNamespace::OVRProfile_State GlobalNamespace::OVRProfile_State::NOT_TRIGGERED{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRProfile_State GlobalNamespace::OVRProfile_State::LOADING{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRProfile_State GlobalNamespace::OVRProfile_State::READY{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRProfile_State GlobalNamespace::OVRProfile_State::ERROR{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::OVRProfile.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRProfile::*)()>(&::GlobalNamespace::OVRProfile::get_id)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ebf070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProfile.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRProfile::*)()>(&::GlobalNamespace::OVRProfile::get_userName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ebf0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProfile.get_locale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRProfile::*)()>(&::GlobalNamespace::OVRProfile::get_locale)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ebf0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_locale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProfile.get_ipd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRProfile::*)()>(&::GlobalNamespace::OVRProfile::get_ipd)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ebf13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_ipd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProfile.get_eyeHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRProfile::*)()>(&::GlobalNamespace::OVRProfile::get_eyeHeight)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ebf234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_eyeHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProfile.get_eyeDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRProfile::*)()>(&::GlobalNamespace::OVRProfile::get_eyeDepth)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ebf288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_eyeDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProfile.get_neckHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRProfile::*)()>(&::GlobalNamespace::OVRProfile::get_neckHeight)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ebf2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_neckHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProfile.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRProfile_State (::GlobalNamespace::OVRProfile::*)()>(&::GlobalNamespace::OVRProfile::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebf2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProfile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRProfile::*)()>(&::GlobalNamespace::OVRProfile::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ebf300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::OVRProfile::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRProfile::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRProfile::get_locale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_locale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRProfile::get_ipd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_ipd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRProfile::get_eyeHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_eyeHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRProfile::get_eyeDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_eyeDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRProfile::get_neckHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_neckHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRProfile_State GlobalNamespace::OVRProfile::get_state() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRProfile_State>(this, ___internal_method);
}
inline void GlobalNamespace::OVRProfile::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProfile*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRProfile* GlobalNamespace::OVRProfile::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRProfile*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRProfile::OVRProfile() {}

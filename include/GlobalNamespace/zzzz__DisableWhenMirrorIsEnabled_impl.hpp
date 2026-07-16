#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableWhenMirrorIsEnabled.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableWhenMirrorIsEnabled_def.hpp"
#include "GlobalNamespace/zzzz__Mirror_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.get_mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Mirror> (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(
    &::GlobalNamespace::DisableWhenMirrorIsEnabled::get_mirror)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e272c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "get_mirror", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.set_mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)(::GlobalNamespace::Mirror*)>(
    &::GlobalNamespace::DisableWhenMirrorIsEnabled::set_mirror)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e2734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "set_mirror", {}, { ::i2c::type_of<::GlobalNamespace::Mirror*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(&::GlobalNamespace::DisableWhenMirrorIsEnabled::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58e273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(&::GlobalNamespace::DisableWhenMirrorIsEnabled::OnDestroy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58e280c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.HandleMirrorDidChangeEnabledState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)(bool)>(
    &::GlobalNamespace::DisableWhenMirrorIsEnabled::HandleMirrorDidChangeEnabledState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58e27e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "HandleMirrorDidChangeEnabledState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(&::GlobalNamespace::DisableWhenMirrorIsEnabled::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e2920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Mirror>& GlobalNamespace::DisableWhenMirrorIsEnabled::__cordl_internal_get__mirror() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirror;
}
constexpr ::UnityW<::GlobalNamespace::Mirror> const& GlobalNamespace::DisableWhenMirrorIsEnabled::__cordl_internal_get__mirror() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirror;
}
constexpr void GlobalNamespace::DisableWhenMirrorIsEnabled::__cordl_internal_set__mirror(::UnityW<::GlobalNamespace::Mirror> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirror = value;
}
inline ::UnityW<::GlobalNamespace::Mirror> GlobalNamespace::DisableWhenMirrorIsEnabled::get_mirror() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "get_mirror", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Mirror>>(this, ___internal_method);
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::set_mirror(::GlobalNamespace::Mirror* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "set_mirror", {}, { ::i2c::type_of<::GlobalNamespace::Mirror*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::HandleMirrorDidChangeEnabledState(bool isEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { "HandleMirrorDidChangeEnabledState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled);
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableWhenMirrorIsEnabled*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableWhenMirrorIsEnabled* GlobalNamespace::DisableWhenMirrorIsEnabled::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisableWhenMirrorIsEnabled*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableWhenMirrorIsEnabled::DisableWhenMirrorIsEnabled() {}

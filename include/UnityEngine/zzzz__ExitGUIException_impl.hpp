#pragma once
// IWYU pragma private; include "UnityEngine\ExitGUIException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__ExitGUIException_def.hpp"
//  Writing Method size for method: ::UnityEngine::ExitGUIException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ExitGUIException::*)()>(&::UnityEngine::ExitGUIException::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b4d268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ExitGUIException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExitGUIException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ExitGUIException::*)(::StringW)>(&::UnityEngine::ExitGUIException::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b46f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ExitGUIException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ExitGUIException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ExitGUIException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ExitGUIException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ExitGUIException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::UnityEngine::ExitGUIException* UnityEngine::ExitGUIException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ExitGUIException*>());
}
inline ::UnityEngine::ExitGUIException* UnityEngine::ExitGUIException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ExitGUIException*>(message));
}
// Ctor Parameters []
constexpr ::UnityEngine::ExitGUIException::ExitGUIException() {}

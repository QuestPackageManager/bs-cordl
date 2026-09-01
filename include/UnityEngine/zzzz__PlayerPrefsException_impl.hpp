#pragma once
// IWYU pragma private; include "UnityEngine\PlayerPrefsException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__PlayerPrefsException_def.hpp"
//  Writing Method size for method: ::UnityEngine::PlayerPrefsException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PlayerPrefsException::*)(::StringW)>(&::UnityEngine::PlayerPrefsException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ad7434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerPrefsException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::PlayerPrefsException::_ctor(::StringW error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerPrefsException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::UnityEngine::PlayerPrefsException* UnityEngine::PlayerPrefsException::New_ctor(::StringW error) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::PlayerPrefsException*>(error));
}
// Ctor Parameters []
constexpr ::UnityEngine::PlayerPrefsException::PlayerPrefsException() {}

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ImmediateModeException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ImmediateModeException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ImmediateModeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ImmediateModeException::*)(::System::Exception*)>(&::UnityEngine::UIElements::ImmediateModeException::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6db2544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ImmediateModeException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ImmediateModeException::_ctor(::System::Exception* inner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ImmediateModeException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inner);
}
inline ::UnityEngine::UIElements::ImmediateModeException* UnityEngine::UIElements::ImmediateModeException::New_ctor(::System::Exception* inner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ImmediateModeException*>(inner));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ImmediateModeException::ImmediateModeException() {}

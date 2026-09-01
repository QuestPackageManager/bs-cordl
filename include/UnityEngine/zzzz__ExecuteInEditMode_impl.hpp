#pragma once
// IWYU pragma private; include "UnityEngine\ExecuteInEditMode.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ExecuteInEditMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::ExecuteInEditMode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ExecuteInEditMode::*)()>(&::UnityEngine::ExecuteInEditMode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6adab24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ExecuteInEditMode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ExecuteInEditMode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ExecuteInEditMode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ExecuteInEditMode* UnityEngine::ExecuteInEditMode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ExecuteInEditMode*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ExecuteInEditMode::ExecuteInEditMode() {}

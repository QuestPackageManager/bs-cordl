#pragma once
// IWYU pragma private; include "UnityEngine/HideInInspector.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__HideInInspector_def.hpp"
//  Writing Method size for method: ::UnityEngine::HideInInspector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::HideInInspector::*)()>(&::UnityEngine::HideInInspector::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ad781c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HideInInspector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::HideInInspector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HideInInspector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::HideInInspector* UnityEngine::HideInInspector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::HideInInspector*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::HideInInspector::HideInInspector() {}

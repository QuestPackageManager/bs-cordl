#pragma once
// IWYU pragma private; include "UnityEngine\FixedJoint.hpp"
#include "UnityEngine/zzzz__Joint_impl.hpp"
#include "UnityEngine/zzzz__FixedJoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::FixedJoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::FixedJoint::*)()>(&::UnityEngine::FixedJoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b90220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::FixedJoint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::FixedJoint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::FixedJoint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::FixedJoint* UnityEngine::FixedJoint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::FixedJoint*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::FixedJoint::FixedJoint() {}

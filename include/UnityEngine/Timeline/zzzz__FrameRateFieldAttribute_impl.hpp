#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\FrameRateFieldAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__FrameRateFieldAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::FrameRateFieldAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::FrameRateFieldAttribute::*)()>(&::UnityEngine::Timeline::FrameRateFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69cb44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::FrameRateFieldAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::FrameRateFieldAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::FrameRateFieldAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::FrameRateFieldAttribute* UnityEngine::Timeline::FrameRateFieldAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::FrameRateFieldAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::FrameRateFieldAttribute::FrameRateFieldAttribute() {}

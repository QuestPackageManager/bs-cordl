#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\CustomSignalEventDrawer.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__CustomSignalEventDrawer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::CustomSignalEventDrawer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::CustomSignalEventDrawer::*)()>(&::UnityEngine::Timeline::CustomSignalEventDrawer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c681c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::CustomSignalEventDrawer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::CustomSignalEventDrawer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::CustomSignalEventDrawer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::CustomSignalEventDrawer* UnityEngine::Timeline::CustomSignalEventDrawer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::CustomSignalEventDrawer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::CustomSignalEventDrawer::CustomSignalEventDrawer() {}

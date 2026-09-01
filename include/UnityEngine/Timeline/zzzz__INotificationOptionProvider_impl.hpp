#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\INotificationOptionProvider.hpp"
#include "UnityEngine/Timeline/zzzz__INotificationOptionProvider_def.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::INotificationOptionProvider.get_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::NotificationFlags (::UnityEngine::Timeline::INotificationOptionProvider::*)()>(
    &::UnityEngine::Timeline::INotificationOptionProvider::get_flags)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::INotificationOptionProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Timeline::INotificationOptionProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Timeline::NotificationFlags UnityEngine::Timeline::INotificationOptionProvider::get_flags() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::INotificationOptionProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::NotificationFlags>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "UnityEngine\Playables\INotificationReceiver.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::INotificationReceiver.OnNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::INotificationReceiver::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*,
                                                                                                                 ::System::Object*)>(&::UnityEngine::Playables::INotificationReceiver::OnNotify)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::INotificationReceiver*>(), { ::i2c::class_of<::UnityEngine::Playables::INotificationReceiver*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::INotificationReceiver::OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::INotificationReceiver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, notification, context);
}

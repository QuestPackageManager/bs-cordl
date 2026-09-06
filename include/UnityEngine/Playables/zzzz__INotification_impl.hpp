#pragma once
// IWYU pragma private; include "UnityEngine/Playables/INotification.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::INotification.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PropertyName (::UnityEngine::Playables::INotification::*)()>(&::UnityEngine::Playables::INotification::get_id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::INotification*>(), { ::i2c::class_of<::UnityEngine::Playables::INotification*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::PropertyName UnityEngine::Playables::INotification::get_id() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::INotification*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DisposeHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DisposeHelper_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DisposeHelper.NotifyDisposedUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IDisposable*)>(&::UnityEngine::UIElements::DisposeHelper::NotifyDisposedUsed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6d893a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DisposeHelper*>(), { "NotifyDisposedUsed", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DisposeHelper::NotifyDisposedUsed(::System::IDisposable* disposable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DisposeHelper*>(), { "NotifyDisposedUsed", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, disposable);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DisposeHelper::DisposeHelper() {}

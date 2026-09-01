#pragma once
// IWYU pragma private; include "System\Threading\IAsyncLocal.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::IAsyncLocal.OnValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::IAsyncLocal::*)(::System::Object*, ::System::Object*, bool)>(&::System::Threading::IAsyncLocal::OnValueChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::IAsyncLocal*>(), { ::i2c::class_of<::System::Threading::IAsyncLocal*>(), 0 }));
    return ___internal_method;
  }
};
inline void System::Threading::IAsyncLocal::OnValueChanged(::System::Object* previousValue, ::System::Object* currentValue, bool contextChanged) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::IAsyncLocal*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previousValue, currentValue, contextChanged);
}

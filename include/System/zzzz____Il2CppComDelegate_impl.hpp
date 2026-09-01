#pragma once
// IWYU pragma private; include "System\__Il2CppComDelegate.hpp"
#include "System/zzzz____Il2CppComObject_impl.hpp"
#include "System/zzzz____Il2CppComDelegate_def.hpp"
//  Writing Method size for method: ::System::__Il2CppComDelegate.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__Il2CppComDelegate::*)()>(&::System::__Il2CppComDelegate::Finalize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x6ea7198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::__Il2CppComDelegate*>(), { ::i2c::class_of<::System::__Il2CppComDelegate*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::__Il2CppComDelegate::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::__Il2CppComDelegate*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__Il2CppComDelegate::__Il2CppComDelegate() {}

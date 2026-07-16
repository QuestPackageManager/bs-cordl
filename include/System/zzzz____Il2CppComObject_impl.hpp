#pragma once
// IWYU pragma private; include "System/__Il2CppComObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz____Il2CppComObject_def.hpp"
//  Writing Method size for method: ::System::__Il2CppComObject.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::__Il2CppComObject::*)()>(&::System::__Il2CppComObject::Finalize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ea3be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::__Il2CppComObject*>(), { ::i2c::class_of<::System::__Il2CppComObject*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::__Il2CppComObject::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::__Il2CppComObject*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__Il2CppComObject::__Il2CppComObject() {}

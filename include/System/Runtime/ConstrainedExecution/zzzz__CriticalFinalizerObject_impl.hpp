#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
//  Writing Method size for method: ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::*)()>(
    &::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6d5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::*)()>(
    &::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::Finalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6d5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::Runtime::ConstrainedExecution::CriticalFinalizerObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::ConstrainedExecution::CriticalFinalizerObject::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject* System::Runtime::ConstrainedExecution::CriticalFinalizerObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject::CriticalFinalizerObject() {}

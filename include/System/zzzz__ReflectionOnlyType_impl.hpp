#pragma once
// IWYU pragma private; include "System/ReflectionOnlyType.hpp"
#include "System/zzzz__RuntimeType_impl.hpp"
#include "System/zzzz__ReflectionOnlyType_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
//  Writing Method size for method: ::System::ReflectionOnlyType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ReflectionOnlyType::*)()>(&::System::ReflectionOnlyType::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c87c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ReflectionOnlyType*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ReflectionOnlyType.get_TypeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeTypeHandle (::System::ReflectionOnlyType::*)()>(&::System::ReflectionOnlyType::get_TypeHandle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c87c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ReflectionOnlyType*>(), { ::i2c::class_of<::System::ReflectionOnlyType*>(), 113 }));
    return ___internal_method;
  }
};
inline void System::ReflectionOnlyType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ReflectionOnlyType*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::RuntimeTypeHandle System::ReflectionOnlyType::get_TypeHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ReflectionOnlyType*>(), 113 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle>(this, ___internal_method);
}
inline ::System::ReflectionOnlyType* System::ReflectionOnlyType::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ReflectionOnlyType*>());
}
// Ctor Parameters []
constexpr ::System::ReflectionOnlyType::ReflectionOnlyType() {}

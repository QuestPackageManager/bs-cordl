#pragma once
// IWYU pragma private; include "System\ArgIterator.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__ArgIterator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ArgIterator.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ArgIterator::*)(::System::Object*)>(&::System::ArgIterator::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c8ecb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ArgIterator>(), { ::i2c::class_of<::System::ArgIterator>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArgIterator.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ArgIterator::*)()>(&::System::ArgIterator::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8ed00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ArgIterator>(), { ::i2c::class_of<::System::ArgIterator>(), 2 }));
    return ___internal_method;
  }
};
inline bool System::ArgIterator::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ArgIterator>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t System::ArgIterator::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ArgIterator>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sig", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "args", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") },
// CppParam { name: "next_arg", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "num_args", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ArgIterator::ArgIterator(::System::IntPtr sig, ::System::IntPtr args, int32_t next_arg, int32_t num_args) noexcept {
  this->sig = sig;
  this->args = args;
  this->next_arg = next_arg;
  this->num_args = num_args;
}
// Ctor Parameters []
constexpr ::System::ArgIterator::ArgIterator() {}

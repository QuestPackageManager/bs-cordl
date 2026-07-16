#pragma once
// IWYU pragma private; include "System/Reflection/Emit/UnmanagedMarshal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/Emit/zzzz__UnmanagedMarshal_def.hpp"
//  Writing Method size for method: ::System::Reflection::Emit::UnmanagedMarshal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Emit::UnmanagedMarshal::*)()>(&::System::Reflection::Emit::UnmanagedMarshal::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b91ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::UnmanagedMarshal*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Reflection::Emit::UnmanagedMarshal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::UnmanagedMarshal*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::Emit::UnmanagedMarshal* System::Reflection::Emit::UnmanagedMarshal::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::Emit::UnmanagedMarshal*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::UnmanagedMarshal::UnmanagedMarshal() {}

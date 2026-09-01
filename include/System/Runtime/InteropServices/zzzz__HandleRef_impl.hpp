#pragma once
// IWYU pragma private; include "System\Runtime\InteropServices\HandleRef.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::HandleRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::HandleRef::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::InteropServices::HandleRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6ba14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::HandleRef>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::HandleRef.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Runtime::InteropServices::HandleRef::*)()>(&::System::Runtime::InteropServices::HandleRef::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6ba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::HandleRef>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::InteropServices::HandleRef::_ctor(::System::Object* wrapper, ::System::IntPtr handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::HandleRef>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, wrapper, handle);
}
inline ::System::IntPtr System::Runtime::InteropServices::HandleRef::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::HandleRef>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_wrapper", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Runtime::InteropServices::HandleRef::HandleRef(::System::Object* _wrapper, ::System::IntPtr _handle) noexcept {
  this->_wrapper = _wrapper;
  this->_handle = _handle;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::HandleRef::HandleRef() {}

#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPurchase.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPurchase_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPurchase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithPurchase::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithPurchase::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPurchase*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPurchase.GetPurchase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Purchase* (::Oculus::Platform::MessageWithPurchase::*)()>(&::Oculus::Platform::MessageWithPurchase::GetPurchase)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPurchase*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithPurchase*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPurchase.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Purchase* (::Oculus::Platform::MessageWithPurchase::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPurchase::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPurchase*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithPurchase*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithPurchase::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPurchase*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::Purchase* Oculus::Platform::MessageWithPurchase::GetPurchase() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPurchase*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Purchase*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Purchase* Oculus::Platform::MessageWithPurchase::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPurchase*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Purchase*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithPurchase* Oculus::Platform::MessageWithPurchase::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithPurchase*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPurchase::MessageWithPurchase() {}

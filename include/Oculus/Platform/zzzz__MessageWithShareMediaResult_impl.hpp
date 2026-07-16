#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithShareMediaResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithShareMediaResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithShareMediaResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithShareMediaResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithShareMediaResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithShareMediaResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithShareMediaResult.GetShareMediaResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ShareMediaResult* (::Oculus::Platform::MessageWithShareMediaResult::*)()>(
    &::Oculus::Platform::MessageWithShareMediaResult::GetShareMediaResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddace4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithShareMediaResult*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithShareMediaResult*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithShareMediaResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ShareMediaResult* (::Oculus::Platform::MessageWithShareMediaResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithShareMediaResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddad28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithShareMediaResult*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithShareMediaResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithShareMediaResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithShareMediaResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ShareMediaResult* Oculus::Platform::MessageWithShareMediaResult::GetShareMediaResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithShareMediaResult*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ShareMediaResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ShareMediaResult* Oculus::Platform::MessageWithShareMediaResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithShareMediaResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ShareMediaResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithShareMediaResult* Oculus::Platform::MessageWithShareMediaResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithShareMediaResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithShareMediaResult::MessageWithShareMediaResult() {}

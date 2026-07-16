#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithUserReportID.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithUserReportID_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserReportID_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserReportID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithUserReportID::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithUserReportID::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ddb3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserReportID*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserReportID.GetUserReportID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserReportID* (::Oculus::Platform::MessageWithUserReportID::*)()>(
    &::Oculus::Platform::MessageWithUserReportID::GetUserReportID)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddb3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserReportID*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithUserReportID*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserReportID.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserReportID* (::Oculus::Platform::MessageWithUserReportID::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithUserReportID::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddb440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserReportID*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithUserReportID*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithUserReportID::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserReportID*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::UserReportID* Oculus::Platform::MessageWithUserReportID::GetUserReportID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUserReportID*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserReportID*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserReportID* Oculus::Platform::MessageWithUserReportID::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUserReportID*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserReportID*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithUserReportID* Oculus::Platform::MessageWithUserReportID::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithUserReportID*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithUserReportID::MessageWithUserReportID() {}

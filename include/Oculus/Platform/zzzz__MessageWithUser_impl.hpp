#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithUser.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithUser_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithUser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithUser::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithUser::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUser.GetUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::User* (::Oculus::Platform::MessageWithUser::*)()>(&::Oculus::Platform::MessageWithUser::GetUser)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddaf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUser*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithUser*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUser.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::User* (::Oculus::Platform::MessageWithUser::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithUser::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddaf84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUser*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithUser*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithUser::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::User* Oculus::Platform::MessageWithUser::GetUser() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUser*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::User*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::User* Oculus::Platform::MessageWithUser::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUser*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::User*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithUser* Oculus::Platform::MessageWithUser::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithUser*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithUser::MessageWithUser() {}

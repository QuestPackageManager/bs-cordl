#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithOrgScopedID.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithOrgScopedID_def.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithOrgScopedID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithOrgScopedID::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithOrgScopedID::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd59ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithOrgScopedID*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithOrgScopedID.GetOrgScopedID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::OrgScopedID* (::Oculus::Platform::MessageWithOrgScopedID::*)()>(
    &::Oculus::Platform::MessageWithOrgScopedID::GetOrgScopedID)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithOrgScopedID*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithOrgScopedID*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithOrgScopedID.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::OrgScopedID* (::Oculus::Platform::MessageWithOrgScopedID::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithOrgScopedID::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithOrgScopedID*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithOrgScopedID*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithOrgScopedID::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithOrgScopedID*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::OrgScopedID* Oculus::Platform::MessageWithOrgScopedID::GetOrgScopedID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithOrgScopedID*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::OrgScopedID*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::OrgScopedID* Oculus::Platform::MessageWithOrgScopedID::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithOrgScopedID*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::OrgScopedID*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithOrgScopedID* Oculus::Platform::MessageWithOrgScopedID::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithOrgScopedID*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithOrgScopedID::MessageWithOrgScopedID() {}

#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithInvitePanelResultInfo.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithInvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithInvitePanelResultInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithInvitePanelResultInfo::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithInvitePanelResultInfo::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithInvitePanelResultInfo.GetInvitePanelResultInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::InvitePanelResultInfo* (::Oculus::Platform::MessageWithInvitePanelResultInfo::*)()>(
    &::Oculus::Platform::MessageWithInvitePanelResultInfo::GetInvitePanelResultInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd8da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithInvitePanelResultInfo.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::InvitePanelResultInfo* (::Oculus::Platform::MessageWithInvitePanelResultInfo::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithInvitePanelResultInfo::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd8dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithInvitePanelResultInfo::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::MessageWithInvitePanelResultInfo::GetInvitePanelResultInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InvitePanelResultInfo*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::MessageWithInvitePanelResultInfo::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InvitePanelResultInfo*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithInvitePanelResultInfo* Oculus::Platform::MessageWithInvitePanelResultInfo::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithInvitePanelResultInfo::MessageWithInvitePanelResultInfo() {}

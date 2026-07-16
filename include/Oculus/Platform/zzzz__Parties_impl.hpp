#pragma once
// IWYU pragma private; include "Oculus/Platform/Parties.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Parties_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Parties.GetCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Party*>* (*)()>(&::Oculus::Platform::Parties::GetCurrent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de861c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Parties*>(), { "GetCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Parties.SetPartyUpdateNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::PartyUpdateNotification*>*)>(
    &::Oculus::Platform::Parties::SetPartyUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de8774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Parties*>(),
                            { "SetPartyUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::PartyUpdateNotification*>*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Party*>* Oculus::Platform::Parties::GetCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Parties*>(), { "GetCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Party*>*>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Parties::SetPartyUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::PartyUpdateNotification*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Parties*>(),
                          { "SetPartyUpdateNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::PartyUpdateNotification*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Parties::Parties() {}

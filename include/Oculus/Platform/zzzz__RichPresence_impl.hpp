#pragma once
// IWYU pragma private; include "Oculus/Platform/RichPresence.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__RichPresence_def.hpp"
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__RichPresenceOptions_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::RichPresence.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::RichPresence::Clear)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5de8948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::RichPresence*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresence.GetDestinations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* (*)()>(&::Oculus::Platform::RichPresence::GetDestinations)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de8a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::RichPresence*>(), { "GetDestinations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresence.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::RichPresenceOptions*)>(&::Oculus::Platform::RichPresence::Set)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5de8be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::RichPresence*>(), { "Set", {}, { ::i2c::type_of<::Oculus::Platform::RichPresenceOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresence.GetNextDestinationListPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* (*)(::Oculus::Platform::Models::DestinationList*)>(
    &::Oculus::Platform::RichPresence::GetNextDestinationListPage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5de8d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::RichPresence*>(),
                                                                                           { "GetNextDestinationListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::DestinationList*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::RichPresence::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::RichPresence*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* Oculus::Platform::RichPresence::GetDestinations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::RichPresence*>(), { "GetDestinations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::RichPresence::Set(::Oculus::Platform::RichPresenceOptions* richPresenceOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::RichPresence*>(), { "Set", {}, { ::i2c::type_of<::Oculus::Platform::RichPresenceOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, richPresenceOptions);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* Oculus::Platform::RichPresence::GetNextDestinationListPage(::Oculus::Platform::Models::DestinationList* list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::RichPresence*>(),
                                                                                         { "GetNextDestinationListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::DestinationList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>*>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RichPresence::RichPresence() {}

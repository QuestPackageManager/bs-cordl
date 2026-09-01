#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\EnvoyInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__EnvoyInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/zzzz__IEnvoyInfo_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::EnvoyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::EnvoyInfo::*)(::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::EnvoyInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::EnvoyInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::EnvoyInfo.get_EnvoySinks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::EnvoyInfo::*)()>(
    &::System::Runtime::Remoting::EnvoyInfo::get_EnvoySinks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::EnvoyInfo*>(), { "get_EnvoySinks", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::EnvoyInfo::__cordl_internal_get_envoySinks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envoySinks;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::EnvoyInfo::__cordl_internal_get_envoySinks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envoySinks;
}
constexpr void System::Runtime::Remoting::EnvoyInfo::__cordl_internal_set_envoySinks(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___envoySinks = value;
}
inline void System::Runtime::Remoting::EnvoyInfo::_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* sinks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::EnvoyInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sinks);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::EnvoyInfo::get_EnvoySinks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::EnvoyInfo*>(), { "get_EnvoySinks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::EnvoyInfo* System::Runtime::Remoting::EnvoyInfo::New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* sinks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::EnvoyInfo*>(sinks));
}
/// @brief Convert operator to "::System::Runtime::Remoting::IEnvoyInfo"
constexpr System::Runtime::Remoting::EnvoyInfo::operator ::System::Runtime::Remoting::IEnvoyInfo*() noexcept {
  return static_cast<::System::Runtime::Remoting::IEnvoyInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::IEnvoyInfo"
constexpr ::System::Runtime::Remoting::IEnvoyInfo* System::Runtime::Remoting::EnvoyInfo::i___System__Runtime__Remoting__IEnvoyInfo() noexcept {
  return static_cast<::System::Runtime::Remoting::IEnvoyInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::EnvoyInfo::EnvoyInfo() {}

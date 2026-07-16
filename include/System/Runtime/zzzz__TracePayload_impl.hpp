#pragma once
// IWYU pragma private; include "System/Runtime/TracePayload.hpp"
#include "System/Runtime/zzzz__TracePayload_def.hpp"
//  Writing Method size for method: ::System::Runtime::TracePayload._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::TracePayload::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Runtime::TracePayload::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61824bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TracePayload.get_SerializedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::TracePayload::*)()>(&::System::Runtime::TracePayload::get_SerializedException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61824cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(), { "get_SerializedException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TracePayload.get_EventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::TracePayload::*)()>(&::System::Runtime::TracePayload::get_EventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61824d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(), { "get_EventSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TracePayload.get_AppDomainFriendlyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::TracePayload::*)()>(&::System::Runtime::TracePayload::get_AppDomainFriendlyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61824dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(), { "get_AppDomainFriendlyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TracePayload.get_ExtendedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::TracePayload::*)()>(&::System::Runtime::TracePayload::get_ExtendedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61824e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(), { "get_ExtendedData", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::TracePayload::_ctor(::StringW serializedException, ::StringW eventSource, ::StringW appDomainFriendlyName, ::StringW extendedData, ::StringW hostReference) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, serializedException, eventSource, appDomainFriendlyName, extendedData, hostReference);
}
inline ::StringW System::Runtime::TracePayload::get_SerializedException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(), { "get_SerializedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Runtime::TracePayload::get_EventSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(), { "get_EventSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Runtime::TracePayload::get_AppDomainFriendlyName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(), { "get_AppDomainFriendlyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Runtime::TracePayload::get_ExtendedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TracePayload>(), { "get_ExtendedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "serializedException", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventSource", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "appDomainFriendlyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "extendedData", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "hostReference", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::TracePayload::TracePayload(::StringW serializedException, ::StringW eventSource, ::StringW appDomainFriendlyName, ::StringW extendedData,
                                                        ::StringW hostReference) noexcept {
  this->serializedException = serializedException;
  this->eventSource = eventSource;
  this->appDomainFriendlyName = appDomainFriendlyName;
  this->extendedData = extendedData;
  this->hostReference = hostReference;
}
// Ctor Parameters []
constexpr ::System::Runtime::TracePayload::TracePayload() {}

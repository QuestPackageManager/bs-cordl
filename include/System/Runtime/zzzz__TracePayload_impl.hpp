#pragma once
// IWYU pragma private; include "System/Runtime/TracePayload.hpp"
#include "System/Runtime/zzzz__TracePayload_def.hpp"
//  Writing Method size for method: ::System::Runtime::TracePayload._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::TracePayload::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::TracePayload::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f6b5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TracePayload.get_SerializedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::TracePayload::*)()>(&::System::Runtime::TracePayload::get_SerializedException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6b600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(),
                                                                               "get_SerializedException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TracePayload.get_EventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::TracePayload::*)()>(&::System::Runtime::TracePayload::get_EventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6b608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(), "get_EventSource",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TracePayload.get_AppDomainFriendlyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::TracePayload::*)()>(&::System::Runtime::TracePayload::get_AppDomainFriendlyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6b610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(),
                                                                               "get_AppDomainFriendlyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TracePayload.get_ExtendedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::TracePayload::*)()>(&::System::Runtime::TracePayload::get_ExtendedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6b618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(), "get_ExtendedData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::TracePayload::_ctor(::StringW serializedException, ::StringW eventSource, ::StringW appDomainFriendlyName, ::StringW extendedData, ::StringW hostReference) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializedException, eventSource, appDomainFriendlyName, extendedData, hostReference);
}
inline ::StringW System::Runtime::TracePayload::get_SerializedException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(), "get_SerializedException",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::TracePayload::get_EventSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(), "get_EventSource",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::TracePayload::get_AppDomainFriendlyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(),
                                                                             "get_AppDomainFriendlyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::TracePayload::get_ExtendedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TracePayload>::get(), "get_ExtendedData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
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

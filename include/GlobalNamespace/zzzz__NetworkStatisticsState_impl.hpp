#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkStatisticsState.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsDelta_def.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsState_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22dd3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::*)(
    ::ByRef<::GlobalNamespace::NetworkStatisticsState>)>(&::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22dd488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::*)(::ByRef<::GlobalNamespace::NetworkStatisticsState>, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22dd49c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::*)(
    ::ByRef<::GlobalNamespace::NetworkStatisticsState>, ::System::IAsyncResult*)>(&::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22dd528;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::Invoke(::ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statisticsState);
}
inline ::System::IAsyncResult* GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::BeginInvoke(::ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState,
                                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, statisticsState, callback, object);
}
inline void GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::EndInvoke(::ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statisticsState, result);
}
inline ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::NetworkStatisticsState_NetworkStatisticsUpdateDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkStatisticsState::*)(
    int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t)>(&::GlobalNamespace::NetworkStatisticsState::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22dd34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState.op_Subtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NetworkStatisticsDelta (*)(
    ::ByRef<::GlobalNamespace::NetworkStatisticsState>, ::ByRef<::GlobalNamespace::NetworkStatisticsState>)>(&::GlobalNamespace::NetworkStatisticsState::op_Subtraction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22dd374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NetworkStatisticsState>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NetworkStatisticsState>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkStatisticsState::_ctor(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted,
                                                           int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext,
                                                           int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packetsSent, packetsReceived, bytesSent, bytesReceived, packetsLost, packetsSentEncrypted, packetsSentPlaintext,
                                                          packetsSentRejected, packetsReceivedEncrypted, packetsReceivedPlaintext, packetsReceivedRejected, encryptionProcessingTime,
                                                          decryptionProcessingTime);
}
inline ::GlobalNamespace::NetworkStatisticsDelta GlobalNamespace::NetworkStatisticsState::op_Subtraction(::ByRef<::GlobalNamespace::NetworkStatisticsState> a,
                                                                                                         ::ByRef<::GlobalNamespace::NetworkStatisticsState> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState>::get(), "op_Subtraction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NetworkStatisticsState>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NetworkStatisticsState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkStatisticsDelta, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "packetsSent", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceived", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "bytesSent", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesReceived", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "packetsLost", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsSentEncrypted", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "packetsSentPlaintext", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsSentRejected", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "packetsReceivedEncrypted", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceivedPlaintext", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "packetsReceivedRejected", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "encryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "decryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NetworkStatisticsState::NetworkStatisticsState(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost,
                                                                            int64_t packetsSentEncrypted, int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted,
                                                                            int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime,
                                                                            int64_t decryptionProcessingTime) noexcept {
  this->packetsSent = packetsSent;
  this->packetsReceived = packetsReceived;
  this->bytesSent = bytesSent;
  this->bytesReceived = bytesReceived;
  this->packetsLost = packetsLost;
  this->packetsSentEncrypted = packetsSentEncrypted;
  this->packetsSentPlaintext = packetsSentPlaintext;
  this->packetsSentRejected = packetsSentRejected;
  this->packetsReceivedEncrypted = packetsReceivedEncrypted;
  this->packetsReceivedPlaintext = packetsReceivedPlaintext;
  this->packetsReceivedRejected = packetsReceivedRejected;
  this->encryptionProcessingTime = encryptionProcessingTime;
  this->decryptionProcessingTime = decryptionProcessingTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkStatisticsState::NetworkStatisticsState() {}

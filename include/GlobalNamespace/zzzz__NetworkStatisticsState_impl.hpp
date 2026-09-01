#pragma once
// IWYU pragma private; include "GlobalNamespace\NetworkStatisticsState.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x333b5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::*)(::by_ref<::GlobalNamespace::NetworkStatisticsState>)>(
    &::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x333b650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::*)(::by_ref<::GlobalNamespace::NetworkStatisticsState>, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x333b664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::*)(
    ::by_ref<::GlobalNamespace::NetworkStatisticsState>, ::System::IAsyncResult*)>(&::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x333b6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::Invoke(::by_ref<::GlobalNamespace::NetworkStatisticsState> statisticsState) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statisticsState);
}
inline ::System::IAsyncResult* GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::BeginInvoke(::by_ref<::GlobalNamespace::NetworkStatisticsState> statisticsState,
                                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, statisticsState, callback, object);
}
inline void GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::EndInvoke(::by_ref<::GlobalNamespace::NetworkStatisticsState> statisticsState, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statisticsState, result);
}
inline ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate* GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkStatisticsState_NetworkStatisticsUpdateDelegate::NetworkStatisticsState_NetworkStatisticsUpdateDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkStatisticsState::*)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t,
                                                                                                           int64_t, int64_t, int64_t)>(&::GlobalNamespace::NetworkStatisticsState::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3338a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsState>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                                 ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                                 ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkStatisticsDelta (*)(
    ::by_ref<::GlobalNamespace::NetworkStatisticsState>, ::by_ref<::GlobalNamespace::NetworkStatisticsState>)>(&::GlobalNamespace::NetworkStatisticsState::op_Subtraction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x333b554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::NetworkStatisticsState>(),
                         { "op_Subtraction", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkStatisticsState>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkStatisticsState>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkStatisticsState::_ctor(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted,
                                                           int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext,
                                                           int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsState>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, packetsSent, packetsReceived, bytesSent, bytesReceived, packetsLost, packetsSentEncrypted, packetsSentPlaintext,
                                                   packetsSentRejected, packetsReceivedEncrypted, packetsReceivedPlaintext, packetsReceivedRejected, encryptionProcessingTime,
                                                   decryptionProcessingTime);
}
inline ::GlobalNamespace::NetworkStatisticsDelta GlobalNamespace::NetworkStatisticsState::op_Subtraction(::by_ref<::GlobalNamespace::NetworkStatisticsState> a,
                                                                                                         ::by_ref<::GlobalNamespace::NetworkStatisticsState> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkStatisticsState>(),
                          { "op_Subtraction", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkStatisticsState>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkStatisticsState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkStatisticsDelta>(nullptr, ___internal_method, a, b);
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

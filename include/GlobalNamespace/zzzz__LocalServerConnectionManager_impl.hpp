#pragma once
// IWYU pragma private; include "GlobalNamespace\LocalServerConnectionManager.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__LocalServerConnectionManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalServerConnectionManager_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__LocalServerConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__LocalServerConnectionRequestHandler_def.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState::LocalServerConnectionManager_ConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState::LocalServerConnectionManager_ConnectionState() {}
constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState GlobalNamespace::LocalServerConnectionManager_ConnectionState::Unconnected{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState GlobalNamespace::LocalServerConnectionManager_ConnectionState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState GlobalNamespace::LocalServerConnectionManager_ConnectionState::Connected{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState GlobalNamespace::LocalServerConnectionManager_ConnectionState::Disconnecting{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::*)()>(
    &::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32ae9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::__cordl_internal_get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::__cordl_internal_get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::__cordl_internal_set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::__cordl_internal_get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::__cordl_internal_get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::__cordl_internal_set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___configuration = value;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*&
GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::__cordl_internal_get_authenticationTokenProviderTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authenticationTokenProviderTask;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* const&
GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::__cordl_internal_get_authenticationTokenProviderTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authenticationTokenProviderTask;
}
constexpr void GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::__cordl_internal_set_authenticationTokenProviderTask(
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authenticationTokenProviderTask = value;
}
inline void GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase* GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase*>());
}
/// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>"
constexpr GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::operator ::GlobalNamespace::IConnectionInitParams_1<
    ::GlobalNamespace::LocalServerConnectionManager*>*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>"
constexpr ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*
GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::i___GlobalNamespace__IConnectionInitParams_1___GlobalNamespace__LocalServerConnectionManager__() noexcept {
  return static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase::LocalServerConnectionManager_LocalServerConnectionManagerParamsBase() {}
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::*)()>(
    &::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32ae9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::__cordl_internal_get_port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr int32_t const& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::__cordl_internal_get_port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr void GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::__cordl_internal_set_port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___port = value;
}
constexpr ::StringW& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::__cordl_internal_get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr ::StringW const& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::__cordl_internal_get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr void GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::__cordl_internal_set_secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secret = value;
}
constexpr ::StringW& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::__cordl_internal_get_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr ::StringW const& GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::__cordl_internal_get_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr void GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::__cordl_internal_set_code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___code = value;
}
inline void GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams*
GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams() {}
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams::*)()>(
    &::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32ae9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams*
GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams() {}
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.add_onInitializedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LocalServerConnectionManager::add_onInitializedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32ac6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "add_onInitializedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.remove_onInitializedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LocalServerConnectionManager::remove_onInitializedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32ac77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "remove_onInitializedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.add_onConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LocalServerConnectionManager::add_onConnectedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32ac828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "add_onConnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.remove_onConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action*)>(
    &::GlobalNamespace::LocalServerConnectionManager::remove_onConnectedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32ac8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "remove_onConnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.add_onDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::LocalServerConnectionManager::add_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32ac980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                             { "add_onDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.remove_onDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::LocalServerConnectionManager::remove_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32aca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                             { "remove_onDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.add_onConnectionFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::LocalServerConnectionManager::add_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32acb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                             { "add_onConnectionFailedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.remove_onConnectionFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::LocalServerConnectionManager::remove_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32acbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                             { "remove_onConnectionFailedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.add_onConnectionConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(
    &::GlobalNamespace::LocalServerConnectionManager::add_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32acc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                             { "add_onConnectionConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IConnection*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.remove_onConnectionConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(
    &::GlobalNamespace::LocalServerConnectionManager::remove_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32acd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                             { "remove_onConnectionConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IConnection*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.add_onConnectionDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(
    ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LocalServerConnectionManager::add_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32ace00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                            { "add_onConnectionDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.remove_onConnectionDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(
    ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LocalServerConnectionManager::remove_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32acec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                            { "remove_onConnectionDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.add_onReceivedDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*)>(
        &::GlobalNamespace::LocalServerConnectionManager::add_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32acf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
            { "add_onReceivedDataEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.remove_onReceivedDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*)>(
        &::GlobalNamespace::LocalServerConnectionManager::remove_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32ad040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
            { "remove_onReceivedDataEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_userId)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x32ad100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_userName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x32ad214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_compatibilityVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_compatibilityVersion)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32ad328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_compatibilityVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_isConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32ad3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_isConnecting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32ad3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isConnecting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_isDisconnecting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32ad3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isDisconnecting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_connectionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_connectionCount)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32ad400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_connectionCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32ad4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isConnectionOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_isDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_isDisposed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32ad550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isDisposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_selectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::LocalServerConnectionManager::*)()>(
    &::GlobalNamespace::LocalServerConnectionManager::get_selectionMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32ad5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_selectionMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::LocalServerConnectionManager::*)()>(
    &::GlobalNamespace::LocalServerConnectionManager::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32ad610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_configuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_code
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ad624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_code", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.get_secret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::get_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ad62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_secret", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x32ad634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::GlobalNamespace::IConnectionManager*)>(
    &::GlobalNamespace::LocalServerConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x32ad694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IConnectionManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32adb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.PollUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::PollUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32adc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "PollUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.SendToAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(
    &::GlobalNamespace::LocalServerConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32adcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                             { "SendToAll", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.SendToAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod, ::GlobalNamespace::IConnection*)>(&::GlobalNamespace::LocalServerConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x32add74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
            { "SendToAll", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>(), ::i2c::type_of<::GlobalNamespace::IConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.ConnectToLocalServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::StringW, ::StringW, ::GlobalNamespace::GameplayServerConfiguration, ::GlobalNamespace::BeatmapLevelSelectionMask, int32_t)>(
        &::GlobalNamespace::LocalServerConnectionManager::ConnectToLocalServer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x32ade44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                             { "ConnectToLocalServer",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.GetPlayerSessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGNet::Core::GameLift::PlayerSessionInfo* (::GlobalNamespace::LocalServerConnectionManager::*)()>(
    &::GlobalNamespace::LocalServerConnectionManager::GetPlayerSessionInfo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x32adfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "GetPlayerSessionInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.HandleConnectToServerSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(
    ::StringW, ::StringW, int32_t, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::LocalServerConnectionManager::HandleConnectToServerSuccess)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x32ae068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                            { "HandleConnectToServerSuccess",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.GetPublicServers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(
    ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*,
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, int32_t, int32_t)>(&::GlobalNamespace::LocalServerConnectionManager::GetPublicServers)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32ae690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                { "GetPublicServers",
                                                  {},
                                                  { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*>(),
                                                    ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                    ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.HandleConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)()>(&::GlobalNamespace::LocalServerConnectionManager::HandleConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32ae6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "HandleConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.HandleServerConnectionConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::GlobalNamespace::IConnection*)>(
    &::GlobalNamespace::LocalServerConnectionManager::HandleServerConnectionConnected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32ae71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                                                           { "HandleServerConnectionConnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.HandleServerConnectionDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::LocalServerConnectionManager::HandleServerConnectionDisconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32ae79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                            { "HandleServerConnectionDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnection*>(), ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.HandleServerConnectionFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::LocalServerConnectionManager::HandleServerConnectionFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ae7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                                                           { "HandleServerConnectionFailed", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.HandleReceivedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(
    ::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::LocalServerConnectionManager::HandleReceivedData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32ae7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                            { "HandleReceivedData",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::IConnection*>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::LocalServerConnectionManager::Disconnect)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x32ae3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "Disconnect", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.GetConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnection* (::GlobalNamespace::LocalServerConnectionManager::*)(int32_t)>(
    &::GlobalNamespace::LocalServerConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x32ae7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "GetConnection", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.DisposeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::GlobalNamespace::LocalServerConnectionManager::*)()>(
    &::GlobalNamespace::LocalServerConnectionManager::DisposeAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x32ae8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "DisposeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionManager.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerConnectionManager::*)(::StringW)>(&::GlobalNamespace::LocalServerConnectionManager::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x32adf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onInitializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInitializedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onInitializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInitializedEvent;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set_onInitializedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onInitializedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectedEvent;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set_onConnectedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onConnectedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisconnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDisconnectedEvent;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onDisconnectedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onConnectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionFailedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onConnectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionFailedEvent;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onConnectionFailedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onConnectionConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionConnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnection*>* const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onConnectionConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionConnectedEvent;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onConnectionConnectedEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*&
GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onConnectionDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionDisconnectedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* const&
GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onConnectionDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onConnectionDisconnectedEvent;
}
constexpr void
GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onConnectionDisconnectedEvent = value;
}
constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*&
GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onReceivedDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceivedDataEvent;
}
constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* const&
GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get_onReceivedDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onReceivedDataEvent;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set_onReceivedDataEvent(
    ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onReceivedDataEvent = value;
}
constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__connectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr ::GlobalNamespace::LocalServerConnectionManager_ConnectionState const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__connectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set__connectionState(::GlobalNamespace::LocalServerConnectionManager_ConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState = value;
}
constexpr ::GlobalNamespace::LocalServerConnectionRequestHandler*& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__connectionRequestHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionRequestHandler;
}
constexpr ::GlobalNamespace::LocalServerConnectionRequestHandler* const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__connectionRequestHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionRequestHandler;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set__connectionRequestHandler(::GlobalNamespace::LocalServerConnectionRequestHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionRequestHandler = value;
}
constexpr ::GlobalNamespace::IConnectionManager*& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__connectionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionManager;
}
constexpr ::GlobalNamespace::IConnectionManager* const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__connectionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionManager;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set__connectionManager(::GlobalNamespace::IConnectionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionManager = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__connectionCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__connectionCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionCancellationTokenSource;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set__connectionCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionCancellationTokenSource = value;
}
constexpr ::StringW& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
constexpr ::StringW const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set__code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____code = value;
}
constexpr ::StringW& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secret;
}
constexpr ::StringW const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secret;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set__secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secret = value;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr void GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration = value;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*&
GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__authenticationTokenProviderTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationTokenProviderTask;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* const&
GlobalNamespace::LocalServerConnectionManager::__cordl_internal_get__authenticationTokenProviderTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationTokenProviderTask;
}
constexpr void
GlobalNamespace::LocalServerConnectionManager::__cordl_internal_set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____authenticationTokenProviderTask = value;
}
inline void GlobalNamespace::LocalServerConnectionManager::add_onInitializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "add_onInitializedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::remove_onInitializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "remove_onInitializedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::add_onConnectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "add_onConnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::remove_onConnectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "remove_onConnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                           { "add_onDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                           { "remove_onDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                           { "add_onConnectionFailedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                           { "remove_onConnectionFailedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                           { "add_onConnectionConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IConnection*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                           { "remove_onConnectionConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IConnection*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                          { "add_onConnectionDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                          { "remove_onConnectionDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LocalServerConnectionManager::add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
          { "add_onReceivedDataEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalServerConnectionManager::remove_onReceivedDataEvent(
    ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
          { "remove_onReceivedDataEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LocalServerConnectionManager::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalServerConnectionManager::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalServerConnectionManager::get_compatibilityVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_compatibilityVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalServerConnectionManager::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalServerConnectionManager::get_isConnecting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isConnecting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalServerConnectionManager::get_isDisconnecting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isDisconnecting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LocalServerConnectionManager::get_connectionCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_connectionCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalServerConnectionManager::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isConnectionOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalServerConnectionManager::get_isDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_isDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::LocalServerConnectionManager::get_selectionMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_selectionMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LocalServerConnectionManager::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_configuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalServerConnectionManager::get_code() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_code", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalServerConnectionManager::get_secret() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "get_secret", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LocalServerConnectionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalServerConnectionManager::_ctor(::GlobalNamespace::IConnectionManager* connectionManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IConnectionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionManager);
}
inline void GlobalNamespace::LocalServerConnectionManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalServerConnectionManager::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "PollUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalServerConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                           { "SendToAll", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, deliveryMethod);
}
inline void GlobalNamespace::LocalServerConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod,
                                                                     ::GlobalNamespace::IConnection* excludingConnection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
          { "SendToAll", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>(), ::i2c::type_of<::GlobalNamespace::IConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, deliveryMethod, excludingConnection);
}
template <typename T> inline bool GlobalNamespace::LocalServerConnectionManager::Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                           { "Init", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::IConnectionInitParams_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, initParams);
}
inline void GlobalNamespace::LocalServerConnectionManager::ConnectToLocalServer(::StringW secret, ::StringW code, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                                ::GlobalNamespace::BeatmapLevelSelectionMask mask, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                           { "ConnectToLocalServer",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secret, code, configuration, mask, port);
}
inline ::BGNet::Core::GameLift::PlayerSessionInfo* GlobalNamespace::LocalServerConnectionManager::GetPlayerSessionInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "GetPlayerSessionInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::GameLift::PlayerSessionInfo*>(this, ___internal_method);
}
inline void GlobalNamespace::LocalServerConnectionManager::HandleConnectToServerSuccess(::StringW playerSessionId, ::StringW hostName, int32_t port, ::StringW gameSessionId, ::StringW secret,
                                                                                        ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                        ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                          { "HandleConnectToServerSuccess",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerSessionId, hostName, port, gameSessionId, secret, code, selectionMask, configuration);
}
inline void GlobalNamespace::LocalServerConnectionManager::GetPublicServers(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                                                            ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure,
                                                                            ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                            int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                              { "GetPublicServers",
                                                {},
                                                { ::i2c::type_of<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*>(),
                                                  ::i2c::type_of<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                  ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onSuccess, onFailure, selectionMask, configuration, offset, count);
}
inline void GlobalNamespace::LocalServerConnectionManager::HandleConnected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "HandleConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalServerConnectionManager::HandleServerConnectionConnected(::GlobalNamespace::IConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                                                         { "HandleServerConnectionConnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
inline void GlobalNamespace::LocalServerConnectionManager::HandleServerConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                       { "HandleServerConnectionDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnection*>(), ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, reason);
}
inline void GlobalNamespace::LocalServerConnectionManager::HandleServerConnectionFailed(::GlobalNamespace::ConnectionFailedReason failedReason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                                                                                         { "HandleServerConnectionFailed", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, failedReason);
}
inline void GlobalNamespace::LocalServerConnectionManager::HandleReceivedData(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader,
                                                                              ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(),
                          { "HandleReceivedData",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::IConnection*>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::BGNet::Core::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, reader, deliveryMethod);
}
inline void GlobalNamespace::LocalServerConnectionManager::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "Disconnect", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
inline ::GlobalNamespace::IConnection* GlobalNamespace::LocalServerConnectionManager::GetConnection(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "GetConnection", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection*>(this, ___internal_method, index);
}
inline ::System::Threading::Tasks::ValueTask GlobalNamespace::LocalServerConnectionManager::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "DisposeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
inline void GlobalNamespace::LocalServerConnectionManager::Log(::StringW log) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerConnectionManager*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log);
}
inline ::GlobalNamespace::LocalServerConnectionManager* GlobalNamespace::LocalServerConnectionManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalServerConnectionManager*>());
}
inline ::GlobalNamespace::LocalServerConnectionManager* GlobalNamespace::LocalServerConnectionManager::New_ctor(::GlobalNamespace::IConnectionManager* connectionManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalServerConnectionManager*>(connectionManager));
}
/// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
constexpr GlobalNamespace::LocalServerConnectionManager::operator ::GlobalNamespace::IConnectionManager*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionManager"
constexpr ::GlobalNamespace::IConnectionManager* GlobalNamespace::LocalServerConnectionManager::i___GlobalNamespace__IConnectionManager() noexcept {
  return static_cast<::GlobalNamespace::IConnectionManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::LocalServerConnectionManager::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPollable"
constexpr ::GlobalNamespace::IPollable* GlobalNamespace::LocalServerConnectionManager::i___GlobalNamespace__IPollable() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::LocalServerConnectionManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LocalServerConnectionManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr GlobalNamespace::LocalServerConnectionManager::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncDisposable"
constexpr ::System::IAsyncDisposable* GlobalNamespace::LocalServerConnectionManager::i___System__IAsyncDisposable() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerConnectionManager::LocalServerConnectionManager() {}

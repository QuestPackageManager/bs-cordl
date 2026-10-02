#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/DebugMessageHandler.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__DebugMessageHandler_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_impl.hpp"
#include "UnityEngine/zzzz__DeviceType_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__DebugMessageHandler_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__DebugMessageHandler_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType::DebugMessageHandler_MessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType::DebugMessageHandler_MessageType() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType::Activate{ static_cast<uint8_t>(
    0x0u) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType::DebugData{ static_cast<uint8_t>(
    0x1u) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType::AnalyticsData{ static_cast<uint8_t>(
    0x2u) };
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload.get_isCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::get_isCompatible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bf30c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>(), { "get_isCompatible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bf3280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
inline bool UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::get_isCompatible() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>(), { "get_isCompatible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload* UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload::DebugMessageHandler_IPayload() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bf30bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::__cordl_internal_get_graphName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphName;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::__cordl_internal_get_graphName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphName;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::__cordl_internal_set_graphName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graphName = value;
}
constexpr ::UnityEngine::EntityId& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::__cordl_internal_get_executionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executionId;
}
constexpr ::UnityEngine::EntityId const& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::__cordl_internal_get_executionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executionId;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::__cordl_internal_set_executionId(::UnityEngine::EntityId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___executionId = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::__cordl_internal_get_debugData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugData;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* const&
UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::__cordl_internal_get_debugData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugData;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::__cordl_internal_set_debugData(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugData = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload* UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload::DebugMessageHandler_DebugDataPayload() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6bf3138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::GraphicsDeviceType& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_graphicsDeviceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicsDeviceType;
}
constexpr ::UnityEngine::Rendering::GraphicsDeviceType const& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_graphicsDeviceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicsDeviceType;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_set_graphicsDeviceType(::UnityEngine::Rendering::GraphicsDeviceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graphicsDeviceType = value;
}
constexpr ::UnityEngine::DeviceType& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_deviceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceType;
}
constexpr ::UnityEngine::DeviceType const& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_deviceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceType;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_set_deviceType(::UnityEngine::DeviceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceType = value;
}
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_deviceModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceModel;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_deviceModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceModel;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_set_deviceModel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceModel = value;
}
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_gpuVendor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuVendor;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_gpuVendor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuVendor;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_set_gpuVendor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuVendor = value;
}
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_gpuName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuName;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_get_gpuName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuName;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::__cordl_internal_set_gpuName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuName = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload* UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload::DebugMessageHandler_AnalyticsPayload() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler.InternalCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::InternalCallback)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6bf223c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(),
                                                             { "InternalCallback", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::*)(
    ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>*)>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::Register)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6bf2894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(),
                                                             { "Register",
                                                               {},
                                                               { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler.UnregisterAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::UnregisterAll)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6bf297c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(), { "UnregisterAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*)>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::Send)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6bf2a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(),
                                                                                           { "Send",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler.SerializeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*)>(
        &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::SerializeMessage)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x6bf2b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(),
                                                                                           { "SerializeMessage",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler.DeserializeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*> (*)(
        ::ArrayW<uint8_t>)>(&::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::DeserializeMessage)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x6bf22d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(), { "DeserializeMessage", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf31b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>*&
UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::__cordl_internal_get_m_UserCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserCallback;
}
constexpr ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>* const&
UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::__cordl_internal_get_m_UserCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserCallback;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::__cordl_internal_set_m_UserCallback(
    ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UserCallback = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::setStaticF_s_EditorToPlayerGuid(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "s_EditorToPlayerGuid", ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::getStaticF_s_EditorToPlayerGuid() {
  return ::cordl_internals::getStaticField<::System::Guid, "s_EditorToPlayerGuid", ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::setStaticF_s_PlayerToEditorGuid(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "s_PlayerToEditorGuid", ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::getStaticF_s_PlayerToEditorGuid() {
  return ::cordl_internals::getStaticField<::System::Guid, "s_PlayerToEditorGuid", ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::InternalCallback(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(),
                                                           { "InternalCallback", {}, { ::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::Register(
    ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(),
                                                           { "Register",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::UnregisterAll() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(), { "UnregisterAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::Send(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType messageType,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload* payload) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(),
                                                                                         { "Send",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageType, payload);
}
inline ::ArrayW<uint8_t> UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::SerializeMessage(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType type,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload* payload) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(),
                                                                                         { "SerializeMessage",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, type, payload);
}
inline ::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>
UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::DeserializeMessage(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(), { "DeserializeMessage", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>>(
      nullptr, ___internal_method, data);
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler* UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler::DebugMessageHandler() {}

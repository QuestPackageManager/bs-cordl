#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorInstance.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeAccess_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeAccess_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting::ProcessorInstance_UpdateSetting(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting::ProcessorInstance_UpdateSetting() {}
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting UnityEngine::Audio::ProcessorInstance_UpdateSetting::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting UnityEngine::Audio::ProcessorInstance_UpdateSetting::NeverUpdate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting UnityEngine::Audio::ProcessorInstance_UpdateSetting::UpdateIfDataIsAvailable{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdateSetting UnityEngine::Audio::ProcessorInstance_UpdateSetting::UpdateAlways{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_CreationParameters.get_processorUpdateSetting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_UpdateSetting (::UnityEngine::Audio::ProcessorInstance_CreationParameters::*)()>(
    &::UnityEngine::Audio::ProcessorInstance_CreationParameters::get_processorUpdateSetting)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6eab8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(), { "get_processorUpdateSetting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_CreationParameters.set_processorUpdateSetting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ProcessorInstance_CreationParameters::*)(::UnityEngine::Audio::ProcessorInstance_UpdateSetting)>(
    &::UnityEngine::Audio::ProcessorInstance_CreationParameters::set_processorUpdateSetting)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6eab908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(),
                                                             { "set_processorUpdateSetting", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_UpdateSetting>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_CreationParameters.get_controlUpdateSetting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_UpdateSetting (::UnityEngine::Audio::ProcessorInstance_CreationParameters::*)()>(
    &::UnityEngine::Audio::ProcessorInstance_CreationParameters::get_controlUpdateSetting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(), { "get_controlUpdateSetting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_CreationParameters.set_controlUpdateSetting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ProcessorInstance_CreationParameters::*)(::UnityEngine::Audio::ProcessorInstance_UpdateSetting)>(
    &::UnityEngine::Audio::ProcessorInstance_CreationParameters::set_controlUpdateSetting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(),
                                                             { "set_controlUpdateSetting", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_UpdateSetting>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_CreationParameters.get_realtimeUpdateSetting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_UpdateSetting (::UnityEngine::Audio::ProcessorInstance_CreationParameters::*)()>(
    &::UnityEngine::Audio::ProcessorInstance_CreationParameters::get_realtimeUpdateSetting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(), { "get_realtimeUpdateSetting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_CreationParameters.set_realtimeUpdateSetting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ProcessorInstance_CreationParameters::*)(::UnityEngine::Audio::ProcessorInstance_UpdateSetting)>(
    &::UnityEngine::Audio::ProcessorInstance_CreationParameters::set_realtimeUpdateSetting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(),
                                                             { "set_realtimeUpdateSetting", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_UpdateSetting>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_CreationParameters.BuildInitializationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_InitializationFlags (::UnityEngine::Audio::ProcessorInstance_CreationParameters::*)()>(
    &::UnityEngine::Audio::ProcessorInstance_CreationParameters::BuildInitializationFlags)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6eab960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(), { "BuildInitializationFlags", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::ProcessorInstance_UpdateSetting UnityEngine::Audio::ProcessorInstance_CreationParameters::get_processorUpdateSetting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(), { "get_processorUpdateSetting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_UpdateSetting>(*this, ___internal_method);
}
inline void UnityEngine::Audio::ProcessorInstance_CreationParameters::set_processorUpdateSetting(::UnityEngine::Audio::ProcessorInstance_UpdateSetting value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(),
                                                           { "set_processorUpdateSetting", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_UpdateSetting>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Audio::ProcessorInstance_UpdateSetting UnityEngine::Audio::ProcessorInstance_CreationParameters::get_controlUpdateSetting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(), { "get_controlUpdateSetting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_UpdateSetting>(*this, ___internal_method);
}
inline void UnityEngine::Audio::ProcessorInstance_CreationParameters::set_controlUpdateSetting(::UnityEngine::Audio::ProcessorInstance_UpdateSetting value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(),
                                                           { "set_controlUpdateSetting", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_UpdateSetting>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Audio::ProcessorInstance_UpdateSetting UnityEngine::Audio::ProcessorInstance_CreationParameters::get_realtimeUpdateSetting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(), { "get_realtimeUpdateSetting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_UpdateSetting>(*this, ___internal_method);
}
inline void UnityEngine::Audio::ProcessorInstance_CreationParameters::set_realtimeUpdateSetting(::UnityEngine::Audio::ProcessorInstance_UpdateSetting value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(),
                                                           { "set_realtimeUpdateSetting", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_UpdateSetting>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Audio::ProcessorInstance_InitializationFlags UnityEngine::Audio::ProcessorInstance_CreationParameters::BuildInitializationFlags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>(), { "BuildInitializationFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_InitializationFlags>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_controlUpdateSetting_k__BackingField", ty: "::UnityEngine::Audio::ProcessorInstance_UpdateSetting", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "_realtimeUpdateSetting_k__BackingField", ty: "::UnityEngine::Audio::ProcessorInstance_UpdateSetting", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance_CreationParameters::ProcessorInstance_CreationParameters(
    ::UnityEngine::Audio::ProcessorInstance_UpdateSetting _controlUpdateSetting_k__BackingField,
    ::UnityEngine::Audio::ProcessorInstance_UpdateSetting _realtimeUpdateSetting_k__BackingField) noexcept {
  this->_controlUpdateSetting_k__BackingField = _controlUpdateSetting_k__BackingField;
  this->_realtimeUpdateSetting_k__BackingField = _realtimeUpdateSetting_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_CreationParameters::ProcessorInstance_CreationParameters() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance_MessageStatus::ProcessorInstance_MessageStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_MessageStatus::ProcessorInstance_MessageStatus() {}
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_IContext.GetAvailableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_AvailableData (::UnityEngine::Audio::ProcessorInstance_IContext::*)(::Unity::Audio::Handle)>(
    &::UnityEngine::Audio::ProcessorInstance_IContext::GetAvailableData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IContext*>(), { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IContext*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_IContext.SendData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ProcessorInstance_IContext::*)(::Unity::Audio::Handle, void*, int32_t, int32_t, int64_t)>(
    &::UnityEngine::Audio::ProcessorInstance_IContext::SendData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IContext*>(), { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IContext*>(), 1 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::ProcessorInstance_AvailableData UnityEngine::Audio::ProcessorInstance_IContext::GetAvailableData(::Unity::Audio::Handle handle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IContext*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_AvailableData>(this, ___internal_method, handle);
}
inline bool UnityEngine::Audio::ProcessorInstance_IContext::SendData(::Unity::Audio::Handle handle, void* data, int32_t size, int32_t align, int64_t typehash) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IContext*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, data, size, align, typehash);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance_InitializationFlags::ProcessorInstance_InitializationFlags(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_InitializationFlags::ProcessorInstance_InitializationFlags() {}
constexpr ::UnityEngine::Audio::ProcessorInstance_InitializationFlags UnityEngine::Audio::ProcessorInstance_InitializationFlags::UpdateControlIfDataIsAvailable{ static_cast<uint32_t>(0x2u) };
constexpr ::UnityEngine::Audio::ProcessorInstance_InitializationFlags UnityEngine::Audio::ProcessorInstance_InitializationFlags::UpdateControlAlways{ static_cast<uint32_t>(0x4u) };
constexpr ::UnityEngine::Audio::ProcessorInstance_InitializationFlags UnityEngine::Audio::ProcessorInstance_InitializationFlags::UpdateProcessorIfDataIsAvailable{ static_cast<uint32_t>(0x8u) };
constexpr ::UnityEngine::Audio::ProcessorInstance_InitializationFlags UnityEngine::Audio::ProcessorInstance_InitializationFlags::UpdateProcessorAlways{ static_cast<uint32_t>(0x10u) };
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext.UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_AvailableData (::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::*)(::Unity::Audio::Handle)>(
    &::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6eab994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext>(),
                                                             { "UnityEngine.Audio.ProcessorInstance.IContext.GetAvailableData", {}, { ::i2c::type_of<::Unity::Audio::Handle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext.UnityEngine_Audio_ProcessorInstance_IContext_SendData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::*)(::Unity::Audio::Handle, void*, int32_t, int32_t, int64_t)>(
    &::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::UnityEngine_Audio_ProcessorInstance_IContext_SendData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6eab9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext>(),
                                         { "UnityEngine.Audio.ProcessorInstance.IContext.SendData",
                                           {},
                                           { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::*)(::by_ref<::UnityEngine::Audio::RealtimeAccess const>)>(
    &::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6eaba98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::RealtimeAccess const>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::ProcessorInstance_AvailableData
UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData(::Unity::Audio::Handle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext>(),
                                                           { "UnityEngine.Audio.ProcessorInstance.IContext.GetAvailableData", {}, { ::i2c::type_of<::Unity::Audio::Handle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_AvailableData>(*this, ___internal_method, handle);
}
inline bool UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::UnityEngine_Audio_ProcessorInstance_IContext_SendData(::Unity::Audio::Handle handle, void* data, int32_t size, int32_t align,
                                                                                                                            int64_t typehash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext>(),
                                       { "UnityEngine.Audio.ProcessorInstance.IContext.SendData",
                                         {},
                                         { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, handle, data, size, align, typehash);
}
inline void UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeAccess const> access) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::RealtimeAccess const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, access);
}
/// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IContext"
constexpr UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::operator ::UnityEngine::Audio::ProcessorInstance_IContext*() {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IContext"
constexpr ::UnityEngine::Audio::ProcessorInstance_IContext* UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::i___UnityEngine__Audio__ProcessorInstance_IContext() {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Access", ty: "::UnityEngine::Audio::RealtimeAccess", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::ProcessorInstance_UpdatedDataContext(::UnityEngine::Audio::RealtimeAccess Access) noexcept {
  this->Access = Access;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext::ProcessorInstance_UpdatedDataContext() {}
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_IRealtime.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ProcessorInstance_IRealtime::*)(
    ::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext, ::UnityEngine::Audio::ProcessorInstance_Pipe)>(&::UnityEngine::Audio::ProcessorInstance_IRealtime::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IRealtime*>(), { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IRealtime*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::ProcessorInstance_IRealtime::Update(::UnityEngine::Audio::ProcessorInstance_UpdatedDataContext context, ::UnityEngine::Audio::ProcessorInstance_Pipe pipe) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IRealtime*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, pipe);
}
template <typename TRealtime> inline void UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>::Dispose(::UnityEngine::Audio::ControlContext context, ::by_ref<TRealtime> realtime) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, realtime);
}
template <typename TRealtime>
inline void UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>::Update(::UnityEngine::Audio::ControlContext context, ::UnityEngine::Audio::ProcessorInstance_Pipe pipe) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, pipe);
}
template <typename TRealtime>
inline ::UnityEngine::Audio::ProcessorInstance_Response UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>::OnMessage(::UnityEngine::Audio::ControlContext context,
                                                                                                                               ::UnityEngine::Audio::ProcessorInstance_Pipe pipe,
                                                                                                                               ::UnityEngine::Audio::ProcessorInstance_Message message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_Response>(this, ___internal_method, context, pipe, message);
}
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_Pipe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ProcessorInstance_Pipe::*)(::Unity::Audio::Handle, ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*)>(
    &::UnityEngine::Audio::ProcessorInstance_Pipe::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6eabaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_Pipe>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*>() } })));
    return ___internal_method;
  }
};
template <typename TAudioContext>
  requires(::cordl_internals::type_constraint<TAudioContext, ::UnityEngine::Audio::ProcessorInstance_IContext*> && ::cordl_internals::value_type_constraint<TAudioContext> &&
           ::cordl_internals::default_constructor_constraint<TAudioContext>)
inline ::UnityEngine::Audio::ProcessorInstance_AvailableData UnityEngine::Audio::ProcessorInstance_Pipe::GetAvailableData(TAudioContext context) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_Pipe>(),
                                                                                              { "GetAvailableData", { ::i2c::class_of<TAudioContext>() }, { ::i2c::type_of<TAudioContext>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAudioContext>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_AvailableData>(*this, ___internal_method, context);
}
template <typename TAudioContext, typename T>
  requires(::cordl_internals::type_constraint<TAudioContext, ::UnityEngine::Audio::ProcessorInstance_IContext*> && ::cordl_internals::value_type_constraint<TAudioContext> &&
           ::cordl_internals::default_constructor_constraint<TAudioContext> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool UnityEngine::Audio::ProcessorInstance_Pipe::SendData(TAudioContext context, /* [IsReadOnly] */ ::by_ref<T const> data) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_Pipe>(),
                                              { "SendData", { ::i2c::class_of<TAudioContext>(), ::i2c::class_of<T>() }, { ::i2c::type_of<TAudioContext>(), ::i2c::type_of<::by_ref<T const>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAudioContext>(), ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, context, data);
}
inline void UnityEngine::Audio::ProcessorInstance_Pipe::_ctor(::Unity::Audio::Handle dualThreadHandle, ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* head) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_Pipe>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dualThreadHandle, head);
}
// Ctor Parameters [CppParam { name: "Head", ty: "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "DualThreadHandle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance_Pipe::ProcessorInstance_Pipe(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* Head, ::Unity::Audio::Handle DualThreadHandle) noexcept {
  this->Head = Head;
  this->DualThreadHandle = DualThreadHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_Pipe::ProcessorInstance_Pipe() {}
template <typename T> inline bool UnityEngine::Audio::ProcessorInstance_Message::Is() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_Message>(), { "Is", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> UnityEngine::Audio::ProcessorInstance_Message::Get() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_Message>(), { "Get", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "TypeHash", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Data", ty: "void*", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "ManagedHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance_Message::ProcessorInstance_Message(int64_t TypeHash, void* Data, ::System::IntPtr ManagedHandle) noexcept {
  this->TypeHash = TypeHash;
  this->Data = Data;
  this->ManagedHandle = ManagedHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_Message::ProcessorInstance_Message() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance_Response::ProcessorInstance_Response(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_Response::ProcessorInstance_Response() {}
constexpr ::UnityEngine::Audio::ProcessorInstance_Response UnityEngine::Audio::ProcessorInstance_Response::Unhandled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Audio::ProcessorInstance_Response UnityEngine::Audio::ProcessorInstance_Response::Handled{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* (::UnityEngine::Audio::AvailableData_ProcessorInstance_Element::*)()>(
    &::UnityEngine::Audio::AvailableData_ProcessorInstance_Element::Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eabb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element>(), { "Next", {}, {} })));
    return ___internal_method;
  }
};
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool UnityEngine::Audio::AvailableData_ProcessorInstance_Element::TryGetData(::by_ref<T> data) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element>(),
                                                                                              { "TryGetData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, data);
}
inline ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* UnityEngine::Audio::AvailableData_ProcessorInstance_Element::Next() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element>(), { "Next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "TypeHash", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_Size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Align", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_AudioHandle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NextElement", ty:
// "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element::AvailableData_ProcessorInstance_Element(
    int64_t TypeHash, void* m_Data, int32_t m_Size, int32_t m_Align, ::Unity::Audio::Handle m_AudioHandle, ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* m_NextElement) noexcept {
  this->TypeHash = TypeHash;
  this->m_Data = m_Data;
  this->m_Size = m_Size;
  this->m_Align = m_Align;
  this->m_AudioHandle = m_AudioHandle;
  this->m_NextElement = m_NextElement;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element::AvailableData_ProcessorInstance_Element() {}
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_AvailableData.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element (::UnityEngine::Audio::ProcessorInstance_AvailableData::*)()>(
    &::UnityEngine::Audio::ProcessorInstance_AvailableData::get_Current)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6eabab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_AvailableData>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_AvailableData.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_AvailableData (::UnityEngine::Audio::ProcessorInstance_AvailableData::*)()>(
    &::UnityEngine::Audio::ProcessorInstance_AvailableData::GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6eabac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_AvailableData>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_AvailableData.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ProcessorInstance_AvailableData::*)()>(&::UnityEngine::Audio::ProcessorInstance_AvailableData::MoveNext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eabad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_AvailableData>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance_AvailableData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ProcessorInstance_AvailableData::*)(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*)>(
    &::UnityEngine::Audio::ProcessorInstance_AvailableData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6eaaee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_AvailableData>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element UnityEngine::Audio::ProcessorInstance_AvailableData::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_AvailableData>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element>(*this, ___internal_method);
}
inline ::UnityEngine::Audio::ProcessorInstance_AvailableData UnityEngine::Audio::ProcessorInstance_AvailableData::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_AvailableData>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_AvailableData>(*this, ___internal_method);
}
inline bool UnityEngine::Audio::ProcessorInstance_AvailableData::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_AvailableData>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Audio::ProcessorInstance_AvailableData::_ctor(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance_AvailableData>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, element);
}
// Ctor Parameters [CppParam { name: "m_CurrentElement", ty: "::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_MoveNextCalled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance_AvailableData::ProcessorInstance_AvailableData(::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* m_CurrentElement,
                                                                                                 bool m_MoveNextCalled) noexcept {
  this->m_CurrentElement = m_CurrentElement;
  this->m_MoveNextCalled = m_MoveNextCalled;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance_AvailableData::ProcessorInstance_AvailableData() {}
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ProcessorInstance::*)(::UnityEngine::Audio::ProcessorInstance)>(&::UnityEngine::Audio::ProcessorInstance::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eab5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ProcessorInstance::*)(::System::Object*)>(&::UnityEngine::Audio::ProcessorInstance::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6eab7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Audio::ProcessorInstance, ::UnityEngine::Audio::ProcessorInstance)>(
    &::UnityEngine::Audio::ProcessorInstance::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eab860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Audio::ProcessorInstance, ::UnityEngine::Audio::ProcessorInstance)>(
    &::UnityEngine::Audio::ProcessorInstance::op_Inequality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eab88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::ProcessorInstance::*)()>(&::UnityEngine::Audio::ProcessorInstance::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6eab710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorInstance._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ProcessorInstance::*)(::Unity::Audio::Handle, ::UnityEngine::Audio::ProcessorHeader*)>(
    &::UnityEngine::Audio::ProcessorInstance::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6eab728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Audio::ProcessorInstance::Equals(::UnityEngine::Audio::ProcessorInstance other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Audio::ProcessorInstance::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::Audio::ProcessorInstance::op_Equality(::UnityEngine::Audio::ProcessorInstance a, ::UnityEngine::Audio::ProcessorInstance b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Audio::ProcessorInstance::op_Inequality(::UnityEngine::Audio::ProcessorInstance a, ::UnityEngine::Audio::ProcessorInstance b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t UnityEngine::Audio::ProcessorInstance::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Audio::ProcessorInstance::_ctor(::Unity::Audio::Handle handle, ::UnityEngine::Audio::ProcessorHeader* header) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorInstance>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, header);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>"
constexpr UnityEngine::Audio::ProcessorInstance::operator ::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>* UnityEngine::Audio::ProcessorInstance::i___System__IEquatable_1___UnityEngine__Audio__ProcessorInstance_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::ProcessorInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Handle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Header", ty:
// "::UnityEngine::Audio::ProcessorHeader*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorInstance::ProcessorInstance(::Unity::Audio::Handle Handle, ::UnityEngine::Audio::ProcessorHeader* Header) noexcept {
  this->Handle = Handle;
  this->Header = Header;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorInstance::ProcessorInstance() {}

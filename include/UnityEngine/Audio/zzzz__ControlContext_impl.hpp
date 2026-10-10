#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ControlContext.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_impl.hpp"
#include "UnityEngine/Audio/zzzz__RootOutputInstance_impl.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioFormat_def.hpp"
#include "UnityEngine/Audio/zzzz__ChannelBuffer_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeContext_def.hpp"
#include "UnityEngine/Audio/zzzz__RootOutputInstance_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.get_Header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ControlHeader* (::UnityEngine::Audio::ControlContext::*)()>(&::UnityEngine::Audio::ControlContext::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eaa6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "get_Header", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.get_builtIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ControlContext (*)()>(&::UnityEngine::Audio::ControlContext::get_builtIn)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6eaa6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "get_builtIn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext::*)(void*)>(&::UnityEngine::Audio::ControlContext::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6eaa768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.Exists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::ProcessorInstance)>(&::UnityEngine::Audio::ControlContext::Exists)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6eaa810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "Exists", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::GeneratorInstance)>(&::UnityEngine::Audio::ControlContext::Destroy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eaa8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::RootOutputInstance)>(&::UnityEngine::Audio::ControlContext::Destroy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eaa9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.GetConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance_Configuration (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::GeneratorInstance)>(
    &::UnityEngine::Audio::ControlContext::GetConfiguration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eaa9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "GetConfiguration", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.Configure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::GeneratorInstance, ::by_ref<::UnityEngine::Audio::AudioFormat const>)>(
    &::UnityEngine::Audio::ControlContext::Configure)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6eaaa14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                         { "Configure", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.get_IsSystemWideReconfiguring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ControlContext::*)()>(&::UnityEngine::Audio::ControlContext::get_IsSystemWideReconfiguring)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eaaad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "get_IsSystemWideReconfiguring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::GeneratorInstance)>(&::UnityEngine::Audio::ControlContext::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eaab4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "Update", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.WaitForBuiltInQueueFlush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Audio::ControlContext::WaitForBuiltInQueueFlush)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6eaabf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "WaitForBuiltInQueueFlush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.CreateManualControlContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ControlContext_Manual (*)(::by_ref<::UnityEngine::Audio::AudioFormat const>)>(
    &::UnityEngine::Audio::ControlContext::CreateManualControlContext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6eaac78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "CreateManualControlContext", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_AvailableData (::UnityEngine::Audio::ControlContext::*)(::Unity::Audio::Handle)>(
    &::UnityEngine::Audio::ControlContext::UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6eaadbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                             { "UnityEngine.Audio.ProcessorInstance.IContext.GetAvailableData", {}, { ::i2c::type_of<::Unity::Audio::Handle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.UnityEngine_Audio_ProcessorInstance_IContext_SendData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ControlContext::*)(::Unity::Audio::Handle, void*, int32_t, int32_t, int64_t)>(
    &::UnityEngine::Audio::ControlContext::UnityEngine_Audio_ProcessorInstance_IContext_SendData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6eaaef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                         { "UnityEngine.Audio.ProcessorInstance.IContext.SendData",
                                           {},
                                           { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.DestroyProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::ProcessorInstance)>(
    &::UnityEngine::Audio::ControlContext::DestroyProcessor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6eaa8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "DestroyProcessor", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.CleanupHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Audio::ControlHeader>)>(&::UnityEngine::Audio::ControlContext::CleanupHeader)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6eab050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "CleanupHeader", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlHeader>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalGetBuiltInControlHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)()>(&::UnityEngine::Audio::ControlContext::InternalGetBuiltInControlHeader)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6eaa740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalGetBuiltInControlHeader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalWaitForQueueFlush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::UnityEngine::Audio::ControlContext::InternalWaitForQueueFlush)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eaac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalWaitForQueueFlush", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalCreateControlContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)()>(&::UnityEngine::Audio::ControlContext::InternalCreateControlContext)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6eaad3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalCreateControlContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalDestroyControlContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::UnityEngine::Audio::ControlContext::InternalDestroyControlContext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eab078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalDestroyControlContext", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalBeginManualMixFromControlContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(void*, uint64_t, void*)>(&::UnityEngine::Audio::ControlContext::InternalBeginManualMixFromControlContext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eab0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                             { "InternalBeginManualMixFromControlContext", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalEndMixManualControlContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::System::Span_1<float_t>)>(&::UnityEngine::Audio::ControlContext::InternalEndMixManualControlContext)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6eab108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                             { "InternalEndMixManualControlContext", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Span_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalUpdateManualControlContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::UnityEngine::Audio::ControlContext::InternalUpdateManualControlContext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eab1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalUpdateManualControlContext", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalSetConfigurationManualControlContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::UnityEngine::AudioConfiguration)>(&::UnityEngine::Audio::ControlContext::InternalSetConfigurationManualControlContext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eaad64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                { "InternalSetConfigurationManualControlContext", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::AudioConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.GetAvailableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_AvailableData (::UnityEngine::Audio::ControlContext::*)(::UnityEngine::Audio::ProcessorInstance)>(
    &::UnityEngine::Audio::ControlContext::GetAvailableData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6eab274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "GetAvailableData", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalEndMixManualControlContext_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Audio::ControlContext::InternalEndMixManualControlContext_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eab1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                         { "InternalEndMixManualControlContext_Injected", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext.InternalSetConfigurationManualControlContext_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::by_ref<::UnityEngine::AudioConfiguration const>)>(
    &::UnityEngine::Audio::ControlContext::InternalSetConfigurationManualControlContext_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eab230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                            { "InternalSetConfigurationManualControlContext_Injected", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration const>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::ControlHeader* UnityEngine::Audio::ControlContext::get_Header() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "get_Header", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ControlHeader*>(*this, ___internal_method);
}
inline ::UnityEngine::Audio::ControlContext UnityEngine::Audio::ControlContext::get_builtIn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "get_builtIn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ControlContext>(nullptr, ___internal_method);
}
inline void UnityEngine::Audio::ControlContext::_ctor(void* headerThatShouldBeOfResourceType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, headerThatShouldBeOfResourceType);
}
template <typename TRealtime, typename TControl>
  requires(::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::GeneratorInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TRealtime> &&
           ::cordl_internals::default_constructor_constraint<TRealtime> && ::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::GeneratorInstance_IControl_1<TRealtime>*> &&
           ::cordl_internals::value_type_constraint<TControl> && ::cordl_internals::default_constructor_constraint<TControl>)
inline ::UnityEngine::Audio::GeneratorInstance
UnityEngine::Audio::ControlContext::AllocateGenerator(/* [IsReadOnly] */ ::by_ref<TRealtime const> realtimeState, /* [IsReadOnly] */ ::by_ref<TControl const> controlState,
                                                      ::System::Nullable_1<::UnityEngine::Audio::AudioFormat> nestedFormat,
                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorInstance_CreationParameters const> creationParameters) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "AllocateGenerator",
                                                                                                  { ::i2c::class_of<TRealtime>(), ::i2c::class_of<TControl>() },
                                                                                                  { ::i2c::type_of<::by_ref<TRealtime const>>(), ::i2c::type_of<::by_ref<TControl const>>(),
                                                                                                    ::i2c::type_of<::System::Nullable_1<::UnityEngine::Audio::AudioFormat>>(),
                                                                                                    ::i2c::type_of<::by_ref<::UnityEngine::Audio::ProcessorInstance_CreationParameters const>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TRealtime>(), ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance>(*this, ___internal_method, realtimeState, controlState, nestedFormat, creationParameters);
}
template <typename TRealtime, typename TControl>
  requires(::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::RootOutputInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TRealtime> &&
           ::cordl_internals::default_constructor_constraint<TRealtime> && ::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::RootOutputInstance_IControl_1<TRealtime>*> &&
           ::cordl_internals::value_type_constraint<TControl> && ::cordl_internals::default_constructor_constraint<TControl>)
inline ::UnityEngine::Audio::RootOutputInstance
UnityEngine::Audio::ControlContext::AllocateRootOutput(/* [IsReadOnly] */ ::by_ref<TRealtime const> realtimeState, /* [IsReadOnly] */ ::by_ref<TControl const> controlState,
                                                       /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorInstance_CreationParameters const> creationParameters) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "AllocateRootOutput",
                                                                                                  { ::i2c::class_of<TRealtime>(), ::i2c::class_of<TControl>() },
                                                                                                  { ::i2c::type_of<::by_ref<TRealtime const>>(), ::i2c::type_of<::by_ref<TControl const>>(),
                                                                                                    ::i2c::type_of<::by_ref<::UnityEngine::Audio::ProcessorInstance_CreationParameters const>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TRealtime>(), ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::RootOutputInstance>(*this, ___internal_method, realtimeState, controlState, creationParameters);
}
template <typename TRealtime, typename TControl>
  requires(::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::GeneratorInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TRealtime> &&
           ::cordl_internals::default_constructor_constraint<TRealtime> && ::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::GeneratorInstance_IControl_1<TRealtime>*> &&
           ::cordl_internals::value_type_constraint<TControl> && ::cordl_internals::default_constructor_constraint<TControl>)
inline bool UnityEngine::Audio::ControlContext::IsGenerator(::UnityEngine::Audio::ProcessorInstance processorInstance) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                              { "IsGenerator", { ::i2c::class_of<TRealtime>(), ::i2c::class_of<TControl>() }, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TRealtime>(), ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, processorInstance);
}
template <typename TRealtime, typename TControl>
  requires(::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::RootOutputInstance_IRealtime*> && ::cordl_internals::value_type_constraint<TRealtime> &&
           ::cordl_internals::default_constructor_constraint<TRealtime> && ::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::RootOutputInstance_IControl_1<TRealtime>*> &&
           ::cordl_internals::value_type_constraint<TControl> && ::cordl_internals::default_constructor_constraint<TControl>)
inline bool UnityEngine::Audio::ControlContext::IsRootOutput(::UnityEngine::Audio::ProcessorInstance processorInstance) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                              { "IsRootOutput", { ::i2c::class_of<TRealtime>(), ::i2c::class_of<TControl>() }, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TRealtime>(), ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, processorInstance);
}
inline bool UnityEngine::Audio::ControlContext::Exists(::UnityEngine::Audio::ProcessorInstance processorInstance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "Exists", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, processorInstance);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::UnityEngine::Audio::ProcessorInstance_Response UnityEngine::Audio::ControlContext::SendMessage(::UnityEngine::Audio::ProcessorInstance processorInstance, ::by_ref<T> message) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                           { "SendMessage", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_Response>(*this, ___internal_method, processorInstance, message);
}
template <typename T>
  requires(::cordl_internals::reference_type_constraint<T>)
inline ::UnityEngine::Audio::ProcessorInstance_Response UnityEngine::Audio::ControlContext::SendManagedMessage(::UnityEngine::Audio::ProcessorInstance processorInstance, T message) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                           { "SendManagedMessage", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_Response>(*this, ___internal_method, processorInstance, message);
}
inline void UnityEngine::Audio::ControlContext::Destroy(::UnityEngine::Audio::GeneratorInstance generatorInstance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, generatorInstance);
}
inline void UnityEngine::Audio::ControlContext::Destroy(::UnityEngine::Audio::RootOutputInstance rootOutputInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rootOutputInstance);
}
inline ::UnityEngine::Audio::GeneratorInstance_Configuration UnityEngine::Audio::ControlContext::GetConfiguration(::UnityEngine::Audio::GeneratorInstance generatorInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "GetConfiguration", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance_Configuration>(*this, ___internal_method, generatorInstance);
}
inline void UnityEngine::Audio::ControlContext::Configure(::UnityEngine::Audio::GeneratorInstance generatorInstance, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                       { "Configure", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, generatorInstance, format);
}
inline bool UnityEngine::Audio::ControlContext::get_IsSystemWideReconfiguring() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "get_IsSystemWideReconfiguring", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Audio::ControlContext::Update(::UnityEngine::Audio::GeneratorInstance generatorInstance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "Update", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, generatorInstance);
}
inline void UnityEngine::Audio::ControlContext::WaitForBuiltInQueueFlush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "WaitForBuiltInQueueFlush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Audio::ControlContext_Manual UnityEngine::Audio::ControlContext::CreateManualControlContext(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "CreateManualControlContext", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ControlContext_Manual>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Audio::ProcessorInstance_AvailableData UnityEngine::Audio::ControlContext::UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData(::Unity::Audio::Handle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                           { "UnityEngine.Audio.ProcessorInstance.IContext.GetAvailableData", {}, { ::i2c::type_of<::Unity::Audio::Handle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_AvailableData>(*this, ___internal_method, handle);
}
inline bool UnityEngine::Audio::ControlContext::UnityEngine_Audio_ProcessorInstance_IContext_SendData(::Unity::Audio::Handle handle, void* data, int32_t size, int32_t align, int64_t typehash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                       { "UnityEngine.Audio.ProcessorInstance.IContext.SendData",
                                         {},
                                         { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, handle, data, size, align, typehash);
}
inline void UnityEngine::Audio::ControlContext::DestroyProcessor(::UnityEngine::Audio::ProcessorInstance processorInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "DestroyProcessor", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, processorInstance);
}
inline void UnityEngine::Audio::ControlContext::CleanupHeader(::by_ref<::UnityEngine::Audio::ControlHeader> header) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "CleanupHeader", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlHeader>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header);
}
inline void* UnityEngine::Audio::ControlContext::InternalGetBuiltInControlHeader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalGetBuiltInControlHeader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method);
}
inline void UnityEngine::Audio::ControlContext::InternalWaitForQueueFlush(void* header) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalWaitForQueueFlush", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header);
}
inline void* UnityEngine::Audio::ControlContext::InternalCreateControlContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalCreateControlContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method);
}
inline void UnityEngine::Audio::ControlContext::InternalDestroyControlContext(void* header) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalDestroyControlContext", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header);
}
inline bool UnityEngine::Audio::ControlContext::InternalBeginManualMixFromControlContext(void* header, uint64_t dspTick, void* resultContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                           { "InternalBeginManualMixFromControlContext", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, header, dspTick, resultContext);
}
inline void UnityEngine::Audio::ControlContext::InternalEndMixManualControlContext(void* header, ::System::Span_1<float_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                           { "InternalEndMixManualControlContext", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Span_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, data);
}
inline void UnityEngine::Audio::ControlContext::InternalUpdateManualControlContext(void* header) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "InternalUpdateManualControlContext", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header);
}
inline void UnityEngine::Audio::ControlContext::InternalSetConfigurationManualControlContext(void* header, ::UnityEngine::AudioConfiguration config) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                                           { "InternalSetConfigurationManualControlContext", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::AudioConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, config);
}
inline ::UnityEngine::Audio::ProcessorInstance_AvailableData UnityEngine::Audio::ControlContext::GetAvailableData(::UnityEngine::Audio::ProcessorInstance processorInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(), { "GetAvailableData", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_AvailableData>(*this, ___internal_method, processorInstance);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Audio::ControlContext::SendData(::UnityEngine::Audio::ProcessorInstance processorInstance, /* [IsReadOnly] */ ::by_ref<T const> data) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                              { "SendData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>(), ::i2c::type_of<::by_ref<T const>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, processorInstance, data);
}
inline void UnityEngine::Audio::ControlContext::InternalEndMixManualControlContext_Injected(void* header, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                                       { "InternalEndMixManualControlContext_Injected", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, data);
}
inline void UnityEngine::Audio::ControlContext::InternalSetConfigurationManualControlContext_Injected(void* header, ::by_ref<::UnityEngine::AudioConfiguration const> config) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext>(),
                          { "InternalSetConfigurationManualControlContext_Injected", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, config);
}
/// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IContext"
constexpr UnityEngine::Audio::ControlContext::operator ::UnityEngine::Audio::ProcessorInstance_IContext*() {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IContext"
constexpr ::UnityEngine::Audio::ProcessorInstance_IContext* UnityEngine::Audio::ControlContext::i___UnityEngine__Audio__ProcessorInstance_IContext() {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Header", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Handle", ty:
// "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ControlContext::ControlContext(::UnityEngine::Audio::ControlHeader* m_Header, ::Unity::Audio::Handle m_Handle) noexcept {
  this->m_Header = m_Header;
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ControlContext::ControlContext() {}
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext_Manual.get_context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ControlContext (::UnityEngine::Audio::ControlContext_Manual::*)()>(
    &::UnityEngine::Audio::ControlContext_Manual::get_context)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6eab2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "get_context", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext_Manual.BeginMix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Audio::RealtimeContext> (::UnityEngine::Audio::ControlContext_Manual::*)(uint64_t)>(
    &::UnityEngine::Audio::ControlContext_Manual::BeginMix)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6eab2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "BeginMix", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext_Manual.EndMix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext_Manual::*)(::UnityEngine::Audio::ChannelBuffer)>(
    &::UnityEngine::Audio::ControlContext_Manual::EndMix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eab3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "EndMix", {}, { ::i2c::type_of<::UnityEngine::Audio::ChannelBuffer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext_Manual.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext_Manual::*)()>(&::UnityEngine::Audio::ControlContext_Manual::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eab3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext_Manual.SetConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext_Manual::*)(::by_ref<::UnityEngine::Audio::AudioFormat const>)>(
    &::UnityEngine::Audio::ControlContext_Manual::SetConfiguration)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6eab424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(),
                                                                                           { "SetConfiguration", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext_Manual.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext_Manual::*)()>(&::UnityEngine::Audio::ControlContext_Manual::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6eab480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ControlContext_Manual._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ControlContext_Manual::*)(::by_ref<::UnityEngine::Audio::ControlContext const>)>(
    &::UnityEngine::Audio::ControlContext_Manual::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6eaada8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlContext const>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::ControlContext UnityEngine::Audio::ControlContext_Manual::get_context() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "get_context", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ControlContext>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::Audio::RealtimeContext> UnityEngine::Audio::ControlContext_Manual::BeginMix(uint64_t dspTick) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "BeginMix", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Audio::RealtimeContext>>(*this, ___internal_method, dspTick);
}
inline void UnityEngine::Audio::ControlContext_Manual::EndMix(::UnityEngine::Audio::ChannelBuffer result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "EndMix", {}, { ::i2c::type_of<::UnityEngine::Audio::ChannelBuffer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
inline void UnityEngine::Audio::ControlContext_Manual::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Audio::ControlContext_Manual::SetConfiguration(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(),
                                                                                         { "SetConfiguration", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format);
}
inline void UnityEngine::Audio::ControlContext_Manual::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Audio::ControlContext_Manual::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ControlContext const> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ControlContext_Manual>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::ControlContext const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Audio::ControlContext_Manual::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Audio::ControlContext_Manual::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Audio::ControlContext", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ControlContext_Manual::ControlContext_Manual(::UnityEngine::Audio::ControlContext m_Context) noexcept {
  this->m_Context = m_Context;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ControlContext_Manual::ControlContext_Manual() {}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ControlContext_ProcessorUpdateSetting::ControlContext_ProcessorUpdateSetting() {}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ControlContext_ProcessorCreationParameters::ControlContext_ProcessorCreationParameters() {}

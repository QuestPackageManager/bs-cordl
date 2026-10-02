#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ScriptableProcessorBindings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__ScriptableProcessorBindings_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeAccess_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeContext_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.QueueProcessorDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Audio::ProcessorHeader*, ::UnityEngine::Audio::ControlHeader*)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::QueueProcessorDispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eab00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                         { "QueueProcessorDispose", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.AddDataToProcessorHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Audio::ControlHeader*, ::by_ref<::Unity::Audio::Handle>, void*, int32_t, int32_t, int64_t)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::AddDataToProcessorHandle)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6eaaf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "AddDataToProcessorHandle",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.GetAvailableDataForRealtime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* (*)(::by_ref<::UnityEngine::Audio::RealtimeAccess>, ::by_ref<::Unity::Audio::Handle>)>(
        &::UnityEngine::Audio::ScriptableProcessorBindings::GetAvailableDataForRealtime)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eabcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                            { "GetAvailableDataForRealtime", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::RealtimeAccess>>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.GetAvailableDataForControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element* (*)(::UnityEngine::Audio::ControlHeader*, ::by_ref<::Unity::Audio::Handle>)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::GetAvailableDataForControl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eaaea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                { "GetAvailableDataForControl", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.ReturnDataFromProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Audio::RealtimeAccess>, ::by_ref<::Unity::Audio::Handle>, void*, int32_t, int32_t, int64_t)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::ReturnDataFromProcessor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6eaba24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "ReturnDataFromProcessor",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Audio::RealtimeAccess>>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(),
                                                                 ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.ValidateCanProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Audio::Handle>, ::by_ref<::UnityEngine::Audio::RealtimeContext>)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::ValidateCanProcess)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eabe8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                         { "ValidateCanProcess", {}, { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::RealtimeContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.CheckProcessorExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Audio::Handle, ::UnityEngine::Audio::ControlHeader*)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExists)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eaa878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "CheckProcessorExists", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.PerformRecursiveConfigure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Audio::Handle, ::UnityEngine::Audio::ControlHeader*, ::by_ref<::UnityEngine::AudioConfiguration>)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveConfigure)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6eaaa7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                            { "PerformRecursiveConfigure",
                              {},
                              { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.PerformRecursiveUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Audio::Handle, ::UnityEngine::Audio::ControlHeader*)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6eaaba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "PerformRecursiveUpdate", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.IsSystemWideReconfiguring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Audio::ControlHeader*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::IsSystemWideReconfiguring)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eaab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                                                           { "IsSystemWideReconfiguring", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.SendMessageToProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Audio::ProcessorInstance_Response (*)(::UnityEngine::Audio::ProcessorHeader*, ::UnityEngine::Audio::ControlHeader*, ::UnityEngine::Audio::ProcessorInstance_Message*)>(
        &::UnityEngine::Audio::ScriptableProcessorBindings::SendMessageToProcessor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eaccb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "SendMessageToProcessor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(),
                                                                 ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_Message*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.SendMessageToProcessorInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance_Response (*)(void*, void*, void*)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::SendMessageToProcessorInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eacd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "SendMessageToProcessorInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.PerformRecursiveUpdateInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Audio::Handle, void*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveUpdateInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6eacc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "PerformRecursiveUpdateInternal", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.IsSystemWideReconfiguringInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(void*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::IsSystemWideReconfiguringInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eacc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(), { "IsSystemWideReconfiguringInternal", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.PerformRecursiveConfigureInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Audio::Handle, void*, ::by_ref<::UnityEngine::AudioConfiguration>)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveConfigureInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6eacbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
            { "PerformRecursiveConfigureInternal", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.ValidateCanProcessInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Audio::Handle>, void*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::ValidateCanProcessInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eacb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "ValidateCanProcessInternal", {}, { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.QueueProcessorDisposeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::QueueProcessorDisposeInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eac988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                                                           { "QueueProcessorDisposeInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.GetRealtimeDataElementListForProcessorInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, ::by_ref<::Unity::Audio::Handle>)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::GetRealtimeDataElementListForProcessorInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eaca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                { "GetRealtimeDataElementListForProcessorInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.GetControlDataElementListForProcessorInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, ::by_ref<::Unity::Audio::Handle>)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::GetControlDataElementListForProcessorInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eaca84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                { "GetControlDataElementListForProcessorInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.ReturnDataFromProcessorInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::by_ref<::Unity::Audio::Handle>, void*, int32_t, int32_t, int64_t)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::ReturnDataFromProcessorInternal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6eacac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                                                           { "ReturnDataFromProcessorInternal",
                                                                                             {},
                                                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.AddDataToProcessorHandleInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(void*, ::by_ref<::Unity::Audio::Handle>, void*, int32_t, int32_t, int64_t)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::AddDataToProcessorHandleInternal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6eac9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                                                           { "AddDataToProcessorHandleInternal",
                                                                                             {},
                                                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.CheckProcessorExistsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Audio::Handle, void*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExistsInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eacb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "CheckProcessorExistsInternal", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.ThrowScriptingExceptionForTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Audio::ScriptableProcessorBindings::ThrowScriptingExceptionForTest)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6eace3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(), { "ThrowScriptingExceptionForTest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.PerformRecursiveUpdateInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Audio::Handle>, void*)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveUpdateInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eacd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "PerformRecursiveUpdateInternal_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.PerformRecursiveConfigureInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Audio::Handle>, void*, ::by_ref<::UnityEngine::AudioConfiguration>)>(
    &::UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveConfigureInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eacda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                { "PerformRecursiveConfigureInternal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ScriptableProcessorBindings.CheckProcessorExistsInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Audio::Handle>, void*)>(&::UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExistsInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eacdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                             { "CheckProcessorExistsInternal_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::ScriptableProcessorBindings::QueueProcessorDispose(::UnityEngine::Audio::ProcessorHeader* header, ::UnityEngine::Audio::ControlHeader* control) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                              { "QueueProcessorDispose", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, control);
}
inline bool UnityEngine::Audio::ScriptableProcessorBindings::AddDataToProcessorHandle(::UnityEngine::Audio::ControlHeader* control, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle,
                                                                                      void* data, int32_t size, int32_t align, int64_t typeHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "AddDataToProcessorHandle",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, handle, data, size, align, typeHash);
}
inline ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*
UnityEngine::Audio::ScriptableProcessorBindings::GetAvailableDataForRealtime(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeAccess> access,
                                                                             /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                          { "GetAvailableDataForRealtime", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::RealtimeAccess>>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*>(nullptr, ___internal_method, access, handle);
}
inline ::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*
UnityEngine::Audio::ScriptableProcessorBindings::GetAvailableDataForControl(::UnityEngine::Audio::ControlHeader* control, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                              { "GetAvailableDataForControl", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AvailableData_ProcessorInstance_Element*>(nullptr, ___internal_method, control, handle);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::ReturnDataFromProcessor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeAccess> access,
                                                                                     /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, void* data, int32_t size, int32_t align,
                                                                                     int64_t typeHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "ReturnDataFromProcessor",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Audio::RealtimeAccess>>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(),
                                                               ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, handle, data, size, align, typeHash);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::ValidateCanProcess(/* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle,
                                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext> ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                       { "ValidateCanProcess", {}, { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::RealtimeContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, ctx);
}
inline bool UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExists(::Unity::Audio::Handle handle, ::UnityEngine::Audio::ControlHeader* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "CheckProcessorExists", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, control);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveConfigure(::Unity::Audio::Handle handle, ::UnityEngine::Audio::ControlHeader* control,
                                                                                       /* [IsReadOnly] */ ::by_ref<::UnityEngine::AudioConfiguration> configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                          { "PerformRecursiveConfigure",
                            {},
                            { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, control, configuration);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveUpdate(::Unity::Audio::Handle handle, ::UnityEngine::Audio::ControlHeader* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "PerformRecursiveUpdate", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, control);
}
inline bool UnityEngine::Audio::ScriptableProcessorBindings::IsSystemWideReconfiguring(::UnityEngine::Audio::ControlHeader* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                                                         { "IsSystemWideReconfiguring", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control);
}
inline ::UnityEngine::Audio::ProcessorInstance_Response UnityEngine::Audio::ScriptableProcessorBindings::SendMessageToProcessor(::UnityEngine::Audio::ProcessorHeader* header,
                                                                                                                                ::UnityEngine::Audio::ControlHeader* control,
                                                                                                                                ::UnityEngine::Audio::ProcessorInstance_Message* message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "SendMessageToProcessor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>(), ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>(),
                                                               ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_Response>(nullptr, ___internal_method, header, control, message);
}
inline ::UnityEngine::Audio::ProcessorInstance_Response UnityEngine::Audio::ScriptableProcessorBindings::SendMessageToProcessorInternal(void* header, void* control, void* message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "SendMessageToProcessorInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_Response>(nullptr, ___internal_method, header, control, message);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveUpdateInternal(::Unity::Audio::Handle handle, void* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "PerformRecursiveUpdateInternal", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, control);
}
inline bool UnityEngine::Audio::ScriptableProcessorBindings::IsSystemWideReconfiguringInternal(void* control) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(), { "IsSystemWideReconfiguringInternal", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveConfigureInternal(::Unity::Audio::Handle handle, void* control,
                                                                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::AudioConfiguration> configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
          { "PerformRecursiveConfigureInternal", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, control, configuration);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::ValidateCanProcessInternal(/* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, void* processingContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "ValidateCanProcessInternal", {}, { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, processingContext);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::QueueProcessorDisposeInternal(void* header, void* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                                                         { "QueueProcessorDisposeInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, control);
}
inline void* UnityEngine::Audio::ScriptableProcessorBindings::GetRealtimeDataElementListForProcessorInternal(void* access, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "GetRealtimeDataElementListForProcessorInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, access, handle);
}
inline void* UnityEngine::Audio::ScriptableProcessorBindings::GetControlDataElementListForProcessorInternal(void* control, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "GetControlDataElementListForProcessorInternal", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, control, handle);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::ReturnDataFromProcessorInternal(void* access, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, void* data, int32_t size,
                                                                                             int32_t align, int64_t typeHash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                                                         { "ReturnDataFromProcessorInternal",
                                                                                           {},
                                                                                           { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, handle, data, size, align, typeHash);
}
inline bool UnityEngine::Audio::ScriptableProcessorBindings::AddDataToProcessorHandleInternal(void* control, /* [IsReadOnly] */ ::by_ref<::Unity::Audio::Handle> handle, void* data, int32_t size,
                                                                                              int32_t align, int64_t typeHash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                                                         { "AddDataToProcessorHandleInternal",
                                                                                           {},
                                                                                           { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, handle, data, size, align, typeHash);
}
inline bool UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExistsInternal(::Unity::Audio::Handle handle, void* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "CheckProcessorExistsInternal", {}, { ::i2c::type_of<::Unity::Audio::Handle>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, control);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::ThrowScriptingExceptionForTest() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(), { "ThrowScriptingExceptionForTest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveUpdateInternal_Injected(::by_ref<::Unity::Audio::Handle> handle, void* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "PerformRecursiveUpdateInternal_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, control);
}
inline void UnityEngine::Audio::ScriptableProcessorBindings::PerformRecursiveConfigureInternal_Injected(::by_ref<::Unity::Audio::Handle> handle, void* control,
                                                                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::AudioConfiguration> configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                              { "PerformRecursiveConfigureInternal_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, control, configuration);
}
inline bool UnityEngine::Audio::ScriptableProcessorBindings::CheckProcessorExistsInternal_Injected(::by_ref<::Unity::Audio::Handle> handle, void* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ScriptableProcessorBindings*>(),
                                                           { "CheckProcessorExistsInternal_Injected", {}, { ::i2c::type_of<::by_ref<::Unity::Audio::Handle>>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, control);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ScriptableProcessorBindings::ScriptableProcessorBindings() {}

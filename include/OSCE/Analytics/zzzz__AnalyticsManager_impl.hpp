#pragma once
// IWYU pragma private; include "OSCE\Analytics\AnalyticsManager.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsSystemModeEnum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsBatchingThread_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsSystemModeEnum_def.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_def.hpp"
#include "OSCE/Analytics/zzzz__GetIdParams_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsBatch_def.hpp"
#include "OSCE/Web/zzzz__FailedPostRequest_def.hpp"
#include "OSCE/Web/zzzz__IRequestSender_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_PlatformRID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_PlatformRID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f39bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_PlatformRID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_GameSpecificRID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_GameSpecificRID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f39bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_GameSpecificRID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_GameSpecificUserID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_GameSpecificUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f39be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_GameSpecificUserID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_PlatformUserID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_PlatformUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f39bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_PlatformUserID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_OculusAuthToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_OculusAuthToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f39bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_OculusAuthToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_BuildID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_BuildID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f39bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_BuildID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_Environment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f39c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_Environment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f39c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetGraphAPIUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetGraphAPIUrl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f38c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetGraphAPIUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.InitializeAnalytics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(
    ::StringW, ::StringW, int32_t, ::OSCE::Analytics::AnalyticsSystemModeEnum, ::OSCE::Web::IRequestSender*, ::StringW, ::StringW)>(&::OSCE::Analytics::AnalyticsManager::InitializeAnalytics)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5f39d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                { "InitializeAnalytics",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::OSCE::Analytics::AnalyticsSystemModeEnum>(),
                                                    ::i2c::type_of<::OSCE::Web::IRequestSender*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.SetOculusAuthToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::StringW)>(&::OSCE::Analytics::AnalyticsManager::SetOculusAuthToken)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f3a21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "SetOculusAuthToken", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.QueueIdRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(bool)>(&::OSCE::Analytics::AnalyticsManager::QueueIdRequest)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f39f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "QueueIdRequest", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.SendIdRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::SendIdRequest)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5f3a244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "SendIdRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.Deinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::Deinitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f3a4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "Deinitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::FixedUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f3a5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "FixedUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.CheckToQueueEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::CheckToQueueEvents)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f3a69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "CheckToQueueEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.TryGetNextBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OSCE::Analytics::AnalyticsManager::*)(::by_ref<::OSCE::Analytics::LoggerAnalyticsBatch*>)>(
    &::OSCE::Analytics::AnalyticsManager::TryGetNextBatch)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5f3a7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                                                           { "TryGetNextBatch", {}, { ::i2c::type_of<::by_ref<::OSCE::Analytics::LoggerAnalyticsBatch*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.CheckIfIDPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OSCE::Analytics::AnalyticsManager::*)(::OSCE::Analytics::BaseAnalyticsEvent*, bool, bool, bool, bool)>(
    &::OSCE::Analytics::AnalyticsManager::CheckIfIDPresent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f3ac54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
            { "CheckIfIDPresent", {}, { ::i2c::type_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.CheckToSendNextBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::CheckToSendNextBatch)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f3a750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "CheckToSendNextBatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetActiveMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OSCE::Analytics::AnalyticsSystemModeEnum (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetActiveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetActiveMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.SetSystemMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::OSCE::Analytics::AnalyticsSystemModeEnum)>(
    &::OSCE::Analytics::AnalyticsManager::SetSystemMode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f3b0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "SetSystemMode", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsSystemModeEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.ResetAnalyticsId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::ResetAnalyticsId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "ResetAnalyticsId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::Shutdown)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f3a4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "Shutdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetDefaultLogger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetDefaultLogger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetDefaultLogger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetSessionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetSessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetSessionId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetPlatformRID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetPlatformRID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetPlatformRID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetGameSpecificRID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetGameSpecificRID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetGameSpecificRID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetGameSpecificID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetGameSpecificID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetGameSpecificID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetPlatformUserID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetPlatformUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetPlatformUserID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.FlushAllEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::FlushAllEvents)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f3b170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "FlushAllEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.CreateNewSessionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::CreateNewSessionId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f39efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "CreateNewSessionId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetSessionTimeMS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetSessionTimeMS)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f39a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetSessionTimeMS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetSessionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetSessionOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3b564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetSessionOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.IncrementSessionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::IncrementSessionOrder)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f39a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "IncrementSessionOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f3b56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "OnApplicationQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.SendBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::OSCE::Analytics::LoggerAnalyticsBatch*)>(&::OSCE::Analytics::AnalyticsManager::SendBatch)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5f3b39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "SendBatch", {}, { ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnAnalyticsIDRetrieveSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*)>(
    &::OSCE::Analytics::AnalyticsManager::OnAnalyticsIDRetrieveSuccess)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5f3b570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                             { "OnAnalyticsIDRetrieveSuccess", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnAnalyticsIdRetrieveFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::System::Exception*, ::OSCE::Web::FailedPostRequest)>(
    &::OSCE::Analytics::AnalyticsManager::OnAnalyticsIdRetrieveFailed)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f3b780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                             { "OnAnalyticsIdRetrieveFailed", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::OSCE::Web::FailedPostRequest>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnBatchSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*)>(
    &::OSCE::Analytics::AnalyticsManager::OnBatchSuccess)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5f3b894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                             { "OnBatchSuccess", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnBatchFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::System::Exception*, ::OSCE::Web::FailedPostRequest)>(
    &::OSCE::Analytics::AnalyticsManager::OnBatchFailed)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5f3ba24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                             { "OnBatchFailed", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::OSCE::Web::FailedPostRequest>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get_EditorOnlyGraphUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EditorOnlyGraphUrl;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get_EditorOnlyGraphUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EditorOnlyGraphUrl;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set_EditorOnlyGraphUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EditorOnlyGraphUrl = value;
}
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__activeModeAfterAuth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeModeAfterAuth;
}
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__activeModeAfterAuth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeModeAfterAuth;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__activeModeAfterAuth(::OSCE::Analytics::AnalyticsSystemModeEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeModeAfterAuth = value;
}
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__activeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeMode;
}
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__activeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeMode;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__activeMode(::OSCE::Analytics::AnalyticsSystemModeEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeMode = value;
}
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__oculusAuthToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusAuthToken;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__oculusAuthToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusAuthToken;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__oculusAuthToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusAuthToken = value;
}
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__platformUserID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserID;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__platformUserID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformUserID;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__platformUserID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformUserID = value;
}
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__gameSpecificUserID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSpecificUserID;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__gameSpecificUserID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSpecificUserID;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__gameSpecificUserID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameSpecificUserID = value;
}
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__gameSpecificRID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSpecificRID;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__gameSpecificRID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSpecificRID;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__gameSpecificRID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameSpecificRID = value;
}
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__platformRID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformRID;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__platformRID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformRID;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__platformRID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformRID = value;
}
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__environment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__environment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environment;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__environment(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environment = value;
}
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__buildIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildIdentifier;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__buildIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildIdentifier;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__buildIdentifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buildIdentifier = value;
}
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__sessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionId;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__sessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionId;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__sessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionId = value;
}
constexpr ::StringW& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__defaultLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLogger;
}
constexpr ::StringW const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__defaultLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLogger;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__defaultLogger(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultLogger = value;
}
constexpr int32_t& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__secondsBetweenSends() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondsBetweenSends;
}
constexpr int32_t const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__secondsBetweenSends() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondsBetweenSends;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__secondsBetweenSends(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondsBetweenSends = value;
}
constexpr int64_t& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__timeOfNextBatchCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfNextBatchCheck;
}
constexpr int64_t const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__timeOfNextBatchCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOfNextBatchCheck;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__timeOfNextBatchCheck(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeOfNextBatchCheck = value;
}
constexpr uint32_t& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__sessionRequestCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionRequestCount;
}
constexpr uint32_t const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__sessionRequestCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionRequestCount;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__sessionRequestCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionRequestCount = value;
}
constexpr ::System::Diagnostics::Stopwatch*& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__sessionStopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionStopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__sessionStopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionStopwatch;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__sessionStopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionStopwatch = value;
}
constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::GetIdParams>*& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__queuedIdRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedIdRequests;
}
constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::GetIdParams>* const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__queuedIdRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedIdRequests;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__queuedIdRequests(::System::Collections::Generic::Queue_1<::OSCE::Analytics::GetIdParams>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____queuedIdRequests = value;
}
constexpr int64_t& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__nextIdRetrievalTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextIdRetrievalTimestamp;
}
constexpr int64_t const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__nextIdRetrievalTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextIdRetrievalTimestamp;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__nextIdRetrievalTimestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextIdRetrievalTimestamp = value;
}
constexpr bool& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__idRetrievalActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idRetrievalActive;
}
constexpr bool const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__idRetrievalActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idRetrievalActive;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__idRetrievalActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idRetrievalActive = value;
}
constexpr ::OSCE::Web::IRequestSender*& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__requestSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestSender;
}
constexpr ::OSCE::Web::IRequestSender* const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__requestSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestSender;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__requestSender(::OSCE::Web::IRequestSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestSender = value;
}
constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>*& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__unsentEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsentEvents;
}
constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__unsentEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsentEvents;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__unsentEvents(::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unsentEvents = value;
}
constexpr ::OSCE::Analytics::AnalyticsBatchingThread*& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__analyticsBatchingThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsBatchingThread;
}
constexpr ::OSCE::Analytics::AnalyticsBatchingThread* const& OSCE::Analytics::AnalyticsManager::__cordl_internal_get__analyticsBatchingThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsBatchingThread;
}
constexpr void OSCE::Analytics::AnalyticsManager::__cordl_internal_set__analyticsBatchingThread(::OSCE::Analytics::AnalyticsBatchingThread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsBatchingThread = value;
}
inline void OSCE::Analytics::AnalyticsManager::setStaticF_Instance(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::OSCE::Analytics::AnalyticsManager>, "Instance", ::OSCE::Analytics::AnalyticsManager*>(
      std::forward<::UnityW<::OSCE::Analytics::AnalyticsManager>>(value));
}
inline ::UnityW<::OSCE::Analytics::AnalyticsManager> OSCE::Analytics::AnalyticsManager::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::UnityW<::OSCE::Analytics::AnalyticsManager>, "Instance", ::OSCE::Analytics::AnalyticsManager*>();
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_PlatformRID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_PlatformRID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_GameSpecificRID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_GameSpecificRID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_GameSpecificUserID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_GameSpecificUserID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_PlatformUserID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_PlatformUserID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_OculusAuthToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_OculusAuthToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_BuildID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_BuildID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_Environment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "get_Environment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetGraphAPIUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetGraphAPIUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::InitializeAnalytics(::StringW oculusAuthToken, ::StringW defaultLogger, int32_t secondsBetweenSends,
                                                                   ::OSCE::Analytics::AnalyticsSystemModeEnum startingMode, ::OSCE::Web::IRequestSender* requestSender, ::StringW environment,
                                                                   ::StringW buildIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                              { "InitializeAnalytics",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::OSCE::Analytics::AnalyticsSystemModeEnum>(),
                                                  ::i2c::type_of<::OSCE::Web::IRequestSender*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oculusAuthToken, defaultLogger, secondsBetweenSends, startingMode, requestSender, environment, buildIdentifier);
}
inline void OSCE::Analytics::AnalyticsManager::SetOculusAuthToken(::StringW oculusAuthToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "SetOculusAuthToken", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oculusAuthToken);
}
inline void OSCE::Analytics::AnalyticsManager::QueueIdRequest(bool isResettingId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "QueueIdRequest", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isResettingId);
}
inline void OSCE::Analytics::AnalyticsManager::SendIdRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "SendIdRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::Deinitialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "Deinitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "FixedUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::CheckToQueueEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "CheckToQueueEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OSCE::Analytics::AnalyticsManager::TryGetNextBatch(::by_ref<::OSCE::Analytics::LoggerAnalyticsBatch*> nextBatch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "TryGetNextBatch", {}, { ::i2c::type_of<::by_ref<::OSCE::Analytics::LoggerAnalyticsBatch*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nextBatch);
}
inline bool OSCE::Analytics::AnalyticsManager::CheckIfIDPresent(::OSCE::Analytics::BaseAnalyticsEvent* analyticsEvent, bool hasPlatformRID, bool hasSpecificRID, bool hasPlatformID,
                                                                bool hasGameSpecificID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
          { "CheckIfIDPresent", {}, { ::i2c::type_of<::OSCE::Analytics::BaseAnalyticsEvent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, analyticsEvent, hasPlatformRID, hasSpecificRID, hasPlatformID, hasGameSpecificID);
}
inline void OSCE::Analytics::AnalyticsManager::CheckToSendNextBatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "CheckToSendNextBatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OSCE::Analytics::AnalyticsSystemModeEnum OSCE::Analytics::AnalyticsManager::GetActiveMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetActiveMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OSCE::Analytics::AnalyticsSystemModeEnum>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::SetSystemMode(::OSCE::Analytics::AnalyticsSystemModeEnum newMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "SetSystemMode", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsSystemModeEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMode);
}
inline void OSCE::Analytics::AnalyticsManager::ResetAnalyticsId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "ResetAnalyticsId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "Shutdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetDefaultLogger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetDefaultLogger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetSessionId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetSessionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetPlatformRID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetPlatformRID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetGameSpecificRID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetGameSpecificRID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetGameSpecificID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetGameSpecificID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetPlatformUserID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetPlatformUserID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::FlushAllEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "FlushAllEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::CreateNewSessionId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "CreateNewSessionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t OSCE::Analytics::AnalyticsManager::GetSessionTimeMS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetSessionTimeMS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline uint32_t OSCE::Analytics::AnalyticsManager::GetSessionOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "GetSessionOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::IncrementSessionOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "IncrementSessionOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "OnApplicationQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void OSCE::Analytics::AnalyticsManager::SendMultipleEventsWithSameTimestamp(::System::Collections::Generic::List_1<T>* newEvents, bool isThreaded) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                       { "SendMultipleEventsWithSameTimestamp", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEvents, isThreaded);
}
template <typename T> inline void OSCE::Analytics::AnalyticsManager::SendAnalyticsEvent(T newEvent, bool isThreaded, int32_t timestampToApply) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                           { "SendAnalyticsEvent", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEvent, isThreaded, timestampToApply);
}
inline void OSCE::Analytics::AnalyticsManager::SendBatch(::OSCE::Analytics::LoggerAnalyticsBatch* batch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(), { "SendBatch", {}, { ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, batch);
}
inline void OSCE::Analytics::AnalyticsManager::OnAnalyticsIDRetrieveSuccess(::StringW result, ::OSCE::Analytics::LoggerAnalyticsBatch* _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                           { "OnAnalyticsIDRetrieveSuccess", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, _);
}
inline void OSCE::Analytics::AnalyticsManager::OnAnalyticsIdRetrieveFailed(::System::Exception* e, ::OSCE::Web::FailedPostRequest failedRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                           { "OnAnalyticsIdRetrieveFailed", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::OSCE::Web::FailedPostRequest>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, failedRequest);
}
inline void OSCE::Analytics::AnalyticsManager::OnBatchSuccess(::StringW result, ::OSCE::Analytics::LoggerAnalyticsBatch* batch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                           { "OnBatchSuccess", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::OSCE::Analytics::LoggerAnalyticsBatch*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, batch);
}
inline void OSCE::Analytics::AnalyticsManager::OnBatchFailed(::System::Exception* e, ::OSCE::Web::FailedPostRequest request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OSCE::Analytics::AnalyticsManager*>(),
                                                           { "OnBatchFailed", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::OSCE::Web::FailedPostRequest>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, request);
}
inline ::OSCE::Analytics::AnalyticsManager* OSCE::Analytics::AnalyticsManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OSCE::Analytics::AnalyticsManager*>());
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::AnalyticsManager::AnalyticsManager() {}

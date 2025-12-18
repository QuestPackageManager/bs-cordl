#pragma once
// IWYU pragma private; include "OSCE/Analytics/AnalyticsManager.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_PlatformRID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "get_PlatformRID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_GameSpecificRID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_GameSpecificRID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                               "get_GameSpecificRID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_GameSpecificUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_GameSpecificUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                               "get_GameSpecificUserID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_PlatformUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_PlatformUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                               "get_PlatformUserID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_OculusAuthToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_OculusAuthToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                               "get_OculusAuthToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_BuildID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_BuildID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "get_BuildID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.get_Environment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::get_Environment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8b4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "get_Environment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5d8b4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetGraphAPIUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetGraphAPIUrl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d8a53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetGraphAPIUrl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.InitializeAnalytics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(
    ::StringW, ::StringW, int32_t, ::OSCE::Analytics::AnalyticsSystemModeEnum, ::OSCE::Web::IRequestSender*, ::StringW, ::StringW)>(&::OSCE::Analytics::AnalyticsManager::InitializeAnalytics)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5d8b634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "InitializeAnalytics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsSystemModeEnum>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Web::IRequestSender*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.SetOculusAuthToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::StringW)>(&::OSCE::Analytics::AnalyticsManager::SetOculusAuthToken)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d8bb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "SetOculusAuthToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.QueueIdRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(bool)>(&::OSCE::Analytics::AnalyticsManager::QueueIdRequest)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d8b834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "QueueIdRequest",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.SendIdRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::SendIdRequest)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5d8bb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "SendIdRequest",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.Deinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::Deinitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8bdcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "Deinitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::FixedUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d8bec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "FixedUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.CheckToQueueEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::CheckToQueueEvents)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d8bf84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                               "CheckToQueueEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.TryGetNextBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OSCE::Analytics::AnalyticsManager::*)(::ByRef<::OSCE::Analytics::LoggerAnalyticsBatch*>)>(
    &::OSCE::Analytics::AnalyticsManager::TryGetNextBatch)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5d8c0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "TryGetNextBatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OSCE::Analytics::LoggerAnalyticsBatch*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.CheckIfIDPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OSCE::Analytics::AnalyticsManager::*)(::OSCE::Analytics::BaseAnalyticsEvent*, bool, bool, bool, bool)>(
    &::OSCE::Analytics::AnalyticsManager::CheckIfIDPresent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d8c53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "CheckIfIDPresent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.CheckToSendNextBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::CheckToSendNextBatch)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d8c038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                               "CheckToSendNextBatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetActiveMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OSCE::Analytics::AnalyticsSystemModeEnum (::OSCE::Analytics::AnalyticsManager::*)()>(
    &::OSCE::Analytics::AnalyticsManager::GetActiveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8c98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetActiveMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.SetSystemMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::OSCE::Analytics::AnalyticsSystemModeEnum)>(
    &::OSCE::Analytics::AnalyticsManager::SetSystemMode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d8c994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "SetSystemMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsSystemModeEnum>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.ResetAnalyticsId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::ResetAnalyticsId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8ca50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "ResetAnalyticsId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::Shutdown)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d8bdd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "Shutdown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetDefaultLogger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetDefaultLogger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8caf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetDefaultLogger",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetSessionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetSessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8cafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetSessionId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetPlatformRID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetPlatformRID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8cb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetPlatformRID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetGameSpecificRID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetGameSpecificRID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8cb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                               "GetGameSpecificRID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetGameSpecificID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetGameSpecificID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8cb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetGameSpecificID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetPlatformUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetPlatformUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8cb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetPlatformUserID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.FlushAllEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::FlushAllEvents)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d8ca58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "FlushAllEvents",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.CreateNewSessionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::CreateNewSessionId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d8b7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                               "CreateNewSessionId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetSessionTimeMS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetSessionTimeMS)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d8b338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetSessionTimeMS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.GetSessionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::GetSessionOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8ce4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetSessionOrder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.IncrementSessionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::IncrementSessionOrder)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d8b350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                               "IncrementSessionOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)()>(&::OSCE::Analytics::AnalyticsManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8ce54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnApplicationQuit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.SendBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::OSCE::Analytics::LoggerAnalyticsBatch*)>(
    &::OSCE::Analytics::AnalyticsManager::SendBatch)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5d8cc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "SendBatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnAnalyticsIDRetrieveSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*)>(
    &::OSCE::Analytics::AnalyticsManager::OnAnalyticsIDRetrieveSuccess)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5d8ce58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnAnalyticsIDRetrieveSuccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnAnalyticsIdRetrieveFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::System::Exception*, ::OSCE::Web::FailedPostRequest)>(
    &::OSCE::Analytics::AnalyticsManager::OnAnalyticsIdRetrieveFailed)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d8d068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnAnalyticsIdRetrieveFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Web::FailedPostRequest>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnBatchSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::StringW, ::OSCE::Analytics::LoggerAnalyticsBatch*)>(
    &::OSCE::Analytics::AnalyticsManager::OnBatchSuccess)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5d8d17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnBatchSuccess", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::AnalyticsManager.OnBatchFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::AnalyticsManager::*)(::System::Exception*, ::OSCE::Web::FailedPostRequest)>(
    &::OSCE::Analytics::AnalyticsManager::OnBatchFailed)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d8d30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnBatchFailed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Web::FailedPostRequest>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EditorOnlyGraphUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusAuthToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformUserID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameSpecificUserID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameSpecificRID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformRID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buildIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultLogger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionStopwatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____queuedIdRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____requestSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unsentEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsBatchingThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OSCE::Analytics::AnalyticsManager::setStaticF_Instance(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::OSCE::Analytics::AnalyticsManager>, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get>(
      std::forward<::UnityW<::OSCE::Analytics::AnalyticsManager>>(value));
}
inline ::UnityW<::OSCE::Analytics::AnalyticsManager> OSCE::Analytics::AnalyticsManager::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::UnityW<::OSCE::Analytics::AnalyticsManager>, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get>();
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_PlatformRID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "get_PlatformRID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_GameSpecificRID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "get_GameSpecificRID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_GameSpecificUserID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                             "get_GameSpecificUserID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_PlatformUserID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "get_PlatformUserID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_OculusAuthToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "get_OculusAuthToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_BuildID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "get_BuildID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::get_Environment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "get_Environment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetGraphAPIUrl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetGraphAPIUrl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::InitializeAnalytics(::StringW oculusAuthToken, ::StringW defaultLogger, int32_t secondsBetweenSends,
                                                                   ::OSCE::Analytics::AnalyticsSystemModeEnum startingMode, ::OSCE::Web::IRequestSender* requestSender, ::StringW environment,
                                                                   ::StringW buildIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "InitializeAnalytics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsSystemModeEnum>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Web::IRequestSender*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oculusAuthToken, defaultLogger, secondsBetweenSends, startingMode, requestSender, environment, buildIdentifier);
}
inline void OSCE::Analytics::AnalyticsManager::SetOculusAuthToken(::StringW oculusAuthToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "SetOculusAuthToken", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oculusAuthToken);
}
inline void OSCE::Analytics::AnalyticsManager::QueueIdRequest(bool isResettingId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "QueueIdRequest",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isResettingId);
}
inline void OSCE::Analytics::AnalyticsManager::SendIdRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "SendIdRequest",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::Deinitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "Deinitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "FixedUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::CheckToQueueEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "CheckToQueueEvents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OSCE::Analytics::AnalyticsManager::TryGetNextBatch(::ByRef<::OSCE::Analytics::LoggerAnalyticsBatch*> nextBatch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "TryGetNextBatch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OSCE::Analytics::LoggerAnalyticsBatch*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nextBatch);
}
inline bool OSCE::Analytics::AnalyticsManager::CheckIfIDPresent(::OSCE::Analytics::BaseAnalyticsEvent* analyticsEvent, bool hasPlatformRID, bool hasSpecificRID, bool hasPlatformID,
                                                                bool hasGameSpecificID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "CheckIfIDPresent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, analyticsEvent, hasPlatformRID, hasSpecificRID, hasPlatformID, hasGameSpecificID);
}
inline void OSCE::Analytics::AnalyticsManager::CheckToSendNextBatch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                             "CheckToSendNextBatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OSCE::Analytics::AnalyticsSystemModeEnum OSCE::Analytics::AnalyticsManager::GetActiveMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetActiveMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OSCE::Analytics::AnalyticsSystemModeEnum, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::SetSystemMode(::OSCE::Analytics::AnalyticsSystemModeEnum newMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "SetSystemMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsSystemModeEnum>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMode);
}
inline void OSCE::Analytics::AnalyticsManager::ResetAnalyticsId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "ResetAnalyticsId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "Shutdown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetDefaultLogger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetDefaultLogger",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetSessionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetSessionId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetPlatformRID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetPlatformRID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetGameSpecificRID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetGameSpecificRID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetGameSpecificID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetGameSpecificID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW OSCE::Analytics::AnalyticsManager::GetPlatformUserID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetPlatformUserID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::FlushAllEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "FlushAllEvents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::CreateNewSessionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "CreateNewSessionId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t OSCE::Analytics::AnalyticsManager::GetSessionTimeMS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetSessionTimeMS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline uint32_t OSCE::Analytics::AnalyticsManager::GetSessionOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "GetSessionOrder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::IncrementSessionOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(),
                                                                             "IncrementSessionOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::AnalyticsManager::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnApplicationQuit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void OSCE::Analytics::AnalyticsManager::SendAnalyticsEvent(T newEvent, bool isThreaded) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "SendAnalyticsEvent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newEvent, isThreaded);
}
inline void OSCE::Analytics::AnalyticsManager::SendBatch(::OSCE::Analytics::LoggerAnalyticsBatch* batch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "SendBatch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batch);
}
inline void OSCE::Analytics::AnalyticsManager::OnAnalyticsIDRetrieveSuccess(::StringW result, ::OSCE::Analytics::LoggerAnalyticsBatch* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnAnalyticsIDRetrieveSuccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, _);
}
inline void OSCE::Analytics::AnalyticsManager::OnAnalyticsIdRetrieveFailed(::System::Exception* e, ::OSCE::Web::FailedPostRequest failedRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnAnalyticsIdRetrieveFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Web::FailedPostRequest>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, failedRequest);
}
inline void OSCE::Analytics::AnalyticsManager::OnBatchSuccess(::StringW result, ::OSCE::Analytics::LoggerAnalyticsBatch* batch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnBatchSuccess", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::LoggerAnalyticsBatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, batch);
}
inline void OSCE::Analytics::AnalyticsManager::OnBatchFailed(::System::Exception* e, ::OSCE::Web::FailedPostRequest request) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::AnalyticsManager*>::get(), "OnBatchFailed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Web::FailedPostRequest>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, request);
}
inline ::OSCE::Analytics::AnalyticsManager* OSCE::Analytics::AnalyticsManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OSCE::Analytics::AnalyticsManager*>());
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::AnalyticsManager::AnalyticsManager() {}

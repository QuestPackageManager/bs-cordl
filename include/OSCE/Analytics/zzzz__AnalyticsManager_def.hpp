#pragma once
// IWYU pragma private; include "OSCE/Analytics/AnalyticsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OSCE/Analytics/zzzz__AnalyticsSystemModeEnum_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsManager)
namespace OSCE::Analytics {
class AnalyticsBatchingThread;
}
namespace OSCE::Analytics {
struct AnalyticsSystemModeEnum;
}
namespace OSCE::Analytics {
class BaseAnalyticsEvent;
}
namespace OSCE::Analytics {
struct GetIdParams;
}
namespace OSCE::Analytics {
class LoggerAnalyticsBatch;
}
namespace OSCE::Web {
struct FailedPostRequest;
}
namespace OSCE::Web {
class IRequestSender;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Analytics::AnalyticsManager);
// Dependencies OSCE.Analytics.AnalyticsSystemModeEnum, UnityEngine.MonoBehaviour
namespace OSCE::Analytics {
// Is value type: false
// CS Name: OSCE.Analytics.AnalyticsManager
class CORDL_TYPE AnalyticsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_BuildID)) ::StringW BuildID;

  /// @brief Field EditorOnlyGraphUrl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_EditorOnlyGraphUrl, put = __cordl_internal_set_EditorOnlyGraphUrl)) ::StringW EditorOnlyGraphUrl;

  __declspec(property(get = get_Environment)) ::StringW Environment;

  __declspec(property(get = get_GameSpecificRID)) ::StringW GameSpecificRID;

  __declspec(property(get = get_GameSpecificUserID)) ::StringW GameSpecificUserID;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::UnityW<::OSCE::Analytics::AnalyticsManager> Instance;

  __declspec(property(get = get_OculusAuthToken)) ::StringW OculusAuthToken;

  __declspec(property(get = get_PlatformRID)) ::StringW PlatformRID;

  __declspec(property(get = get_PlatformUserID)) ::StringW PlatformUserID;

  /// @brief Field _activeMode, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__activeMode, put = __cordl_internal_set__activeMode)) ::OSCE::Analytics::AnalyticsSystemModeEnum _activeMode;

  /// @brief Field _activeModeAfterAuth, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__activeModeAfterAuth, put = __cordl_internal_set__activeModeAfterAuth)) ::OSCE::Analytics::AnalyticsSystemModeEnum _activeModeAfterAuth;

  /// @brief Field _analyticsBatchingThread, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsBatchingThread, put = __cordl_internal_set__analyticsBatchingThread)) ::OSCE::Analytics::AnalyticsBatchingThread* _analyticsBatchingThread;

  /// @brief Field _buildIdentifier, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__buildIdentifier, put = __cordl_internal_set__buildIdentifier)) ::StringW _buildIdentifier;

  /// @brief Field _defaultLogger, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLogger, put = __cordl_internal_set__defaultLogger)) ::StringW _defaultLogger;

  /// @brief Field _environment, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__environment, put = __cordl_internal_set__environment)) ::StringW _environment;

  /// @brief Field _gameSpecificRID, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSpecificRID, put = __cordl_internal_set__gameSpecificRID)) ::StringW _gameSpecificRID;

  /// @brief Field _gameSpecificUserID, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSpecificUserID, put = __cordl_internal_set__gameSpecificUserID)) ::StringW _gameSpecificUserID;

  /// @brief Field _idRetrievalActive, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__idRetrievalActive, put = __cordl_internal_set__idRetrievalActive)) bool _idRetrievalActive;

  /// @brief Field _nextIdRetrievalTimestamp, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__nextIdRetrievalTimestamp, put = __cordl_internal_set__nextIdRetrievalTimestamp)) int64_t _nextIdRetrievalTimestamp;

  /// @brief Field _oculusAuthToken, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusAuthToken, put = __cordl_internal_set__oculusAuthToken)) ::StringW _oculusAuthToken;

  /// @brief Field _platformRID, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__platformRID, put = __cordl_internal_set__platformRID)) ::StringW _platformRID;

  /// @brief Field _platformUserID, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__platformUserID, put = __cordl_internal_set__platformUserID)) ::StringW _platformUserID;

  /// @brief Field _queuedIdRequests, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__queuedIdRequests,
                      put = __cordl_internal_set__queuedIdRequests)) ::System::Collections::Generic::Queue_1<::OSCE::Analytics::GetIdParams>* _queuedIdRequests;

  /// @brief Field _requestSender, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__requestSender, put = __cordl_internal_set__requestSender)) ::OSCE::Web::IRequestSender* _requestSender;

  /// @brief Field _secondsBetweenSends, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__secondsBetweenSends, put = __cordl_internal_set__secondsBetweenSends)) int32_t _secondsBetweenSends;

  /// @brief Field _sessionId, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionId, put = __cordl_internal_set__sessionId)) ::StringW _sessionId;

  /// @brief Field _sessionRequestCount, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__sessionRequestCount, put = __cordl_internal_set__sessionRequestCount)) uint32_t _sessionRequestCount;

  /// @brief Field _sessionStopwatch, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionStopwatch, put = __cordl_internal_set__sessionStopwatch)) ::System::Diagnostics::Stopwatch* _sessionStopwatch;

  /// @brief Field _timeOfNextBatchCheck, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__timeOfNextBatchCheck, put = __cordl_internal_set__timeOfNextBatchCheck)) int64_t _timeOfNextBatchCheck;

  /// @brief Field _unsentEvents, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__unsentEvents,
                      put = __cordl_internal_set__unsentEvents)) ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* _unsentEvents;

  /// @brief Method CheckIfIDPresent, addr 0x5d25a5c, size 0x100, virtual false, abstract: false, final false
  inline bool CheckIfIDPresent(::OSCE::Analytics::BaseAnalyticsEvent* analyticsEvent, bool hasPlatformRID, bool hasSpecificRID, bool hasPlatformID, bool hasGameSpecificID);

  /// @brief Method CheckToQueueEvents, addr 0x5d254a4, size 0xb4, virtual false, abstract: false, final false
  inline void CheckToQueueEvents();

  /// @brief Method CheckToSendNextBatch, addr 0x5d25558, size 0xac, virtual false, abstract: false, final false
  inline void CheckToSendNextBatch();

  /// @brief Method CreateNewSessionId, addr 0x5d24d04, size 0x50, virtual false, abstract: false, final false
  inline void CreateNewSessionId();

  /// @brief Method Deinitialize, addr 0x5d252ec, size 0x4, virtual false, abstract: false, final false
  inline void Deinitialize();

  /// @brief Method FixedUpdate, addr 0x5d253e0, size 0xc4, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method FlushAllEvents, addr 0x5d25f78, size 0x58, virtual false, abstract: false, final false
  inline void FlushAllEvents();

  /// @brief Method GetActiveMode, addr 0x5d25eac, size 0x8, virtual false, abstract: false, final false
  inline ::OSCE::Analytics::AnalyticsSystemModeEnum GetActiveMode();

  /// @brief Method GetDefaultLogger, addr 0x5d26014, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetDefaultLogger();

  /// @brief Method GetGameSpecificID, addr 0x5d26034, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetGameSpecificID();

  /// @brief Method GetGameSpecificRID, addr 0x5d2602c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetGameSpecificRID();

  /// @brief Method GetGraphAPIUrl, addr 0x5d23a5c, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetGraphAPIUrl();

  /// @brief Method GetPlatformRID, addr 0x5d26024, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetPlatformRID();

  /// @brief Method GetPlatformUserID, addr 0x5d2603c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetPlatformUserID();

  /// @brief Method GetSessionId, addr 0x5d2601c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetSessionId();

  /// @brief Method GetSessionOrder, addr 0x5d2636c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t GetSessionOrder();

  /// @brief Method GetSessionTimeMS, addr 0x5d24858, size 0x18, virtual false, abstract: false, final false
  inline int64_t GetSessionTimeMS();

  /// @brief Method IncrementSessionOrder, addr 0x5d24870, size 0x10, virtual false, abstract: false, final false
  inline void IncrementSessionOrder();

  /// @brief Method InitializeAnalytics, addr 0x5d24b54, size 0x1b0, virtual false, abstract: false, final false
  inline void InitializeAnalytics(::StringW oculusAuthToken, ::StringW defaultLogger, int32_t secondsBetweenSends, ::OSCE::Analytics::AnalyticsSystemModeEnum startingMode,
                                  ::OSCE::Web::IRequestSender* requestSender, ::StringW environment, ::StringW buildIdentifier);

  static inline ::OSCE::Analytics::AnalyticsManager* New_ctor();

  /// @brief Method OnAnalyticsIDRetrieveSuccess, addr 0x5d26378, size 0x210, virtual false, abstract: false, final false
  inline void OnAnalyticsIDRetrieveSuccess(::StringW result, ::OSCE::Analytics::LoggerAnalyticsBatch* _);

  /// @brief Method OnAnalyticsIdRetrieveFailed, addr 0x5d26588, size 0x114, virtual false, abstract: false, final false
  inline void OnAnalyticsIdRetrieveFailed(::System::Exception* e, ::OSCE::Web::FailedPostRequest failedRequest);

  /// @brief Method OnApplicationQuit, addr 0x5d26374, size 0x4, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnBatchFailed, addr 0x5d2682c, size 0x17c, virtual false, abstract: false, final false
  inline void OnBatchFailed(::System::Exception* e, ::OSCE::Web::FailedPostRequest request);

  /// @brief Method OnBatchSuccess, addr 0x5d2669c, size 0x190, virtual false, abstract: false, final false
  inline void OnBatchSuccess(::StringW result, ::OSCE::Analytics::LoggerAnalyticsBatch* batch);

  /// @brief Method QueueIdRequest, addr 0x5d24d54, size 0xf4, virtual false, abstract: false, final false
  inline void QueueIdRequest(bool isResettingId);

  /// @brief Method ResetAnalyticsId, addr 0x5d25f70, size 0x8, virtual false, abstract: false, final false
  inline void ResetAnalyticsId();

  /// @brief Method SendAnalyticsEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendAnalyticsEvent(T newEvent, bool isThreaded);

  /// @brief Method SendBatch, addr 0x5d261a4, size 0x1c8, virtual false, abstract: false, final false
  inline void SendBatch(::OSCE::Analytics::LoggerAnalyticsBatch* batch);

  /// @brief Method SendIdRequest, addr 0x5d2504c, size 0x2a0, virtual false, abstract: false, final false
  inline void SendIdRequest();

  /// @brief Method SetOculusAuthToken, addr 0x5d25024, size 0x28, virtual false, abstract: false, final false
  inline void SetOculusAuthToken(::StringW oculusAuthToken);

  /// @brief Method SetSystemMode, addr 0x5d25eb4, size 0xbc, virtual false, abstract: false, final false
  inline void SetSystemMode(::OSCE::Analytics::AnalyticsSystemModeEnum newMode);

  /// @brief Method Shutdown, addr 0x5d252f0, size 0xf0, virtual false, abstract: false, final false
  inline void Shutdown();

  /// @brief Method TryGetNextBatch, addr 0x5d25604, size 0x318, virtual false, abstract: false, final false
  inline bool TryGetNextBatch(::ByRef<::OSCE::Analytics::LoggerAnalyticsBatch*> nextBatch);

  constexpr ::StringW const& __cordl_internal_get_EditorOnlyGraphUrl() const;

  constexpr ::StringW& __cordl_internal_get_EditorOnlyGraphUrl();

  constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum const& __cordl_internal_get__activeMode() const;

  constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum& __cordl_internal_get__activeMode();

  constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum const& __cordl_internal_get__activeModeAfterAuth() const;

  constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum& __cordl_internal_get__activeModeAfterAuth();

  constexpr ::OSCE::Analytics::AnalyticsBatchingThread* const& __cordl_internal_get__analyticsBatchingThread() const;

  constexpr ::OSCE::Analytics::AnalyticsBatchingThread*& __cordl_internal_get__analyticsBatchingThread();

  constexpr ::StringW const& __cordl_internal_get__buildIdentifier() const;

  constexpr ::StringW& __cordl_internal_get__buildIdentifier();

  constexpr ::StringW const& __cordl_internal_get__defaultLogger() const;

  constexpr ::StringW& __cordl_internal_get__defaultLogger();

  constexpr ::StringW const& __cordl_internal_get__environment() const;

  constexpr ::StringW& __cordl_internal_get__environment();

  constexpr ::StringW const& __cordl_internal_get__gameSpecificRID() const;

  constexpr ::StringW& __cordl_internal_get__gameSpecificRID();

  constexpr ::StringW const& __cordl_internal_get__gameSpecificUserID() const;

  constexpr ::StringW& __cordl_internal_get__gameSpecificUserID();

  constexpr bool const& __cordl_internal_get__idRetrievalActive() const;

  constexpr bool& __cordl_internal_get__idRetrievalActive();

  constexpr int64_t const& __cordl_internal_get__nextIdRetrievalTimestamp() const;

  constexpr int64_t& __cordl_internal_get__nextIdRetrievalTimestamp();

  constexpr ::StringW const& __cordl_internal_get__oculusAuthToken() const;

  constexpr ::StringW& __cordl_internal_get__oculusAuthToken();

  constexpr ::StringW const& __cordl_internal_get__platformRID() const;

  constexpr ::StringW& __cordl_internal_get__platformRID();

  constexpr ::StringW const& __cordl_internal_get__platformUserID() const;

  constexpr ::StringW& __cordl_internal_get__platformUserID();

  constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::GetIdParams>* const& __cordl_internal_get__queuedIdRequests() const;

  constexpr ::System::Collections::Generic::Queue_1<::OSCE::Analytics::GetIdParams>*& __cordl_internal_get__queuedIdRequests();

  constexpr ::OSCE::Web::IRequestSender* const& __cordl_internal_get__requestSender() const;

  constexpr ::OSCE::Web::IRequestSender*& __cordl_internal_get__requestSender();

  constexpr int32_t const& __cordl_internal_get__secondsBetweenSends() const;

  constexpr int32_t& __cordl_internal_get__secondsBetweenSends();

  constexpr ::StringW const& __cordl_internal_get__sessionId() const;

  constexpr ::StringW& __cordl_internal_get__sessionId();

  constexpr uint32_t const& __cordl_internal_get__sessionRequestCount() const;

  constexpr uint32_t& __cordl_internal_get__sessionRequestCount();

  constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__sessionStopwatch() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__sessionStopwatch();

  constexpr int64_t const& __cordl_internal_get__timeOfNextBatchCheck() const;

  constexpr int64_t& __cordl_internal_get__timeOfNextBatchCheck();

  constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* const& __cordl_internal_get__unsentEvents() const;

  constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>*& __cordl_internal_get__unsentEvents();

  constexpr void __cordl_internal_set_EditorOnlyGraphUrl(::StringW value);

  constexpr void __cordl_internal_set__activeMode(::OSCE::Analytics::AnalyticsSystemModeEnum value);

  constexpr void __cordl_internal_set__activeModeAfterAuth(::OSCE::Analytics::AnalyticsSystemModeEnum value);

  constexpr void __cordl_internal_set__analyticsBatchingThread(::OSCE::Analytics::AnalyticsBatchingThread* value);

  constexpr void __cordl_internal_set__buildIdentifier(::StringW value);

  constexpr void __cordl_internal_set__defaultLogger(::StringW value);

  constexpr void __cordl_internal_set__environment(::StringW value);

  constexpr void __cordl_internal_set__gameSpecificRID(::StringW value);

  constexpr void __cordl_internal_set__gameSpecificUserID(::StringW value);

  constexpr void __cordl_internal_set__idRetrievalActive(bool value);

  constexpr void __cordl_internal_set__nextIdRetrievalTimestamp(int64_t value);

  constexpr void __cordl_internal_set__oculusAuthToken(::StringW value);

  constexpr void __cordl_internal_set__platformRID(::StringW value);

  constexpr void __cordl_internal_set__platformUserID(::StringW value);

  constexpr void __cordl_internal_set__queuedIdRequests(::System::Collections::Generic::Queue_1<::OSCE::Analytics::GetIdParams>* value);

  constexpr void __cordl_internal_set__requestSender(::OSCE::Web::IRequestSender* value);

  constexpr void __cordl_internal_set__secondsBetweenSends(int32_t value);

  constexpr void __cordl_internal_set__sessionId(::StringW value);

  constexpr void __cordl_internal_set__sessionRequestCount(uint32_t value);

  constexpr void __cordl_internal_set__sessionStopwatch(::System::Diagnostics::Stopwatch* value);

  constexpr void __cordl_internal_set__timeOfNextBatchCheck(int64_t value);

  constexpr void __cordl_internal_set__unsentEvents(::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* value);

  /// @brief Method .ctor, addr 0x5d24a14, size 0x140, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::OSCE::Analytics::AnalyticsManager> getStaticF_Instance();

  /// @brief Method get_BuildID, addr 0x5d24a04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BuildID();

  /// @brief Method get_Environment, addr 0x5d24a0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Environment();

  /// @brief Method get_GameSpecificRID, addr 0x5d249e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GameSpecificRID();

  /// @brief Method get_GameSpecificUserID, addr 0x5d249ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GameSpecificUserID();

  /// @brief Method get_OculusAuthToken, addr 0x5d249fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_OculusAuthToken();

  /// @brief Method get_PlatformRID, addr 0x5d249dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PlatformRID();

  /// @brief Method get_PlatformUserID, addr 0x5d249f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PlatformUserID();

  static inline void setStaticF_Instance(::UnityW<::OSCE::Analytics::AnalyticsManager> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsManager(AnalyticsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsManager(AnalyticsManager const&) = delete;

  /// @brief Field FAILED_RID_RETRIEVE_RETRY_SECONDS offset 0xffffffff size 0x4
  static constexpr int32_t FAILED_RID_RETRIEVE_RETRY_SECONDS{ static_cast<int32_t>(0x3) };

  /// @brief Field GraphAPIProdUrl offset 0xffffffff size 0x8
  static constexpr ::ConstString GraphAPIProdUrl{ u"https://graph.oculus.com" };

  /// @brief Field MAX_QUEUE_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t MAX_QUEUE_SIZE{ static_cast<int32_t>(0x1e) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21686 };

  /// @brief Field EditorOnlyGraphUrl, offset: 0x20, size: 0x8, def value: None
  ::StringW ___EditorOnlyGraphUrl;

  /// @brief Field _activeModeAfterAuth, offset: 0x28, size: 0x4, def value: None
  ::OSCE::Analytics::AnalyticsSystemModeEnum ____activeModeAfterAuth;

  /// @brief Field _activeMode, offset: 0x2c, size: 0x4, def value: None
  ::OSCE::Analytics::AnalyticsSystemModeEnum ____activeMode;

  /// @brief Field _oculusAuthToken, offset: 0x30, size: 0x8, def value: None
  ::StringW ____oculusAuthToken;

  /// @brief Field _platformUserID, offset: 0x38, size: 0x8, def value: None
  ::StringW ____platformUserID;

  /// @brief Field _gameSpecificUserID, offset: 0x40, size: 0x8, def value: None
  ::StringW ____gameSpecificUserID;

  /// @brief Field _gameSpecificRID, offset: 0x48, size: 0x8, def value: None
  ::StringW ____gameSpecificRID;

  /// @brief Field _platformRID, offset: 0x50, size: 0x8, def value: None
  ::StringW ____platformRID;

  /// @brief Field _environment, offset: 0x58, size: 0x8, def value: None
  ::StringW ____environment;

  /// @brief Field _buildIdentifier, offset: 0x60, size: 0x8, def value: None
  ::StringW ____buildIdentifier;

  /// @brief Field _sessionId, offset: 0x68, size: 0x8, def value: None
  ::StringW ____sessionId;

  /// @brief Field _defaultLogger, offset: 0x70, size: 0x8, def value: None
  ::StringW ____defaultLogger;

  /// @brief Field _secondsBetweenSends, offset: 0x78, size: 0x4, def value: None
  int32_t ____secondsBetweenSends;

  /// @brief Field _timeOfNextBatchCheck, offset: 0x80, size: 0x8, def value: None
  int64_t ____timeOfNextBatchCheck;

  /// @brief Field _sessionRequestCount, offset: 0x88, size: 0x4, def value: None
  uint32_t ____sessionRequestCount;

  /// @brief Field _sessionStopwatch, offset: 0x90, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____sessionStopwatch;

  /// @brief Field _queuedIdRequests, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::OSCE::Analytics::GetIdParams>* ____queuedIdRequests;

  /// @brief Field _nextIdRetrievalTimestamp, offset: 0xa0, size: 0x8, def value: None
  int64_t ____nextIdRetrievalTimestamp;

  /// @brief Field _idRetrievalActive, offset: 0xa8, size: 0x1, def value: None
  bool ____idRetrievalActive;

  /// @brief Field _requestSender, offset: 0xb0, size: 0x8, def value: None
  ::OSCE::Web::IRequestSender* ____requestSender;

  /// @brief Field _unsentEvents, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* ____unsentEvents;

  /// @brief Field _analyticsBatchingThread, offset: 0xc0, size: 0x8, def value: None
  ::OSCE::Analytics::AnalyticsBatchingThread* ____analyticsBatchingThread;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ___EditorOnlyGraphUrl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____activeModeAfterAuth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____activeMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____oculusAuthToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____platformUserID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____gameSpecificUserID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____gameSpecificRID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____platformRID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____environment) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____buildIdentifier) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____sessionId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____defaultLogger) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____secondsBetweenSends) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____timeOfNextBatchCheck) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____sessionRequestCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____sessionStopwatch) == 0x90, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____queuedIdRequests) == 0x98, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____nextIdRetrievalTimestamp) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____idRetrievalActive) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____requestSender) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____unsentEvents) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::AnalyticsManager, ____analyticsBatchingThread) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::AnalyticsManager, 0xc8>, "Size mismatch!");

} // namespace OSCE::Analytics
NEED_NO_BOX(::OSCE::Analytics::AnalyticsManager);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::AnalyticsManager*, "OSCE.Analytics", "AnalyticsManager");

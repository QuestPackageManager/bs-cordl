#pragma once
// IWYU pragma private; include "OSCE/Analytics/LoggerAnalyticsBatch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoggerAnalyticsBatch)
namespace OSCE::Analytics {
class BaseAnalyticsEvent;
}
namespace OSCE::Analytics {
struct LoggerAnalyticsEvent;
}
namespace OSCE::Networking {
class IPureCSharpPoolElement;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace OSCE::Analytics {
class LoggerAnalyticsBatch;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Analytics::LoggerAnalyticsBatch);
// Dependencies System.Object
namespace OSCE::Analytics {
// Is value type: false
// CS Name: OSCE.Analytics.LoggerAnalyticsBatch
class CORDL_TYPE LoggerAnalyticsBatch : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_CreatedByPool, put = set_CreatedByPool)) bool CreatedByPool;

  __declspec(property(get = get_FailedAttempts)) int32_t FailedAttempts;

  /// @brief Field <CreatedByPool>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__CreatedByPool_k__BackingField, put = __cordl_internal_set__CreatedByPool_k__BackingField)) bool _CreatedByPool_k__BackingField;

  /// @brief Field _eventsToSend, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__eventsToSend,
                      put = __cordl_internal_set__eventsToSend)) ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* _eventsToSend;

  /// @brief Field _failedAttempts, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__failedAttempts, put = __cordl_internal_set__failedAttempts)) int32_t _failedAttempts;

  /// @brief Field logs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_logs, put = __cordl_internal_set_logs)) ::System::Collections::Generic::List_1<::OSCE::Analytics::LoggerAnalyticsEvent>* logs;

  /// @brief Convert operator to "::OSCE::Networking::IPureCSharpPoolElement"
  constexpr operator ::OSCE::Networking::IPureCSharpPoolElement*() noexcept;

  /// @brief Method AddEvent, addr 0x5d25b5c, size 0xb4, virtual false, abstract: false, final false
  inline void AddEvent(::OSCE::Analytics::BaseAnalyticsEvent* eventToSend);

  /// @brief Method ApplyOtherBatch, addr 0x5d26e84, size 0x140, virtual false, abstract: false, final false
  inline void ApplyOtherBatch(::OSCE::Analytics::LoggerAnalyticsBatch* otherBatch);

  /// @brief Method ConvertEvents, addr 0x5d26044, size 0x160, virtual false, abstract: false, final false
  inline void ConvertEvents();

  static inline ::OSCE::Analytics::LoggerAnalyticsBatch* New_ctor();

  /// @brief Method OnBatchFailed, addr 0x5d26a60, size 0x10, virtual false, abstract: false, final false
  inline void OnBatchFailed();

  /// @brief Method ReturnedToPool, addr 0x5d281e4, size 0x118, virtual true, abstract: false, final true
  inline void ReturnedToPool();

  constexpr bool const& __cordl_internal_get__CreatedByPool_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CreatedByPool_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* const& __cordl_internal_get__eventsToSend() const;

  constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>*& __cordl_internal_get__eventsToSend();

  constexpr int32_t const& __cordl_internal_get__failedAttempts() const;

  constexpr int32_t& __cordl_internal_get__failedAttempts();

  constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::LoggerAnalyticsEvent>* const& __cordl_internal_get_logs() const;

  constexpr ::System::Collections::Generic::List_1<::OSCE::Analytics::LoggerAnalyticsEvent>*& __cordl_internal_get_logs();

  constexpr void __cordl_internal_set__CreatedByPool_k__BackingField(bool value);

  constexpr void __cordl_internal_set__eventsToSend(::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* value);

  constexpr void __cordl_internal_set__failedAttempts(int32_t value);

  constexpr void __cordl_internal_set_logs(::System::Collections::Generic::List_1<::OSCE::Analytics::LoggerAnalyticsEvent>* value);

  /// @brief Method .ctor, addr 0x5d282fc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x5d26d7c, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_CreatedByPool, addr 0x5d281d4, size 0x8, virtual true, abstract: false, final true
  inline bool get_CreatedByPool();

  /// @brief Method get_FailedAttempts, addr 0x5d281cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FailedAttempts();

  /// @brief Convert to "::OSCE::Networking::IPureCSharpPoolElement"
  constexpr ::OSCE::Networking::IPureCSharpPoolElement* i___OSCE__Networking__IPureCSharpPoolElement() noexcept;

  /// @brief Method set_CreatedByPool, addr 0x5d281dc, size 0x8, virtual true, abstract: false, final true
  inline void set_CreatedByPool(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoggerAnalyticsBatch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoggerAnalyticsBatch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoggerAnalyticsBatch(LoggerAnalyticsBatch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoggerAnalyticsBatch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoggerAnalyticsBatch(LoggerAnalyticsBatch const&) = delete;

  /// @brief Field FAILED_BATCH_RETRIES offset 0xffffffff size 0x4
  static constexpr int32_t FAILED_BATCH_RETRIES{ static_cast<int32_t>(0x3) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21695 };

  /// @brief Field logs, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OSCE::Analytics::LoggerAnalyticsEvent>* ___logs;

  /// @brief Field _eventsToSend, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OSCE::Analytics::BaseAnalyticsEvent*>* ____eventsToSend;

  /// @brief Field _failedAttempts, offset: 0x20, size: 0x4, def value: None
  int32_t ____failedAttempts;

  /// @brief Field <CreatedByPool>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____CreatedByPool_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::LoggerAnalyticsBatch, ___logs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::LoggerAnalyticsBatch, ____eventsToSend) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::LoggerAnalyticsBatch, ____failedAttempts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::LoggerAnalyticsBatch, ____CreatedByPool_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::LoggerAnalyticsBatch, 0x28>, "Size mismatch!");

} // namespace OSCE::Analytics
NEED_NO_BOX(::OSCE::Analytics::LoggerAnalyticsBatch);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::LoggerAnalyticsBatch*, "OSCE.Analytics", "LoggerAnalyticsBatch");

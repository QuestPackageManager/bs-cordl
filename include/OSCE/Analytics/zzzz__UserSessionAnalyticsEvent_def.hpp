#pragma once
// IWYU pragma private; include "OSCE/Analytics/UserSessionAnalyticsEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserSessionAnalyticsEvent)
namespace GlobalNamespace {
struct IDType;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace OSCE::Analytics {
class UserSessionAnalyticsEvent;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Analytics::UserSessionAnalyticsEvent);
// Dependencies OSCE.Analytics.BaseAnalyticsEvent
namespace OSCE::Analytics {
// Is value type: false
// CS Name: OSCE.Analytics.UserSessionAnalyticsEvent
class CORDL_TYPE UserSessionAnalyticsEvent : public ::OSCE::Analytics::BaseAnalyticsEvent {
public:
  // Declarations
  /// @brief Field session_id, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_session_id, put = __cordl_internal_set_session_id)) ::StringW session_id;

  /// @brief Field session_order, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_session_order, put = __cordl_internal_set_session_order)) uint32_t session_order;

  /// @brief Field session_time, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_session_time, put = __cordl_internal_set_session_time)) int64_t session_time;

  /// @brief Field user_id, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_user_id, put = __cordl_internal_set_user_id)) ::StringW user_id;

  /// @brief Method ApplyBasicFields, addr 0x5d245c8, size 0x6c, virtual true, abstract: false, final false
  inline void ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method ApplyTime, addr 0x5d2480c, size 0x4c, virtual true, abstract: false, final false
  inline void ApplyTime(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method EventRequiresAnalyticsID, addr 0x5d24794, size 0x8, virtual true, abstract: false, final false
  inline bool EventRequiresAnalyticsID();

  /// @brief Method GetIDForEvent, addr 0x5d24880, size 0x15c, virtual false, abstract: false, final false
  inline ::StringW GetIDForEvent(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method GetIDType, addr 0x5d2478c, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IDType GetIDType();

  static inline ::OSCE::Analytics::UserSessionAnalyticsEvent* New_ctor();

  /// @brief Method ReturnEventToPool, addr 0x5d2479c, size 0x70, virtual true, abstract: false, final false
  inline void ReturnEventToPool();

  /// @brief Method ReturnedToPool, addr 0x5d24700, size 0x84, virtual true, abstract: false, final false
  inline void ReturnedToPool();

  constexpr ::StringW const& __cordl_internal_get_session_id() const;

  constexpr ::StringW& __cordl_internal_get_session_id();

  constexpr uint32_t const& __cordl_internal_get_session_order() const;

  constexpr uint32_t& __cordl_internal_get_session_order();

  constexpr int64_t const& __cordl_internal_get_session_time() const;

  constexpr int64_t& __cordl_internal_get_session_time();

  constexpr ::StringW const& __cordl_internal_get_user_id() const;

  constexpr ::StringW& __cordl_internal_get_user_id();

  constexpr void __cordl_internal_set_session_id(::StringW value);

  constexpr void __cordl_internal_set_session_order(uint32_t value);

  constexpr void __cordl_internal_set_session_time(int64_t value);

  constexpr void __cordl_internal_set_user_id(::StringW value);

  /// @brief Method .ctor, addr 0x5d24788, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserSessionAnalyticsEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserSessionAnalyticsEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserSessionAnalyticsEvent(UserSessionAnalyticsEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserSessionAnalyticsEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserSessionAnalyticsEvent(UserSessionAnalyticsEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21685 };

  /// @brief Field user_id, offset: 0x28, size: 0x8, def value: None
  ::StringW ___user_id;

  /// @brief Field session_id, offset: 0x30, size: 0x8, def value: None
  ::StringW ___session_id;

  /// @brief Field session_time, offset: 0x38, size: 0x8, def value: None
  int64_t ___session_time;

  /// @brief Field session_order, offset: 0x40, size: 0x4, def value: None
  uint32_t ___session_order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::UserSessionAnalyticsEvent, ___user_id) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::UserSessionAnalyticsEvent, ___session_id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::UserSessionAnalyticsEvent, ___session_time) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::UserSessionAnalyticsEvent, ___session_order) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::UserSessionAnalyticsEvent, 0x48>, "Size mismatch!");

} // namespace OSCE::Analytics
NEED_NO_BOX(::OSCE::Analytics::UserSessionAnalyticsEvent);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::UserSessionAnalyticsEvent*, "OSCE.Analytics", "UserSessionAnalyticsEvent");

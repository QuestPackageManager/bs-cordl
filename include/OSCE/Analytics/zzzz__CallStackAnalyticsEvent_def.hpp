#pragma once
// IWYU pragma private; include "OSCE/Analytics/CallStackAnalyticsEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OSCE/Analytics/zzzz__UserSessionAnalyticsEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CallStackAnalyticsEvent)
namespace GlobalNamespace {
struct IDType;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace OSCE::Analytics {
class CallStackAnalyticsEvent;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Analytics::CallStackAnalyticsEvent);
// Dependencies OSCE.Analytics.UserSessionAnalyticsEvent
namespace OSCE::Analytics {
// Is value type: false
// CS Name: OSCE.Analytics.CallStackAnalyticsEvent
class CORDL_TYPE CallStackAnalyticsEvent : public ::OSCE::Analytics::UserSessionAnalyticsEvent {
public:
  // Declarations
  /// @brief Field build_id, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_build_id, put = __cordl_internal_set_build_id)) ::StringW build_id;

  /// @brief Field call_stack, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_call_stack, put = __cordl_internal_set_call_stack)) ::StringW call_stack;

  /// @brief Field environment, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_environment, put = __cordl_internal_set_environment)) ::StringW environment;

  /// @brief Field event_message, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_event_message, put = __cordl_internal_set_event_message)) ::StringW event_message;

  /// @brief Method ApplyBasicFields, addr 0x5d24594, size 0x34, virtual true, abstract: false, final false
  inline void ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method GetIDType, addr 0x5d2458c, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IDType GetIDType();

  static inline ::OSCE::Analytics::CallStackAnalyticsEvent* New_ctor();

  /// @brief Method ReturnEventToPool, addr 0x5d24634, size 0x74, virtual true, abstract: false, final false
  inline void ReturnEventToPool();

  /// @brief Method ReturnedToPool, addr 0x5d246a8, size 0x58, virtual true, abstract: false, final false
  inline void ReturnedToPool();

  constexpr ::StringW const& __cordl_internal_get_build_id() const;

  constexpr ::StringW& __cordl_internal_get_build_id();

  constexpr ::StringW const& __cordl_internal_get_call_stack() const;

  constexpr ::StringW& __cordl_internal_get_call_stack();

  constexpr ::StringW const& __cordl_internal_get_environment() const;

  constexpr ::StringW& __cordl_internal_get_environment();

  constexpr ::StringW const& __cordl_internal_get_event_message() const;

  constexpr ::StringW& __cordl_internal_get_event_message();

  constexpr void __cordl_internal_set_build_id(::StringW value);

  constexpr void __cordl_internal_set_call_stack(::StringW value);

  constexpr void __cordl_internal_set_environment(::StringW value);

  constexpr void __cordl_internal_set_event_message(::StringW value);

  /// @brief Method .ctor, addr 0x5d24784, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallStackAnalyticsEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallStackAnalyticsEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallStackAnalyticsEvent(CallStackAnalyticsEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallStackAnalyticsEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallStackAnalyticsEvent(CallStackAnalyticsEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21684 };

  /// @brief Field build_id, offset: 0x48, size: 0x8, def value: None
  ::StringW ___build_id;

  /// @brief Field environment, offset: 0x50, size: 0x8, def value: None
  ::StringW ___environment;

  /// @brief Field event_message, offset: 0x58, size: 0x8, def value: None
  ::StringW ___event_message;

  /// @brief Field call_stack, offset: 0x60, size: 0x8, def value: None
  ::StringW ___call_stack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::CallStackAnalyticsEvent, ___build_id) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::CallStackAnalyticsEvent, ___environment) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::CallStackAnalyticsEvent, ___event_message) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::CallStackAnalyticsEvent, ___call_stack) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::CallStackAnalyticsEvent, 0x68>, "Size mismatch!");

} // namespace OSCE::Analytics
NEED_NO_BOX(::OSCE::Analytics::CallStackAnalyticsEvent);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::CallStackAnalyticsEvent*, "OSCE.Analytics", "CallStackAnalyticsEvent");

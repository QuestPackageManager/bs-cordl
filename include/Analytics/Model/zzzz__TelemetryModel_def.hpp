#pragma once
// IWYU pragma private; include "Analytics/Model/TelemetryModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TelemetryModel)
namespace BeatGames::Analytics {
class AnalyticsEventsDispatcher;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Analytics::Model {
class TelemetryModel;
}
// Write type traits
MARK_REF_PTR_T(::Analytics::Model::TelemetryModel);
// Dependencies System.Object
namespace Analytics::Model {
// Is value type: false
// CS Name: Analytics.Model.TelemetryModel
class CORDL_TYPE TelemetryModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _analyticsEventDispatcher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsEventDispatcher,
                      put = __cordl_internal_set__analyticsEventDispatcher)) ::BeatGames::Analytics::AnalyticsEventsDispatcher* _analyticsEventDispatcher;

  /// @brief Field _queuedEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__queuedEvents,
                      put = __cordl_internal_set__queuedEvents)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* _queuedEvents;

  __declspec(property(get = get_analyticsEventsDispatcher)) ::BeatGames::Analytics::AnalyticsEventsDispatcher* analyticsEventsDispatcher;

  static inline ::Analytics::Model::TelemetryModel* New_ctor();

  /// @brief Method SendAppLoadingEvent, addr 0x319079c, size 0x13c, virtual false, abstract: false, final false
  inline void SendAppLoadingEvent(::StringW eventName, int32_t msDuration);

  /// @brief Method SendLevelLoadingEvent, addr 0x31908d8, size 0x144, virtual false, abstract: false, final false
  inline void SendLevelLoadingEvent(::StringW eventName, ::StringW levelKey, int32_t msDuration, int32_t intValue);

  /// @brief Method SendPromoEvent, addr 0x3190a1c, size 0x140, virtual false, abstract: false, final false
  inline void SendPromoEvent(::StringW eventName, ::StringW promoId, int32_t count);

  /// @brief Method SetEventDispatcher, addr 0x31905d8, size 0x1c4, virtual false, abstract: false, final false
  inline void SetEventDispatcher(::BeatGames::Analytics::AnalyticsEventsDispatcher* newAnalyticsEventsDispatcher);

  constexpr ::BeatGames::Analytics::AnalyticsEventsDispatcher* const& __cordl_internal_get__analyticsEventDispatcher() const;

  constexpr ::BeatGames::Analytics::AnalyticsEventsDispatcher*& __cordl_internal_get__analyticsEventDispatcher();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* const& __cordl_internal_get__queuedEvents() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>*& __cordl_internal_get__queuedEvents();

  constexpr void __cordl_internal_set__analyticsEventDispatcher(::BeatGames::Analytics::AnalyticsEventsDispatcher* value);

  constexpr void __cordl_internal_set__queuedEvents(::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* value);

  /// @brief Method .ctor, addr 0x3190b5c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_analyticsEventsDispatcher, addr 0x31905d0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatGames::Analytics::AnalyticsEventsDispatcher* get_analyticsEventsDispatcher();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TelemetryModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TelemetryModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TelemetryModel(TelemetryModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TelemetryModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TelemetryModel(TelemetryModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23069 };

  /// @brief Field _analyticsEventDispatcher, offset: 0x10, size: 0x8, def value: None
  ::BeatGames::Analytics::AnalyticsEventsDispatcher* ____analyticsEventDispatcher;

  /// @brief Field _queuedEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* ____queuedEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Analytics::Model::TelemetryModel, ____analyticsEventDispatcher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Analytics::Model::TelemetryModel, ____queuedEvents) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Analytics::Model::TelemetryModel, 0x20>, "Size mismatch!");

} // namespace Analytics::Model
NEED_NO_BOX(::Analytics::Model::TelemetryModel);
DEFINE_IL2CPP_ARG_TYPE(::Analytics::Model::TelemetryModel*, "Analytics.Model", "TelemetryModel");

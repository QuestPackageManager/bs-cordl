#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeNotificationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeNotificationBehaviour)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine::Timeline {
struct NotificationFlags;
}
namespace UnityEngine::Timeline {
struct TimeNotificationBehaviour_NotificationEntry;
}
namespace UnityEngine::Timeline {
class TimeNotificationBehaviour___c;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimeNotificationBehaviour;
}
namespace UnityEngine::Timeline {
class TimeNotificationBehaviour___c;
}
namespace UnityEngine::Timeline {
struct TimeNotificationBehaviour_NotificationEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimeNotificationBehaviour);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimeNotificationBehaviour___c);
MARK_VAL_T(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry);
// Dependencies UnityEngine.Timeline.NotificationFlags
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
struct CORDL_TYPE TimeNotificationBehaviour_NotificationEntry {
public:
  // Declarations
  __declspec(property(get = get_prewarm)) bool prewarm;

  __declspec(property(get = get_triggerInEditor)) bool triggerInEditor;

  __declspec(property(get = get_triggerOnce)) bool triggerOnce;

  /// @brief Method get_prewarm, addr 0x482c22c, size 0xc, virtual false, abstract: false, final false
  inline bool get_prewarm();

  /// @brief Method get_triggerInEditor, addr 0x482c238, size 0xc, virtual false, abstract: false, final false
  inline bool get_triggerInEditor();

  /// @brief Method get_triggerOnce, addr 0x482b954, size 0xc, virtual false, abstract: false, final false
  inline bool get_triggerOnce();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeNotificationBehaviour_NotificationEntry();

  // Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::UnityEngine::Playables::INotification*", modifiers: "", def_value:
  // None }, CppParam { name: "notificationFired", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Timeline::NotificationFlags", modifiers: "", def_value:
  // None }]
  constexpr TimeNotificationBehaviour_NotificationEntry(double_t time, ::UnityEngine::Playables::INotification* payload, bool notificationFired,
                                                        ::UnityEngine::Timeline::NotificationFlags flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15871 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field time, offset: 0x0, size: 0x8, def value: None
  double_t time;

  /// @brief Field payload, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Playables::INotification* payload;

  /// @brief Field notificationFired, offset: 0x10, size: 0x1, def value: None
  bool notificationFired;

  /// @brief Field flags, offset: 0x12, size: 0x2, def value: None
  ::UnityEngine::Timeline::NotificationFlags flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, payload) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, notificationFired) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, flags) == 0x12, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimeNotificationBehaviour/<>c
class CORDL_TYPE TimeNotificationBehaviour___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Timeline::TimeNotificationBehaviour___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* __9__12_0;

  static inline ::UnityEngine::Timeline::TimeNotificationBehaviour___c* New_ctor();

  /// @brief Method <SortNotifications>b__12_0, addr 0x482c324, size 0x10, virtual false, abstract: false, final false
  inline int32_t _SortNotifications_b__12_0(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry x, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry y);

  /// @brief Method .ctor, addr 0x482c31c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Timeline::TimeNotificationBehaviour___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* getStaticF___9__12_0();

  static inline void setStaticF___9(::UnityEngine::Timeline::TimeNotificationBehaviour___c* value);

  static inline void setStaticF___9__12_0(::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeNotificationBehaviour___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeNotificationBehaviour___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeNotificationBehaviour___c(TimeNotificationBehaviour___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeNotificationBehaviour___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeNotificationBehaviour___c(TimeNotificationBehaviour___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15872 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeNotificationBehaviour___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.Playables.Playable, UnityEngine.Playables.PlayableBehaviour
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimeNotificationBehaviour
class CORDL_TYPE TimeNotificationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using NotificationEntry = ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry;

  using __c = ::UnityEngine::Timeline::TimeNotificationBehaviour___c;

  /// @brief Field m_NeedSortNotifications, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedSortNotifications, put = __cordl_internal_set_m_NeedSortNotifications)) bool m_NeedSortNotifications;

  /// @brief Field m_Notifications, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Notifications,
                      put = __cordl_internal_set_m_Notifications)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* m_Notifications;

  /// @brief Field m_PreviousTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousTime, put = __cordl_internal_set_m_PreviousTime)) double_t m_PreviousTime;

  /// @brief Field m_TimeSource, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_TimeSource, put = __cordl_internal_set_m_TimeSource)) ::UnityEngine::Playables::Playable m_TimeSource;

  __declspec(property(put = set_timeSource)) ::UnityEngine::Playables::Playable timeSource;

  /// @brief Method AddNotification, addr 0x482b5a0, size 0xf0, virtual false, abstract: false, final false
  inline void AddNotification(double_t time, ::UnityEngine::Playables::INotification* payload, ::UnityEngine::Timeline::NotificationFlags flags);

  /// @brief Method CanRestoreNotification, addr 0x482c1c8, size 0x5c, virtual false, abstract: false, final false
  static inline bool CanRestoreNotification(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry e, ::UnityEngine::Playables::FrameData info, double_t currentTime,
                                            double_t previousTime);

  /// @brief Method Create, addr 0x482b484, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> Create(::UnityEngine::Playables::PlayableGraph graph, double_t duration,
                                                                                                                       ::UnityEngine::Playables::DirectorWrapMode loopMode);

  static inline ::UnityEngine::Timeline::TimeNotificationBehaviour* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x482b960, size 0x1a4, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnGraphStart, addr 0x482b690, size 0x1b8, virtual true, abstract: false, final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method PrepareFrame, addr 0x482bb8c, size 0x35c, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method Restore_internal, addr 0x482c224, size 0x8, virtual false, abstract: false, final false
  static inline void Restore_internal(::ByRef<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry> e);

  /// @brief Method SortNotifications, addr 0x482b848, size 0x10c, virtual false, abstract: false, final false
  inline void SortNotifications();

  /// @brief Method SyncDurationWithExternalSource, addr 0x482bee8, size 0x104, virtual false, abstract: false, final false
  inline void SyncDurationWithExternalSource(::UnityEngine::Playables::Playable playable);

  /// @brief Method TriggerNotificationsInRange, addr 0x482bfec, size 0x1dc, virtual false, abstract: false, final false
  inline void TriggerNotificationsInRange(double_t start, double_t end, ::UnityEngine::Playables::FrameData info, ::UnityEngine::Playables::Playable playable, bool checkState);

  /// @brief Method Trigger_internal, addr 0x482bb04, size 0x88, virtual false, abstract: false, final false
  static inline void Trigger_internal(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::PlayableOutput output,
                                      ::ByRef<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry> e);

  constexpr bool const& __cordl_internal_get_m_NeedSortNotifications() const;

  constexpr bool& __cordl_internal_get_m_NeedSortNotifications();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* const& __cordl_internal_get_m_Notifications() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>*& __cordl_internal_get_m_Notifications();

  constexpr double_t const& __cordl_internal_get_m_PreviousTime() const;

  constexpr double_t& __cordl_internal_get_m_PreviousTime();

  constexpr ::UnityEngine::Playables::Playable const& __cordl_internal_get_m_TimeSource() const;

  constexpr ::UnityEngine::Playables::Playable& __cordl_internal_get_m_TimeSource();

  constexpr void __cordl_internal_set_m_NeedSortNotifications(bool value);

  constexpr void __cordl_internal_set_m_Notifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* value);

  constexpr void __cordl_internal_set_m_PreviousTime(double_t value);

  constexpr void __cordl_internal_set_m_TimeSource(::UnityEngine::Playables::Playable value);

  /// @brief Method .ctor, addr 0x482c244, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_timeSource, addr 0x482b47c, size 0x8, virtual false, abstract: false, final false
  inline void set_timeSource(::UnityEngine::Playables::Playable value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeNotificationBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeNotificationBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeNotificationBehaviour(TimeNotificationBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeNotificationBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeNotificationBehaviour(TimeNotificationBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15873 };

  /// @brief Field m_Notifications, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry>* ___m_Notifications;

  /// @brief Field m_PreviousTime, offset: 0x18, size: 0x8, def value: None
  double_t ___m_PreviousTime;

  /// @brief Field m_NeedSortNotifications, offset: 0x20, size: 0x1, def value: None
  bool ___m_NeedSortNotifications;

  /// @brief Field m_TimeSource, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_TimeSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour, ___m_Notifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour, ___m_PreviousTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour, ___m_NeedSortNotifications) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour, ___m_TimeSource) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeNotificationBehaviour, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimeNotificationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeNotificationBehaviour*, "UnityEngine.Timeline", "TimeNotificationBehaviour");
NEED_NO_BOX(::UnityEngine::Timeline::TimeNotificationBehaviour___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeNotificationBehaviour___c*, "UnityEngine.Timeline", "TimeNotificationBehaviour/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, "UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry");

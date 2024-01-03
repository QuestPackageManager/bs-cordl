#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
struct __TimeNotificationBehaviour__NotificationEntry;
}
namespace UnityEngine::Timeline {
class __TimeNotificationBehaviour____c;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimeNotificationBehaviour;
}
namespace UnityEngine::Timeline {
class __TimeNotificationBehaviour____c;
}
namespace UnityEngine::Timeline {
struct __TimeNotificationBehaviour__NotificationEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimeNotificationBehaviour);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimeNotificationBehaviour____c);
MARK_VAL_T(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry);
// Type: ::NotificationEntry
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13906))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13910))
// CS Name: ::TimeNotificationBehaviour::NotificationEntry
struct CORDL_TYPE __TimeNotificationBehaviour__NotificationEntry {
public:
  // Declarations
  __declspec(property(get = get_triggerInEditor)) bool triggerInEditor;

  __declspec(property(get = get_prewarm)) bool prewarm;

  __declspec(property(get = get_triggerOnce)) bool triggerOnce;

  /// @brief Method get_triggerInEditor, addr 0x2c6e450, size 0xc, virtual false, abstract: false, final false
  inline bool get_triggerInEditor();

  /// @brief Method get_prewarm, addr 0x2c6e444, size 0xc, virtual false, abstract: false, final false
  inline bool get_prewarm();

  /// @brief Method get_triggerOnce, addr 0x2c6db80, size 0xc, virtual false, abstract: false, final false
  inline bool get_triggerOnce();

  // Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::UnityEngine::Playables::INotification*", modifiers: "", def_value:
  // None }, CppParam { name: "notificationFired", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Timeline::NotificationFlags", modifiers: "", def_value:
  // None }]
  constexpr __TimeNotificationBehaviour__NotificationEntry(double_t time, ::UnityEngine::Playables::INotification* payload, bool notificationFired,
                                                           ::UnityEngine::Timeline::NotificationFlags flags) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeNotificationBehaviour__NotificationEntry();

  /// @brief Field time, offset: 0x0, size: 0x8, def value: None
  double_t time;

  /// @brief Field payload, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Playables::INotification* payload;

  /// @brief Field notificationFired, offset: 0x10, size: 0x1, def value: None
  bool notificationFired;

  /// @brief Field flags, offset: 0x12, size: 0x2, def value: None
  ::UnityEngine::Timeline::NotificationFlags flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry, payload) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry, notificationFired) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry, flags) == 0x12, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13911))
// CS Name: ::TimeNotificationBehaviour::<>c*
class CORDL_TYPE __TimeNotificationBehaviour____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Timeline::__TimeNotificationBehaviour____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Comparison_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>* __9__12_0;

  static inline void setStaticF___9(::UnityEngine::Timeline::__TimeNotificationBehaviour____c* value);

  static inline ::UnityEngine::Timeline::__TimeNotificationBehaviour____c* getStaticF___9();

  static inline void setStaticF___9__12_0(::System::Comparison_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>* value);

  static inline ::System::Comparison_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>* getStaticF___9__12_0();

  static inline ::UnityEngine::Timeline::__TimeNotificationBehaviour____c* New_ctor();

  /// @brief Method .ctor, addr 0x2c6e53c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SortNotifications>b__12_0, addr 0x2c6e544, size 0x10, virtual false, abstract: false, final false
  inline int32_t _SortNotifications_b__12_0(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry x, ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry y);

  // Ctor Parameters [CppParam { name: "", ty: "__TimeNotificationBehaviour____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimeNotificationBehaviour____c(__TimeNotificationBehaviour____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimeNotificationBehaviour____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimeNotificationBehaviour____c(__TimeNotificationBehaviour____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeNotificationBehaviour____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimeNotificationBehaviour____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimeNotificationBehaviour
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425)), TypeDefinitionIndex(TypeDefinitionIndex(10428))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13912))
// CS Name: ::UnityEngine.Timeline::TimeNotificationBehaviour*
class CORDL_TYPE TimeNotificationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using __c = ::UnityEngine::Timeline::__TimeNotificationBehaviour____c;

  using NotificationEntry = ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry;

  /// @brief Field m_Notifications, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Notifications,
                      put = __set_m_Notifications))::System::Collections::Generic::List_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>* m_Notifications;

  /// @brief Field m_PreviousTime, offset 0x18, size 0x8
  __declspec(property(get = __get_m_PreviousTime, put = __set_m_PreviousTime)) double_t m_PreviousTime;

  /// @brief Field m_NeedSortNotifications, offset 0x20, size 0x1
  __declspec(property(get = __get_m_NeedSortNotifications, put = __set_m_NeedSortNotifications)) bool m_NeedSortNotifications;

  /// @brief Field m_TimeSource, offset 0x28, size 0x10
  __declspec(property(get = __get_m_TimeSource, put = __set_m_TimeSource))::UnityEngine::Playables::Playable m_TimeSource;

  __declspec(property(put = set_timeSource))::UnityEngine::Playables::Playable timeSource;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>*& __get_m_Notifications();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>*> const& __get_m_Notifications() const;

  constexpr void __set_m_Notifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>* value);

  constexpr double_t& __get_m_PreviousTime();

  constexpr double_t const& __get_m_PreviousTime() const;

  constexpr void __set_m_PreviousTime(double_t value);

  constexpr bool& __get_m_NeedSortNotifications();

  constexpr bool const& __get_m_NeedSortNotifications() const;

  constexpr void __set_m_NeedSortNotifications(bool value);

  constexpr ::UnityEngine::Playables::Playable& __get_m_TimeSource();

  constexpr ::UnityEngine::Playables::Playable const& __get_m_TimeSource() const;

  constexpr void __set_m_TimeSource(::UnityEngine::Playables::Playable value);

  /// @brief Method set_timeSource, addr 0x2c6d690, size 0x8, virtual false, abstract: false, final false
  inline void set_timeSource(::UnityEngine::Playables::Playable value);

  /// @brief Method Create, addr 0x2c6d698, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> Create(::UnityEngine::Playables::PlayableGraph graph, double_t duration,
                                                                                                                       ::UnityEngine::Playables::DirectorWrapMode loopMode);

  /// @brief Method AddNotification, addr 0x2c6d7b4, size 0xf8, virtual false, abstract: false, final false
  inline void AddNotification(double_t time, ::UnityEngine::Playables::INotification* payload, ::UnityEngine::Timeline::NotificationFlags flags);

  /// @brief Method OnGraphStart, addr 0x2c6d8ac, size 0x1c4, virtual true, abstract: false, final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnBehaviourPause, addr 0x2c6db8c, size 0x1ac, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method PrepareFrame, addr 0x2c6ddc0, size 0x35c, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method SortNotifications, addr 0x2c6da70, size 0x110, virtual false, abstract: false, final false
  inline void SortNotifications();

  /// @brief Method CanRestoreNotification, addr 0x2c6e3e0, size 0x5c, virtual false, abstract: false, final false
  static inline bool CanRestoreNotification(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry e, ::UnityEngine::Playables::FrameData info, double_t currentTime,
                                            double_t previousTime);

  /// @brief Method TriggerNotificationsInRange, addr 0x2c6e220, size 0x1c0, virtual false, abstract: false, final false
  inline void TriggerNotificationsInRange(double_t start, double_t end, ::UnityEngine::Playables::FrameData info, ::UnityEngine::Playables::Playable playable, bool checkState);

  /// @brief Method SyncDurationWithExternalSource, addr 0x2c6e11c, size 0x104, virtual false, abstract: false, final false
  inline void SyncDurationWithExternalSource(::UnityEngine::Playables::Playable playable);

  /// @brief Method Trigger_internal, addr 0x2c6dd38, size 0x88, virtual false, abstract: false, final false
  static inline void Trigger_internal(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::PlayableOutput output,
                                      ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry> e);

  /// @brief Method Restore_internal, addr 0x2c6e43c, size 0x8, virtual false, abstract: false, final false
  static inline void Restore_internal(ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry> e);

  static inline ::UnityEngine::Timeline::TimeNotificationBehaviour* New_ctor();

  /// @brief Method .ctor, addr 0x2c6e45c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TimeNotificationBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeNotificationBehaviour(TimeNotificationBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeNotificationBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeNotificationBehaviour(TimeNotificationBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeNotificationBehaviour();

public:
  /// @brief Field m_Notifications, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>* ___m_Notifications;

  /// @brief Field m_PreviousTime, offset: 0x18, size: 0x8, def value: None
  double_t ___m_PreviousTime;

  /// @brief Field m_NeedSortNotifications, offset: 0x20, size: 0x1, def value: None
  bool ___m_NeedSortNotifications;

  /// @brief Field m_TimeSource, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_TimeSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeNotificationBehaviour, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour, ___m_Notifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour, ___m_PreviousTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour, ___m_NeedSortNotifications) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimeNotificationBehaviour, ___m_TimeSource) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimeNotificationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeNotificationBehaviour*, "UnityEngine.Timeline", "TimeNotificationBehaviour");
NEED_NO_BOX(::UnityEngine::Timeline::__TimeNotificationBehaviour____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimeNotificationBehaviour____c*, "UnityEngine.Timeline", "TimeNotificationBehaviour/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry, "UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry");

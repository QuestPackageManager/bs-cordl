#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SignalReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalReceiver)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class SignalAsset;
}
namespace UnityEngine::Timeline {
class SignalReceiver_EventKeyValue;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalReceiver;
}
namespace UnityEngine::Timeline {
class SignalReceiver_EventKeyValue;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SignalReceiver);
MARK_REF_PTR_T(::UnityEngine::Timeline::SignalReceiver_EventKeyValue);
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.SignalReceiver/EventKeyValue
class CORDL_TYPE SignalReceiver_EventKeyValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_events)) ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* events;

  /// @brief Field m_Events, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Events, put = __cordl_internal_set_m_Events)) ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* m_Events;

  /// @brief Field m_Signals, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Signals, put = __cordl_internal_set_m_Signals)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* m_Signals;

  __declspec(property(get = get_signals)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* signals;

  /// @brief Method Append, addr 0x4824eec, size 0x120, virtual false, abstract: false, final false
  inline void Append(::UnityEngine::Timeline::SignalAsset* key, ::UnityEngine::Events::UnityEvent* value);

  static inline ::UnityEngine::Timeline::SignalReceiver_EventKeyValue* New_ctor();

  /// @brief Method Remove, addr 0x4825578, size 0x94, virtual false, abstract: false, final false
  inline void Remove(int32_t idx);

  /// @brief Method Remove, addr 0x4825134, size 0xc0, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Timeline::SignalAsset* key);

  /// @brief Method TryGetValue, addr 0x4824d00, size 0xb4, virtual false, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::Timeline::SignalAsset* key, ::ByRef<::UnityEngine::Events::UnityEvent*> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* const& __cordl_internal_get_m_Events() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*& __cordl_internal_get_m_Events();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* const& __cordl_internal_get_m_Signals() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*& __cordl_internal_get_m_Signals();

  constexpr void __cordl_internal_set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* value);

  constexpr void __cordl_internal_set_m_Signals(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value);

  /// @brief Method .ctor, addr 0x4825898, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_events, addr 0x4825964, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* get_events();

  /// @brief Method get_signals, addr 0x482595c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* get_signals();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalReceiver_EventKeyValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalReceiver_EventKeyValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalReceiver_EventKeyValue(SignalReceiver_EventKeyValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalReceiver_EventKeyValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalReceiver_EventKeyValue(SignalReceiver_EventKeyValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15852 };

  /// @brief Field m_Signals, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* ___m_Signals;

  /// @brief Field m_Events, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* ___m_Events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::SignalReceiver_EventKeyValue, ___m_Signals) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::SignalReceiver_EventKeyValue, ___m_Events) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SignalReceiver_EventKeyValue, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Playables.INotificationReceiver
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.SignalReceiver
class CORDL_TYPE SignalReceiver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EventKeyValue = ::UnityEngine::Timeline::SignalReceiver_EventKeyValue;

  /// @brief Field m_Events, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Events, put = __cordl_internal_set_m_Events)) ::UnityEngine::Timeline::SignalReceiver_EventKeyValue* m_Events;

  /// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
  constexpr operator ::UnityEngine::Playables::INotificationReceiver*() noexcept;

  /// @brief Method AddEmptyReaction, addr 0x482500c, size 0x6c, virtual false, abstract: false, final false
  inline int32_t AddEmptyReaction(::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method AddReaction, addr 0x4824db4, size 0x138, virtual false, abstract: false, final false
  inline void AddReaction(::UnityEngine::Timeline::SignalAsset* asset, ::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method ChangeReactionAtIndex, addr 0x482560c, size 0xc4, virtual false, abstract: false, final false
  inline void ChangeReactionAtIndex(int32_t idx, ::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method ChangeSignalAtIndex, addr 0x4825290, size 0x24c, virtual false, abstract: false, final false
  inline void ChangeSignalAtIndex(int32_t idx, ::UnityEngine::Timeline::SignalAsset* newKey);

  /// @brief Method Count, addr 0x4825240, size 0x50, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method GetReaction, addr 0x4825210, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent* GetReaction(::UnityEngine::Timeline::SignalAsset* key);

  /// @brief Method GetReactionAtIndex, addr 0x48256d0, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent* GetReactionAtIndex(int32_t idx);

  /// @brief Method GetRegisteredSignals, addr 0x48251f4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* GetRegisteredSignals();

  /// @brief Method GetSignalAssetAtIndex, addr 0x4825784, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::SignalAsset> GetSignalAssetAtIndex(int32_t idx);

  static inline ::UnityEngine::Timeline::SignalReceiver* New_ctor();

  /// @brief Method OnEnable, addr 0x4825838, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnNotify, addr 0x4824be8, size 0x118, virtual true, abstract: false, final true
  inline void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  /// @brief Method Remove, addr 0x4825078, size 0xbc, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Timeline::SignalAsset* asset);

  /// @brief Method RemoveAtIndex, addr 0x48254dc, size 0x9c, virtual false, abstract: false, final false
  inline void RemoveAtIndex(int32_t idx);

  constexpr ::UnityEngine::Timeline::SignalReceiver_EventKeyValue* const& __cordl_internal_get_m_Events() const;

  constexpr ::UnityEngine::Timeline::SignalReceiver_EventKeyValue*& __cordl_internal_get_m_Events();

  constexpr void __cordl_internal_set_m_Events(::UnityEngine::Timeline::SignalReceiver_EventKeyValue* value);

  /// @brief Method .ctor, addr 0x482583c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Playables::INotificationReceiver"
  constexpr ::UnityEngine::Playables::INotificationReceiver* i___UnityEngine__Playables__INotificationReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalReceiver(SignalReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalReceiver(SignalReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15853 };

  /// @brief Field m_Events, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Timeline::SignalReceiver_EventKeyValue* ___m_Events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::SignalReceiver, ___m_Events) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SignalReceiver, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SignalReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalReceiver*, "UnityEngine.Timeline", "SignalReceiver");
NEED_NO_BOX(::UnityEngine::Timeline::SignalReceiver_EventKeyValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalReceiver_EventKeyValue*, "UnityEngine.Timeline", "SignalReceiver/EventKeyValue");

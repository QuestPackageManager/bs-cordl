#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\SignalReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
class INotificationReceiver;
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
MARK_REF_T(::UnityEngine::Timeline::SignalReceiver*);
MARK_REF_T(::UnityEngine::Timeline::SignalReceiver_EventKeyValue*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::SignalReceiver*, "UnityEngine.Timeline", "SignalReceiver");
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::SignalReceiver_EventKeyValue*, "UnityEngine.Timeline", "SignalReceiver/EventKeyValue");
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

  /// @brief Method Append, addr 0x69c6e80, size 0x128, virtual false, abstract: false, final false
  inline void Append(::UnityEngine::Timeline::SignalAsset* key, ::UnityEngine::Events::UnityEvent* value);

  static inline ::UnityEngine::Timeline::SignalReceiver_EventKeyValue* New_ctor();

  /// @brief Method Remove, addr 0x69c7588, size 0xa8, virtual false, abstract: false, final false
  inline void Remove(int32_t idx);

  /// @brief Method Remove, addr 0x69c70ec, size 0xf0, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Timeline::SignalAsset* key);

  /// @brief Method TryGetValue, addr 0x69c6c6c, size 0xd4, virtual false, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::Timeline::SignalAsset* key, ::by_ref<::UnityEngine::Events::UnityEvent*> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* const& __cordl_internal_get_m_Events() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*& __cordl_internal_get_m_Events();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* const& __cordl_internal_get_m_Signals() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*& __cordl_internal_get_m_Signals();

  constexpr void __cordl_internal_set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* value);

  constexpr void __cordl_internal_set_m_Signals(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value);

  /// @brief Method .ctor, addr 0x69c78f0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_events, addr 0x69c79b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* get_events();

  /// @brief Method get_signals, addr 0x69c79ac, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19217 };

  /// @brief Field m_Signals, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* ___m_Signals;

  /// @brief Field m_Events, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* ___m_Events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::SignalReceiver_EventKeyValue, ___m_Signals) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::SignalReceiver_EventKeyValue, ___m_Events) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::SignalReceiver_EventKeyValue) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.MonoBehaviour
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

  /// @brief Method AddEmptyReaction, addr 0x69c6fa8, size 0x7c, virtual false, abstract: false, final false
  inline int32_t AddEmptyReaction(::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method AddReaction, addr 0x69c6d40, size 0x140, virtual false, abstract: false, final false
  inline void AddReaction(::UnityEngine::Timeline::SignalAsset* asset, ::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method ChangeReactionAtIndex, addr 0x69c7630, size 0xd0, virtual false, abstract: false, final false
  inline void ChangeReactionAtIndex(int32_t idx, ::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method ChangeSignalAtIndex, addr 0x69c7278, size 0x264, virtual false, abstract: false, final false
  inline void ChangeSignalAtIndex(int32_t idx, ::UnityEngine::Timeline::SignalAsset* newKey);

  /// @brief Method Count, addr 0x69c7220, size 0x58, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method GetReaction, addr 0x69c71f4, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent* GetReaction(::UnityEngine::Timeline::SignalAsset* key);

  /// @brief Method GetReactionAtIndex, addr 0x69c7700, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent* GetReactionAtIndex(int32_t idx);

  /// @brief Method GetRegisteredSignals, addr 0x69c71dc, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* GetRegisteredSignals();

  /// @brief Method GetSignalAssetAtIndex, addr 0x69c77c8, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::SignalAsset> GetSignalAssetAtIndex(int32_t idx);

  static inline ::UnityEngine::Timeline::SignalReceiver* New_ctor();

  /// @brief Method OnEnable, addr 0x69c7890, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnNotify, addr 0x69c6b40, size 0x12c, virtual true, abstract: false, final true
  inline void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  /// @brief Method Remove, addr 0x69c7024, size 0xc8, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Timeline::SignalAsset* asset);

  /// @brief Method RemoveAtIndex, addr 0x69c74dc, size 0xac, virtual false, abstract: false, final false
  inline void RemoveAtIndex(int32_t idx);

  constexpr ::UnityEngine::Timeline::SignalReceiver_EventKeyValue* const& __cordl_internal_get_m_Events() const;

  constexpr ::UnityEngine::Timeline::SignalReceiver_EventKeyValue*& __cordl_internal_get_m_Events();

  constexpr void __cordl_internal_set_m_Events(::UnityEngine::Timeline::SignalReceiver_EventKeyValue* value);

  /// @brief Method .ctor, addr 0x69c7894, size 0x5c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19218 };

  /// @brief Field m_Events, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Timeline::SignalReceiver_EventKeyValue* ___m_Events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::SignalReceiver, ___m_Events) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::SignalReceiver) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Timeline

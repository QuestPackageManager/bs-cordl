#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SignalReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class __SignalReceiver__EventKeyValue;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalReceiver;
}
namespace UnityEngine::Timeline {
class __SignalReceiver__EventKeyValue;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SignalReceiver);
MARK_REF_PTR_T(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue);
// Type: ::EventKeyValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::SignalReceiver::EventKeyValue*
class CORDL_TYPE __SignalReceiver__EventKeyValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_events))::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* events;

  /// @brief Field m_Events, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Events, put = __cordl_internal_set_m_Events))::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* m_Events;

  /// @brief Field m_Signals, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Signals, put = __cordl_internal_set_m_Signals))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* m_Signals;

  __declspec(property(get = get_signals))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* signals;

  /// @brief Method Append, addr 0x33c7ab4, size 0x128, virtual false, abstract: false, final false
  inline void Append(::UnityEngine::Timeline::SignalAsset* key, ::UnityEngine::Events::UnityEvent* value);

  static inline ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* New_ctor();

  /// @brief Method Remove, addr 0x33c8160, size 0x94, virtual false, abstract: false, final false
  inline void Remove(int32_t idx);

  /// @brief Method Remove, addr 0x33c7d08, size 0xc0, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Timeline::SignalAsset* key);

  /// @brief Method TryGetValue, addr 0x33c78c4, size 0xb0, virtual false, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::Timeline::SignalAsset* key, ByRef<::UnityEngine::Events::UnityEvent*> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*& __cordl_internal_get_m_Events();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*> const& __cordl_internal_get_m_Events() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*& __cordl_internal_get_m_Signals();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*> const& __cordl_internal_get_m_Signals() const;

  constexpr void __cordl_internal_set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* value);

  constexpr void __cordl_internal_set_m_Signals(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value);

  /// @brief Method .ctor, addr 0x33c84a0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_events, addr 0x33c8568, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* get_events();

  /// @brief Method get_signals, addr 0x33c8560, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* get_signals();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SignalReceiver__EventKeyValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SignalReceiver__EventKeyValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SignalReceiver__EventKeyValue(__SignalReceiver__EventKeyValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SignalReceiver__EventKeyValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SignalReceiver__EventKeyValue(__SignalReceiver__EventKeyValue const&) = delete;

  /// @brief Field m_Signals, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* ___m_Signals;

  /// @brief Field m_Events, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* ___m_Events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue, ___m_Signals) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue, ___m_Events) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::SignalReceiver
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::SignalReceiver*
class CORDL_TYPE SignalReceiver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EventKeyValue = ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue;

  /// @brief Field m_Events, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Events, put = __cordl_internal_set_m_Events))::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* m_Events;

  /// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
  constexpr operator ::UnityEngine::Playables::INotificationReceiver*() noexcept;

  /// @brief Method AddEmptyReaction, addr 0x33c7bdc, size 0x6c, virtual false, abstract: false, final false
  inline int32_t AddEmptyReaction(::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method AddReaction, addr 0x33c7974, size 0x140, virtual false, abstract: false, final false
  inline void AddReaction(::UnityEngine::Timeline::SignalAsset* asset, ::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method ChangeReactionAtIndex, addr 0x33c81f4, size 0xcc, virtual false, abstract: false, final false
  inline void ChangeReactionAtIndex(int32_t idx, ::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method ChangeSignalAtIndex, addr 0x33c7e64, size 0x258, virtual false, abstract: false, final false
  inline void ChangeSignalAtIndex(int32_t idx, ::UnityEngine::Timeline::SignalAsset* newKey);

  /// @brief Method Count, addr 0x33c7e14, size 0x50, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method GetReaction, addr 0x33c7de4, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent* GetReaction(::UnityEngine::Timeline::SignalAsset* key);

  /// @brief Method GetReactionAtIndex, addr 0x33c82c0, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent* GetReactionAtIndex(int32_t idx);

  /// @brief Method GetRegisteredSignals, addr 0x33c7dc8, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* GetRegisteredSignals();

  /// @brief Method GetSignalAssetAtIndex, addr 0x33c837c, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::SignalAsset> GetSignalAssetAtIndex(int32_t idx);

  static inline ::UnityEngine::Timeline::SignalReceiver* New_ctor();

  /// @brief Method OnEnable, addr 0x33c8438, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnNotify, addr 0x33c77ac, size 0x118, virtual true, abstract: false, final true
  inline void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  /// @brief Method Remove, addr 0x33c7c48, size 0xc0, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Timeline::SignalAsset* asset);

  /// @brief Method RemoveAtIndex, addr 0x33c80bc, size 0xa4, virtual false, abstract: false, final false
  inline void RemoveAtIndex(int32_t idx);

  constexpr ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*& __cordl_internal_get_m_Events();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*> const& __cordl_internal_get_m_Events() const;

  constexpr void __cordl_internal_set_m_Events(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* value);

  /// @brief Method .ctor, addr 0x33c843c, size 0x64, virtual false, abstract: false, final false
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

  /// @brief Field m_Events, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* ___m_Events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SignalReceiver, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::SignalReceiver, ___m_Events) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SignalReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalReceiver*, "UnityEngine.Timeline", "SignalReceiver");
NEED_NO_BOX(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*, "UnityEngine.Timeline", "SignalReceiver/EventKeyValue");

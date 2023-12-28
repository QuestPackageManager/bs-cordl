#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalReceiver)
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class SignalAsset;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class INotificationReceiver;
}
namespace UnityEngine::Timeline {
class __SignalReceiver__EventKeyValue;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13894))
// CS Name: ::SignalReceiver::EventKeyValue*
class CORDL_TYPE __SignalReceiver__EventKeyValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Signals, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Signals, put = __set_m_Signals))::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* m_Signals;

  /// @brief Field m_Events, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Events, put = __set_m_Events))::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* m_Events;

  __declspec(property(get = get_signals))::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* signals;

  __declspec(property(get = get_events))::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* events;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>*& __get_m_Signals();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>*> const& __get_m_Signals() const;

  constexpr void __set_m_Signals(::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*& __get_m_Events();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*> const& __get_m_Events() const;

  constexpr void __set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* value);

  /// @brief Method TryGetValue addr 0x2c691c4 size 0xb0 virtual false final false
  inline bool TryGetValue(::UnityEngine::Timeline::SignalAsset* key, ByRef<::UnityEngine::Events::UnityEvent*> value);

  /// @brief Method Append addr 0x2c693b4 size 0x128 virtual false final false
  inline void Append(::UnityEngine::Timeline::SignalAsset* key, ::UnityEngine::Events::UnityEvent* value);

  /// @brief Method Remove addr 0x2c69a60 size 0x94 virtual false final false
  inline void Remove(int32_t idx);

  /// @brief Method Remove addr 0x2c69608 size 0xc0 virtual false final false
  inline void Remove(::UnityEngine::Timeline::SignalAsset* key);

  /// @brief Method get_signals addr 0x2c69e60 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* get_signals();

  /// @brief Method get_events addr 0x2c69e68 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* get_events();

  static inline ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* New_ctor();

  /// @brief Method .ctor addr 0x2c69da0 size 0xc0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SignalReceiver__EventKeyValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SignalReceiver__EventKeyValue(__SignalReceiver__EventKeyValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SignalReceiver__EventKeyValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SignalReceiver__EventKeyValue(__SignalReceiver__EventKeyValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SignalReceiver__EventKeyValue();

public:
  /// @brief Field m_Signals, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* ___m_Signals;

  /// @brief Field m_Events, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* ___m_Events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::SignalReceiver
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13895))
// CS Name: ::UnityEngine.Timeline::SignalReceiver*
class CORDL_TYPE SignalReceiver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EventKeyValue = ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue;

  /// @brief Field m_Events, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Events, put = __set_m_Events))::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* m_Events;

  /// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
  constexpr operator ::UnityEngine::Playables::INotificationReceiver*() noexcept;

  constexpr ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*& __get_m_Events();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*> const& __get_m_Events() const;

  constexpr void __set_m_Events(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* value);

  /// @brief Method OnNotify addr 0x2c690ac size 0x118 virtual true final true
  inline void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  /// @brief Method AddReaction addr 0x2c69274 size 0x140 virtual false final false
  inline void AddReaction(::UnityEngine::Timeline::SignalAsset* asset, ::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method AddEmptyReaction addr 0x2c694dc size 0x6c virtual false final false
  inline int32_t AddEmptyReaction(::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method Remove addr 0x2c69548 size 0xc0 virtual false final false
  inline void Remove(::UnityEngine::Timeline::SignalAsset* asset);

  /// @brief Method GetRegisteredSignals addr 0x2c696c8 size 0x1c virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::SignalAsset*>* GetRegisteredSignals();

  /// @brief Method GetReaction addr 0x2c696e4 size 0x30 virtual false final false
  inline ::UnityEngine::Events::UnityEvent* GetReaction(::UnityEngine::Timeline::SignalAsset* key);

  /// @brief Method Count addr 0x2c69714 size 0x50 virtual false final false
  inline int32_t Count();

  /// @brief Method ChangeSignalAtIndex addr 0x2c69764 size 0x258 virtual false final false
  inline void ChangeSignalAtIndex(int32_t idx, ::UnityEngine::Timeline::SignalAsset* newKey);

  /// @brief Method RemoveAtIndex addr 0x2c699bc size 0xa4 virtual false final false
  inline void RemoveAtIndex(int32_t idx);

  /// @brief Method ChangeReactionAtIndex addr 0x2c69af4 size 0xcc virtual false final false
  inline void ChangeReactionAtIndex(int32_t idx, ::UnityEngine::Events::UnityEvent* reaction);

  /// @brief Method GetReactionAtIndex addr 0x2c69bc0 size 0xbc virtual false final false
  inline ::UnityEngine::Events::UnityEvent* GetReactionAtIndex(int32_t idx);

  /// @brief Method GetSignalAssetAtIndex addr 0x2c69c7c size 0xbc virtual false final false
  inline ::UnityEngine::Timeline::SignalAsset* GetSignalAssetAtIndex(int32_t idx);

  /// @brief Method OnEnable addr 0x2c69d38 size 0x4 virtual false final false
  inline void OnEnable();

  static inline ::UnityEngine::Timeline::SignalReceiver* New_ctor();

  /// @brief Method .ctor addr 0x2c69d3c size 0x64 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SignalReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalReceiver(SignalReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalReceiver(SignalReceiver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalReceiver();

public:
  /// @brief Field m_Events, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Timeline::__SignalReceiver__EventKeyValue* ___m_Events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SignalReceiver, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SignalReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalReceiver*, "UnityEngine.Timeline", "SignalReceiver");
NEED_NO_BOX(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__SignalReceiver__EventKeyValue*, "UnityEngine.Timeline", "SignalReceiver/EventKeyValue");

#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/Event.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputForUI/zzzz__CommandEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__TextInputEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Event)
namespace System {
class Object;
}
namespace UnityEngine::InputForUI {
struct CommandEvent;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
template <typename TOutputType> class Event_IMapFn_1;
}
namespace UnityEngine::InputForUI {
struct Event_MapAsEventModifiers;
}
namespace UnityEngine::InputForUI {
struct Event_MapAsEventSource;
}
namespace UnityEngine::InputForUI {
struct Event_MapAsObject;
}
namespace UnityEngine::InputForUI {
struct Event_Type;
}
namespace UnityEngine::InputForUI {
class IEventProperties;
}
namespace UnityEngine::InputForUI {
struct IMECompositionEvent;
}
namespace UnityEngine::InputForUI {
struct KeyEvent;
}
namespace UnityEngine::InputForUI {
struct NavigationEvent;
}
namespace UnityEngine::InputForUI {
struct PointerEvent;
}
namespace UnityEngine::InputForUI {
struct TextInputEvent;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct Event_Type;
}
namespace UnityEngine::InputForUI {
template <typename TOutputType> class Event_IMapFn_1;
}
namespace UnityEngine::InputForUI {
struct Event;
}
namespace UnityEngine::InputForUI {
struct Event_MapAsEventModifiers;
}
namespace UnityEngine::InputForUI {
struct Event_MapAsEventSource;
}
namespace UnityEngine::InputForUI {
struct Event_MapAsObject;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::Event_Type);
MARK_GEN_REF_PTR_T(::UnityEngine::InputForUI::Event_IMapFn_1);
MARK_VAL_T(::UnityEngine::InputForUI::Event);
MARK_VAL_T(::UnityEngine::InputForUI::Event_MapAsEventModifiers);
MARK_VAL_T(::UnityEngine::InputForUI::Event_MapAsEventSource);
MARK_VAL_T(::UnityEngine::InputForUI::Event_MapAsObject);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.Event/Type
struct CORDL_TYPE Event_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Event_Type_Unwrapped
  enum struct __Event_Type_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_KeyEvent = static_cast<int32_t>(0x1),
    __E_PointerEvent = static_cast<int32_t>(0x2),
    __E_TextInputEvent = static_cast<int32_t>(0x3),
    __E_IMECompositionEvent = static_cast<int32_t>(0x4),
    __E_CommandEvent = static_cast<int32_t>(0x5),
    __E_NavigationEvent = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Event_Type_Unwrapped() const noexcept {
    return static_cast<__Event_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Event_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Event_Type(int32_t value__) noexcept;

  /// @brief Field CommandEvent value: I32(5)
  static ::UnityEngine::InputForUI::Event_Type const CommandEvent;

  /// @brief Field IMECompositionEvent value: I32(4)
  static ::UnityEngine::InputForUI::Event_Type const IMECompositionEvent;

  /// @brief Field Invalid value: I32(0)
  static ::UnityEngine::InputForUI::Event_Type const Invalid;

  /// @brief Field KeyEvent value: I32(1)
  static ::UnityEngine::InputForUI::Event_Type const KeyEvent;

  /// @brief Field NavigationEvent value: I32(6)
  static ::UnityEngine::InputForUI::Event_Type const NavigationEvent;

  /// @brief Field PointerEvent value: I32(2)
  static ::UnityEngine::InputForUI::Event_Type const PointerEvent;

  /// @brief Field TextInputEvent value: I32(3)
  static ::UnityEngine::InputForUI::Event_Type const TextInputEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21579 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::Event_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::Event_Type, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// cpp template
template <typename TOutputType>
// Is value type: false
// CS Name: UnityEngine.InputForUI.Event/IMapFn`1<TOutputType>
class CORDL_TYPE Event_IMapFn_1 {
public:
  // Declarations
  /// @brief Method Map, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TEventType> inline TOutputType Map(::ByRef<TEventType> ev);

  // Ctor Parameters [CppParam { name: "", ty: "Event_IMapFn_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Event_IMapFn_1(Event_IMapFn_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21580 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.Event/MapAsObject
#pragma pack(push, 0)
struct CORDL_TYPE Event_MapAsObject {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>"
  constexpr operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*();

  /// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TEventType> inline ::UnityEngine::InputForUI::IEventProperties* Map(::ByRef<TEventType> ev);

  /// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>"
  constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>* i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__IEventProperties__();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Event_MapAsObject();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21581 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::Event_MapAsObject, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.Event/MapAsEventSource
#pragma pack(push, 0)
struct CORDL_TYPE Event_MapAsEventSource {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
  constexpr operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*();

  /// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TEventType> inline ::UnityEngine::InputForUI::EventSource Map(::ByRef<TEventType> ev);

  /// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
  constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>* i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__EventSource_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Event_MapAsEventSource();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21582 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::Event_MapAsEventSource, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.Event/MapAsEventModifiers
#pragma pack(push, 0)
struct CORDL_TYPE Event_MapAsEventModifiers {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>"
  constexpr operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>*();

  /// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TEventType> inline ::UnityEngine::InputForUI::EventModifiers Map(::ByRef<TEventType> ev);

  /// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>"
  constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventModifiers>* i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__EventModifiers_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Event_MapAsEventModifiers();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21583 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::Event_MapAsEventModifiers, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies UnityEngine.InputForUI.CommandEvent, UnityEngine.InputForUI.Event::Type, UnityEngine.InputForUI.KeyEvent, UnityEngine.InputForUI.NavigationEvent, UnityEngine.InputForUI.PointerEvent,
// UnityEngine.InputForUI.TextInputEvent
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.Event
struct CORDL_TYPE Event {
public:
  // Declarations
  template <typename TOutputType> using IMapFn_1 = ::UnityEngine::InputForUI::Event_IMapFn_1<TOutputType>;

  using MapAsEventModifiers = ::UnityEngine::InputForUI::Event_MapAsEventModifiers;

  using MapAsEventSource = ::UnityEngine::InputForUI::Event_MapAsEventSource;

  using MapAsObject = ::UnityEngine::InputForUI::Event_MapAsObject;

  using Type = ::UnityEngine::InputForUI::Event_Type;

  /// @brief Field TypesWithState, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TypesWithState, put = setStaticF_TypesWithState)) ::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*>
      TypesWithState;

  /// @brief Field _commandEvent, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get__commandEvent, put = __cordl_internal_set__commandEvent)) ::UnityEngine::InputForUI::CommandEvent _commandEvent;

  /// @brief Field _keyEvent, offset 0x10, size 0x48
  __declspec(property(get = __cordl_internal_get__keyEvent, put = __cordl_internal_set__keyEvent)) ::UnityEngine::InputForUI::KeyEvent _keyEvent;

  /// @brief Field _managedEvent, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get__managedEvent, put = __cordl_internal_set__managedEvent)) ::System::Object* _managedEvent;

  /// @brief Field _navigationEvent, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get__navigationEvent, put = __cordl_internal_set__navigationEvent)) ::UnityEngine::InputForUI::NavigationEvent _navigationEvent;

  /// @brief Field _pointerEvent, offset 0x10, size 0x60
  __declspec(property(get = __cordl_internal_get__pointerEvent, put = __cordl_internal_set__pointerEvent)) ::UnityEngine::InputForUI::PointerEvent _pointerEvent;

  /// @brief Field _textInputEvent, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get__textInputEvent, put = __cordl_internal_set__textInputEvent)) ::UnityEngine::InputForUI::TextInputEvent _textInputEvent;

  /// @brief Field _type, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::UnityEngine::InputForUI::Event_Type _type;

  __declspec(property(get = get_asCommandEvent)) ::UnityEngine::InputForUI::CommandEvent asCommandEvent;

  __declspec(property(get = get_asIMECompositionEvent)) ::UnityEngine::InputForUI::IMECompositionEvent asIMECompositionEvent;

  __declspec(property(get = get_asKeyEvent)) ::UnityEngine::InputForUI::KeyEvent asKeyEvent;

  __declspec(property(get = get_asNavigationEvent)) ::UnityEngine::InputForUI::NavigationEvent asNavigationEvent;

  __declspec(property(get = get_asObject)) ::UnityEngine::InputForUI::IEventProperties* asObject;

  __declspec(property(get = get_asPointerEvent)) ::UnityEngine::InputForUI::PointerEvent asPointerEvent;

  __declspec(property(get = get_asTextInputEvent)) ::UnityEngine::InputForUI::TextInputEvent asTextInputEvent;

  __declspec(property(get = get_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers eventModifiers;

  __declspec(property(get = get_eventSource)) ::UnityEngine::InputForUI::EventSource eventSource;

  __declspec(property(get = get_type)) ::UnityEngine::InputForUI::Event_Type type;

  /// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
  constexpr operator ::UnityEngine::InputForUI::IEventProperties*();

  /// @brief Method CompareType, addr 0x692444c, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t CompareType(::UnityEngine::InputForUI::Event a, ::UnityEngine::InputForUI::Event b);

  /// @brief Method Ensure, addr 0x692468c, size 0x98, virtual false, abstract: false, final false
  inline void Ensure(::UnityEngine::InputForUI::Event_Type t);

  /// @brief Method From, addr 0x6924f48, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::CommandEvent commandEvent);

  /// @brief Method From, addr 0x6924e08, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::IMECompositionEvent imeCompositionEvent);

  /// @brief Method From, addr 0x6924b40, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::KeyEvent keyEvent);

  /// @brief Method From, addr 0x692502c, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::NavigationEvent navigationEvent);

  /// @brief Method From, addr 0x6924c38, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::PointerEvent pointerEvent);

  /// @brief Method From, addr 0x6924d24, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::TextInputEvent textInputEvent);

  /// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOutputType, typename TMapType> inline TOutputType Map();

  /// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOutputType, typename TMapType> inline TOutputType Map(TMapType fn);

  /// @brief Method ToString, addr 0x6924724, size 0x190, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::InputForUI::CommandEvent const& __cordl_internal_get__commandEvent() const;

  constexpr ::UnityEngine::InputForUI::CommandEvent& __cordl_internal_get__commandEvent();

  constexpr ::UnityEngine::InputForUI::KeyEvent const& __cordl_internal_get__keyEvent() const;

  constexpr ::UnityEngine::InputForUI::KeyEvent& __cordl_internal_get__keyEvent();

  constexpr ::System::Object* const& __cordl_internal_get__managedEvent() const;

  constexpr ::System::Object*& __cordl_internal_get__managedEvent();

  constexpr ::UnityEngine::InputForUI::NavigationEvent const& __cordl_internal_get__navigationEvent() const;

  constexpr ::UnityEngine::InputForUI::NavigationEvent& __cordl_internal_get__navigationEvent();

  constexpr ::UnityEngine::InputForUI::PointerEvent const& __cordl_internal_get__pointerEvent() const;

  constexpr ::UnityEngine::InputForUI::PointerEvent& __cordl_internal_get__pointerEvent();

  constexpr ::UnityEngine::InputForUI::TextInputEvent const& __cordl_internal_get__textInputEvent() const;

  constexpr ::UnityEngine::InputForUI::TextInputEvent& __cordl_internal_get__textInputEvent();

  constexpr ::UnityEngine::InputForUI::Event_Type const& __cordl_internal_get__type() const;

  constexpr ::UnityEngine::InputForUI::Event_Type& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__commandEvent(::UnityEngine::InputForUI::CommandEvent value);

  constexpr void __cordl_internal_set__keyEvent(::UnityEngine::InputForUI::KeyEvent value);

  constexpr void __cordl_internal_set__managedEvent(::System::Object* value);

  constexpr void __cordl_internal_set__navigationEvent(::UnityEngine::InputForUI::NavigationEvent value);

  constexpr void __cordl_internal_set__pointerEvent(::UnityEngine::InputForUI::PointerEvent value);

  constexpr void __cordl_internal_set__textInputEvent(::UnityEngine::InputForUI::TextInputEvent value);

  constexpr void __cordl_internal_set__type(::UnityEngine::InputForUI::Event_Type value);

  static inline ::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*> getStaticF_TypesWithState();

  /// @brief Method get_asCommandEvent, addr 0x6924fb8, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::CommandEvent get_asCommandEvent();

  /// @brief Method get_asIMECompositionEvent, addr 0x6924e94, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::IMECompositionEvent get_asIMECompositionEvent();

  /// @brief Method get_asKeyEvent, addr 0x6924bc0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::KeyEvent get_asKeyEvent();

  /// @brief Method get_asNavigationEvent, addr 0x69250b4, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::NavigationEvent get_asNavigationEvent();

  /// @brief Method get_asObject, addr 0x69245a4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::IEventProperties* get_asObject();

  /// @brief Method get_asPointerEvent, addr 0x6924cac, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::PointerEvent get_asPointerEvent();

  /// @brief Method get_asTextInputEvent, addr 0x6924d94, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::TextInputEvent get_asTextInputEvent();

  /// @brief Method get_eventModifiers, addr 0x6924618, size 0x74, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers();

  /// @brief Method get_eventSource, addr 0x6924528, size 0x74, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventSource get_eventSource();

  /// @brief Method get_type, addr 0x692459c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::Event_Type get_type();

  /// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
  constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties();

  static inline void setStaticF_TypesWithState(::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Event();

  // Ctor Parameters [CppParam { name: "_type", ty: "::UnityEngine::InputForUI::Event_Type", modifiers: "", def_value: None }, CppParam { name: "_managedEvent", ty: "::System::Object*", modifiers: "",
  // def_value: None }, CppParam { name: "_keyEvent", ty: "::UnityEngine::InputForUI::KeyEvent", modifiers: "", def_value: None }, CppParam { name: "_pointerEvent", ty:
  // "::UnityEngine::InputForUI::PointerEvent", modifiers: "", def_value: None }, CppParam { name: "_textInputEvent", ty: "::UnityEngine::InputForUI::TextInputEvent", modifiers: "", def_value: None },
  // CppParam { name: "_commandEvent", ty: "::UnityEngine::InputForUI::CommandEvent", modifiers: "", def_value: None }, CppParam { name: "_navigationEvent", ty:
  // "::UnityEngine::InputForUI::NavigationEvent", modifiers: "", def_value: None }]
  constexpr Event(::UnityEngine::InputForUI::Event_Type _type, ::System::Object* _managedEvent, ::UnityEngine::InputForUI::KeyEvent _keyEvent, ::UnityEngine::InputForUI::PointerEvent _pointerEvent,
                  ::UnityEngine::InputForUI::TextInputEvent _textInputEvent, ::UnityEngine::InputForUI::CommandEvent _commandEvent,
                  ::UnityEngine::InputForUI::NavigationEvent _navigationEvent) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ____type_padding[0x0];
      /// @brief Field _type, offset: 0x0, size: 0x4, def value: None
      ::UnityEngine::InputForUI::Event_Type ____type;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ____type_padding_forAlignment[0x0];
      /// @brief Field _type, offset: 0x0, size: 0x4, def value: None
      ::UnityEngine::InputForUI::Event_Type ____type_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ____managedEvent_padding[0x8];
      /// @brief Field _managedEvent, offset: 0x8, size: 0x8, def value: None
      ::System::Object* ____managedEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ____managedEvent_padding_forAlignment[0x8];
      /// @brief Field _managedEvent, offset: 0x8, size: 0x8, def value: None
      ::System::Object* ____managedEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ____keyEvent_padding[0x10];
      /// @brief Field _keyEvent, offset: 0x10, size: 0x48, def value: None
      ::UnityEngine::InputForUI::KeyEvent ____keyEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ____keyEvent_padding_forAlignment[0x10];
      /// @brief Field _keyEvent, offset: 0x10, size: 0x48, def value: None
      ::UnityEngine::InputForUI::KeyEvent ____keyEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ____pointerEvent_padding[0x10];
      /// @brief Field _pointerEvent, offset: 0x10, size: 0x60, def value: None
      ::UnityEngine::InputForUI::PointerEvent ____pointerEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ____pointerEvent_padding_forAlignment[0x10];
      /// @brief Field _pointerEvent, offset: 0x10, size: 0x60, def value: None
      ::UnityEngine::InputForUI::PointerEvent ____pointerEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ____textInputEvent_padding[0x10];
      /// @brief Field _textInputEvent, offset: 0x10, size: 0x20, def value: None
      ::UnityEngine::InputForUI::TextInputEvent ____textInputEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ____textInputEvent_padding_forAlignment[0x10];
      /// @brief Field _textInputEvent, offset: 0x10, size: 0x20, def value: None
      ::UnityEngine::InputForUI::TextInputEvent ____textInputEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ____commandEvent_padding[0x10];
      /// @brief Field _commandEvent, offset: 0x10, size: 0x20, def value: None
      ::UnityEngine::InputForUI::CommandEvent ____commandEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ____commandEvent_padding_forAlignment[0x10];
      /// @brief Field _commandEvent, offset: 0x10, size: 0x20, def value: None
      ::UnityEngine::InputForUI::CommandEvent ____commandEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ____navigationEvent_padding[0x10];
      /// @brief Field _navigationEvent, offset: 0x10, size: 0x28, def value: None
      ::UnityEngine::InputForUI::NavigationEvent ____navigationEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ____navigationEvent_padding_forAlignment[0x10];
      /// @brief Field _navigationEvent, offset: 0x10, size: 0x28, def value: None
      ::UnityEngine::InputForUI::NavigationEvent ____navigationEvent_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21584 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::Event, 0x70>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::Event_Type, "UnityEngine.InputForUI", "Event/Type");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputForUI::Event_IMapFn_1, "UnityEngine.InputForUI", "Event/IMapFn`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::Event, "UnityEngine.InputForUI", "Event");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::Event_MapAsEventModifiers, "UnityEngine.InputForUI", "Event/MapAsEventModifiers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::Event_MapAsEventSource, "UnityEngine.InputForUI", "Event/MapAsEventSource");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::Event_MapAsObject, "UnityEngine.InputForUI", "Event/MapAsObject");

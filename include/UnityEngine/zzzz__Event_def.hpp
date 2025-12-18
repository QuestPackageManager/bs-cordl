#pragma once
// IWYU pragma private; include "UnityEngine/Event.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Event)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
class Event_BindingsMarshaller;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct PenStatus;
}
namespace UnityEngine {
struct PointerType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class Event_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Event);
MARK_REF_PTR_T(::UnityEngine::Event_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Event/BindingsMarshaller
class CORDL_TYPE Event_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6975940, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Event* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Event_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Event_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Event_BindingsMarshaller(Event_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Event_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Event_BindingsMarshaller(Event_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19582 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Event_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Event
class CORDL_TYPE Event : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Event_BindingsMarshaller;

  __declspec(property(get = get_Internal_keyCode, put = set_Internal_keyCode)) ::UnityEngine::KeyCode Internal_keyCode;

  __declspec(property(get = get_alt)) bool alt;

  __declspec(property(get = get_button)) int32_t button;

  __declspec(property(get = get_capsLock)) bool capsLock;

  __declspec(property(get = get_character, put = set_character)) char16_t character;

  __declspec(property(get = get_clickCount)) int32_t clickCount;

  __declspec(property(get = get_command)) bool command;

  __declspec(property(get = get_commandName, put = set_commandName)) ::StringW commandName;

  __declspec(property(get = get_control)) bool control;

  __declspec(property(get = get_delta, put = set_delta)) ::UnityEngine::Vector2 delta;

  __declspec(property(get = get_displayIndex, put = set_displayIndex)) int32_t displayIndex;

  __declspec(property(get = get_functionKey)) bool functionKey;

  /// @brief Field ignoreGuiDepth, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_ignoreGuiDepth, put = setStaticF_ignoreGuiDepth)) bool ignoreGuiDepth;

  __declspec(property(get = get_isDirectManipulationDevice)) bool isDirectManipulationDevice;

  __declspec(property(get = get_isKey)) bool isKey;

  __declspec(property(get = get_isMouse)) bool isMouse;

  __declspec(property(get = get_isScrollWheel)) bool isScrollWheel;

  __declspec(property(get = get_keyCode, put = set_keyCode)) ::UnityEngine::KeyCode keyCode;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(get = get_modifiers, put = set_modifiers)) ::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_mousePosition, put = set_mousePosition)) ::UnityEngine::Vector2 mousePosition;

  __declspec(property(get = get_numeric)) bool numeric;

  __declspec(property(get = get_penStatus)) ::UnityEngine::PenStatus penStatus;

  __declspec(property(get = get_pointerType)) ::UnityEngine::PointerType pointerType;

  __declspec(property(get = get_pressure)) float_t pressure;

  __declspec(property(get = get_rawType)) ::UnityEngine::EventType rawType;

  /// @brief Field s_Current, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Current, put = setStaticF_s_Current)) ::UnityEngine::Event* s_Current;

  /// @brief Field s_MasterEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MasterEvent, put = setStaticF_s_MasterEvent)) ::UnityEngine::Event* s_MasterEvent;

  __declspec(property(get = get_shift)) bool shift;

  __declspec(property(get = get_tilt)) ::UnityEngine::Vector2 tilt;

  __declspec(property(get = get_twist)) float_t twist;

  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::EventType type;

  /// @brief Method CopyFrom, addr 0x697383c, size 0x24, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::Event* e);

  /// @brief Method CopyFromPtr, addr 0x6973370, size 0x58, virtual false, abstract: false, final false
  inline void CopyFromPtr(::System::IntPtr ptr);

  /// @brief Method CopyFromPtr_Injected, addr 0x69733c8, size 0x44, virtual false, abstract: false, final false
  static inline void CopyFromPtr_Injected(::System::IntPtr _unity_self, ::System::IntPtr ptr);

  /// @brief Method Equals, addr 0x6975048, size 0x19c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Finalize, addr 0x69737bc, size 0x80, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetDoubleClickTime, addr 0x6973750, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetDoubleClickTime();

  /// @brief Method GetEventAtIndex, addr 0x69734d8, size 0xa0, virtual false, abstract: false, final false
  static inline void GetEventAtIndex(int32_t index, ::UnityEngine::Event* outEvent);

  /// @brief Method GetEventAtIndex_Injected, addr 0x6973578, size 0x44, virtual false, abstract: false, final false
  static inline void GetEventAtIndex_Injected(int32_t index, ::System::IntPtr outEvent);

  /// @brief Method GetEventCount, addr 0x69735bc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetEventCount();

  /// @brief Method GetHashCode, addr 0x6974f7c, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Internal_Create, addr 0x69732f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create(int32_t displayIndex);

  /// @brief Method Internal_Destroy, addr 0x6973334, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method Internal_MakeMasterEventCurrent, addr 0x6973620, size 0xe8, virtual false, abstract: false, final false
  static inline void Internal_MakeMasterEventCurrent(int32_t displayIndex);

  /// @brief Method Internal_SetNativeEvent, addr 0x69735e4, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_SetNativeEvent(::System::IntPtr ptr);

  /// @brief Method Internal_Use, addr 0x697326c, size 0x50, virtual false, abstract: false, final false
  inline void Internal_Use();

  /// @brief Method Internal_Use_Injected, addr 0x69732bc, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Use_Injected(::System::IntPtr _unity_self);

  /// @brief Method KeyboardEvent, addr 0x6973a18, size 0x1564, virtual false, abstract: false, final false
  static inline ::UnityEngine::Event* KeyboardEvent(::StringW key);

  static inline ::UnityEngine::Event* New_ctor();

  static inline ::UnityEngine::Event* New_ctor(int32_t displayIndex);

  /// @brief Method PopEvent, addr 0x697340c, size 0x90, virtual false, abstract: false, final false
  static inline bool PopEvent(::UnityEngine::Event* outEvent);

  /// @brief Method PopEvent_Injected, addr 0x697349c, size 0x3c, virtual false, abstract: false, final false
  static inline bool PopEvent_Injected(::System::IntPtr outEvent);

  /// @brief Method ToString, addr 0x69751e4, size 0x604, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Use, addr 0x69757e8, size 0x158, virtual false, abstract: false, final false
  inline void Use();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6973778, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6973708, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(int32_t displayIndex);

  static inline bool getStaticF_ignoreGuiDepth();

  static inline ::UnityEngine::Event* getStaticF_s_Current();

  static inline ::UnityEngine::Event* getStaticF_s_MasterEvent();

  /// @brief Method get_Internal_keyCode, addr 0x6972b40, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::KeyCode get_Internal_keyCode();

  /// @brief Method get_Internal_keyCode_Injected, addr 0x6972b90, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::KeyCode get_Internal_keyCode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_alt, addr 0x6973888, size 0x14, virtual false, abstract: false, final false
  inline bool get_alt();

  /// @brief Method get_button, addr 0x6972590, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_button();

  /// @brief Method get_button_Injected, addr 0x69725e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_button_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_capsLock, addr 0x69738b0, size 0x14, virtual false, abstract: false, final false
  inline bool get_capsLock();

  /// @brief Method get_character, addr 0x6972a18, size 0x50, virtual false, abstract: false, final false
  inline char16_t get_character();

  /// @brief Method get_character_Injected, addr 0x6972a68, size 0x3c, virtual false, abstract: false, final false
  static inline char16_t get_character_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clickCount, addr 0x697298c, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_clickCount();

  /// @brief Method get_clickCount_Injected, addr 0x69729dc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_clickCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_command, addr 0x697389c, size 0x14, virtual false, abstract: false, final false
  inline bool get_command();

  /// @brief Method get_commandName, addr 0x6972f90, size 0x100, virtual false, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_commandName_Injected, addr 0x6973090, size 0x44, virtual false, abstract: false, final false
  static inline void get_commandName_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_control, addr 0x6973874, size 0x14, virtual false, abstract: false, final false
  inline bool get_control();

  /// @brief Method get_current, addr 0x69738ec, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Event* get_current();

  /// @brief Method get_delta, addr 0x69723c0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_delta();

  /// @brief Method get_delta_Injected, addr 0x6972420, size 0x44, virtual false, abstract: false, final false
  static inline void get_delta_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_displayIndex, addr 0x6972d40, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_displayIndex();

  /// @brief Method get_displayIndex_Injected, addr 0x6972d90, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_displayIndex_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_functionKey, addr 0x69738d8, size 0x14, virtual false, abstract: false, final false
  inline bool get_functionKey();

  /// @brief Method get_isDirectManipulationDevice, addr 0x69739e4, size 0x34, virtual false, abstract: false, final false
  inline bool get_isDirectManipulationDevice();

  /// @brief Method get_isKey, addr 0x69739c8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_isKey();

  /// @brief Method get_isMouse, addr 0x6972ce8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isMouse();

  /// @brief Method get_isScrollWheel, addr 0x6972d24, size 0x18, virtual false, abstract: false, final false
  inline bool get_isScrollWheel();

  /// @brief Method get_keyCode, addr 0x6972c68, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::KeyCode get_keyCode();

  /// @brief Method get_modifiers, addr 0x697261c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method get_modifiers_Injected, addr 0x697266c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventModifiers get_modifiers_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mousePosition, addr 0x697227c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mousePosition();

  /// @brief Method get_mousePosition_Injected, addr 0x69722dc, size 0x44, virtual false, abstract: false, final false
  static inline void get_mousePosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_numeric, addr 0x69738c4, size 0x14, virtual false, abstract: false, final false
  inline bool get_numeric();

  /// @brief Method get_penStatus, addr 0x6972900, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::PenStatus get_penStatus();

  /// @brief Method get_penStatus_Injected, addr 0x6972950, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PenStatus get_penStatus_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pointerType, addr 0x6972504, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::PointerType get_pointerType();

  /// @brief Method get_pointerType_Injected, addr 0x6972554, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PointerType get_pointerType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pressure, addr 0x6972744, size 0x50, virtual false, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method get_pressure_Injected, addr 0x6972794, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_pressure_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rawType, addr 0x69721f0, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::EventType get_rawType();

  /// @brief Method get_rawType_Injected, addr 0x6972240, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventType get_rawType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shift, addr 0x6973860, size 0x14, virtual false, abstract: false, final false
  inline bool get_shift();

  /// @brief Method get_tilt, addr 0x697285c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_tilt();

  /// @brief Method get_tilt_Injected, addr 0x69728bc, size 0x44, virtual false, abstract: false, final false
  static inline void get_tilt_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_twist, addr 0x69727d0, size 0x50, virtual false, abstract: false, final false
  inline float_t get_twist();

  /// @brief Method get_twist_Injected, addr 0x6972820, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_twist_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_type, addr 0x6972e68, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::EventType get_type();

  /// @brief Method get_type_Injected, addr 0x6972eb8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::EventType get_type_Injected(::System::IntPtr _unity_self);

  static inline void setStaticF_ignoreGuiDepth(bool value);

  static inline void setStaticF_s_Current(::UnityEngine::Event* value);

  static inline void setStaticF_s_MasterEvent(::UnityEngine::Event* value);

  /// @brief Method set_Internal_keyCode, addr 0x6972bcc, size 0x58, virtual false, abstract: false, final false
  inline void set_Internal_keyCode(::UnityEngine::KeyCode value);

  /// @brief Method set_Internal_keyCode_Injected, addr 0x6972c24, size 0x44, virtual false, abstract: false, final false
  static inline void set_Internal_keyCode_Injected(::System::IntPtr _unity_self, ::UnityEngine::KeyCode value);

  /// @brief Method set_character, addr 0x6972aa4, size 0x58, virtual false, abstract: false, final false
  inline void set_character(char16_t value);

  /// @brief Method set_character_Injected, addr 0x6972afc, size 0x44, virtual false, abstract: false, final false
  static inline void set_character_Injected(::System::IntPtr _unity_self, char16_t value);

  /// @brief Method set_commandName, addr 0x69730d4, size 0x154, virtual false, abstract: false, final false
  inline void set_commandName(::StringW value);

  /// @brief Method set_commandName_Injected, addr 0x6973228, size 0x44, virtual false, abstract: false, final false
  static inline void set_commandName_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_current, addr 0x6973938, size 0x90, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::Event* value);

  /// @brief Method set_delta, addr 0x6972464, size 0x5c, virtual false, abstract: false, final false
  inline void set_delta(::UnityEngine::Vector2 value);

  /// @brief Method set_delta_Injected, addr 0x69724c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_delta_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_displayIndex, addr 0x6972dcc, size 0x58, virtual false, abstract: false, final false
  inline void set_displayIndex(int32_t value);

  /// @brief Method set_displayIndex_Injected, addr 0x6972e24, size 0x44, virtual false, abstract: false, final false
  static inline void set_displayIndex_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_keyCode, addr 0x6972d3c, size 0x4, virtual false, abstract: false, final false
  inline void set_keyCode(::UnityEngine::KeyCode value);

  /// @brief Method set_modifiers, addr 0x69726a8, size 0x58, virtual false, abstract: false, final false
  inline void set_modifiers(::UnityEngine::EventModifiers value);

  /// @brief Method set_modifiers_Injected, addr 0x6972700, size 0x44, virtual false, abstract: false, final false
  static inline void set_modifiers_Injected(::System::IntPtr _unity_self, ::UnityEngine::EventModifiers value);

  /// @brief Method set_mousePosition, addr 0x6972320, size 0x5c, virtual false, abstract: false, final false
  inline void set_mousePosition(::UnityEngine::Vector2 value);

  /// @brief Method set_mousePosition_Injected, addr 0x697237c, size 0x44, virtual false, abstract: false, final false
  static inline void set_mousePosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_type, addr 0x6972ef4, size 0x58, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::EventType value);

  /// @brief Method set_type_Injected, addr 0x6972f4c, size 0x44, virtual false, abstract: false, final false
  static inline void set_type_Injected(::System::IntPtr _unity_self, ::UnityEngine::EventType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Event();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Event", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Event(Event&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Event", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Event(Event const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19583 };

  /// @brief Field scrollWheelDeltaPerTick offset 0xffffffff size 0x4
  static constexpr float_t scrollWheelDeltaPerTick{ static_cast<float_t>(3.0f) };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Event, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Event, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Event);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Event*, "UnityEngine", "Event");
NEED_NO_BOX(::UnityEngine::Event_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Event_BindingsMarshaller*, "UnityEngine", "Event/BindingsMarshaller");

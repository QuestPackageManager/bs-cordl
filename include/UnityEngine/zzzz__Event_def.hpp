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
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct EventType;
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
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Event);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Event
class CORDL_TYPE Event : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_button)) int32_t button;

  __declspec(property(get = get_character, put = set_character)) char16_t character;

  __declspec(property(get = get_clickCount)) int32_t clickCount;

  __declspec(property(get = get_commandName, put = set_commandName)) ::StringW commandName;

  __declspec(property(get = get_delta, put = set_delta)) ::UnityEngine::Vector2 delta;

  __declspec(property(get = get_displayIndex, put = set_displayIndex)) int32_t displayIndex;

  __declspec(property(get = get_isDirectManipulationDevice)) bool isDirectManipulationDevice;

  __declspec(property(get = get_isKey)) bool isKey;

  __declspec(property(get = get_isMouse)) bool isMouse;

  __declspec(property(get = get_keyCode, put = set_keyCode)) ::UnityEngine::KeyCode keyCode;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(get = get_modifiers, put = set_modifiers)) ::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_mousePosition, put = set_mousePosition)) ::UnityEngine::Vector2 mousePosition;

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

  /// @brief Method CopyFrom, addr 0x48d4ae8, size 0x70, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::Event* e);

  /// @brief Method CopyFromPtr, addr 0x48d479c, size 0x44, virtual false, abstract: false, final false
  inline void CopyFromPtr(::System::IntPtr ptr);

  /// @brief Method Equals, addr 0x48d6a88, size 0x26c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Finalize, addr 0x48d4a10, size 0xd8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetDoubleClickTime, addr 0x48d499c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetDoubleClickTime();

  /// @brief Method GetHashCode, addr 0x48d6988, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Internal_Create, addr 0x48d4724, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create(int32_t displayIndex);

  /// @brief Method Internal_Destroy, addr 0x48d4760, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method Internal_MakeMasterEventCurrent, addr 0x48d4858, size 0xf4, virtual false, abstract: false, final false
  static inline void Internal_MakeMasterEventCurrent(int32_t displayIndex);

  /// @brief Method Internal_SetNativeEvent, addr 0x48d481c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_SetNativeEvent(::System::IntPtr ptr);

  /// @brief Method Internal_Use, addr 0x48d46e8, size 0x3c, virtual false, abstract: false, final false
  inline void Internal_Use();

  /// @brief Method KeyboardEvent, addr 0x48d4da4, size 0x1be4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Event* KeyboardEvent(::StringW key);

  static inline ::UnityEngine::Event* New_ctor();

  static inline ::UnityEngine::Event* New_ctor(int32_t displayIndex);

  /// @brief Method PopEvent, addr 0x48d47e0, size 0x3c, virtual false, abstract: false, final false
  static inline bool PopEvent(::UnityEngine::Event* outEvent);

  /// @brief Method ToString, addr 0x48d6cf4, size 0x7b4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Use, addr 0x48d74a8, size 0x1c4, virtual false, abstract: false, final false
  inline void Use();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x48d49c4, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x48d494c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(int32_t displayIndex);

  static inline ::UnityEngine::Event* getStaticF_s_Current();

  static inline ::UnityEngine::Event* getStaticF_s_MasterEvent();

  /// @brief Method get_button, addr 0x48d422c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_button();

  /// @brief Method get_character, addr 0x48d4468, size 0x3c, virtual false, abstract: false, final false
  inline char16_t get_character();

  /// @brief Method get_clickCount, addr 0x48d442c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_clickCount();

  /// @brief Method get_commandName, addr 0x48d4668, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_current, addr 0x48d4b9c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Event* get_current();

  /// @brief Method get_delta, addr 0x48d40d4, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_delta();

  /// @brief Method get_delta_Injected, addr 0x48d4120, size 0x44, virtual false, abstract: false, final false
  inline void get_delta_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_displayIndex, addr 0x48d4568, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_displayIndex();

  /// @brief Method get_isDirectManipulationDevice, addr 0x48d4d28, size 0x7c, virtual false, abstract: false, final false
  inline bool get_isDirectManipulationDevice();

  /// @brief Method get_isKey, addr 0x48d4c78, size 0x4c, virtual false, abstract: false, final false
  inline bool get_isKey();

  /// @brief Method get_isMouse, addr 0x48d4cc4, size 0x64, virtual false, abstract: false, final false
  inline bool get_isMouse();

  /// @brief Method get_keyCode, addr 0x48d44e8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::KeyCode get_keyCode();

  /// @brief Method get_modifiers, addr 0x48d4268, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method get_mousePosition, addr 0x48d3fb8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mousePosition();

  /// @brief Method get_mousePosition_Injected, addr 0x48d4004, size 0x44, virtual false, abstract: false, final false
  inline void get_mousePosition_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_penStatus, addr 0x48d43f0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::PenStatus get_penStatus();

  /// @brief Method get_pointerType, addr 0x48d41f0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::PointerType get_pointerType();

  /// @brief Method get_pressure, addr 0x48d42e8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method get_rawType, addr 0x48d3f7c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventType get_rawType();

  /// @brief Method get_shift, addr 0x48d4b58, size 0x44, virtual false, abstract: false, final false
  inline bool get_shift();

  /// @brief Method get_tilt, addr 0x48d4360, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_tilt();

  /// @brief Method get_tilt_Injected, addr 0x48d43ac, size 0x44, virtual false, abstract: false, final false
  inline void get_tilt_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_twist, addr 0x48d4324, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_twist();

  /// @brief Method get_type, addr 0x48d45e8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventType get_type();

  static inline void setStaticF_s_Current(::UnityEngine::Event* value);

  static inline void setStaticF_s_MasterEvent(::UnityEngine::Event* value);

  /// @brief Method set_character, addr 0x48d44a4, size 0x44, virtual false, abstract: false, final false
  inline void set_character(char16_t value);

  /// @brief Method set_commandName, addr 0x48d46a4, size 0x44, virtual false, abstract: false, final false
  inline void set_commandName(::StringW value);

  /// @brief Method set_current, addr 0x48d4be4, size 0x94, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::Event* value);

  /// @brief Method set_delta, addr 0x48d4164, size 0x48, virtual false, abstract: false, final false
  inline void set_delta(::UnityEngine::Vector2 value);

  /// @brief Method set_delta_Injected, addr 0x48d41ac, size 0x44, virtual false, abstract: false, final false
  inline void set_delta_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_displayIndex, addr 0x48d45a4, size 0x44, virtual false, abstract: false, final false
  inline void set_displayIndex(int32_t value);

  /// @brief Method set_keyCode, addr 0x48d4524, size 0x44, virtual false, abstract: false, final false
  inline void set_keyCode(::UnityEngine::KeyCode value);

  /// @brief Method set_modifiers, addr 0x48d42a4, size 0x44, virtual false, abstract: false, final false
  inline void set_modifiers(::UnityEngine::EventModifiers value);

  /// @brief Method set_mousePosition, addr 0x48d4048, size 0x48, virtual false, abstract: false, final false
  inline void set_mousePosition(::UnityEngine::Vector2 value);

  /// @brief Method set_mousePosition_Injected, addr 0x48d4090, size 0x44, virtual false, abstract: false, final false
  inline void set_mousePosition_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_type, addr 0x48d4624, size 0x44, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::EventType value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16635 };

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

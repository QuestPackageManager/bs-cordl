#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Event)
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct PointerType;
}
namespace UnityEngine {
struct KeyCode;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct EventType;
}
// Forward declare root types
namespace UnityEngine {
class Event;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Event);
// Type: UnityEngine::Event
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14605))
// CS Name: ::UnityEngine::Event*
class CORDL_TYPE Event : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  /// @brief Field s_Current, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Current, put = setStaticF_s_Current))::UnityEngine::Event* s_Current;

  /// @brief Field s_MasterEvent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MasterEvent, put = setStaticF_s_MasterEvent))::UnityEngine::Event* s_MasterEvent;

  __declspec(property(get = get_shift)) bool shift;

  __declspec(property(get = get_isKey)) bool isKey;

  __declspec(property(get = get_isMouse)) bool isMouse;

  __declspec(property(get = get_isDirectManipulationDevice)) bool isDirectManipulationDevice;

  __declspec(property(get = get_rawType))::UnityEngine::EventType rawType;

  __declspec(property(get = get_mousePosition, put = set_mousePosition))::UnityEngine::Vector2 mousePosition;

  __declspec(property(get = get_delta, put = set_delta))::UnityEngine::Vector2 delta;

  __declspec(property(get = get_pointerType))::UnityEngine::PointerType pointerType;

  __declspec(property(get = get_button)) int32_t button;

  __declspec(property(get = get_modifiers, put = set_modifiers))::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_pressure)) float_t pressure;

  __declspec(property(get = get_clickCount)) int32_t clickCount;

  __declspec(property(get = get_character, put = set_character)) char16_t character;

  __declspec(property(get = get_keyCode, put = set_keyCode))::UnityEngine::KeyCode keyCode;

  __declspec(property(get = get_displayIndex, put = set_displayIndex)) int32_t displayIndex;

  __declspec(property(get = get_type, put = set_type))::UnityEngine::EventType type;

  __declspec(property(get = get_commandName, put = set_commandName))::StringW commandName;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  static inline void setStaticF_s_Current(::UnityEngine::Event* value);

  static inline ::UnityEngine::Event* getStaticF_s_Current();

  static inline void setStaticF_s_MasterEvent(::UnityEngine::Event* value);

  static inline ::UnityEngine::Event* getStaticF_s_MasterEvent();

  static inline ::UnityEngine::Event* New_ctor();

  /// @brief Method .ctor, addr 0x2cfe63c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Event* New_ctor(int32_t displayIndex);

  /// @brief Method .ctor, addr 0x2cfe6c4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(int32_t displayIndex);

  /// @brief Method Finalize, addr 0x2cfe714, size 0x120, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method CopyFrom, addr 0x2cfe870, size 0x70, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::Event* e);

  /// @brief Method get_shift, addr 0x2cfe924, size 0x44, virtual false, abstract: false, final false
  inline bool get_shift();

  /// @brief Method get_current, addr 0x2cfd0c4, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Event* get_current();

  /// @brief Method set_current, addr 0x2cfe9a4, size 0x94, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::Event* value);

  /// @brief Method get_isKey, addr 0x2cfea74, size 0x4c, virtual false, abstract: false, final false
  inline bool get_isKey();

  /// @brief Method get_isMouse, addr 0x2cfeac0, size 0x64, virtual false, abstract: false, final false
  inline bool get_isMouse();

  /// @brief Method get_isDirectManipulationDevice, addr 0x2cfeb24, size 0x7c, virtual false, abstract: false, final false
  inline bool get_isDirectManipulationDevice();

  /// @brief Method KeyboardEvent, addr 0x2cfebdc, size 0x1b8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Event* KeyboardEvent(::StringW key);

  /// @brief Method GetHashCode, addr 0x2d008b4, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2d009f0, size 0x234, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method ToString, addr 0x2d00c24, size 0x854, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Use, addr 0x2d014b4, size 0x1c4, virtual false, abstract: false, final false
  inline void Use();

  /// @brief Method get_rawType, addr 0x2d016b4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventType get_rawType();

  /// @brief Method get_mousePosition, addr 0x2cfd148, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mousePosition();

  /// @brief Method set_mousePosition, addr 0x2d01734, size 0x48, virtual false, abstract: false, final false
  inline void set_mousePosition(::UnityEngine::Vector2 value);

  /// @brief Method get_delta, addr 0x2d017c0, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_delta();

  /// @brief Method set_delta, addr 0x2d01850, size 0x48, virtual false, abstract: false, final false
  inline void set_delta(::UnityEngine::Vector2 value);

  /// @brief Method get_pointerType, addr 0x2cfeba0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::PointerType get_pointerType();

  /// @brief Method get_button, addr 0x2d018dc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_button();

  /// @brief Method get_modifiers, addr 0x2cfe968, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method set_modifiers, addr 0x2d007ac, size 0x44, virtual false, abstract: false, final false
  inline void set_modifiers(::UnityEngine::EventModifiers value);

  /// @brief Method get_pressure, addr 0x2d01918, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method get_clickCount, addr 0x2d01954, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_clickCount();

  /// @brief Method get_character, addr 0x2d00878, size 0x3c, virtual false, abstract: false, final false
  inline char16_t get_character();

  /// @brief Method set_character, addr 0x2d007f0, size 0x44, virtual false, abstract: false, final false
  inline void set_character(char16_t value);

  /// @brief Method get_keyCode, addr 0x2d009b4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::KeyCode get_keyCode();

  /// @brief Method set_keyCode, addr 0x2d00834, size 0x44, virtual false, abstract: false, final false
  inline void set_keyCode(::UnityEngine::KeyCode value);

  /// @brief Method get_displayIndex, addr 0x2d01990, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_displayIndex();

  /// @brief Method set_displayIndex, addr 0x2d019cc, size 0x44, virtual false, abstract: false, final false
  inline void set_displayIndex(int32_t value);

  /// @brief Method get_type, addr 0x2cfd10c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::EventType get_type();

  /// @brief Method set_type, addr 0x2d00768, size 0x44, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::EventType value);

  /// @brief Method get_commandName, addr 0x2d01478, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method set_commandName, addr 0x2d01a10, size 0x44, virtual false, abstract: false, final false
  inline void set_commandName(::StringW value);

  /// @brief Method Internal_Use, addr 0x2d01678, size 0x3c, virtual false, abstract: false, final false
  inline void Internal_Use();

  /// @brief Method Internal_Create, addr 0x2cfe688, size 0x3c, virtual false, abstract: false, final false
  static inline void* Internal_Create(int32_t displayIndex);

  /// @brief Method Internal_Destroy, addr 0x2cfe834, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(void* ptr);

  /// @brief Method CopyFromPtr, addr 0x2cfe8e0, size 0x44, virtual false, abstract: false, final false
  inline void CopyFromPtr(void* ptr);

  /// @brief Method PopEvent, addr 0x2d01a54, size 0x3c, virtual false, abstract: false, final false
  static inline bool PopEvent(::UnityEngine::Event* outEvent);

  /// @brief Method Internal_SetNativeEvent, addr 0x2cfea38, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_SetNativeEvent(void* ptr);

  /// @brief Method Internal_MakeMasterEventCurrent, addr 0x2d01a90, size 0xf8, virtual false, abstract: false, final false
  static inline void Internal_MakeMasterEventCurrent(int32_t displayIndex);

  /// @brief Method GetDoubleClickTime, addr 0x2d01b88, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetDoubleClickTime();

  /// @brief Method get_mousePosition_Injected, addr 0x2d016f0, size 0x44, virtual false, abstract: false, final false
  inline void get_mousePosition_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_mousePosition_Injected, addr 0x2d0177c, size 0x44, virtual false, abstract: false, final false
  inline void set_mousePosition_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method get_delta_Injected, addr 0x2d0180c, size 0x44, virtual false, abstract: false, final false
  inline void get_delta_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_delta_Injected, addr 0x2d01898, size 0x44, virtual false, abstract: false, final false
  inline void set_delta_Injected(ByRef<::UnityEngine::Vector2> value);

  // Ctor Parameters [CppParam { name: "", ty: "Event", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Event(Event&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Event", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Event(Event const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Event();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Event, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Event, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Event);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Event*, "UnityEngine", "Event");

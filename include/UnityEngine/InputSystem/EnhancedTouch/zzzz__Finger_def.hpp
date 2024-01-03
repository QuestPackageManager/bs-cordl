#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Finger)
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateHistory__Record;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::Finger);
// Type: UnityEngine.InputSystem.EnhancedTouch::Finger
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6414))
// CS Name: ::UnityEngine.InputSystem.EnhancedTouch::Finger*
class CORDL_TYPE Finger : public ::System::Object {
public:
  // Declarations
  /// @brief Field <screen>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__screen_k__BackingField, put = __set__screen_k__BackingField))::UnityEngine::InputSystem::Touchscreen* _screen_k__BackingField;

  /// @brief Field <index>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__index_k__BackingField, put = __set__index_k__BackingField)) int32_t _index_k__BackingField;

  /// @brief Field m_StateHistory, offset 0x20, size 0x8
  __declspec(property(get = __get_m_StateHistory,
                      put = __set_m_StateHistory))::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* m_StateHistory;

  __declspec(property(get = get_screen))::UnityEngine::InputSystem::Touchscreen* screen;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_isActive)) bool isActive;

  __declspec(property(get = get_screenPosition))::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_lastTouch))::UnityEngine::InputSystem::EnhancedTouch::Touch lastTouch;

  __declspec(property(get = get_currentTouch))::UnityEngine::InputSystem::EnhancedTouch::Touch currentTouch;

  __declspec(property(get = get_touchHistory))::UnityEngine::InputSystem::EnhancedTouch::TouchHistory touchHistory;

  constexpr ::UnityEngine::InputSystem::Touchscreen*& __get__screen_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Touchscreen*> const& __get__screen_k__BackingField() const;

  constexpr void __set__screen_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value);

  constexpr int32_t& __get__index_k__BackingField();

  constexpr int32_t const& __get__index_k__BackingField() const;

  constexpr void __set__index_k__BackingField(int32_t value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*& __get_m_StateHistory();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*> const& __get_m_StateHistory() const;

  constexpr void __set_m_StateHistory(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* value);

  /// @brief Method get_screen, addr 0x2ae0b70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Touchscreen* get_screen();

  /// @brief Method get_index, addr 0x2ae0b78, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_isActive, addr 0x2ae0b80, size 0x2c, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method get_screenPosition, addr 0x2ae0cbc, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method get_lastTouch, addr 0x2ae0cfc, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_lastTouch();

  /// @brief Method get_currentTouch, addr 0x2ae0bac, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_currentTouch();

  /// @brief Method get_touchHistory, addr 0x2ae0ddc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_touchHistory();

  static inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* New_ctor(::UnityEngine::InputSystem::Touchscreen* screen, int32_t index,
                                                                            ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask);

  /// @brief Method .ctor, addr 0x2ae0e4c, size 0x31c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::Touchscreen* screen, int32_t index, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask);

  /// @brief Method ShouldRecordTouch, addr 0x2ae11c0, size 0x98, virtual false, abstract: false, final false
  static inline bool ShouldRecordTouch(::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method OnTouchRecorded, addr 0x2ae128c, size 0x2ac, virtual false, abstract: false, final false
  inline void OnTouchRecorded(::UnityEngine::InputSystem::LowLevel::__InputStateHistory__Record record);

  /// @brief Method FindTouch, addr 0x2ae1564, size 0x338, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::Touch FindTouch(uint32_t uniqueId);

  /// @brief Method GetTouchHistory, addr 0x2ae189c, size 0x1f0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory GetTouchHistory(::UnityEngine::InputSystem::EnhancedTouch::Touch touch);

  // Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Finger(Finger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Finger(Finger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Finger();

public:
  /// @brief Field <screen>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Touchscreen* ____screen_k__BackingField;

  /// @brief Field <index>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____index_k__BackingField;

  /// @brief Field m_StateHistory, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* ___m_StateHistory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::Finger, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Finger, ____screen_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Finger, ____index_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Finger, ___m_StateHistory) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::Finger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Finger*, "UnityEngine.InputSystem.EnhancedTouch", "Finger");

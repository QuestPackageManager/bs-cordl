#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Finger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Finger)
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateHistory_Record;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::Finger);
// Dependencies System.Object
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Finger
class CORDL_TYPE Finger : public ::System::Object {
public:
  // Declarations
  /// @brief Field <index>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index_k__BackingField, put = __cordl_internal_set__index_k__BackingField)) int32_t _index_k__BackingField;

  /// @brief Field <screen>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__screen_k__BackingField, put = __cordl_internal_set__screen_k__BackingField)) ::UnityEngine::InputSystem::Touchscreen* _screen_k__BackingField;

  __declspec(property(get = get_currentTouch)) ::UnityEngine::InputSystem::EnhancedTouch::Touch currentTouch;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_isActive)) bool isActive;

  __declspec(property(get = get_lastTouch)) ::UnityEngine::InputSystem::EnhancedTouch::Touch lastTouch;

  /// @brief Field m_StateHistory, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StateHistory,
                      put = __cordl_internal_set_m_StateHistory)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* m_StateHistory;

  __declspec(property(get = get_screen)) ::UnityEngine::InputSystem::Touchscreen* screen;

  __declspec(property(get = get_screenPosition)) ::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_touchHistory)) ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory touchHistory;

  /// @brief Method FindTouch, addr 0x45fc6c8, size 0x334, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::Touch FindTouch(uint32_t uniqueId);

  /// @brief Method GetTouchHistory, addr 0x45fc9fc, size 0x220, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory GetTouchHistory(::UnityEngine::InputSystem::EnhancedTouch::Touch touch);

  static inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* New_ctor(::UnityEngine::InputSystem::Touchscreen* screen, int32_t index,
                                                                            ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask);

  /// @brief Method OnTouchRecorded, addr 0x45fc414, size 0x28c, virtual false, abstract: false, final false
  inline void OnTouchRecorded(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record record);

  /// @brief Method ShouldRecordTouch, addr 0x45fc32c, size 0xb4, virtual false, abstract: false, final false
  static inline bool ShouldRecordTouch(::UnityEngine::InputSystem::InputControl* control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  constexpr int32_t const& __cordl_internal_get__index_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__index_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Touchscreen* const& __cordl_internal_get__screen_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Touchscreen*& __cordl_internal_get__screen_k__BackingField();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* const& __cordl_internal_get_m_StateHistory() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*& __cordl_internal_get_m_StateHistory();

  constexpr void __cordl_internal_set__index_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__screen_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value);

  constexpr void __cordl_internal_set_m_StateHistory(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* value);

  /// @brief Method .ctor, addr 0x45fbfd8, size 0x2fc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::Touchscreen* screen, int32_t index, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask);

  /// @brief Method get_currentTouch, addr 0x45fbbdc, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_currentTouch();

  /// @brief Method get_index, addr 0x45fbb5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_isActive, addr 0x45fbb64, size 0x78, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method get_lastTouch, addr 0x45fbdb8, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_lastTouch();

  /// @brief Method get_screen, addr 0x45fbb54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Touchscreen* get_screen();

  /// @brief Method get_screenPosition, addr 0x45fbd20, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method get_touchHistory, addr 0x45fbf68, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_touchHistory();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Finger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Finger(Finger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Finger(Finger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6824 };

  /// @brief Field <screen>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Touchscreen* ____screen_k__BackingField;

  /// @brief Field <index>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____index_k__BackingField;

  /// @brief Field m_StateHistory, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* ___m_StateHistory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Finger, ____screen_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Finger, ____index_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Finger, ___m_StateHistory) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::Finger, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::Finger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Finger*, "UnityEngine.InputSystem.EnhancedTouch", "Finger");

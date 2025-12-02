#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/NavigationEventRepeatHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationEventRepeatHelper)
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct NavigationEvent_Direction;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
class NavigationEventRepeatHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputForUI::NavigationEventRepeatHelper);
// Dependencies System.Object, Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.NavigationEvent::Direction
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.NavigationEventRepeatHelper
class CORDL_TYPE NavigationEventRepeatHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ConsecutiveMoveCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ConsecutiveMoveCount, put = __cordl_internal_set_m_ConsecutiveMoveCount)) int32_t m_ConsecutiveMoveCount;

  /// @brief Field m_ConsecutiveRepeatDelay, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ConsecutiveRepeatDelay, put = __cordl_internal_set_m_ConsecutiveRepeatDelay)) ::Unity::IntegerTime::DiscreteTime m_ConsecutiveRepeatDelay;

  /// @brief Field m_InitialRepeatDelay, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InitialRepeatDelay, put = __cordl_internal_set_m_InitialRepeatDelay)) ::Unity::IntegerTime::DiscreteTime m_InitialRepeatDelay;

  /// @brief Field m_LastDirection, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastDirection, put = __cordl_internal_set_m_LastDirection)) ::UnityEngine::InputForUI::NavigationEvent_Direction m_LastDirection;

  /// @brief Field m_PrevActionTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrevActionTime, put = __cordl_internal_set_m_PrevActionTime)) ::Unity::IntegerTime::DiscreteTime m_PrevActionTime;

  static inline ::UnityEngine::InputForUI::NavigationEventRepeatHelper* New_ctor();

  /// @brief Method Reset, addr 0x692c144, size 0x68, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ShouldSendMoveEvent, addr 0x692c1ac, size 0x118, virtual false, abstract: false, final false
  inline bool ShouldSendMoveEvent(::Unity::IntegerTime::DiscreteTime timestamp, ::UnityEngine::InputForUI::NavigationEvent_Direction direction, bool axisButtonsWherePressedThisFrame);

  constexpr int32_t const& __cordl_internal_get_m_ConsecutiveMoveCount() const;

  constexpr int32_t& __cordl_internal_get_m_ConsecutiveMoveCount();

  constexpr ::Unity::IntegerTime::DiscreteTime const& __cordl_internal_get_m_ConsecutiveRepeatDelay() const;

  constexpr ::Unity::IntegerTime::DiscreteTime& __cordl_internal_get_m_ConsecutiveRepeatDelay();

  constexpr ::Unity::IntegerTime::DiscreteTime const& __cordl_internal_get_m_InitialRepeatDelay() const;

  constexpr ::Unity::IntegerTime::DiscreteTime& __cordl_internal_get_m_InitialRepeatDelay();

  constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction const& __cordl_internal_get_m_LastDirection() const;

  constexpr ::UnityEngine::InputForUI::NavigationEvent_Direction& __cordl_internal_get_m_LastDirection();

  constexpr ::Unity::IntegerTime::DiscreteTime const& __cordl_internal_get_m_PrevActionTime() const;

  constexpr ::Unity::IntegerTime::DiscreteTime& __cordl_internal_get_m_PrevActionTime();

  constexpr void __cordl_internal_set_m_ConsecutiveMoveCount(int32_t value);

  constexpr void __cordl_internal_set_m_ConsecutiveRepeatDelay(::Unity::IntegerTime::DiscreteTime value);

  constexpr void __cordl_internal_set_m_InitialRepeatDelay(::Unity::IntegerTime::DiscreteTime value);

  constexpr void __cordl_internal_set_m_LastDirection(::UnityEngine::InputForUI::NavigationEvent_Direction value);

  constexpr void __cordl_internal_set_m_PrevActionTime(::Unity::IntegerTime::DiscreteTime value);

  /// @brief Method .ctor, addr 0x6929780, size 0x150, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationEventRepeatHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationEventRepeatHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationEventRepeatHelper(NavigationEventRepeatHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationEventRepeatHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationEventRepeatHelper(NavigationEventRepeatHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21617 };

  /// @brief Field m_ConsecutiveMoveCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_ConsecutiveMoveCount;

  /// @brief Field m_LastDirection, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::InputForUI::NavigationEvent_Direction ___m_LastDirection;

  /// @brief Field m_PrevActionTime, offset: 0x18, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime ___m_PrevActionTime;

  /// @brief Field m_InitialRepeatDelay, offset: 0x20, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime ___m_InitialRepeatDelay;

  /// @brief Field m_ConsecutiveRepeatDelay, offset: 0x28, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime ___m_ConsecutiveRepeatDelay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::NavigationEventRepeatHelper, ___m_ConsecutiveMoveCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEventRepeatHelper, ___m_LastDirection) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEventRepeatHelper, ___m_PrevActionTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEventRepeatHelper, ___m_InitialRepeatDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEventRepeatHelper, ___m_ConsecutiveRepeatDelay) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::NavigationEventRepeatHelper, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
NEED_NO_BOX(::UnityEngine::InputForUI::NavigationEventRepeatHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::NavigationEventRepeatHelper*, "UnityEngine.InputForUI", "NavigationEventRepeatHelper");

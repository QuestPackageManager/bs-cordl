#pragma once
// IWYU pragma private; include "UnityEngine/EventInterests.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EventInterests)
namespace UnityEngine {
struct EventType;
}
// Forward declare root types
namespace UnityEngine {
struct EventInterests;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventInterests);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.EventInterests
struct CORDL_TYPE EventInterests {
public:
  // Declarations
  __declspec(property(get = get_wantsLessLayoutEvents)) bool wantsLessLayoutEvents;

  __declspec(property(get = get_wantsMouseEnterLeaveWindow, put = set_wantsMouseEnterLeaveWindow)) bool wantsMouseEnterLeaveWindow;

  __declspec(property(get = get_wantsMouseMove, put = set_wantsMouseMove)) bool wantsMouseMove;

  /// @brief Method WantsEvent, addr 0x48d7a04, size 0x30, virtual false, abstract: false, final false
  inline bool WantsEvent(::UnityEngine::EventType type);

  /// @brief Method WantsLayoutPass, addr 0x48d7a34, size 0xdc, virtual false, abstract: false, final false
  inline bool WantsLayoutPass(::UnityEngine::EventType type);

  /// @brief Method get_wantsLessLayoutEvents, addr 0x48d79fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_wantsLessLayoutEvents();

  /// @brief Method get_wantsMouseEnterLeaveWindow, addr 0x48d79e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_wantsMouseEnterLeaveWindow();

  /// @brief Method get_wantsMouseMove, addr 0x48d79d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_wantsMouseMove();

  /// @brief Method set_wantsMouseEnterLeaveWindow, addr 0x48d79f0, size 0xc, virtual false, abstract: false, final false
  inline void set_wantsMouseEnterLeaveWindow(bool value);

  /// @brief Method set_wantsMouseMove, addr 0x48d79dc, size 0xc, virtual false, abstract: false, final false
  inline void set_wantsMouseMove(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventInterests();

  // Ctor Parameters [CppParam { name: "_wantsMouseMove_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_wantsMouseEnterLeaveWindow_k__BackingField", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "_wantsLessLayoutEvents_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr EventInterests(bool _wantsMouseMove_k__BackingField, bool _wantsMouseEnterLeaveWindow_k__BackingField, bool _wantsLessLayoutEvents_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16639 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3 };

  /// @brief Field <wantsMouseMove>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _wantsMouseMove_k__BackingField;

  /// @brief Field <wantsMouseEnterLeaveWindow>k__BackingField, offset: 0x1, size: 0x1, def value: None
  bool _wantsMouseEnterLeaveWindow_k__BackingField;

  /// @brief Field <wantsLessLayoutEvents>k__BackingField, offset: 0x2, size: 0x1, def value: None
  bool _wantsLessLayoutEvents_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventInterests, _wantsMouseMove_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventInterests, _wantsMouseEnterLeaveWindow_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventInterests, _wantsLessLayoutEvents_k__BackingField) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventInterests, 0x3>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventInterests, "UnityEngine", "EventInterests");

#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/IMECompositionEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMECompositionEvent)
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
class IEventProperties;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct IMECompositionEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::IMECompositionEvent);
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.EventModifiers, UnityEngine.InputForUI.EventSource
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.IMECompositionEvent
struct CORDL_TYPE IMECompositionEvent {
public:
  // Declarations
  __declspec(property(get = get_eventModifiers, put = set_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers eventModifiers;

  __declspec(property(get = get_eventSource, put = set_eventSource)) ::UnityEngine::InputForUI::EventSource eventSource;

  __declspec(property(put = set_playerId)) uint32_t playerId;

  __declspec(property(put = set_timestamp)) ::Unity::IntegerTime::DiscreteTime timestamp;

  /// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
  constexpr operator ::UnityEngine::InputForUI::IEventProperties*();

  /// @brief Method ToString, addr 0x698e18c, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_eventModifiers, addr 0x698e17c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers();

  /// @brief Method get_eventSource, addr 0x698e164, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventSource get_eventSource();

  /// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
  constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties();

  /// @brief Method set_eventModifiers, addr 0x698e184, size 0x8, virtual false, abstract: false, final false
  inline void set_eventModifiers(::UnityEngine::InputForUI::EventModifiers value);

  /// @brief Method set_eventSource, addr 0x698e16c, size 0x8, virtual false, abstract: false, final false
  inline void set_eventSource(::UnityEngine::InputForUI::EventSource value);

  /// @brief Method set_playerId, addr 0x698e174, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(uint32_t value);

  /// @brief Method set_timestamp, addr 0x698e15c, size 0x8, virtual false, abstract: false, final false
  inline void set_timestamp(::Unity::IntegerTime::DiscreteTime value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IMECompositionEvent();

  // Ctor Parameters [CppParam { name: "compositionString", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime",
  // modifiers: "", def_value: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: None }, CppParam { name:
  // "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "",
  // def_value: None }]
  constexpr IMECompositionEvent(::StringW compositionString, ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField,
                                uint32_t _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field compositionString, offset: 0x0, size: 0x8, def value: None
  ::StringW compositionString;

  /// @brief Field <timestamp>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField;

  /// @brief Field <eventSource>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField;

  /// @brief Field <playerId>k__BackingField, offset: 0x14, size: 0x4, def value: None
  uint32_t _playerId_k__BackingField;

  /// @brief Field <eventModifiers>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::IMECompositionEvent, compositionString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::IMECompositionEvent, _timestamp_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::IMECompositionEvent, _eventSource_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::IMECompositionEvent, _playerId_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::IMECompositionEvent, _eventModifiers_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::IMECompositionEvent, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::IMECompositionEvent, "UnityEngine.InputForUI", "IMECompositionEvent");

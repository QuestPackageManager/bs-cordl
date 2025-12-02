#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventSanitizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EventSanitizer)
namespace UnityEngine::InputForUI {
class EventSanitizer_IEventSanitizer;
}
namespace UnityEngine::InputForUI {
struct Event;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
class EventSanitizer_IEventSanitizer;
}
namespace UnityEngine::InputForUI {
struct EventSanitizer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer);
MARK_VAL_T(::UnityEngine::InputForUI::EventSanitizer);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.EventSanitizer/IEventSanitizer
class CORDL_TYPE EventSanitizer_IEventSanitizer {
public:
  // Declarations
  /// @brief Method AfterProviderUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AfterProviderUpdate();

  /// @brief Method BeforeProviderUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void BeforeProviderUpdate();

  /// @brief Method Inspect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Inspect(::ByRef<::UnityEngine::InputForUI::Event> ev);

  /// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "EventSanitizer_IEventSanitizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSanitizer_IEventSanitizer(EventSanitizer_IEventSanitizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.EventSanitizer
struct CORDL_TYPE EventSanitizer {
public:
  // Declarations
  using IEventSanitizer = ::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer;

  /// @brief Method AfterProviderUpdate, addr 0x6927bbc, size 0xfc, virtual false, abstract: false, final false
  inline void AfterProviderUpdate();

  /// @brief Method BeforeProviderUpdate, addr 0x6927ac0, size 0xfc, virtual false, abstract: false, final false
  inline void BeforeProviderUpdate();

  /// @brief Method Inspect, addr 0x6927618, size 0x104, virtual false, abstract: false, final false
  inline void Inspect(::ByRef<::UnityEngine::InputForUI::Event> ev);

  /// @brief Method Reset, addr 0x692771c, size 0x110, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSanitizer();

  // Ctor Parameters [CppParam { name: "_sanitizers", ty: "::ArrayW<::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer*,::Array<::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer*>*>",
  // modifiers: "", def_value: None }]
  constexpr EventSanitizer(::ArrayW<::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer*, ::Array<::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer*>*> _sanitizers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21620 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _sanitizers, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer*, ::Array<::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer*>*> _sanitizers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::EventSanitizer, _sanitizers) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::EventSanitizer, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
NEED_NO_BOX(::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::EventSanitizer_IEventSanitizer*, "UnityEngine.InputForUI", "EventSanitizer/IEventSanitizer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::EventSanitizer, "UnityEngine.InputForUI", "EventSanitizer");

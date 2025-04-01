#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardEventExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KeyboardEventExtensions)
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardEventExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyboardEventExtensions);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.KeyboardEventExtensions
class CORDL_TYPE KeyboardEventExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ShouldSendNavigationMoveEvent, addr 0x4a25228, size 0xe8, virtual false, abstract: false, final false
  static inline bool ShouldSendNavigationMoveEvent(::UnityEngine::UIElements::KeyDownEvent* e);

  /// @brief Method ShouldSendNavigationMoveEventRuntime, addr 0x4a255bc, size 0x44, virtual false, abstract: false, final false
  static inline bool ShouldSendNavigationMoveEventRuntime(::UnityEngine::Event* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardEventExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyboardEventExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardEventExtensions(KeyboardEventExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardEventExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardEventExtensions(KeyboardEventExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyboardEventExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyboardEventExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyboardEventExtensions*, "UnityEngine.UIElements", "KeyboardEventExtensions");

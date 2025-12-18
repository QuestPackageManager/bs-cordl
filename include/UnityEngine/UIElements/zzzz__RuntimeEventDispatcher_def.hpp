#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RuntimeEventDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeEventDispatcher)
namespace UnityEngine::UIElements {
class EventDispatcher;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RuntimeEventDispatcher;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RuntimeEventDispatcher);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RuntimeEventDispatcher
class CORDL_TYPE RuntimeEventDispatcher : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x6be2314, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventDispatcher* Create();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeEventDispatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeEventDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeEventDispatcher(RuntimeEventDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeEventDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeEventDispatcher(RuntimeEventDispatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4593 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RuntimeEventDispatcher, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RuntimeEventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuntimeEventDispatcher*, "UnityEngine.UIElements", "RuntimeEventDispatcher");

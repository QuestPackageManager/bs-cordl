#pragma once
// IWYU pragma private; include "UnityEngine/ScrollViewState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScrollViewState)
// Forward declare root types
namespace UnityEngine {
class ScrollViewState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ScrollViewState);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ScrollViewState
class CORDL_TYPE ScrollViewState : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::ScrollViewState* New_ctor();

  /// @brief Method .ctor, addr 0x691d868, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollViewState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollViewState(ScrollViewState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollViewState(ScrollViewState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19595 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScrollViewState, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ScrollViewState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScrollViewState*, "UnityEngine", "ScrollViewState");

#pragma once
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
// Type: UnityEngine::ScrollViewState
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14825))
// CS Name: ::UnityEngine::ScrollViewState*
class CORDL_TYPE ScrollViewState : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::ScrollViewState* New_ctor();

  /// @brief Method .ctor addr 0x2b9b160 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollViewState(ScrollViewState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollViewState(ScrollViewState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollViewState();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScrollViewState, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ScrollViewState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScrollViewState*, "UnityEngine", "ScrollViewState");

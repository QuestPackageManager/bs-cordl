#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformLayouter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransformLayouter)
// Forward declare root types
namespace GlobalNamespace {
class TransformLayouter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TransformLayouter);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformLayouter
class CORDL_TYPE TransformLayouter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::TransformLayouter* New_ctor();

  /// @brief Method .ctor, addr 0x39bf3c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformLayouter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransformLayouter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransformLayouter(TransformLayouter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransformLayouter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransformLayouter(TransformLayouter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16438 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TransformLayouter, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TransformLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransformLayouter*, "", "TransformLayouter");

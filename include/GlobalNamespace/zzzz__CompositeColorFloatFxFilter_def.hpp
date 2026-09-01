#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeColorFloatFxFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CompositeColorFloatFxFilter)
// Forward declare root types
namespace GlobalNamespace {
class CompositeColorFloatFxFilter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeColorFloatFxFilter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeColorFloatFxFilter*, "", "CompositeColorFloatFxFilter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeColorFloatFxFilter
class CORDL_TYPE CompositeColorFloatFxFilter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::CompositeColorFloatFxFilter* New_ctor();

  /// @brief Method .ctor, addr 0x598daf0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeColorFloatFxFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeColorFloatFxFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeColorFloatFxFilter(CompositeColorFloatFxFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeColorFloatFxFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeColorFloatFxFilter(CompositeColorFloatFxFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5817 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CompositeColorFloatFxFilter) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace

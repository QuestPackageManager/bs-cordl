#pragma once
// IWYU pragma private; include "GlobalNamespace/CompositeCircularLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompositeLayoutBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeCircularLayout)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeCircularLayout;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeCircularLayout*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeCircularLayout*, "", "CompositeCircularLayout");
// Dependencies CompositeLayoutBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeCircularLayout
class CORDL_TYPE CompositeCircularLayout : public ::GlobalNamespace::CompositeLayoutBase {
public:
  // Declarations
  /// @brief Method Apply, addr 0x5de543c, size 0x4, virtual true, abstract: false, final false
  inline void Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements, int32_t sameIdElements);

  static inline ::GlobalNamespace::CompositeCircularLayout* New_ctor();

  /// @brief Method .ctor, addr 0x5de5440, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeCircularLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeCircularLayout", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeCircularLayout(CompositeCircularLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeCircularLayout", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeCircularLayout(CompositeCircularLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CompositeCircularLayout) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace

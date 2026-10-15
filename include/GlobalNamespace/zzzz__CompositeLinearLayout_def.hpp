#pragma once
// IWYU pragma private; include "GlobalNamespace/CompositeLinearLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompositeLayoutBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeLinearLayout)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeLinearLayout;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeLinearLayout*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeLinearLayout*, "", "CompositeLinearLayout");
// Dependencies CompositeLayoutBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeLinearLayout
class CORDL_TYPE CompositeLinearLayout : public ::GlobalNamespace::CompositeLayoutBase {
public:
  // Declarations
  /// @brief Method Apply, addr 0x5deb45c, size 0x4, virtual true, abstract: false, final false
  inline void Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements, int32_t sameIdElements);

  static inline ::GlobalNamespace::CompositeLinearLayout* New_ctor();

  /// @brief Method .ctor, addr 0x5deb460, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeLinearLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeLinearLayout", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeLinearLayout(CompositeLinearLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeLinearLayout", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeLinearLayout(CompositeLinearLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5951 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CompositeLinearLayout) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace

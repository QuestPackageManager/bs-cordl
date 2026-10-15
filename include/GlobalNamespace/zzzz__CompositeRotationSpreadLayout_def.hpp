#pragma once
// IWYU pragma private; include "GlobalNamespace/CompositeRotationSpreadLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompositeLayoutBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeRotationSpreadLayout)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeRotationSpreadLayout;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeRotationSpreadLayout*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeRotationSpreadLayout*, "", "CompositeRotationSpreadLayout");
// Dependencies CompositeLayoutBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeRotationSpreadLayout
class CORDL_TYPE CompositeRotationSpreadLayout : public ::GlobalNamespace::CompositeLayoutBase {
public:
  // Declarations
  /// @brief Method Apply, addr 0x5deb47c, size 0x4, virtual true, abstract: false, final false
  inline void Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements, int32_t sameIdElements);

  static inline ::GlobalNamespace::CompositeRotationSpreadLayout* New_ctor();

  /// @brief Method .ctor, addr 0x5deb480, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeRotationSpreadLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeRotationSpreadLayout", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeRotationSpreadLayout(CompositeRotationSpreadLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeRotationSpreadLayout", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeRotationSpreadLayout(CompositeRotationSpreadLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5954 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CompositeRotationSpreadLayout) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace

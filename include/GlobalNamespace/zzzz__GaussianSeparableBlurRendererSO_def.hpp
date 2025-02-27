#pragma once
// IWYU pragma private; include "GlobalNamespace/GaussianSeparableBlurRendererSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(GaussianSeparableBlurRendererSO)
// Forward declare root types
namespace GlobalNamespace {
class GaussianSeparableBlurRendererSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GaussianSeparableBlurRendererSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GaussianSeparableBlurRendererSO
class CORDL_TYPE GaussianSeparableBlurRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  static inline ::GlobalNamespace::GaussianSeparableBlurRendererSO* New_ctor();

  /// @brief Method .ctor, addr 0x39ec598, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GaussianSeparableBlurRendererSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GaussianSeparableBlurRendererSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GaussianSeparableBlurRendererSO(GaussianSeparableBlurRendererSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GaussianSeparableBlurRendererSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GaussianSeparableBlurRendererSO(GaussianSeparableBlurRendererSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16287 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GaussianSeparableBlurRendererSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GaussianSeparableBlurRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GaussianSeparableBlurRendererSO*, "", "GaussianSeparableBlurRendererSO");

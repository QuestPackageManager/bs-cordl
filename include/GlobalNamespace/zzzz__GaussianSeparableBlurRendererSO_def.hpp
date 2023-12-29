#pragma once
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
// Type: ::GaussianSeparableBlurRendererSO
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14717))
// CS Name: ::GaussianSeparableBlurRendererSO*
class CORDL_TYPE GaussianSeparableBlurRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  static inline ::GlobalNamespace::GaussianSeparableBlurRendererSO* New_ctor();

  /// @brief Method .ctor addr 0x1fb6c80 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GaussianSeparableBlurRendererSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GaussianSeparableBlurRendererSO(GaussianSeparableBlurRendererSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GaussianSeparableBlurRendererSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GaussianSeparableBlurRendererSO(GaussianSeparableBlurRendererSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GaussianSeparableBlurRendererSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GaussianSeparableBlurRendererSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GaussianSeparableBlurRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GaussianSeparableBlurRendererSO*, "", "GaussianSeparableBlurRendererSO");

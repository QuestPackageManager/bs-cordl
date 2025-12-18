#pragma once
// IWYU pragma private; include "GlobalNamespace/Parametric3SliceUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Parametric3SliceUpdater)
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
// Forward declare root types
namespace GlobalNamespace {
class Parametric3SliceUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Parametric3SliceUpdater);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Parametric3SliceUpdater
class CORDL_TYPE Parametric3SliceUpdater : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _parametric3SliceSpriteController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parametric3SliceSpriteController,
                      put = __cordl_internal_set__parametric3SliceSpriteController)) ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>
      _parametric3SliceSpriteController;

  static inline ::GlobalNamespace::Parametric3SliceUpdater* New_ctor();

  /// @brief Method Update, addr 0x56b33fc, size 0x14, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> const& __cordl_internal_get__parametric3SliceSpriteController() const;

  constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>& __cordl_internal_get__parametric3SliceSpriteController();

  constexpr void __cordl_internal_set__parametric3SliceSpriteController(::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> value);

  /// @brief Method .ctor, addr 0x56b3410, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parametric3SliceUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parametric3SliceUpdater(Parametric3SliceUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parametric3SliceUpdater(Parametric3SliceUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19673 };

  /// @brief Field _parametric3SliceSpriteController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> ____parametric3SliceSpriteController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Parametric3SliceUpdater, ____parametric3SliceSpriteController) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Parametric3SliceUpdater, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Parametric3SliceUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Parametric3SliceUpdater*, "", "Parametric3SliceUpdater");

#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderControllerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderControllerBase)
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderControllerBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderControllerBase);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderControllerBase
class CORDL_TYPE SliderControllerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cutoutAnimateEffect, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cutoutAnimateEffect, put = __cordl_internal_set__cutoutAnimateEffect)) ::UnityW<::GlobalNamespace::CutoutAnimateEffect> _cutoutAnimateEffect;

  /// @brief Field _dissolving, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__dissolving, put = __cordl_internal_set__dissolving)) bool _dissolving;

  /// @brief Field _materialPropertyBlockController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Method AnimateCutout, addr 0x5764850, size 0x20, virtual false, abstract: false, final false
  inline void AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration);

  static inline ::GlobalNamespace::SliderControllerBase* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect> const& __cordl_internal_get__cutoutAnimateEffect() const;

  constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect>& __cordl_internal_get__cutoutAnimateEffect();

  constexpr bool const& __cordl_internal_get__dissolving() const;

  constexpr bool& __cordl_internal_get__dissolving();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr void __cordl_internal_set__cutoutAnimateEffect(::UnityW<::GlobalNamespace::CutoutAnimateEffect> value);

  constexpr void __cordl_internal_set__dissolving(bool value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  /// @brief Method .ctor, addr 0x576524c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderControllerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderControllerBase(SliderControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderControllerBase(SliderControllerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5731 };

  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _cutoutAnimateEffect, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CutoutAnimateEffect> ____cutoutAnimateEffect;

  /// @brief Field _dissolving, offset: 0x30, size: 0x1, def value: None
  bool ____dissolving;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderControllerBase, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderControllerBase, ____cutoutAnimateEffect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderControllerBase, ____dissolving) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderControllerBase, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderControllerBase*, "", "SliderControllerBase");

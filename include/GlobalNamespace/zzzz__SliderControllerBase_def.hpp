#pragma once
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
// Type: ::SliderControllerBase
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4812))
// CS Name: ::SliderControllerBase*
class CORDL_TYPE SliderControllerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _materialPropertyBlockController, offset 0x18, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  /// @brief Field _cutoutAnimateEffect, offset 0x20, size 0x8
  __declspec(property(get = __get__cutoutAnimateEffect, put = __set__cutoutAnimateEffect))::GlobalNamespace::CutoutAnimateEffect* _cutoutAnimateEffect;

  /// @brief Field _dissolving, offset 0x28, size 0x1
  __declspec(property(get = __get__dissolving, put = __set__dissolving)) bool _dissolving;

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::GlobalNamespace::CutoutAnimateEffect*& __get__cutoutAnimateEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutoutAnimateEffect*> const& __get__cutoutAnimateEffect() const;

  constexpr void __set__cutoutAnimateEffect(::GlobalNamespace::CutoutAnimateEffect* value);

  constexpr bool& __get__dissolving();

  constexpr bool const& __get__dissolving() const;

  constexpr void __set__dissolving(bool value);

  /// @brief Method AnimateCutout, addr 0x2391ba0, size 0x28, virtual false, abstract: false, final false
  inline void AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration);

  static inline ::GlobalNamespace::SliderControllerBase* New_ctor();

  /// @brief Method .ctor, addr 0x23925e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SliderControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderControllerBase(SliderControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderControllerBase(SliderControllerBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderControllerBase();

public:
  /// @brief Field _materialPropertyBlockController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

  /// @brief Field _cutoutAnimateEffect, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CutoutAnimateEffect* ____cutoutAnimateEffect;

  /// @brief Field _dissolving, offset: 0x28, size: 0x1, def value: None
  bool ____dissolving;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderControllerBase, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderControllerBase, ____materialPropertyBlockController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderControllerBase, ____cutoutAnimateEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderControllerBase, ____dissolving) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderControllerBase*, "", "SliderControllerBase");

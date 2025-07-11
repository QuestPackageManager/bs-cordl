#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderInteractionEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderInteractionEffect)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class SliderInteractionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderInteractionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderInteractionEffect);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderInteractionEffect
class CORDL_TYPE SliderInteractionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sliderInteractionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderInteractionManager, put = __cordl_internal_set__sliderInteractionManager)) ::UnityW<::GlobalNamespace::SliderInteractionManager>
      _sliderInteractionManager;

  __declspec(property(get = get_colorType)) ::GlobalNamespace::ColorType colorType;

  __declspec(property(get = get_saberInteractionParam)) float_t saberInteractionParam;

  /// @brief Method EndEffect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndEffect();

  /// @brief Method HandleAllSliderWereRemovedFromActiveSliders, addr 0x3b7af48, size 0xc, virtual false, abstract: false, final false
  inline void HandleAllSliderWereRemovedFromActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager);

  /// @brief Method HandleSliderWasAddedToActiveSliders, addr 0x3b7af3c, size 0xc, virtual false, abstract: false, final false
  inline void HandleSliderWasAddedToActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager, float_t saberInteractionParam);

  static inline ::GlobalNamespace::SliderInteractionEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b7acf8, size 0xe4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b79ee4, size 0xe4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StartEffect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartEffect(float_t saberInteractionParam);

  constexpr ::UnityW<::GlobalNamespace::SliderInteractionManager> const& __cordl_internal_get__sliderInteractionManager() const;

  constexpr ::UnityW<::GlobalNamespace::SliderInteractionManager>& __cordl_internal_get__sliderInteractionManager();

  constexpr void __cordl_internal_set__sliderInteractionManager(::UnityW<::GlobalNamespace::SliderInteractionManager> value);

  /// @brief Method .ctor, addr 0x3b7a170, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorType, addr 0x3b79fc8, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorType get_colorType();

  /// @brief Method get_saberInteractionParam, addr 0x3b7a0b8, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_saberInteractionParam();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderInteractionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderInteractionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderInteractionEffect(SliderInteractionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderInteractionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderInteractionEffect(SliderInteractionEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4174 };

  /// @brief Field _sliderInteractionManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderInteractionManager> ____sliderInteractionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderInteractionEffect, ____sliderInteractionManager) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderInteractionEffect, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderInteractionEffect*, "", "SliderInteractionEffect");

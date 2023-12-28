#pragma once
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
// Type: ::SliderInteractionEffect
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4819))
// CS Name: ::SliderInteractionEffect*
class CORDL_TYPE SliderInteractionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sliderInteractionManager, offset 0x18, size 0x8
  __declspec(property(get = __get__sliderInteractionManager, put = __set__sliderInteractionManager))::GlobalNamespace::SliderInteractionManager* _sliderInteractionManager;

  __declspec(property(get = get_saberInteractionParam)) float_t saberInteractionParam;

  __declspec(property(get = get_colorType))::GlobalNamespace::ColorType colorType;

  constexpr ::GlobalNamespace::SliderInteractionManager*& __get__sliderInteractionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderInteractionManager*> const& __get__sliderInteractionManager() const;

  constexpr void __set__sliderInteractionManager(::GlobalNamespace::SliderInteractionManager* value);

  /// @brief Method get_saberInteractionParam addr 0x2392e50 size 0x1c virtual false final false
  inline float_t get_saberInteractionParam();

  /// @brief Method get_colorType addr 0x2392d60 size 0x1c virtual false final false
  inline ::GlobalNamespace::ColorType get_colorType();

  /// @brief Method Start addr 0x2392c74 size 0xec virtual true final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2393bc0 size 0xec virtual false final false
  inline void OnDestroy();

  /// @brief Method StartEffect addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void StartEffect(float_t saberInteractionParam);

  /// @brief Method EndEffect addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void EndEffect();

  /// @brief Method HandleSliderWasAddedToActiveSliders addr 0x2393df8 size 0xc virtual false final false
  inline void HandleSliderWasAddedToActiveSliders(float_t saberInteractionParam);

  /// @brief Method HandleAllSliderWereRemovedFromActiveSliders addr 0x2393e04 size 0xc virtual false final false
  inline void HandleAllSliderWereRemovedFromActiveSliders();

  static inline ::GlobalNamespace::SliderInteractionEffect* New_ctor();

  /// @brief Method .ctor addr 0x2392f08 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SliderInteractionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderInteractionEffect(SliderInteractionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderInteractionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderInteractionEffect(SliderInteractionEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderInteractionEffect();

public:
  /// @brief Field _sliderInteractionManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SliderInteractionManager* ____sliderInteractionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderInteractionEffect, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderInteractionEffect*, "", "SliderInteractionEffect");

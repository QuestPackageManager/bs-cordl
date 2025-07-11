#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradientTintColorWithLightIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradientTintColorWithLightIds)
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientTintColorWithLightIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds);
// Dependencies LightWithIdMonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundColorsGradientTintColorWithLightIds
class CORDL_TYPE BloomPrePassBackgroundColorsGradientTintColorWithLightIds : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassBackgroundColorsGradient,
                      put = __cordl_internal_set__bloomPrePassBackgroundColorsGradient)) ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>
      _bloomPrePassBackgroundColorsGradient;

  /// @brief Method ColorWasSet, addr 0x39e0a14, size 0x20, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> const& __cordl_internal_get__bloomPrePassBackgroundColorsGradient() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>& __cordl_internal_get__bloomPrePassBackgroundColorsGradient();

  constexpr void __cordl_internal_set__bloomPrePassBackgroundColorsGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> value);

  /// @brief Method .ctor, addr 0x39e0a34, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColorsGradientTintColorWithLightIds(BloomPrePassBackgroundColorsGradientTintColorWithLightIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColorsGradientTintColorWithLightIds(BloomPrePassBackgroundColorsGradientTintColorWithLightIds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16305 };

  /// @brief Field _bloomPrePassBackgroundColorsGradient, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> ____bloomPrePassBackgroundColorsGradient;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds, ____bloomPrePassBackgroundColorsGradient) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*, "", "BloomPrePassBackgroundColorsGradientTintColorWithLightIds");

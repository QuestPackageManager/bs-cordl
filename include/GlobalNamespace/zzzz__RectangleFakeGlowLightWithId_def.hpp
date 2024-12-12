#pragma once
// IWYU pragma private; include "GlobalNamespace/RectangleFakeGlowLightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RectangleFakeGlowLightWithId)
namespace GlobalNamespace {
class RectangleFakeGlow;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class RectangleFakeGlowLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RectangleFakeGlowLightWithId);
// Dependencies LightWithIdMonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RectangleFakeGlowLightWithId
class CORDL_TYPE RectangleFakeGlowLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _alphaMul, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__alphaMul, put = __cordl_internal_set__alphaMul)) float_t _alphaMul;

  /// @brief Field _minAlpha, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _rectangleFakeGlow, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rectangleFakeGlow, put = __cordl_internal_set__rectangleFakeGlow)) ::UnityW<::GlobalNamespace::RectangleFakeGlow> _rectangleFakeGlow;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  /// @brief Method ColorWasSet, addr 0x3b990e4, size 0x2c, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::RectangleFakeGlowLightWithId* New_ctor();

  constexpr float_t const& __cordl_internal_get__alphaMul() const;

  constexpr float_t& __cordl_internal_get__alphaMul();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr ::UnityW<::GlobalNamespace::RectangleFakeGlow> const& __cordl_internal_get__rectangleFakeGlow() const;

  constexpr ::UnityW<::GlobalNamespace::RectangleFakeGlow>& __cordl_internal_get__rectangleFakeGlow();

  constexpr void __cordl_internal_set__alphaMul(float_t value);

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr void __cordl_internal_set__rectangleFakeGlow(::UnityW<::GlobalNamespace::RectangleFakeGlow> value);

  /// @brief Method .ctor, addr 0x3b99110, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x3b990c4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectangleFakeGlowLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlowLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectangleFakeGlowLightWithId(RectangleFakeGlowLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlowLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectangleFakeGlowLightWithId(RectangleFakeGlowLightWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4362 };

  /// @brief Field _minAlpha, offset: 0x34, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _alphaMul, offset: 0x38, size: 0x4, def value: None
  float_t ____alphaMul;

  /// @brief Field _rectangleFakeGlow, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RectangleFakeGlow> ____rectangleFakeGlow;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RectangleFakeGlowLightWithId, ____minAlpha) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RectangleFakeGlowLightWithId, ____alphaMul) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RectangleFakeGlowLightWithId, ____rectangleFakeGlow) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RectangleFakeGlowLightWithId, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RectangleFakeGlowLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RectangleFakeGlowLightWithId*, "", "RectangleFakeGlowLightWithId");

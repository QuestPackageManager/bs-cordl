#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityLightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityLightWithId)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityLightWithId);
// Type: ::UnityLightWithId
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityLightWithId*
class CORDL_TYPE UnityLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _light, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__light, put = __cordl_internal_set__light))::UnityW<::UnityEngine::Light> _light;

  /// @brief Field _minAlpha, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  /// @brief Method ColorWasSet, addr 0x250fd18, size 0x4c, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::UnityLightWithId* New_ctor();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__light() const;

  constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__light();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__light(::UnityW<::UnityEngine::Light> value);

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  /// @brief Method .ctor, addr 0x250fd64, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x250fcfc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityLightWithId(UnityLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityLightWithId(UnityLightWithId const&) = delete;

  /// @brief Field _light, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Light> ____light;

  /// @brief Field _intensity, offset: 0x38, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minAlpha, offset: 0x3c, size: 0x4, def value: None
  float_t ____minAlpha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityLightWithId, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityLightWithId, ____light) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityLightWithId, ____intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityLightWithId, ____minAlpha) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityLightWithId*, "", "UnityLightWithId");

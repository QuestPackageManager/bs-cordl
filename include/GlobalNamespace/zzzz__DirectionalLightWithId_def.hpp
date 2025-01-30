#pragma once
// IWYU pragma private; include "GlobalNamespace/DirectionalLightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DirectionalLightWithId)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLightWithId);
// Dependencies LightWithIdMonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DirectionalLightWithId
class CORDL_TYPE DirectionalLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _light, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__light, put = __cordl_internal_set__light)) ::UnityW<::GlobalNamespace::DirectionalLight> _light;

  /// @brief Field _minIntensity, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__minIntensity, put = __cordl_internal_set__minIntensity)) float_t _minIntensity;

  /// @brief Method ColorWasSet, addr 0x39e43c4, size 0x34, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::DirectionalLightWithId* New_ctor();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr ::UnityW<::GlobalNamespace::DirectionalLight> const& __cordl_internal_get__light() const;

  constexpr ::UnityW<::GlobalNamespace::DirectionalLight>& __cordl_internal_get__light();

  constexpr float_t const& __cordl_internal_get__minIntensity() const;

  constexpr float_t& __cordl_internal_get__minIntensity();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__light(::UnityW<::GlobalNamespace::DirectionalLight> value);

  constexpr void __cordl_internal_set__minIntensity(float_t value);

  /// @brief Method .ctor, addr 0x39e43f8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLightWithId(DirectionalLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLightWithId(DirectionalLightWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16305 };

  /// @brief Field _light, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DirectionalLight> ____light;

  /// @brief Field _intensity, offset: 0x40, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minIntensity, offset: 0x44, size: 0x4, def value: None
  float_t ____minIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DirectionalLightWithId, ____light) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithId, ____intensity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithId, ____minIntensity) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLightWithId, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithId*, "", "DirectionalLightWithId");

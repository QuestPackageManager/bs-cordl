#pragma once
// IWYU pragma private; include "GlobalNamespace/OneTimeLightColorEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OneTimeLightColorEffect)
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
// Forward declare root types
namespace GlobalNamespace {
class OneTimeLightColorEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OneTimeLightColorEffect);
// Type: ::OneTimeLightColorEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OneTimeLightColorEffect*
class CORDL_TYPE OneTimeLightColorEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _alpha, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__alpha, put = __cordl_internal_set__alpha)) float_t _alpha;

  /// @brief Field _color, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color))::UnityW<::GlobalNamespace::ColorSO> _color;

  /// @brief Field _lightWithIdManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightWithIdManager, put = __cordl_internal_set__lightWithIdManager))::UnityW<::GlobalNamespace::LightWithIdManager> _lightWithIdManager;

  /// @brief Field _lightsId, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__lightsId, put = __cordl_internal_set__lightsId)) int32_t _lightsId;

  static inline ::GlobalNamespace::OneTimeLightColorEffect* New_ctor();

  /// @brief Method Update, addr 0x26e7dd4, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__alpha() const;

  constexpr float_t& __cordl_internal_get__alpha();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__color() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__color();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightWithIdManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightWithIdManager();

  constexpr int32_t const& __cordl_internal_get__lightsId() const;

  constexpr int32_t& __cordl_internal_get__lightsId();

  constexpr void __cordl_internal_set__alpha(float_t value);

  constexpr void __cordl_internal_set__color(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__lightWithIdManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr void __cordl_internal_set__lightsId(int32_t value);

  /// @brief Method .ctor, addr 0x26e7e30, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OneTimeLightColorEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OneTimeLightColorEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OneTimeLightColorEffect(OneTimeLightColorEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OneTimeLightColorEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OneTimeLightColorEffect(OneTimeLightColorEffect const&) = delete;

  /// @brief Field _color, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____color;

  /// @brief Field _alpha, offset: 0x20, size: 0x4, def value: None
  float_t ____alpha;

  /// @brief Field _lightsId, offset: 0x24, size: 0x4, def value: None
  int32_t ____lightsId;

  /// @brief Field _lightWithIdManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightWithIdManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OneTimeLightColorEffect, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OneTimeLightColorEffect, ____color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneTimeLightColorEffect, ____alpha) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneTimeLightColorEffect, ____lightsId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneTimeLightColorEffect, ____lightWithIdManager) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OneTimeLightColorEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OneTimeLightColorEffect*, "", "OneTimeLightColorEffect");

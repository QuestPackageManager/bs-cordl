#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingSpriteSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingSpriteSpawner)
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace GlobalNamespace {
class FlyingSpriteEffect_Pool;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingSpriteSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingSpriteSpawner);
// Dependencies IFlyingObjectEffectDidFinishEvent, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingSpriteSpawner
class CORDL_TYPE FlyingSpriteSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _duration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _flyingSpriteEffectPool, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingSpriteEffectPool, put = __cordl_internal_set__flyingSpriteEffectPool)) ::GlobalNamespace::FlyingSpriteEffect_Pool* _flyingSpriteEffectPool;

  /// @brief Field _material, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _shake, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__shake, put = __cordl_internal_set__shake)) bool _shake;

  /// @brief Field _sprite, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sprite, put = __cordl_internal_set__sprite)) ::UnityW<::UnityEngine::Sprite> _sprite;

  /// @brief Field _targetYPos, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__targetYPos, put = __cordl_internal_set__targetYPos)) float_t _targetYPos;

  /// @brief Field _targetZPos, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__targetZPos, put = __cordl_internal_set__targetZPos)) float_t _targetZPos;

  /// @brief Field _xSpread, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__xSpread, put = __cordl_internal_set__xSpread)) float_t _xSpread;

  /// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

  /// @brief Method HandleFlyingObjectEffectDidFinish, addr 0x3b8afb4, size 0x11c, virtual true, abstract: false, final true
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  static inline ::GlobalNamespace::FlyingSpriteSpawner* New_ctor();

  /// @brief Method SpawnFlyingSprite, addr 0x3b8a180, size 0x1ec, virtual false, abstract: false, final false
  inline void SpawnFlyingSprite(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr ::GlobalNamespace::FlyingSpriteEffect_Pool* const& __cordl_internal_get__flyingSpriteEffectPool() const;

  constexpr ::GlobalNamespace::FlyingSpriteEffect_Pool*& __cordl_internal_get__flyingSpriteEffectPool();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr bool const& __cordl_internal_get__shake() const;

  constexpr bool& __cordl_internal_get__shake();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__sprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__sprite();

  constexpr float_t const& __cordl_internal_get__targetYPos() const;

  constexpr float_t& __cordl_internal_get__targetYPos();

  constexpr float_t const& __cordl_internal_get__targetZPos() const;

  constexpr float_t& __cordl_internal_get__targetZPos();

  constexpr float_t const& __cordl_internal_get__xSpread() const;

  constexpr float_t& __cordl_internal_get__xSpread();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__flyingSpriteEffectPool(::GlobalNamespace::FlyingSpriteEffect_Pool* value);

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__shake(bool value);

  constexpr void __cordl_internal_set__sprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__targetYPos(float_t value);

  constexpr void __cordl_internal_set__targetZPos(float_t value);

  constexpr void __cordl_internal_set__xSpread(float_t value);

  /// @brief Method .ctor, addr 0x3b8b0d0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent* i___GlobalNamespace__IFlyingObjectEffectDidFinishEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingSpriteSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingSpriteSpawner(FlyingSpriteSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingSpriteSpawner(FlyingSpriteSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4247 };

  /// @brief Field _sprite, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____sprite;

  /// @brief Field _material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  /// @brief Field _duration, offset: 0x30, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _xSpread, offset: 0x34, size: 0x4, def value: None
  float_t ____xSpread;

  /// @brief Field _targetYPos, offset: 0x38, size: 0x4, def value: None
  float_t ____targetYPos;

  /// @brief Field _targetZPos, offset: 0x3c, size: 0x4, def value: None
  float_t ____targetZPos;

  /// @brief Field _color, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _shake, offset: 0x50, size: 0x1, def value: None
  bool ____shake;

  /// @brief Field _flyingSpriteEffectPool, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::FlyingSpriteEffect_Pool* ____flyingSpriteEffectPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____sprite) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____xSpread) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____targetYPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____targetZPos) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____color) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____shake) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____flyingSpriteEffectPool) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingSpriteSpawner, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingSpriteSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingSpriteSpawner*, "", "FlyingSpriteSpawner");

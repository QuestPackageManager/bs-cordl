#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingTextSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingTextSpawner)
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace GlobalNamespace {
class FlyingTextEffect_Pool;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingTextSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingTextSpawner);
// Dependencies IFlyingObjectEffectDidFinishEvent, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingTextSpawner
class CORDL_TYPE FlyingTextSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _duration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _flyingTextEffectPool, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingTextEffectPool, put = __cordl_internal_set__flyingTextEffectPool)) ::GlobalNamespace::FlyingTextEffect_Pool* _flyingTextEffectPool;

  /// @brief Field _fontSize, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__fontSize, put = __cordl_internal_set__fontSize)) float_t _fontSize;

  /// @brief Field _shake, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__shake, put = __cordl_internal_set__shake)) bool _shake;

  /// @brief Field _targetYPos, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__targetYPos, put = __cordl_internal_set__targetYPos)) float_t _targetYPos;

  /// @brief Field _targetZPos, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__targetZPos, put = __cordl_internal_set__targetZPos)) float_t _targetZPos;

  /// @brief Field _xSpread, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__xSpread, put = __cordl_internal_set__xSpread)) float_t _xSpread;

  /// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

  /// @brief Method HandleFlyingObjectEffectDidFinish, addr 0x3b8b2cc, size 0x11c, virtual true, abstract: false, final true
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  static inline ::GlobalNamespace::FlyingTextSpawner* New_ctor();

  /// @brief Method SpawnText, addr 0x3b8b0ec, size 0x1e0, virtual false, abstract: false, final false
  inline void SpawnText(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation, ::StringW text);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr ::GlobalNamespace::FlyingTextEffect_Pool* const& __cordl_internal_get__flyingTextEffectPool() const;

  constexpr ::GlobalNamespace::FlyingTextEffect_Pool*& __cordl_internal_get__flyingTextEffectPool();

  constexpr float_t const& __cordl_internal_get__fontSize() const;

  constexpr float_t& __cordl_internal_get__fontSize();

  constexpr bool const& __cordl_internal_get__shake() const;

  constexpr bool& __cordl_internal_get__shake();

  constexpr float_t const& __cordl_internal_get__targetYPos() const;

  constexpr float_t& __cordl_internal_get__targetYPos();

  constexpr float_t const& __cordl_internal_get__targetZPos() const;

  constexpr float_t& __cordl_internal_get__targetZPos();

  constexpr float_t const& __cordl_internal_get__xSpread() const;

  constexpr float_t& __cordl_internal_get__xSpread();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__flyingTextEffectPool(::GlobalNamespace::FlyingTextEffect_Pool* value);

  constexpr void __cordl_internal_set__fontSize(float_t value);

  constexpr void __cordl_internal_set__shake(bool value);

  constexpr void __cordl_internal_set__targetYPos(float_t value);

  constexpr void __cordl_internal_set__targetZPos(float_t value);

  constexpr void __cordl_internal_set__xSpread(float_t value);

  /// @brief Method .ctor, addr 0x3b8b3e8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent* i___GlobalNamespace__IFlyingObjectEffectDidFinishEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingTextSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingTextSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingTextSpawner(FlyingTextSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingTextSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingTextSpawner(FlyingTextSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4248 };

  /// @brief Field _duration, offset: 0x20, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _xSpread, offset: 0x24, size: 0x4, def value: None
  float_t ____xSpread;

  /// @brief Field _targetYPos, offset: 0x28, size: 0x4, def value: None
  float_t ____targetYPos;

  /// @brief Field _targetZPos, offset: 0x2c, size: 0x4, def value: None
  float_t ____targetZPos;

  /// @brief Field _color, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _fontSize, offset: 0x40, size: 0x4, def value: None
  float_t ____fontSize;

  /// @brief Field _shake, offset: 0x44, size: 0x1, def value: None
  bool ____shake;

  /// @brief Field _flyingTextEffectPool, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::FlyingTextEffect_Pool* ____flyingTextEffectPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingTextSpawner, ____duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextSpawner, ____xSpread) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextSpawner, ____targetYPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextSpawner, ____targetZPos) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextSpawner, ____color) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextSpawner, ____fontSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextSpawner, ____shake) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingTextSpawner, ____flyingTextEffectPool) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingTextSpawner, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingTextSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingTextSpawner*, "", "FlyingTextSpawner");

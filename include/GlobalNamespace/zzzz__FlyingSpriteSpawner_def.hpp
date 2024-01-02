#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingSpriteSpawner)
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class __FlyingSpriteEffect__Pool;
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
// Type: ::FlyingSpriteSpawner
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4890))
// CS Name: ::FlyingSpriteSpawner*
class CORDL_TYPE FlyingSpriteSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sprite, offset 0x18, size 0x8
  __declspec(property(get = __get__sprite, put = __set__sprite))::UnityEngine::Sprite* _sprite;

  /// @brief Field _material, offset 0x20, size 0x8
  __declspec(property(get = __get__material, put = __set__material))::UnityEngine::Material* _material;

  /// @brief Field _duration, offset 0x28, size 0x4
  __declspec(property(get = __get__duration, put = __set__duration)) float_t _duration;

  /// @brief Field _xSpread, offset 0x2c, size 0x4
  __declspec(property(get = __get__xSpread, put = __set__xSpread)) float_t _xSpread;

  /// @brief Field _targetYPos, offset 0x30, size 0x4
  __declspec(property(get = __get__targetYPos, put = __set__targetYPos)) float_t _targetYPos;

  /// @brief Field _targetZPos, offset 0x34, size 0x4
  __declspec(property(get = __get__targetZPos, put = __set__targetZPos)) float_t _targetZPos;

  /// @brief Field _color, offset 0x38, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _shake, offset 0x48, size 0x1
  __declspec(property(get = __get__shake, put = __set__shake)) bool _shake;

  /// @brief Field _flyingSpriteEffectPool, offset 0x50, size 0x8
  __declspec(property(get = __get__flyingSpriteEffectPool, put = __set__flyingSpriteEffectPool))::GlobalNamespace::__FlyingSpriteEffect__Pool* _flyingSpriteEffectPool;

  /// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
  constexpr operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

  constexpr ::UnityEngine::Sprite*& __get__sprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__sprite() const;

  constexpr void __set__sprite(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Material*& __get__material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material() const;

  constexpr void __set__material(::UnityEngine::Material* value);

  constexpr float_t& __get__duration();

  constexpr float_t const& __get__duration() const;

  constexpr void __set__duration(float_t value);

  constexpr float_t& __get__xSpread();

  constexpr float_t const& __get__xSpread() const;

  constexpr void __set__xSpread(float_t value);

  constexpr float_t& __get__targetYPos();

  constexpr float_t const& __get__targetYPos() const;

  constexpr void __set__targetYPos(float_t value);

  constexpr float_t& __get__targetZPos();

  constexpr float_t const& __get__targetZPos() const;

  constexpr void __set__targetZPos(float_t value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr bool& __get__shake();

  constexpr bool const& __get__shake() const;

  constexpr void __set__shake(bool value);

  constexpr ::GlobalNamespace::__FlyingSpriteEffect__Pool*& __get__flyingSpriteEffectPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingSpriteEffect__Pool*> const& __get__flyingSpriteEffectPool() const;

  constexpr void __set__flyingSpriteEffectPool(::GlobalNamespace::__FlyingSpriteEffect__Pool* value);

  /// @brief Method SpawnFlyingSprite, addr 0x23a1114, size 0x1fc, virtual false, abstract: false, final false
  inline void SpawnFlyingSprite(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation);

  /// @brief Method HandleFlyingObjectEffectDidFinish, addr 0x23a1df0, size 0x11c, virtual true, abstract: false, final true
  inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);

  static inline ::GlobalNamespace::FlyingSpriteSpawner* New_ctor();

  /// @brief Method .ctor, addr 0x23a1f0c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingSpriteSpawner(FlyingSpriteSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingSpriteSpawner(FlyingSpriteSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingSpriteSpawner();

public:
  /// @brief Field _sprite, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____sprite;

  /// @brief Field _material, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Material* ____material;

  /// @brief Field _duration, offset: 0x28, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _xSpread, offset: 0x2c, size: 0x4, def value: None
  float_t ____xSpread;

  /// @brief Field _targetYPos, offset: 0x30, size: 0x4, def value: None
  float_t ____targetYPos;

  /// @brief Field _targetZPos, offset: 0x34, size: 0x4, def value: None
  float_t ____targetZPos;

  /// @brief Field _color, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _shake, offset: 0x48, size: 0x1, def value: None
  bool ____shake;

  /// @brief Field _flyingSpriteEffectPool, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__FlyingSpriteEffect__Pool* ____flyingSpriteEffectPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingSpriteSpawner, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____sprite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____xSpread) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____targetYPos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____targetZPos) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____color) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____shake) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingSpriteSpawner, ____flyingSpriteEffectPool) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingSpriteSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingSpriteSpawner*, "", "FlyingSpriteSpawner");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BTSStarTextEffectController)
namespace GlobalNamespace {
class __BTSStarTextEffectController__Pool;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEffectController;
}
namespace GlobalNamespace {
class __BTSStarTextEffectController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSStarTextEffectController);
MARK_REF_PTR_T(::GlobalNamespace::__BTSStarTextEffectController__Pool);
// Type: ::BTSStarTextEffectController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3979))
// CS Name: ::BTSStarTextEffectController*
class CORDL_TYPE BTSStarTextEffectController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__BTSStarTextEffectController__Pool;

  /// @brief Field _transform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _spriteRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteRenderer, put = __cordl_internal_set__spriteRenderer))::UnityW<::UnityEngine::SpriteRenderer> _spriteRenderer;

  /// @brief Field _animation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__animation, put = __cordl_internal_set__animation))::UnityW<::UnityEngine::Animation> _animation;

  /// @brief Field _currentAnimationDuration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__currentAnimationDuration, put = __cordl_internal_set__currentAnimationDuration)) float_t _currentAnimationDuration;

  __declspec(property(get = get_animationDuration)) float_t animationDuration;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__spriteRenderer();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__spriteRenderer() const;

  constexpr void __cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get__animation();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get__animation() const;

  constexpr void __cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value);

  constexpr float_t& __cordl_internal_get__currentAnimationDuration();

  constexpr float_t const& __cordl_internal_get__currentAnimationDuration() const;

  constexpr void __cordl_internal_set__currentAnimationDuration(float_t value);

  /// @brief Method get_animationDuration, addr 0x221d164, size 0x8, virtual false, abstract: false, final false
  inline float_t get_animationDuration();

  /// @brief Method Reinitialize, addr 0x221d16c, size 0x108, virtual false, abstract: false, final false
  inline void Reinitialize(::UnityEngine::Sprite* sprite, ::UnityEngine::Transform* parentTransform, float_t desiredAnimationLength);

  static inline ::GlobalNamespace::BTSStarTextEffectController* New_ctor();

  /// @brief Method .ctor, addr 0x221d274, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSStarTextEffectController(BTSStarTextEffectController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSStarTextEffectController(BTSStarTextEffectController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSStarTextEffectController();

public:
  /// @brief Field _transform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _spriteRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____spriteRenderer;

  /// @brief Field _animation, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ____animation;

  /// @brief Field _currentAnimationDuration, offset: 0x30, size: 0x4, def value: None
  float_t ____currentAnimationDuration;

  /// @brief Field kAnimationName offset 0xffffffff size 0x8
  static constexpr ::ConstString kAnimationName{ u"StarTextShort" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEffectController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEffectController, ____transform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEffectController, ____spriteRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEffectController, ____animation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEffectController, ____currentAnimationDuration) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3979)), TypeDefinitionIndex(TypeDefinitionIndex(10276)), TypeDefinitionIndex(TypeDefinitionIndex(10291)),
// TypeDefinitionIndex(TypeDefinitionIndex(11053)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11053), inst: 3514 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(3978)) CS
// Name: ::BTSStarTextEffectController::Pool*
class CORDL_TYPE __BTSStarTextEffectController__Pool
    : public ::Zenject::MonoMemoryPool_4<::UnityW<::UnityEngine::Sprite>, ::UnityW<::UnityEngine::Transform>, float_t, ::UnityW<::GlobalNamespace::BTSStarTextEffectController>> {
public:
  // Declarations
  /// @brief Method Reinitialize, addr 0x221d27c, size 0x14, virtual true, abstract: false, final false
  inline void Reinitialize(::UnityEngine::Sprite* sprite, ::UnityEngine::Transform* transform, float_t desiredAnimationLength,
                           ::GlobalNamespace::BTSStarTextEffectController* starTextEffectController);

  static inline ::GlobalNamespace::__BTSStarTextEffectController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x221d290, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEffectController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BTSStarTextEffectController__Pool(__BTSStarTextEffectController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEffectController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BTSStarTextEffectController__Pool(__BTSStarTextEffectController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BTSStarTextEffectController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSStarTextEffectController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEffectController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEffectController*, "", "BTSStarTextEffectController");
NEED_NO_BOX(::GlobalNamespace::__BTSStarTextEffectController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSStarTextEffectController__Pool*, "", "BTSStarTextEffectController/Pool");

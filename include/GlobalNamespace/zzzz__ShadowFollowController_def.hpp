#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(ShadowFollowController)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ShadowFollowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShadowFollowController);
// Type: ::ShadowFollowController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4109))
// CS Name: ::ShadowFollowController*
class CORDL_TYPE ShadowFollowController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _shadowTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__shadowTransform, put = __set__shadowTransform))::UnityEngine::Transform* _shadowTransform;

  /// @brief Field _targetTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__targetTransform, put = __set__targetTransform))::UnityEngine::Transform* _targetTransform;

  /// @brief Field _shadowSpriteRenderer, offset 0x28, size 0x8
  __declspec(property(get = __get__shadowSpriteRenderer, put = __set__shadowSpriteRenderer))::UnityEngine::SpriteRenderer* _shadowSpriteRenderer;

  /// @brief Field _shadowHeightRange, offset 0x30, size 0x8
  __declspec(property(get = __get__shadowHeightRange, put = __set__shadowHeightRange))::UnityEngine::Vector2 _shadowHeightRange;

  /// @brief Field _shadowSizeRange, offset 0x38, size 0x8
  __declspec(property(get = __get__shadowSizeRange, put = __set__shadowSizeRange))::UnityEngine::Vector2 _shadowSizeRange;

  /// @brief Field _shadowAlphaRange, offset 0x40, size 0x8
  __declspec(property(get = __get__shadowAlphaRange, put = __set__shadowAlphaRange))::UnityEngine::Vector2 _shadowAlphaRange;

  constexpr ::UnityEngine::Transform*& __get__shadowTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__shadowTransform() const;

  constexpr void __set__shadowTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__targetTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__targetTransform() const;

  constexpr void __set__targetTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::SpriteRenderer*& __get__shadowSpriteRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& __get__shadowSpriteRenderer() const;

  constexpr void __set__shadowSpriteRenderer(::UnityEngine::SpriteRenderer* value);

  constexpr ::UnityEngine::Vector2& __get__shadowHeightRange();

  constexpr ::UnityEngine::Vector2 const& __get__shadowHeightRange() const;

  constexpr void __set__shadowHeightRange(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__shadowSizeRange();

  constexpr ::UnityEngine::Vector2 const& __get__shadowSizeRange() const;

  constexpr void __set__shadowSizeRange(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__shadowAlphaRange();

  constexpr ::UnityEngine::Vector2 const& __get__shadowAlphaRange() const;

  constexpr void __set__shadowAlphaRange(::UnityEngine::Vector2 value);

  /// @brief Method SetTargetTransform addr 0x20d835c size 0x8 virtual false final false
  inline void SetTargetTransform(::UnityEngine::Transform* target);

  /// @brief Method Update addr 0x20d8364 size 0xe0 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::ShadowFollowController* New_ctor();

  /// @brief Method .ctor addr 0x20d8444 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ShadowFollowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadowFollowController(ShadowFollowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadowFollowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadowFollowController(ShadowFollowController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowFollowController();

public:
  /// @brief Field _shadowTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____shadowTransform;

  /// @brief Field _targetTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____targetTransform;

  /// @brief Field _shadowSpriteRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::SpriteRenderer* ____shadowSpriteRenderer;

  /// @brief Field _shadowHeightRange, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____shadowHeightRange;

  /// @brief Field _shadowSizeRange, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____shadowSizeRange;

  /// @brief Field _shadowAlphaRange, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____shadowAlphaRange;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShadowFollowController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadowFollowController, ____shadowTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadowFollowController, ____targetTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadowFollowController, ____shadowSpriteRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadowFollowController, ____shadowHeightRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadowFollowController, ____shadowSizeRange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadowFollowController, ____shadowAlphaRange) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShadowFollowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShadowFollowController*, "", "ShadowFollowController");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AvatarShadowController)
namespace BeatSaber::AvatarCore {
class AvatarController;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarShadowController;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarShadowController);
// Type: BeatSaber.AvatarCore::AvatarShadowController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::AvatarShadowController*
class CORDL_TYPE AvatarShadowController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _alpha, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__alpha, put = __cordl_internal_set__alpha)) float_t _alpha;

  /// @brief Field _avatarController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarController, put = __cordl_internal_set__avatarController))::UnityW<::BeatSaber::AvatarCore::AvatarController> _avatarController;

  /// @brief Field _distanceScale, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__distanceScale, put = __cordl_internal_set__distanceScale)) float_t _distanceScale;

  /// @brief Field _floorYPos, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__floorYPos, put = __cordl_internal_set__floorYPos)) float_t _floorYPos;

  /// @brief Field _floorYPosLocal, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__floorYPosLocal, put = __cordl_internal_set__floorYPosLocal)) bool _floorYPosLocal;

  /// @brief Field _scale, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__scale, put = __cordl_internal_set__scale)) float_t _scale;

  /// @brief Field _spriteRenderer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteRenderer, put = __cordl_internal_set__spriteRenderer))::UnityW<::UnityEngine::SpriteRenderer> _spriteRenderer;

  /// @brief Field _transform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method FollowPosition, addr 0xe5dacc, size 0xe8, virtual false, abstract: false, final false
  inline void FollowPosition(::UnityEngine::Vector3 followPosition);

  static inline ::BeatSaber::AvatarCore::AvatarShadowController* New_ctor();

  /// @brief Method Start, addr 0xe5da08, size 0x1c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0xe5da24, size 0xa8, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__alpha() const;

  constexpr float_t& __cordl_internal_get__alpha();

  constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarController> const& __cordl_internal_get__avatarController() const;

  constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarController>& __cordl_internal_get__avatarController();

  constexpr float_t const& __cordl_internal_get__distanceScale() const;

  constexpr float_t& __cordl_internal_get__distanceScale();

  constexpr float_t const& __cordl_internal_get__floorYPos() const;

  constexpr float_t& __cordl_internal_get__floorYPos();

  constexpr bool const& __cordl_internal_get__floorYPosLocal() const;

  constexpr bool& __cordl_internal_get__floorYPosLocal();

  constexpr float_t const& __cordl_internal_get__scale() const;

  constexpr float_t& __cordl_internal_get__scale();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__spriteRenderer() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__spriteRenderer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__alpha(float_t value);

  constexpr void __cordl_internal_set__avatarController(::UnityW<::BeatSaber::AvatarCore::AvatarController> value);

  constexpr void __cordl_internal_set__distanceScale(float_t value);

  constexpr void __cordl_internal_set__floorYPos(float_t value);

  constexpr void __cordl_internal_set__floorYPosLocal(bool value);

  constexpr void __cordl_internal_set__scale(float_t value);

  constexpr void __cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0xe5dbb4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarShadowController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarShadowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarShadowController(AvatarShadowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarShadowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarShadowController(AvatarShadowController const&) = delete;

  /// @brief Field _spriteRenderer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____spriteRenderer;

  /// @brief Field _distanceScale, offset: 0x20, size: 0x4, def value: None
  float_t ____distanceScale;

  /// @brief Field _scale, offset: 0x24, size: 0x4, def value: None
  float_t ____scale;

  /// @brief Field _alpha, offset: 0x28, size: 0x4, def value: None
  float_t ____alpha;

  /// @brief Field _floorYPos, offset: 0x2c, size: 0x4, def value: None
  float_t ____floorYPos;

  /// @brief Field _floorYPosLocal, offset: 0x30, size: 0x1, def value: None
  bool ____floorYPosLocal;

  /// @brief Field _avatarController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::BeatSaber::AvatarCore::AvatarController> ____avatarController;

  /// @brief Field _transform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarShadowController, 0x48>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarShadowController, ____spriteRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarShadowController, ____distanceScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarShadowController, ____scale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarShadowController, ____alpha) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarShadowController, ____floorYPos) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarShadowController, ____floorYPosLocal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarShadowController, ____avatarController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarShadowController, ____transform) == 0x40, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarShadowController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarShadowController*, "BeatSaber.AvatarCore", "AvatarShadowController");

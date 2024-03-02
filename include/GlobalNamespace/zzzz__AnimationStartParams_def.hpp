#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimationStartParams)
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimationStartParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnimationStartParams);
// Type: ::AnimationStartParams
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AnimationStartParams*
class CORDL_TYPE AnimationStartParams : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animation, put = __cordl_internal_set__animation))::UnityW<::UnityEngine::Animation> _animation;

  /// @brief Field _speed, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__speed, put = __cordl_internal_set__speed)) float_t _speed;

  /// @brief Field _timeOffset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__timeOffset, put = __cordl_internal_set__timeOffset)) float_t _timeOffset;

  static inline ::GlobalNamespace::AnimationStartParams* New_ctor();

  /// @brief Method Start, addr 0x2253a54, size 0x2d8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get__animation() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get__animation();

  constexpr float_t const& __cordl_internal_get__speed() const;

  constexpr float_t& __cordl_internal_get__speed();

  constexpr float_t const& __cordl_internal_get__timeOffset() const;

  constexpr float_t& __cordl_internal_get__timeOffset();

  constexpr void __cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value);

  constexpr void __cordl_internal_set__speed(float_t value);

  constexpr void __cordl_internal_set__timeOffset(float_t value);

  /// @brief Method .ctor, addr 0x2253d2c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationStartParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationStartParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationStartParams(AnimationStartParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationStartParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationStartParams(AnimationStartParams const&) = delete;

  /// @brief Field _timeOffset, offset: 0x18, size: 0x4, def value: None
  float_t ____timeOffset;

  /// @brief Field _speed, offset: 0x1c, size: 0x4, def value: None
  float_t ____speed;

  /// @brief Field _animation, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ____animation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnimationStartParams, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationStartParams, ____timeOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationStartParams, ____speed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationStartParams, ____animation) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnimationStartParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnimationStartParams*, "", "AnimationStartParams");

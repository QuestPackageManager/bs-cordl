#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__TrackedReference_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationState)
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine {
class AnimationState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimationState);
// Type: UnityEngine::AnimationState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10209))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14866))
// CS Name: ::UnityEngine::AnimationState*
class CORDL_TYPE AnimationState : public ::UnityEngine::TrackedReference {
public:
  // Declarations
  __declspec(property(put = set_time)) float_t time;

  __declspec(property(put = set_normalizedTime)) float_t normalizedTime;

  __declspec(property(put = set_speed)) float_t speed;

  __declspec(property(put = set_layer)) int32_t layer;

  __declspec(property(get = get_clip))::UnityEngine::AnimationClip* clip;

  /// @brief Method set_time, addr 0x2c904a0, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method set_normalizedTime, addr 0x2c904ec, size 0x4c, virtual false, abstract: false, final false
  inline void set_normalizedTime(float_t value);

  /// @brief Method set_speed, addr 0x2c90538, size 0x4c, virtual false, abstract: false, final false
  inline void set_speed(float_t value);

  /// @brief Method set_layer, addr 0x2c90584, size 0x44, virtual false, abstract: false, final false
  inline void set_layer(int32_t value);

  /// @brief Method get_clip, addr 0x2c900f0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationClip* get_clip();

  static inline ::UnityEngine::AnimationState* New_ctor();

  /// @brief Method .ctor, addr 0x2c905c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationState(AnimationState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationState(AnimationState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationState();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationState, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationState*, "UnityEngine", "AnimationState");

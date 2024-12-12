#pragma once
// IWYU pragma private; include "UnityEngine/AnimationState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__TrackedReference_def.hpp"
#include <cmath>
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
// Dependencies UnityEngine.TrackedReference
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationState
class CORDL_TYPE AnimationState : public ::UnityEngine::TrackedReference {
public:
  // Declarations
  __declspec(property(get = get_clip)) ::UnityW<::UnityEngine::AnimationClip> clip;

  __declspec(property(put = set_normalizedTime)) float_t normalizedTime;

  __declspec(property(put = set_speed)) float_t speed;

  __declspec(property(put = set_time)) float_t time;

  static inline ::UnityEngine::AnimationState* New_ctor();

  /// @brief Method .ctor, addr 0x484bf5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clip, addr 0x484bac8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_clip();

  /// @brief Method set_normalizedTime, addr 0x484bec4, size 0x4c, virtual false, abstract: false, final false
  inline void set_normalizedTime(float_t value);

  /// @brief Method set_speed, addr 0x484bf10, size 0x4c, virtual false, abstract: false, final false
  inline void set_speed(float_t value);

  /// @brief Method set_time, addr 0x484be78, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationState(AnimationState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationState(AnimationState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16852 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationState, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationState*, "UnityEngine", "AnimationState");

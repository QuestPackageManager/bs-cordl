#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomAnimationStartTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RandomAnimationStartTime)
namespace GlobalNamespace {
class IRandom;
}
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomAnimationStartTime;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomAnimationStartTime);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomAnimationStartTime
class CORDL_TYPE RandomAnimationStartTime : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animation, put = __cordl_internal_set__animation)) ::UnityW<::UnityEngine::Animation> _animation;

  /// @brief Field _random, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::GlobalNamespace::IRandom* _random;

  static inline ::GlobalNamespace::RandomAnimationStartTime* New_ctor();

  /// @brief Method PlayAnimation, addr 0x563de44, size 0x2bc, virtual false, abstract: false, final false
  inline void PlayAnimation();

  /// @brief Method Start, addr 0x563de40, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get__animation() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get__animation();

  constexpr ::GlobalNamespace::IRandom* const& __cordl_internal_get__random() const;

  constexpr ::GlobalNamespace::IRandom*& __cordl_internal_get__random();

  constexpr void __cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value);

  constexpr void __cordl_internal_set__random(::GlobalNamespace::IRandom* value);

  /// @brief Method .ctor, addr 0x563e100, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomAnimationStartTime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomAnimationStartTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomAnimationStartTime(RandomAnimationStartTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomAnimationStartTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomAnimationStartTime(RandomAnimationStartTime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20053 };

  /// @brief Field _animation, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ____animation;

  /// @brief Field _random, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IRandom* ____random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomAnimationStartTime, ____animation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomAnimationStartTime, ____random) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomAnimationStartTime, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomAnimationStartTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomAnimationStartTime*, "", "RandomAnimationStartTime");

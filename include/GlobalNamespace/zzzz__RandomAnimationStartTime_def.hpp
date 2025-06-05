#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomAnimationStartTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RandomAnimationStartTime)
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

  static inline ::GlobalNamespace::RandomAnimationStartTime* New_ctor();

  /// @brief Method Start, addr 0x39c3734, size 0x2d8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get__animation() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get__animation();

  constexpr void __cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value);

  /// @brief Method .ctor, addr 0x39c3a0c, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16435 };

  /// @brief Field _animation, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ____animation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomAnimationStartTime, ____animation) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomAnimationStartTime, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomAnimationStartTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomAnimationStartTime*, "", "RandomAnimationStartTime");

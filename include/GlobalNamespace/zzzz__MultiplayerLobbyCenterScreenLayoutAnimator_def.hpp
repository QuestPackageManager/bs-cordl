#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyCenterScreenLayoutAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLobbyCenterScreenLayoutAnimator)
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyCenterScreenLayoutAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyCenterScreenLayoutAnimator
class CORDL_TYPE MultiplayerLobbyCenterScreenLayoutAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _nextLevelBasePosition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nextLevelBasePosition, put = __cordl_internal_set__nextLevelBasePosition)) ::UnityW<::UnityEngine::RectTransform> _nextLevelBasePosition;

  /// @brief Field _nextLevelCountdownPosition, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextLevelCountdownPosition, put = __cordl_internal_set__nextLevelCountdownPosition)) ::UnityW<::UnityEngine::RectTransform>
      _nextLevelCountdownPosition;

  /// @brief Field _nextLevelTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nextLevelTransform, put = __cordl_internal_set__nextLevelTransform)) ::UnityW<::UnityEngine::RectTransform> _nextLevelTransform;

  /// @brief Field _transitionDuration, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__transitionDuration, put = __cordl_internal_set__transitionDuration)) float_t _transitionDuration;

  /// @brief Field _tweeningManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Method Move, addr 0x3c0d2d8, size 0x138, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, float_t duration);

  static inline ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* New_ctor();

  /// @brief Method StartCountdown, addr 0x3c0d254, size 0x84, virtual false, abstract: false, final false
  inline void StartCountdown();

  /// @brief Method StopCountdown, addr 0x3c0d410, size 0xa0, virtual false, abstract: false, final false
  inline void StopCountdown(bool instant);

  /// @brief Method <Move>b__7_0, addr 0x3c0d4b8, size 0x1c, virtual false, abstract: false, final false
  inline void _Move_b__7_0(::UnityEngine::Vector3 pos);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__nextLevelBasePosition() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__nextLevelBasePosition();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__nextLevelCountdownPosition() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__nextLevelCountdownPosition();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__nextLevelTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__nextLevelTransform();

  constexpr float_t const& __cordl_internal_get__transitionDuration() const;

  constexpr float_t& __cordl_internal_get__transitionDuration();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__nextLevelBasePosition(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__nextLevelCountdownPosition(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__nextLevelTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__transitionDuration(float_t value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x3c0d4b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyCenterScreenLayoutAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenLayoutAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyCenterScreenLayoutAnimator(MultiplayerLobbyCenterScreenLayoutAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenLayoutAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyCenterScreenLayoutAnimator(MultiplayerLobbyCenterScreenLayoutAnimator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4832 };

  /// @brief Field _nextLevelTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____nextLevelTransform;

  /// @brief Field _nextLevelBasePosition, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____nextLevelBasePosition;

  /// @brief Field _nextLevelCountdownPosition, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____nextLevelCountdownPosition;

  /// @brief Field _transitionDuration, offset: 0x38, size: 0x4, def value: None
  float_t ____transitionDuration;

  /// @brief Field _tweeningManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator, ____nextLevelTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator, ____nextLevelBasePosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator, ____nextLevelCountdownPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator, ____transitionDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator, ____tweeningManager) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*, "", "MultiplayerLobbyCenterScreenLayoutAnimator");

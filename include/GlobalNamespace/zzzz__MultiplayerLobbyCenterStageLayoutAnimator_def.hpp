#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLobbyCenterStageLayoutAnimator)
namespace UnityEngine {
class RectTransform;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyCenterStageLayoutAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator);
// Type: ::MultiplayerLobbyCenterStageLayoutAnimator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5562))
// CS Name: ::MultiplayerLobbyCenterStageLayoutAnimator*
class CORDL_TYPE MultiplayerLobbyCenterStageLayoutAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _nextLevelTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__nextLevelTransform, put = __set__nextLevelTransform))::UnityEngine::RectTransform* _nextLevelTransform;

  /// @brief Field _nextLevelBasePosition, offset 0x20, size 0x8
  __declspec(property(get = __get__nextLevelBasePosition, put = __set__nextLevelBasePosition))::UnityEngine::RectTransform* _nextLevelBasePosition;

  /// @brief Field _nextLevelCountdownPosition, offset 0x28, size 0x8
  __declspec(property(get = __get__nextLevelCountdownPosition, put = __set__nextLevelCountdownPosition))::UnityEngine::RectTransform* _nextLevelCountdownPosition;

  /// @brief Field _transitionDuration, offset 0x30, size 0x4
  __declspec(property(get = __get__transitionDuration, put = __set__transitionDuration)) float_t _transitionDuration;

  /// @brief Field _tweeningManager, offset 0x38, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  constexpr ::UnityEngine::RectTransform*& __get__nextLevelTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__nextLevelTransform() const;

  constexpr void __set__nextLevelTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::RectTransform*& __get__nextLevelBasePosition();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__nextLevelBasePosition() const;

  constexpr void __set__nextLevelBasePosition(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::RectTransform*& __get__nextLevelCountdownPosition();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__nextLevelCountdownPosition() const;

  constexpr void __set__nextLevelCountdownPosition(::UnityEngine::RectTransform* value);

  constexpr float_t& __get__transitionDuration();

  constexpr float_t const& __get__transitionDuration() const;

  constexpr void __set__transitionDuration(float_t value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  /// @brief Method StartCountdown, addr 0x22a36bc, size 0x84, virtual false, abstract: false, final false
  inline void StartCountdown();

  /// @brief Method StopCountdown, addr 0x22a387c, size 0xa0, virtual false, abstract: false, final false
  inline void StopCountdown(bool instant);

  /// @brief Method Move, addr 0x22a3740, size 0x13c, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, float_t duration);

  static inline ::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator* New_ctor();

  /// @brief Method .ctor, addr 0x22a391c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Move>b__7_0, addr 0x22a3924, size 0x1c, virtual false, abstract: false, final false
  inline void _Move_b__7_0(::UnityEngine::Vector3 pos);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageLayoutAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyCenterStageLayoutAnimator(MultiplayerLobbyCenterStageLayoutAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageLayoutAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyCenterStageLayoutAnimator(MultiplayerLobbyCenterStageLayoutAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyCenterStageLayoutAnimator();

public:
  /// @brief Field _nextLevelTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____nextLevelTransform;

  /// @brief Field _nextLevelBasePosition, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____nextLevelBasePosition;

  /// @brief Field _nextLevelCountdownPosition, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____nextLevelCountdownPosition;

  /// @brief Field _transitionDuration, offset: 0x30, size: 0x4, def value: None
  float_t ____transitionDuration;

  /// @brief Field _tweeningManager, offset: 0x38, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator, ____nextLevelTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator, ____nextLevelBasePosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator, ____nextLevelCountdownPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator, ____transitionDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator, ____tweeningManager) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*, "", "MultiplayerLobbyCenterStageLayoutAnimator");

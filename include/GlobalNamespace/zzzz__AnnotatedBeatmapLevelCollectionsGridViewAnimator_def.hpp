#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnnotatedBeatmapLevelCollectionsGridViewAnimator)
namespace Tweening {
class TimeTweeningManager;
}
namespace Tweening {
class Vector2Tween;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsGridViewAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator);
// Type: ::AnnotatedBeatmapLevelCollectionsGridViewAnimator
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AnnotatedBeatmapLevelCollectionsGridViewAnimator*
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsGridViewAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _contentPositionTween, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__contentPositionTween, put = __cordl_internal_set__contentPositionTween))::Tweening::Vector2Tween* _contentPositionTween;

  /// @brief Field _contentTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__contentTransform, put = __cordl_internal_set__contentTransform))::UnityW<::UnityEngine::RectTransform> _contentTransform;

  /// @brief Field _easeType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__easeType, put = __cordl_internal_set__easeType))::GlobalNamespace::EaseType _easeType;

  /// @brief Field _rowCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__rowCount, put = __cordl_internal_set__rowCount)) int32_t _rowCount;

  /// @brief Field _rowHeight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__rowHeight, put = __cordl_internal_set__rowHeight)) float_t _rowHeight;

  /// @brief Field _selectedRow, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedRow, put = __cordl_internal_set__selectedRow)) int32_t _selectedRow;

  /// @brief Field _transitionDuration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__transitionDuration, put = __cordl_internal_set__transitionDuration)) float_t _transitionDuration;

  /// @brief Field _tweeningManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Field _viewportSizeTween, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__viewportSizeTween, put = __cordl_internal_set__viewportSizeTween))::Tweening::Vector2Tween* _viewportSizeTween;

  /// @brief Field _viewportTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__viewportTransform, put = __cordl_internal_set__viewportTransform))::UnityW<::UnityEngine::RectTransform> _viewportTransform;

  /// @brief Method AnimateClose, addr 0x24409f0, size 0x308, virtual false, abstract: false, final false
  inline void AnimateClose(int32_t selectedRow, bool animated);

  /// @brief Method AnimateOpen, addr 0x244068c, size 0x334, virtual false, abstract: false, final false
  inline void AnimateOpen(bool animated);

  /// @brief Method DespawnAllActiveTweens, addr 0x2441c58, size 0xc8, virtual false, abstract: false, final false
  inline void DespawnAllActiveTweens();

  /// @brief Method GetContentYOffset, addr 0x2441c28, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetContentYOffset();

  /// @brief Method Init, addr 0x243f87c, size 0xb0, virtual false, abstract: false, final false
  inline void Init(float_t rowHeight, int32_t rowCount);

  static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x2441c54, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ScrollToRowIdxInstant, addr 0x24405dc, size 0x5c, virtual false, abstract: false, final false
  inline void ScrollToRowIdxInstant(int32_t selectedRow);

  /// @brief Method <AnimateClose>b__14_0, addr 0x2441e80, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateClose_b__14_0(::UnityEngine::Vector2 size);

  /// @brief Method <AnimateClose>b__14_1, addr 0x2441e9c, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateClose_b__14_1();

  /// @brief Method <AnimateClose>b__14_2, addr 0x2441f24, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateClose_b__14_2(::UnityEngine::Vector2 pos);

  /// @brief Method <AnimateClose>b__14_3, addr 0x2441f40, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateClose_b__14_3();

  /// @brief Method <AnimateOpen>b__13_0, addr 0x2441d38, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__13_0(::UnityEngine::Vector2 size);

  /// @brief Method <AnimateOpen>b__13_1, addr 0x2441d54, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__13_1();

  /// @brief Method <AnimateOpen>b__13_2, addr 0x2441ddc, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__13_2(::UnityEngine::Vector2 pos);

  /// @brief Method <AnimateOpen>b__13_3, addr 0x2441df8, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__13_3();

  constexpr ::Tweening::Vector2Tween*& __cordl_internal_get__contentPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector2Tween*> const& __cordl_internal_get__contentPositionTween() const;

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentTransform();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__easeType();

  constexpr int32_t const& __cordl_internal_get__rowCount() const;

  constexpr int32_t& __cordl_internal_get__rowCount();

  constexpr float_t const& __cordl_internal_get__rowHeight() const;

  constexpr float_t& __cordl_internal_get__rowHeight();

  constexpr int32_t const& __cordl_internal_get__selectedRow() const;

  constexpr int32_t& __cordl_internal_get__selectedRow();

  constexpr float_t const& __cordl_internal_get__transitionDuration() const;

  constexpr float_t& __cordl_internal_get__transitionDuration();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr ::Tweening::Vector2Tween*& __cordl_internal_get__viewportSizeTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector2Tween*> const& __cordl_internal_get__viewportSizeTween() const;

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__viewportTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__viewportTransform();

  constexpr void __cordl_internal_set__contentPositionTween(::Tweening::Vector2Tween* value);

  constexpr void __cordl_internal_set__contentTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__rowCount(int32_t value);

  constexpr void __cordl_internal_set__rowHeight(float_t value);

  constexpr void __cordl_internal_set__selectedRow(int32_t value);

  constexpr void __cordl_internal_set__transitionDuration(float_t value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set__viewportSizeTween(::Tweening::Vector2Tween* value);

  constexpr void __cordl_internal_set__viewportTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x2441d20, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnnotatedBeatmapLevelCollectionsGridViewAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridViewAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnnotatedBeatmapLevelCollectionsGridViewAnimator(AnnotatedBeatmapLevelCollectionsGridViewAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridViewAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnnotatedBeatmapLevelCollectionsGridViewAnimator(AnnotatedBeatmapLevelCollectionsGridViewAnimator const&) = delete;

  /// @brief Field _viewportTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____viewportTransform;

  /// @brief Field _contentTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____contentTransform;

  /// @brief Field _transitionDuration, offset: 0x28, size: 0x4, def value: None
  float_t ____transitionDuration;

  /// @brief Field _easeType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType;

  /// @brief Field _tweeningManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _rowHeight, offset: 0x38, size: 0x4, def value: None
  float_t ____rowHeight;

  /// @brief Field _rowCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ____rowCount;

  /// @brief Field _selectedRow, offset: 0x40, size: 0x4, def value: None
  int32_t ____selectedRow;

  /// @brief Field _viewportSizeTween, offset: 0x48, size: 0x8, def value: None
  ::Tweening::Vector2Tween* ____viewportSizeTween;

  /// @brief Field _contentPositionTween, offset: 0x50, size: 0x8, def value: None
  ::Tweening::Vector2Tween* ____contentPositionTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____viewportTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____contentTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____transitionDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____easeType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____tweeningManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____rowHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____rowCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____selectedRow) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____viewportSizeTween) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____contentPositionTween) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*, "", "AnnotatedBeatmapLevelCollectionsGridViewAnimator");

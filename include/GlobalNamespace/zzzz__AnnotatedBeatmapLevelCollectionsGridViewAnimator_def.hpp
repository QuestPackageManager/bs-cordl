#pragma once
// IWYU pragma private; include "GlobalNamespace/AnnotatedBeatmapLevelCollectionsGridViewAnimator.hpp"
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
// Dependencies EaseType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnnotatedBeatmapLevelCollectionsGridViewAnimator
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsGridViewAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _columnCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__columnCount, put = __cordl_internal_set__columnCount)) int32_t _columnCount;

  /// @brief Field _columnWidth, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__columnWidth, put = __cordl_internal_set__columnWidth)) float_t _columnWidth;

  /// @brief Field _contentPositionTween, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__contentPositionTween, put = __cordl_internal_set__contentPositionTween)) ::Tweening::Vector2Tween* _contentPositionTween;

  /// @brief Field _contentTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__contentTransform, put = __cordl_internal_set__contentTransform)) ::UnityW<::UnityEngine::RectTransform> _contentTransform;

  /// @brief Field _easeType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__easeType, put = __cordl_internal_set__easeType)) ::GlobalNamespace::EaseType _easeType;

  /// @brief Field _padding, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__padding, put = __cordl_internal_set__padding)) float_t _padding;

  /// @brief Field _rowCount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__rowCount, put = __cordl_internal_set__rowCount)) int32_t _rowCount;

  /// @brief Field _rowHeight, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__rowHeight, put = __cordl_internal_set__rowHeight)) float_t _rowHeight;

  /// @brief Field _selectedColumn, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedColumn, put = __cordl_internal_set__selectedColumn)) int32_t _selectedColumn;

  /// @brief Field _selectedRow, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedRow, put = __cordl_internal_set__selectedRow)) int32_t _selectedRow;

  /// @brief Field _transitionDuration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__transitionDuration, put = __cordl_internal_set__transitionDuration)) float_t _transitionDuration;

  /// @brief Field _tweeningManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Field _viewportSizeTween, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__viewportSizeTween, put = __cordl_internal_set__viewportSizeTween)) ::Tweening::Vector2Tween* _viewportSizeTween;

  /// @brief Field _viewportTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__viewportTransform, put = __cordl_internal_set__viewportTransform)) ::UnityW<::UnityEngine::RectTransform> _viewportTransform;

  /// @brief Field _visibleColumnCount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__visibleColumnCount, put = __cordl_internal_set__visibleColumnCount)) int32_t _visibleColumnCount;

  /// @brief Method AnimateClose, addr 0x3b700f8, size 0x338, virtual false, abstract: false, final false
  inline void AnimateClose(int32_t selectedColumn, int32_t selectedRow, bool animated);

  /// @brief Method AnimateOpen, addr 0x3b6fd8c, size 0x36c, virtual false, abstract: false, final false
  inline void AnimateOpen(bool animated);

  /// @brief Method DespawnAllActiveTweens, addr 0x3b6fc60, size 0xc8, virtual false, abstract: false, final false
  inline void DespawnAllActiveTweens();

  /// @brief Method GetContentXOffset, addr 0x3b6fc04, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetContentXOffset();

  /// @brief Method GetContentYOffset, addr 0x3b6fc30, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetContentYOffset();

  /// @brief Method Init, addr 0x3b6fb4c, size 0xb8, virtual false, abstract: false, final false
  inline void Init(float_t columnWidth, float_t rowHeight, int32_t columnCount, int32_t rowCount, int32_t visibleColumnCount);

  static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b6fc5c, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ScrollToRowIdxInstant, addr 0x3b6fd28, size 0x64, virtual false, abstract: false, final false
  inline void ScrollToRowIdxInstant(int32_t selectedColumn, int32_t selectedRow);

  /// @brief Method <AnimateClose>b__19_0, addr 0x3b70598, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateClose_b__19_0(::UnityEngine::Vector2 size);

  /// @brief Method <AnimateClose>b__19_1, addr 0x3b705b4, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateClose_b__19_1();

  /// @brief Method <AnimateClose>b__19_2, addr 0x3b7063c, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateClose_b__19_2(::UnityEngine::Vector2 pos);

  /// @brief Method <AnimateClose>b__19_3, addr 0x3b70658, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateClose_b__19_3();

  /// @brief Method <AnimateOpen>b__18_0, addr 0x3b70450, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__18_0(::UnityEngine::Vector2 size);

  /// @brief Method <AnimateOpen>b__18_1, addr 0x3b7046c, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__18_1();

  /// @brief Method <AnimateOpen>b__18_2, addr 0x3b704f4, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__18_2(::UnityEngine::Vector2 pos);

  /// @brief Method <AnimateOpen>b__18_3, addr 0x3b70510, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__18_3();

  constexpr int32_t const& __cordl_internal_get__columnCount() const;

  constexpr int32_t& __cordl_internal_get__columnCount();

  constexpr float_t const& __cordl_internal_get__columnWidth() const;

  constexpr float_t& __cordl_internal_get__columnWidth();

  constexpr ::Tweening::Vector2Tween* const& __cordl_internal_get__contentPositionTween() const;

  constexpr ::Tweening::Vector2Tween*& __cordl_internal_get__contentPositionTween();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentTransform();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__easeType();

  constexpr float_t const& __cordl_internal_get__padding() const;

  constexpr float_t& __cordl_internal_get__padding();

  constexpr int32_t const& __cordl_internal_get__rowCount() const;

  constexpr int32_t& __cordl_internal_get__rowCount();

  constexpr float_t const& __cordl_internal_get__rowHeight() const;

  constexpr float_t& __cordl_internal_get__rowHeight();

  constexpr int32_t const& __cordl_internal_get__selectedColumn() const;

  constexpr int32_t& __cordl_internal_get__selectedColumn();

  constexpr int32_t const& __cordl_internal_get__selectedRow() const;

  constexpr int32_t& __cordl_internal_get__selectedRow();

  constexpr float_t const& __cordl_internal_get__transitionDuration() const;

  constexpr float_t& __cordl_internal_get__transitionDuration();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr ::Tweening::Vector2Tween* const& __cordl_internal_get__viewportSizeTween() const;

  constexpr ::Tweening::Vector2Tween*& __cordl_internal_get__viewportSizeTween();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__viewportTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__viewportTransform();

  constexpr int32_t const& __cordl_internal_get__visibleColumnCount() const;

  constexpr int32_t& __cordl_internal_get__visibleColumnCount();

  constexpr void __cordl_internal_set__columnCount(int32_t value);

  constexpr void __cordl_internal_set__columnWidth(float_t value);

  constexpr void __cordl_internal_set__contentPositionTween(::Tweening::Vector2Tween* value);

  constexpr void __cordl_internal_set__contentTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__padding(float_t value);

  constexpr void __cordl_internal_set__rowCount(int32_t value);

  constexpr void __cordl_internal_set__rowHeight(float_t value);

  constexpr void __cordl_internal_set__selectedColumn(int32_t value);

  constexpr void __cordl_internal_set__selectedRow(int32_t value);

  constexpr void __cordl_internal_set__transitionDuration(float_t value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set__viewportSizeTween(::Tweening::Vector2Tween* value);

  constexpr void __cordl_internal_set__viewportTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__visibleColumnCount(int32_t value);

  /// @brief Method .ctor, addr 0x3b70430, size 0x20, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5393 };

  /// @brief Field _viewportTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____viewportTransform;

  /// @brief Field _contentTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____contentTransform;

  /// @brief Field _transitionDuration, offset: 0x30, size: 0x4, def value: None
  float_t ____transitionDuration;

  /// @brief Field _easeType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType;

  /// @brief Field _padding, offset: 0x38, size: 0x4, def value: None
  float_t ____padding;

  /// @brief Field _tweeningManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _columnWidth, offset: 0x48, size: 0x4, def value: None
  float_t ____columnWidth;

  /// @brief Field _rowHeight, offset: 0x4c, size: 0x4, def value: None
  float_t ____rowHeight;

  /// @brief Field _visibleColumnCount, offset: 0x50, size: 0x4, def value: None
  int32_t ____visibleColumnCount;

  /// @brief Field _columnCount, offset: 0x54, size: 0x4, def value: None
  int32_t ____columnCount;

  /// @brief Field _rowCount, offset: 0x58, size: 0x4, def value: None
  int32_t ____rowCount;

  /// @brief Field _selectedColumn, offset: 0x5c, size: 0x4, def value: None
  int32_t ____selectedColumn;

  /// @brief Field _selectedRow, offset: 0x60, size: 0x4, def value: None
  int32_t ____selectedRow;

  /// @brief Field _viewportSizeTween, offset: 0x68, size: 0x8, def value: None
  ::Tweening::Vector2Tween* ____viewportSizeTween;

  /// @brief Field _contentPositionTween, offset: 0x70, size: 0x8, def value: None
  ::Tweening::Vector2Tween* ____contentPositionTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____viewportTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____contentTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____transitionDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____easeType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____padding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____tweeningManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____columnWidth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____rowHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____visibleColumnCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____columnCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____rowCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____selectedColumn) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____selectedRow) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____viewportSizeTween) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, ____contentPositionTween) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*, "", "AnnotatedBeatmapLevelCollectionsGridViewAnimator");

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16090)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5769))
// CS Name: ::AnnotatedBeatmapLevelCollectionsGridViewAnimator*
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsGridViewAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _viewportTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__viewportTransform, put = __set__viewportTransform))::UnityEngine::RectTransform* _viewportTransform;

  /// @brief Field _contentTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__contentTransform, put = __set__contentTransform))::UnityEngine::RectTransform* _contentTransform;

  /// @brief Field _transitionDuration, offset 0x28, size 0x4
  __declspec(property(get = __get__transitionDuration, put = __set__transitionDuration)) float_t _transitionDuration;

  /// @brief Field _easeType, offset 0x2c, size 0x4
  __declspec(property(get = __get__easeType, put = __set__easeType))::GlobalNamespace::EaseType _easeType;

  /// @brief Field _tweeningManager, offset 0x30, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _rowHeight, offset 0x38, size 0x4
  __declspec(property(get = __get__rowHeight, put = __set__rowHeight)) float_t _rowHeight;

  /// @brief Field _rowCount, offset 0x3c, size 0x4
  __declspec(property(get = __get__rowCount, put = __set__rowCount)) int32_t _rowCount;

  /// @brief Field _selectedRow, offset 0x40, size 0x4
  __declspec(property(get = __get__selectedRow, put = __set__selectedRow)) int32_t _selectedRow;

  /// @brief Field _viewportSizeTween, offset 0x48, size 0x8
  __declspec(property(get = __get__viewportSizeTween, put = __set__viewportSizeTween))::Tweening::Vector2Tween* _viewportSizeTween;

  /// @brief Field _contentPositionTween, offset 0x50, size 0x8
  __declspec(property(get = __get__contentPositionTween, put = __set__contentPositionTween))::Tweening::Vector2Tween* _contentPositionTween;

  constexpr ::UnityEngine::RectTransform*& __get__viewportTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__viewportTransform() const;

  constexpr void __set__viewportTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::RectTransform*& __get__contentTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__contentTransform() const;

  constexpr void __set__contentTransform(::UnityEngine::RectTransform* value);

  constexpr float_t& __get__transitionDuration();

  constexpr float_t const& __get__transitionDuration() const;

  constexpr void __set__transitionDuration(float_t value);

  constexpr ::GlobalNamespace::EaseType& __get__easeType();

  constexpr ::GlobalNamespace::EaseType const& __get__easeType() const;

  constexpr void __set__easeType(::GlobalNamespace::EaseType value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr float_t& __get__rowHeight();

  constexpr float_t const& __get__rowHeight() const;

  constexpr void __set__rowHeight(float_t value);

  constexpr int32_t& __get__rowCount();

  constexpr int32_t const& __get__rowCount() const;

  constexpr void __set__rowCount(int32_t value);

  constexpr int32_t& __get__selectedRow();

  constexpr int32_t const& __get__selectedRow() const;

  constexpr void __set__selectedRow(int32_t value);

  constexpr ::Tweening::Vector2Tween*& __get__viewportSizeTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector2Tween*> const& __get__viewportSizeTween() const;

  constexpr void __set__viewportSizeTween(::Tweening::Vector2Tween* value);

  constexpr ::Tweening::Vector2Tween*& __get__contentPositionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector2Tween*> const& __get__contentPositionTween() const;

  constexpr void __set__contentPositionTween(::Tweening::Vector2Tween* value);

  /// @brief Method Init, addr 0x22dc970, size 0xb0, virtual false, abstract: false, final false
  inline void Init(float_t rowHeight, int32_t rowCount);

  /// @brief Method OnDestroy, addr 0x22dee20, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ScrollToRowIdxInstant, addr 0x22dd66c, size 0x5c, virtual false, abstract: false, final false
  inline void ScrollToRowIdxInstant(int32_t selectedRow);

  /// @brief Method AnimateOpen, addr 0x22dd71c, size 0x334, virtual false, abstract: false, final false
  inline void AnimateOpen(bool animated);

  /// @brief Method AnimateClose, addr 0x22ddab8, size 0x308, virtual false, abstract: false, final false
  inline void AnimateClose(int32_t selectedRow, bool animated);

  /// @brief Method DespawnAllActiveTweens, addr 0x22dee24, size 0xc8, virtual false, abstract: false, final false
  inline void DespawnAllActiveTweens();

  /// @brief Method GetContentYOffset, addr 0x22dedf4, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetContentYOffset();

  static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator* New_ctor();

  /// @brief Method .ctor, addr 0x22deeec, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <AnimateOpen>b__13_0, addr 0x22def04, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__13_0(::UnityEngine::Vector2 size);

  /// @brief Method <AnimateOpen>b__13_1, addr 0x22def20, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__13_1();

  /// @brief Method <AnimateOpen>b__13_2, addr 0x22defa8, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__13_2(::UnityEngine::Vector2 pos);

  /// @brief Method <AnimateOpen>b__13_3, addr 0x22defc4, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateOpen_b__13_3();

  /// @brief Method <AnimateClose>b__14_0, addr 0x22df04c, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateClose_b__14_0(::UnityEngine::Vector2 size);

  /// @brief Method <AnimateClose>b__14_1, addr 0x22df068, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateClose_b__14_1();

  /// @brief Method <AnimateClose>b__14_2, addr 0x22df0f0, size 0x1c, virtual false, abstract: false, final false
  inline void _AnimateClose_b__14_2(::UnityEngine::Vector2 pos);

  /// @brief Method <AnimateClose>b__14_3, addr 0x22df10c, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateClose_b__14_3();

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridViewAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnnotatedBeatmapLevelCollectionsGridViewAnimator(AnnotatedBeatmapLevelCollectionsGridViewAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridViewAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnnotatedBeatmapLevelCollectionsGridViewAnimator(AnnotatedBeatmapLevelCollectionsGridViewAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnnotatedBeatmapLevelCollectionsGridViewAnimator();

public:
  /// @brief Field _viewportTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____viewportTransform;

  /// @brief Field _contentTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____contentTransform;

  /// @brief Field _transitionDuration, offset: 0x28, size: 0x4, def value: None
  float_t ____transitionDuration;

  /// @brief Field _easeType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType;

  /// @brief Field _tweeningManager, offset: 0x30, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

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

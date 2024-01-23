#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnnotatedBeatmapLevelCollectionsGridView)
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionCell;
}
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsGridViewAnimator;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace GlobalNamespace {
class GridView;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class PageControl;
}
namespace GlobalNamespace {
class __GridView__IDataSource;
}
namespace HMUI {
class SelectableCell;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsGridView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView);
// Type: ::AnnotatedBeatmapLevelCollectionsGridView
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5768))
// CS Name: ::AnnotatedBeatmapLevelCollectionsGridView*
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsGridView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gridView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gridView, put = __cordl_internal_set__gridView))::UnityW<::GlobalNamespace::GridView> _gridView;

  /// @brief Field _pageControl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pageControl, put = __cordl_internal_set__pageControl))::UnityW<::GlobalNamespace::PageControl> _pageControl;

  /// @brief Field _animator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator))::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> _animator;

  /// @brief Field _cellPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab))::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> _cellPrefab;

  /// @brief Field _cellWidth, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__cellWidth, put = __cordl_internal_set__cellWidth)) float_t _cellWidth;

  /// @brief Field _cellHeight, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__cellHeight, put = __cordl_internal_set__cellHeight)) float_t _cellHeight;

  /// @brief Field _additionalContentModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _beatmapLevelsPromoData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsPromoData,
                      put = __cordl_internal_set__beatmapLevelsPromoData))::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> _beatmapLevelsPromoData;

  /// @brief Field _vrPlatformHelper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field didOpenAnnotatedBeatmapLevelCollectionEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent,
                      put = __cordl_internal_set_didOpenAnnotatedBeatmapLevelCollectionEvent))::System::Action* didOpenAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didCloseAnnotatedBeatmapLevelCollectionEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent,
                      put = __cordl_internal_set_didCloseAnnotatedBeatmapLevelCollectionEvent))::System::Action* didCloseAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset 0x68, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent,
      put = __cordl_internal_set_didSelectAnnotatedBeatmapLevelCollectionEvent))::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field _isInitialized, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _isHovering, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get__isHovering, put = __cordl_internal_set__isHovering)) bool _isHovering;

  /// @brief Field _annotatedBeatmapLevelCollections, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__annotatedBeatmapLevelCollections, put = __cordl_internal_set__annotatedBeatmapLevelCollections))::System::Collections::Generic::IReadOnlyList_1<
      ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* _annotatedBeatmapLevelCollections;

  /// @brief Field _selectedCellIndex, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedCellIndex, put = __cordl_internal_set__selectedCellIndex)) int32_t _selectedCellIndex;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::__GridView__IDataSource"
  constexpr operator ::GlobalNamespace::__GridView__IDataSource*() noexcept;

  /// @brief Convert to "::GlobalNamespace::__GridView__IDataSource"
  constexpr ::GlobalNamespace::__GridView__IDataSource* i___GlobalNamespace____GridView__IDataSource() noexcept;

  constexpr ::UnityW<::GlobalNamespace::GridView>& __cordl_internal_get__gridView();

  constexpr ::UnityW<::GlobalNamespace::GridView> const& __cordl_internal_get__gridView() const;

  constexpr void __cordl_internal_set__gridView(::UnityW<::GlobalNamespace::GridView> value);

  constexpr ::UnityW<::GlobalNamespace::PageControl>& __cordl_internal_get__pageControl();

  constexpr ::UnityW<::GlobalNamespace::PageControl> const& __cordl_internal_get__pageControl() const;

  constexpr void __cordl_internal_set__pageControl(::UnityW<::GlobalNamespace::PageControl> value);

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator>& __cordl_internal_get__animator();

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> const& __cordl_internal_get__animator() const;

  constexpr void __cordl_internal_set__animator(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> value);

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>& __cordl_internal_get__cellPrefab();

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> value);

  constexpr float_t& __cordl_internal_get__cellWidth();

  constexpr float_t const& __cordl_internal_get__cellWidth() const;

  constexpr void __cordl_internal_set__cellWidth(float_t value);

  constexpr float_t& __cordl_internal_get__cellHeight();

  constexpr float_t const& __cordl_internal_get__cellHeight() const;

  constexpr void __cordl_internal_set__cellHeight(float_t value);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __cordl_internal_get__additionalContentModel() const;

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO>& __cordl_internal_get__beatmapLevelsPromoData();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> const& __cordl_internal_get__beatmapLevelsPromoData() const;

  constexpr void __cordl_internal_set__beatmapLevelsPromoData(::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::System::Action*& __cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr void __cordl_internal_set_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr void __cordl_internal_set_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*& __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*> const&
  __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr void __cordl_internal_set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr bool& __cordl_internal_get__isHovering();

  constexpr bool const& __cordl_internal_get__isHovering() const;

  constexpr void __cordl_internal_set__isHovering(bool value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*& __cordl_internal_get__annotatedBeatmapLevelCollections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*> const&
  __cordl_internal_get__annotatedBeatmapLevelCollections() const;

  constexpr void __cordl_internal_set__annotatedBeatmapLevelCollections(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);

  constexpr int32_t& __cordl_internal_get__selectedCellIndex();

  constexpr int32_t const& __cordl_internal_get__selectedCellIndex() const;

  constexpr void __cordl_internal_set__selectedCellIndex(int32_t value);

  /// @brief Method add_didOpenAnnotatedBeatmapLevelCollectionEvent, addr 0x22dc480, size 0x9c, virtual false, abstract: false, final false
  inline void add_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method remove_didOpenAnnotatedBeatmapLevelCollectionEvent, addr 0x22dc51c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method add_didCloseAnnotatedBeatmapLevelCollectionEvent, addr 0x22dc5b8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method remove_didCloseAnnotatedBeatmapLevelCollectionEvent, addr 0x22dc654, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method add_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x22dc6f0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);

  /// @brief Method remove_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x22dc7a0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);

  /// @brief Method SetData, addr 0x22dc850, size 0x88, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections);

  /// @brief Method OnEnable, addr 0x22dca20, size 0x1a0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x22dcbc0, size 0x1a8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Show, addr 0x22dcd68, size 0x24, virtual false, abstract: false, final false
  inline void Show();

  /// @brief Method Hide, addr 0x22dcd8c, size 0x24, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method CancelAsyncOperations, addr 0x22dcdb0, size 0x184, virtual false, abstract: false, final false
  inline void CancelAsyncOperations();

  /// @brief Method RefreshAvailability, addr 0x22dd01c, size 0x2c8, virtual false, abstract: false, final false
  inline void RefreshAvailability();

  /// @brief Method SelectAndScrollToCellWithIdx, addr 0x22dd34c, size 0x320, virtual false, abstract: false, final false
  inline void SelectAndScrollToCellWithIdx(int32_t idx);

  /// @brief Method OnPointerEnter, addr 0x22dd6c8, size 0x54, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x22dda50, size 0x68, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x22dddc0, size 0x5c, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleVRPlatformHelperInputFocusCaptured, addr 0x22de63c, size 0x4c, virtual false, abstract: false, final false
  inline void HandleVRPlatformHelperInputFocusCaptured();

  /// @brief Method HandleCellSelectionDidChange, addr 0x22de688, size 0x4c0, virtual false, abstract: false, final false
  inline void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transition, ::System::Object* changeOwner);

  /// @brief Method GetNumberOfCells, addr 0x22dde1c, size 0xac, virtual true, abstract: false, final true
  inline int32_t GetNumberOfCells();

  /// @brief Method GetCellWidth, addr 0x22deb48, size 0x8, virtual true, abstract: false, final true
  inline float_t GetCellWidth();

  /// @brief Method GetCellHeight, addr 0x22deb50, size 0x8, virtual true, abstract: false, final true
  inline float_t GetCellHeight();

  /// @brief Method CellForIdx, addr 0x22deb58, size 0x294, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::MonoBehaviour> CellForIdx(::GlobalNamespace::GridView* gridView, int32_t idx);

  static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView* New_ctor();

  /// @brief Method .ctor, addr 0x22dedec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnnotatedBeatmapLevelCollectionsGridView(AnnotatedBeatmapLevelCollectionsGridView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnnotatedBeatmapLevelCollectionsGridView(AnnotatedBeatmapLevelCollectionsGridView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnnotatedBeatmapLevelCollectionsGridView();

public:
  /// @brief Field _gridView, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GridView> ____gridView;

  /// @brief Field _pageControl, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PageControl> ____pageControl;

  /// @brief Field _animator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> ____animator;

  /// @brief Field _cellPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> ____cellPrefab;

  /// @brief Field _cellWidth, offset: 0x38, size: 0x4, def value: None
  float_t ____cellWidth;

  /// @brief Field _cellHeight, offset: 0x3c, size: 0x4, def value: None
  float_t ____cellHeight;

  /// @brief Field _additionalContentModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapLevelsPromoData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> ____beatmapLevelsPromoData;

  /// @brief Field _vrPlatformHelper, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field didOpenAnnotatedBeatmapLevelCollectionEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___didOpenAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didCloseAnnotatedBeatmapLevelCollectionEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___didCloseAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* ___didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field _isInitialized, offset: 0x70, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _isHovering, offset: 0x71, size: 0x1, def value: None
  bool ____isHovering;

  /// @brief Field _annotatedBeatmapLevelCollections, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* ____annotatedBeatmapLevelCollections;

  /// @brief Field _selectedCellIndex, offset: 0x80, size: 0x4, def value: None
  int32_t ____selectedCellIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____gridView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____pageControl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____animator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____cellPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____cellWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____cellHeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____additionalContentModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____beatmapLevelsPromoData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____vrPlatformHelper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ___didOpenAnnotatedBeatmapLevelCollectionEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ___didCloseAnnotatedBeatmapLevelCollectionEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ___didSelectAnnotatedBeatmapLevelCollectionEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____isInitialized) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____isHovering) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____annotatedBeatmapLevelCollections) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____selectedCellIndex) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*, "", "AnnotatedBeatmapLevelCollectionsGridView");

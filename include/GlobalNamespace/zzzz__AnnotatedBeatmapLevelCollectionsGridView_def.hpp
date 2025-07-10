#pragma once
// IWYU pragma private; include "GlobalNamespace/AnnotatedBeatmapLevelCollectionsGridView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GridView_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
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
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoModel;
}
namespace GlobalNamespace {
class GridView;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class PageControl;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
struct SelectableCell_TransitionType;
}
namespace HMUI {
class SelectableCell;
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
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
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
// Dependencies GridView::IDataSource, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerEnterHandler, UnityEngine.EventSystems.IPointerExitHandler,
// UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnnotatedBeatmapLevelCollectionsGridView
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsGridView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _additionalContentModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _animator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> _animator;

  /// @brief Field _annotatedBeatmapLevelCollections, offset 0x98, size 0x8
  __declspec(property(
      get = __cordl_internal_get__annotatedBeatmapLevelCollections,
      put = __cordl_internal_set__annotatedBeatmapLevelCollections)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* _annotatedBeatmapLevelCollections;

  /// @brief Field _beatmapLevelsPromoModel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsPromoModel, put = __cordl_internal_set__beatmapLevelsPromoModel)) ::GlobalNamespace::BeatmapLevelsPromoModel* _beatmapLevelsPromoModel;

  /// @brief Field _cellHeight, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__cellHeight, put = __cordl_internal_set__cellHeight)) float_t _cellHeight;

  /// @brief Field _cellPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab)) ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> _cellPrefab;

  /// @brief Field _cellWidth, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__cellWidth, put = __cordl_internal_set__cellWidth)) float_t _cellWidth;

  /// @brief Field _contentWarningLabel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__contentWarningLabel, put = __cordl_internal_set__contentWarningLabel)) ::UnityW<::UnityEngine::GameObject> _contentWarningLabel;

  /// @brief Field _entitlementModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel)) ::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _gridView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gridView, put = __cordl_internal_set__gridView)) ::UnityW<::GlobalNamespace::GridView> _gridView;

  /// @brief Field _isHovering, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get__isHovering, put = __cordl_internal_set__isHovering)) bool _isHovering;

  /// @brief Field _isInitialized, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _pageControl, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pageControl, put = __cordl_internal_set__pageControl)) ::UnityW<::GlobalNamespace::PageControl> _pageControl;

  /// @brief Field _playerDataModel, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _selectedCellIndex, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedCellIndex, put = __cordl_internal_set__selectedCellIndex)) int32_t _selectedCellIndex;

  /// @brief Field _vrPlatformHelper, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_cellHeight)) float_t cellHeight;

  __declspec(property(get = get_cellWidth)) float_t cellWidth;

  /// @brief Field didCloseAnnotatedBeatmapLevelCollectionEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent,
                      put = __cordl_internal_set_didCloseAnnotatedBeatmapLevelCollectionEvent)) ::System::Action* didCloseAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didOpenAnnotatedBeatmapLevelCollectionEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent,
                      put = __cordl_internal_set_didOpenAnnotatedBeatmapLevelCollectionEvent)) ::System::Action* didOpenAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent,
                      put =
                          __cordl_internal_set_didSelectAnnotatedBeatmapLevelCollectionEvent)) ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* didSelectAnnotatedBeatmapLevelCollectionEvent;

  __declspec(property(get = get_numberOfCells)) int32_t numberOfCells;

  /// @brief Convert operator to "::GlobalNamespace::GridView_IDataSource"
  constexpr operator ::GlobalNamespace::GridView_IDataSource*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Method CancelAsyncOperations, addr 0x3afd168, size 0x184, virtual false, abstract: false, final false
  inline void CancelAsyncOperations();

  /// @brief Method CellForIdx, addr 0x3afe688, size 0x200, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::MonoBehaviour> CellForIdx(::GlobalNamespace::GridView* gridView, int32_t idx);

  /// @brief Method CloseLevelCollection, addr 0x3afd0c0, size 0x60, virtual false, abstract: false, final false
  inline void CloseLevelCollection(bool animated);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x3afdab4, size 0x58, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleCellSelectionDidChange, addr 0x3afe200, size 0x488, virtual false, abstract: false, final false
  inline void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell_TransitionType transition, ::System::Object* changeOwner);

  /// @brief Method HandleVRPlatformHelperInputFocusCaptured, addr 0x3afe1f8, size 0x8, virtual false, abstract: false, final false
  inline void HandleVRPlatformHelperInputFocusCaptured();

  /// @brief Method Hide, addr 0x3afd144, size 0x24, virtual false, abstract: false, final false
  inline void Hide();

  static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView* New_ctor();

  /// @brief Method OnDisable, addr 0x3afcf14, size 0x1ac, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3afcd7c, size 0x198, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPointerEnter, addr 0x3afda14, size 0x4c, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x3afda8c, size 0x28, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method RefreshAvailability, addr 0x3afd3d0, size 0x2c4, virtual false, abstract: false, final false
  inline void RefreshAvailability();

  /// @brief Method SelectAndScrollToCellWithIdx, addr 0x3afd6f4, size 0x320, virtual false, abstract: false, final false
  inline void SelectAndScrollToCellWithIdx(int32_t idx);

  /// @brief Method SetData, addr 0x3afc780, size 0xc8, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* annotatedBeatmapLevelCollections);

  /// @brief Method ShouldExpandCollection, addr 0x3afda60, size 0x2c, virtual false, abstract: false, final false
  inline bool ShouldExpandCollection();

  /// @brief Method Show, addr 0x3afd120, size 0x24, virtual false, abstract: false, final false
  inline void Show();

  constexpr ::GlobalNamespace::IAdditionalContentModel* const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator>& __cordl_internal_get__animator();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get__annotatedBeatmapLevelCollections() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get__annotatedBeatmapLevelCollections();

  constexpr ::GlobalNamespace::BeatmapLevelsPromoModel* const& __cordl_internal_get__beatmapLevelsPromoModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsPromoModel*& __cordl_internal_get__beatmapLevelsPromoModel();

  constexpr float_t const& __cordl_internal_get__cellHeight() const;

  constexpr float_t& __cordl_internal_get__cellHeight();

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>& __cordl_internal_get__cellPrefab();

  constexpr float_t const& __cordl_internal_get__cellWidth() const;

  constexpr float_t& __cordl_internal_get__cellWidth();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__contentWarningLabel() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__contentWarningLabel();

  constexpr ::GlobalNamespace::IEntitlementModel* const& __cordl_internal_get__entitlementModel() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::UnityW<::GlobalNamespace::GridView> const& __cordl_internal_get__gridView() const;

  constexpr ::UnityW<::GlobalNamespace::GridView>& __cordl_internal_get__gridView();

  constexpr bool const& __cordl_internal_get__isHovering() const;

  constexpr bool& __cordl_internal_get__isHovering();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::GlobalNamespace::PageControl> const& __cordl_internal_get__pageControl() const;

  constexpr ::UnityW<::GlobalNamespace::PageControl>& __cordl_internal_get__pageControl();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr int32_t const& __cordl_internal_get__selectedCellIndex() const;

  constexpr int32_t& __cordl_internal_get__selectedCellIndex();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::System::Action* const& __cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__animator(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> value);

  constexpr void __cordl_internal_set__annotatedBeatmapLevelCollections(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set__beatmapLevelsPromoModel(::GlobalNamespace::BeatmapLevelsPromoModel* value);

  constexpr void __cordl_internal_set__cellHeight(float_t value);

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> value);

  constexpr void __cordl_internal_set__cellWidth(float_t value);

  constexpr void __cordl_internal_set__contentWarningLabel(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__gridView(::UnityW<::GlobalNamespace::GridView> value);

  constexpr void __cordl_internal_set__isHovering(bool value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__pageControl(::UnityW<::GlobalNamespace::PageControl> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__selectedCellIndex(int32_t value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method .ctor, addr 0x3afe888, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didCloseAnnotatedBeatmapLevelCollectionEvent, addr 0x3afc4e8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method add_didOpenAnnotatedBeatmapLevelCollectionEvent, addr 0x3afc3b0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method add_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x3afc620, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method get_cellHeight, addr 0x3afc3a8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_cellHeight();

  /// @brief Method get_cellWidth, addr 0x3afc3a0, size 0x8, virtual true, abstract: false, final true
  inline float_t get_cellWidth();

  /// @brief Method get_numberOfCells, addr 0x3afc2f4, size 0xac, virtual true, abstract: false, final true
  inline int32_t get_numberOfCells();

  /// @brief Convert to "::GlobalNamespace::GridView_IDataSource"
  constexpr ::GlobalNamespace::GridView_IDataSource* i___GlobalNamespace__GridView_IDataSource() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Method remove_didCloseAnnotatedBeatmapLevelCollectionEvent, addr 0x3afc584, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method remove_didOpenAnnotatedBeatmapLevelCollectionEvent, addr 0x3afc44c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method remove_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x3afc6d0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnnotatedBeatmapLevelCollectionsGridView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnnotatedBeatmapLevelCollectionsGridView(AnnotatedBeatmapLevelCollectionsGridView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnnotatedBeatmapLevelCollectionsGridView(AnnotatedBeatmapLevelCollectionsGridView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4967 };

  /// @brief Field _gridView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GridView> ____gridView;

  /// @brief Field _pageControl, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PageControl> ____pageControl;

  /// @brief Field _animator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> ____animator;

  /// @brief Field _cellPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> ____cellPrefab;

  /// @brief Field _cellWidth, offset: 0x40, size: 0x4, def value: None
  float_t ____cellWidth;

  /// @brief Field _cellHeight, offset: 0x44, size: 0x4, def value: None
  float_t ____cellHeight;

  /// @brief Field _contentWarningLabel, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____contentWarningLabel;

  /// @brief Field _additionalContentModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _entitlementModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field _beatmapLevelsPromoModel, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsPromoModel* ____beatmapLevelsPromoModel;

  /// @brief Field _vrPlatformHelper, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _playerDataModel, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field didOpenAnnotatedBeatmapLevelCollectionEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___didOpenAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didCloseAnnotatedBeatmapLevelCollectionEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___didCloseAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* ___didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field _isInitialized, offset: 0x90, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _isHovering, offset: 0x91, size: 0x1, def value: None
  bool ____isHovering;

  /// @brief Field _annotatedBeatmapLevelCollections, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* ____annotatedBeatmapLevelCollections;

  /// @brief Field _selectedCellIndex, offset: 0xa0, size: 0x4, def value: None
  int32_t ____selectedCellIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____gridView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____pageControl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____animator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____cellPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____cellWidth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____cellHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____contentWarningLabel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____additionalContentModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____entitlementModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____beatmapLevelsPromoModel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____vrPlatformHelper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____playerDataModel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ___didOpenAnnotatedBeatmapLevelCollectionEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ___didCloseAnnotatedBeatmapLevelCollectionEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ___didSelectAnnotatedBeatmapLevelCollectionEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____isInitialized) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____isHovering) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____annotatedBeatmapLevelCollections) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____selectedCellIndex) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*, "", "AnnotatedBeatmapLevelCollectionsGridView");

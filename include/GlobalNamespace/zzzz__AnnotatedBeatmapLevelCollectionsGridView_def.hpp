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
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AnnotatedBeatmapLevelCollectionsGridView*
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsGridView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _additionalContentModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _animator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator))::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> _animator;

  /// @brief Field _annotatedBeatmapLevelCollections, offset 0x80, size 0x8
  __declspec(
      property(get = __cordl_internal_get__annotatedBeatmapLevelCollections,
               put = __cordl_internal_set__annotatedBeatmapLevelCollections))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* _annotatedBeatmapLevelCollections;

  /// @brief Field _beatmapLevelsPromoModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsPromoModel, put = __cordl_internal_set__beatmapLevelsPromoModel))::GlobalNamespace::BeatmapLevelsPromoModel* _beatmapLevelsPromoModel;

  /// @brief Field _cellHeight, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__cellHeight, put = __cordl_internal_set__cellHeight)) float_t _cellHeight;

  /// @brief Field _cellPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab))::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> _cellPrefab;

  /// @brief Field _cellWidth, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__cellWidth, put = __cordl_internal_set__cellWidth)) float_t _cellWidth;

  /// @brief Field _entitlementModel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel))::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _gridView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gridView, put = __cordl_internal_set__gridView))::UnityW<::GlobalNamespace::GridView> _gridView;

  /// @brief Field _isHovering, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__isHovering, put = __cordl_internal_set__isHovering)) bool _isHovering;

  /// @brief Field _isInitialized, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _pageControl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pageControl, put = __cordl_internal_set__pageControl))::UnityW<::GlobalNamespace::PageControl> _pageControl;

  /// @brief Field _selectedCellIndex, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedCellIndex, put = __cordl_internal_set__selectedCellIndex)) int32_t _selectedCellIndex;

  /// @brief Field _vrPlatformHelper, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field didCloseAnnotatedBeatmapLevelCollectionEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent,
                      put = __cordl_internal_set_didCloseAnnotatedBeatmapLevelCollectionEvent))::System::Action* didCloseAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didOpenAnnotatedBeatmapLevelCollectionEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent,
                      put = __cordl_internal_set_didOpenAnnotatedBeatmapLevelCollectionEvent))::System::Action* didOpenAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent,
                      put = __cordl_internal_set_didSelectAnnotatedBeatmapLevelCollectionEvent))::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Convert operator to "::GlobalNamespace::__GridView__IDataSource"
  constexpr operator ::GlobalNamespace::__GridView__IDataSource*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Method CancelAsyncOperations, addr 0x2562e7c, size 0x184, virtual false, abstract: false, final false
  inline void CancelAsyncOperations();

  /// @brief Method CellForIdx, addr 0x2564b78, size 0x204, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::MonoBehaviour> CellForIdx(::GlobalNamespace::GridView* gridView, int32_t idx);

  /// @brief Method CloseLevelCollection, addr 0x2562ddc, size 0x58, virtual false, abstract: false, final false
  inline void CloseLevelCollection(bool animated);

  /// @brief Method GetCellHeight, addr 0x2564b70, size 0x8, virtual true, abstract: false, final true
  inline float_t GetCellHeight();

  /// @brief Method GetCellWidth, addr 0x2564b68, size 0x8, virtual true, abstract: false, final true
  inline float_t GetCellWidth();

  /// @brief Method GetNumberOfCells, addr 0x2563eb0, size 0xac, virtual true, abstract: false, final true
  inline int32_t GetNumberOfCells();

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x2563e54, size 0x5c, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleCellSelectionDidChange, addr 0x25646d8, size 0x490, virtual false, abstract: false, final false
  inline void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transition, ::System::Object* changeOwner);

  /// @brief Method HandleVRPlatformHelperInputFocusCaptured, addr 0x25646d0, size 0x8, virtual false, abstract: false, final false
  inline void HandleVRPlatformHelperInputFocusCaptured();

  /// @brief Method Hide, addr 0x2562e58, size 0x24, virtual false, abstract: false, final false
  inline void Hide();

  static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView* New_ctor();

  /// @brief Method OnDisable, addr 0x2562c28, size 0x1b4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2562a88, size 0x1a0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPointerEnter, addr 0x2563794, size 0x54, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x2563b1c, size 0x30, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method RefreshAvailability, addr 0x25630e8, size 0x2c8, virtual false, abstract: false, final false
  inline void RefreshAvailability();

  /// @brief Method SelectAndScrollToCellWithIdx, addr 0x2563418, size 0x320, virtual false, abstract: false, final false
  inline void SelectAndScrollToCellWithIdx(int32_t idx);

  /// @brief Method SetData, addr 0x25628b8, size 0x88, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* annotatedBeatmapLevelCollections);

  /// @brief Method Show, addr 0x2562e34, size 0x24, virtual false, abstract: false, final false
  inline void Show();

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator>& __cordl_internal_get__animator();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get__annotatedBeatmapLevelCollections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*> const&
  __cordl_internal_get__annotatedBeatmapLevelCollections() const;

  constexpr ::GlobalNamespace::BeatmapLevelsPromoModel*& __cordl_internal_get__beatmapLevelsPromoModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsPromoModel*> const& __cordl_internal_get__beatmapLevelsPromoModel() const;

  constexpr float_t const& __cordl_internal_get__cellHeight() const;

  constexpr float_t& __cordl_internal_get__cellHeight();

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>& __cordl_internal_get__cellPrefab();

  constexpr float_t const& __cordl_internal_get__cellWidth() const;

  constexpr float_t& __cordl_internal_get__cellWidth();

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEntitlementModel*> const& __cordl_internal_get__entitlementModel() const;

  constexpr ::UnityW<::GlobalNamespace::GridView> const& __cordl_internal_get__gridView() const;

  constexpr ::UnityW<::GlobalNamespace::GridView>& __cordl_internal_get__gridView();

  constexpr bool const& __cordl_internal_get__isHovering() const;

  constexpr bool& __cordl_internal_get__isHovering();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::GlobalNamespace::PageControl> const& __cordl_internal_get__pageControl() const;

  constexpr ::UnityW<::GlobalNamespace::PageControl>& __cordl_internal_get__pageControl();

  constexpr int32_t const& __cordl_internal_get__selectedCellIndex() const;

  constexpr int32_t& __cordl_internal_get__selectedCellIndex();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::System::Action*& __cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__animator(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> value);

  constexpr void __cordl_internal_set__annotatedBeatmapLevelCollections(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set__beatmapLevelsPromoModel(::GlobalNamespace::BeatmapLevelsPromoModel* value);

  constexpr void __cordl_internal_set__cellHeight(float_t value);

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> value);

  constexpr void __cordl_internal_set__cellWidth(float_t value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__gridView(::UnityW<::GlobalNamespace::GridView> value);

  constexpr void __cordl_internal_set__isHovering(bool value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__pageControl(::UnityW<::GlobalNamespace::PageControl> value);

  constexpr void __cordl_internal_set__selectedCellIndex(int32_t value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method .ctor, addr 0x2564d7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didCloseAnnotatedBeatmapLevelCollectionEvent, addr 0x2562620, size 0x9c, virtual false, abstract: false, final false
  inline void add_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method add_didOpenAnnotatedBeatmapLevelCollectionEvent, addr 0x25624e8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method add_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x2562758, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Convert to "::GlobalNamespace::__GridView__IDataSource"
  constexpr ::GlobalNamespace::__GridView__IDataSource* i___GlobalNamespace____GridView__IDataSource() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Method remove_didCloseAnnotatedBeatmapLevelCollectionEvent, addr 0x25626bc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method remove_didOpenAnnotatedBeatmapLevelCollectionEvent, addr 0x2562584, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value);

  /// @brief Method remove_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x2562808, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief Field _entitlementModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field _beatmapLevelsPromoModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsPromoModel* ____beatmapLevelsPromoModel;

  /// @brief Field _vrPlatformHelper, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field didOpenAnnotatedBeatmapLevelCollectionEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___didOpenAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didCloseAnnotatedBeatmapLevelCollectionEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___didCloseAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* ___didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field _isInitialized, offset: 0x78, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _isHovering, offset: 0x79, size: 0x1, def value: None
  bool ____isHovering;

  /// @brief Field _annotatedBeatmapLevelCollections, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* ____annotatedBeatmapLevelCollections;

  /// @brief Field _selectedCellIndex, offset: 0x88, size: 0x4, def value: None
  int32_t ____selectedCellIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____gridView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____pageControl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____animator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____cellPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____cellWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____cellHeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____additionalContentModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____entitlementModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____beatmapLevelsPromoModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____vrPlatformHelper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ___didOpenAnnotatedBeatmapLevelCollectionEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ___didCloseAnnotatedBeatmapLevelCollectionEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ___didSelectAnnotatedBeatmapLevelCollectionEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____isInitialized) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____isHovering) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____annotatedBeatmapLevelCollections) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, ____selectedCellIndex) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*, "", "AnnotatedBeatmapLevelCollectionsGridView");

#pragma once
// IWYU pragma private; include "GlobalNamespace/AnnotatedBeatmapLevelCollectionsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnnotatedBeatmapLevelCollectionsViewController)
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsGridView;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class LoadingControl;
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
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnnotatedBeatmapLevelCollectionsViewController
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _additionalContentModel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _annotatedBeatmapLevelCollections, offset 0xb0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__annotatedBeatmapLevelCollections,
      put = __cordl_internal_set__annotatedBeatmapLevelCollections)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* _annotatedBeatmapLevelCollections;

  /// @brief Field _annotatedBeatmapLevelCollectionsGridView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__annotatedBeatmapLevelCollectionsGridView,
                      put = __cordl_internal_set__annotatedBeatmapLevelCollectionsGridView)) ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView>
      _annotatedBeatmapLevelCollectionsGridView;

  /// @brief Field _loadingControl, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl)) ::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _selectedItemIndex, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedItemIndex, put = __cordl_internal_set__selectedItemIndex)) int32_t _selectedItemIndex;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_didCloseBeatmapLevelCollectionsEvent,
                      put = __cordl_internal_set_didCloseBeatmapLevelCollectionsEvent)) ::System::Action* didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didOpenBeatmapLevelCollectionsEvent,
                      put = __cordl_internal_set_didOpenBeatmapLevelCollectionsEvent)) ::System::Action* didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent,
                      put =
                          __cordl_internal_set_didSelectAnnotatedBeatmapLevelCollectionEvent)) ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* didSelectAnnotatedBeatmapLevelCollectionEvent;

  __declspec(property(get = get_selectedAnnotatedBeatmapLevelPack)) ::GlobalNamespace::BeatmapLevelPack* selectedAnnotatedBeatmapLevelPack;

  __declspec(property(get = get_selectedItemIndex)) int32_t selectedItemIndex;

  /// @brief Method DidActivate, addr 0x3b5c2bc, size 0x1f4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b5c4cc, size 0x1f8, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x3b5c858, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsGridViewClose, addr 0x3b5c890, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsGridViewClose();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsGridViewOpen, addr 0x3b5c874, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsGridViewOpen();

  /// @brief Method HandleDidSelectAnnotatedBeatmapLevelCollection, addr 0x3b5c8ac, size 0x180, virtual false, abstract: false, final false
  inline void HandleDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* beatmapLevelCollection);

  static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController* New_ctor();

  /// @brief Method RefreshAvailability, addr 0x3b5c4b0, size 0x1c, virtual false, abstract: false, final false
  inline void RefreshAvailability();

  /// @brief Method SetData, addr 0x3b5c6c4, size 0x130, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* annotatedBeatmapLevelCollections, int32_t selectedItemIndex, bool hideIfOneOrNoPacks);

  /// @brief Method ShowLoading, addr 0x3b5c7f4, size 0x64, virtual false, abstract: false, final false
  inline void ShowLoading();

  constexpr ::GlobalNamespace::IAdditionalContentModel* const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get__annotatedBeatmapLevelCollections() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get__annotatedBeatmapLevelCollections();

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView> const& __cordl_internal_get__annotatedBeatmapLevelCollectionsGridView() const;

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView>& __cordl_internal_get__annotatedBeatmapLevelCollectionsGridView();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr int32_t const& __cordl_internal_get__selectedItemIndex() const;

  constexpr int32_t& __cordl_internal_get__selectedItemIndex();

  constexpr ::System::Action* const& __cordl_internal_get_didCloseBeatmapLevelCollectionsEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didCloseBeatmapLevelCollectionsEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didOpenBeatmapLevelCollectionsEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didOpenBeatmapLevelCollectionsEvent();

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__annotatedBeatmapLevelCollections(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set__annotatedBeatmapLevelCollectionsGridView(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView> value);

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__selectedItemIndex(int32_t value);

  constexpr void __cordl_internal_set_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method .ctor, addr 0x3b5ca2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didCloseBeatmapLevelCollectionsEvent, addr 0x3b5bee8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method add_didOpenBeatmapLevelCollectionsEvent, addr 0x3b5bdb0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method add_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x3b5c020, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method get_selectedAnnotatedBeatmapLevelPack, addr 0x3b5c180, size 0x134, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* get_selectedAnnotatedBeatmapLevelPack();

  /// @brief Method get_selectedItemIndex, addr 0x3b5c2b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectedItemIndex();

  /// @brief Method remove_didCloseBeatmapLevelCollectionsEvent, addr 0x3b5bf84, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didOpenBeatmapLevelCollectionsEvent, addr 0x3b5be4c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x3b5c0d0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnnotatedBeatmapLevelCollectionsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnnotatedBeatmapLevelCollectionsViewController(AnnotatedBeatmapLevelCollectionsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnnotatedBeatmapLevelCollectionsViewController(AnnotatedBeatmapLevelCollectionsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5337 };

  /// @brief Field _annotatedBeatmapLevelCollectionsGridView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView> ____annotatedBeatmapLevelCollectionsGridView;

  /// @brief Field _loadingControl, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _additionalContentModel, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action* ___didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action* ___didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* ___didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field _selectedItemIndex, offset: 0xa8, size: 0x4, def value: None
  int32_t ____selectedItemIndex;

  /// @brief Field _annotatedBeatmapLevelCollections, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* ____annotatedBeatmapLevelCollections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____annotatedBeatmapLevelCollectionsGridView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____loadingControl) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____additionalContentModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ___didOpenBeatmapLevelCollectionsEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ___didCloseBeatmapLevelCollectionsEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ___didSelectAnnotatedBeatmapLevelCollectionEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____selectedItemIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____annotatedBeatmapLevelCollections) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*, "", "AnnotatedBeatmapLevelCollectionsViewController");

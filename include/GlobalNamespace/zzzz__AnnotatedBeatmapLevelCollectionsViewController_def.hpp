#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnnotatedBeatmapLevelCollectionsViewController)
namespace System {
class Action;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsGridView;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController);
// Type: ::AnnotatedBeatmapLevelCollectionsViewController
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5651))
// CS Name: ::AnnotatedBeatmapLevelCollectionsViewController*
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _annotatedBeatmapLevelCollectionsGridView, offset 0x70, size 0x8
  __declspec(property(get = __get__annotatedBeatmapLevelCollectionsGridView,
                      put = __set__annotatedBeatmapLevelCollectionsGridView))::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView* _annotatedBeatmapLevelCollectionsGridView;

  /// @brief Field _loadingControl, offset 0x78, size 0x8
  __declspec(property(get = __get__loadingControl, put = __set__loadingControl))::GlobalNamespace::LoadingControl* _loadingControl;

  /// @brief Field _additionalContentModel, offset 0x80, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_didOpenBeatmapLevelCollectionsEvent, put = __set_didOpenBeatmapLevelCollectionsEvent))::System::Action* didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset 0x90, size 0x8
  __declspec(property(get = __get_didCloseBeatmapLevelCollectionsEvent, put = __set_didCloseBeatmapLevelCollectionsEvent))::System::Action* didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset 0x98, size 0x8
  __declspec(
      property(get = __get_didSelectAnnotatedBeatmapLevelCollectionEvent,
               put = __set_didSelectAnnotatedBeatmapLevelCollectionEvent))::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field _selectedItemIndex, offset 0xa0, size 0x4
  __declspec(property(get = __get__selectedItemIndex, put = __set__selectedItemIndex)) int32_t _selectedItemIndex;

  /// @brief Field _annotatedBeatmapLevelCollections, offset 0xa8, size 0x8
  __declspec(
      property(get = __get__annotatedBeatmapLevelCollections,
               put = __set__annotatedBeatmapLevelCollections))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* _annotatedBeatmapLevelCollections;

  __declspec(property(get = get_selectedAnnotatedBeatmapLevelCollection))::GlobalNamespace::IAnnotatedBeatmapLevelCollection* selectedAnnotatedBeatmapLevelCollection;

  __declspec(property(get = get_selectedItemIndex)) int32_t selectedItemIndex;

  constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*& __get__annotatedBeatmapLevelCollectionsGridView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*> const& __get__annotatedBeatmapLevelCollectionsGridView() const;

  constexpr void __set__annotatedBeatmapLevelCollectionsGridView(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView* value);

  constexpr ::GlobalNamespace::LoadingControl*& __get__loadingControl();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& __get__loadingControl() const;

  constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl* value);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr ::System::Action*& __get_didOpenBeatmapLevelCollectionsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didOpenBeatmapLevelCollectionsEvent() const;

  constexpr void __set_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didCloseBeatmapLevelCollectionsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didCloseBeatmapLevelCollectionsEvent() const;

  constexpr void __set_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*& __get_didSelectAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*> const& __get_didSelectAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr void __set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);

  constexpr int32_t& __get__selectedItemIndex();

  constexpr int32_t const& __get__selectedItemIndex() const;

  constexpr void __set__selectedItemIndex(int32_t value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*& __get__annotatedBeatmapLevelCollections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*> const&
  __get__annotatedBeatmapLevelCollections() const;

  constexpr void __set__annotatedBeatmapLevelCollections(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);

  /// @brief Method add_didOpenBeatmapLevelCollectionsEvent, addr 0x22b5c20, size 0x9c, virtual false, abstract: false, final false
  inline void add_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didOpenBeatmapLevelCollectionsEvent, addr 0x22b5cbc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method add_didCloseBeatmapLevelCollectionsEvent, addr 0x22b5d58, size 0x9c, virtual false, abstract: false, final false
  inline void add_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didCloseBeatmapLevelCollectionsEvent, addr 0x22b5df4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method add_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x22b5e90, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);

  /// @brief Method remove_didSelectAnnotatedBeatmapLevelCollectionEvent, addr 0x22b5f40, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);

  /// @brief Method get_selectedAnnotatedBeatmapLevelCollection, addr 0x22b5ff0, size 0x134, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* get_selectedAnnotatedBeatmapLevelCollection();

  /// @brief Method get_selectedItemIndex, addr 0x22b6124, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectedItemIndex();

  /// @brief Method DidActivate, addr 0x22b612c, size 0x204, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method RefreshAvailability, addr 0x22b6330, size 0x1c, virtual false, abstract: false, final false
  inline void RefreshAvailability();

  /// @brief Method DidDeactivate, addr 0x22b634c, size 0x208, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method SetData, addr 0x22b6554, size 0x130, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections, int32_t selectedItemIndex,
                      bool hideIfOneOrNoPacks);

  /// @brief Method ShowLoading, addr 0x22b6684, size 0x64, virtual false, abstract: false, final false
  inline void ShowLoading();

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x22b66e8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsGridViewOpen, addr 0x22b6704, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsGridViewOpen();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsGridViewClose, addr 0x22b6720, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsGridViewClose();

  /// @brief Method HandleDidSelectAnnotatedBeatmapLevelCollection, addr 0x22b673c, size 0x180, virtual false, abstract: false, final false
  inline void HandleDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* beatmapLevelCollection);

  static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22b68bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnnotatedBeatmapLevelCollectionsViewController(AnnotatedBeatmapLevelCollectionsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnnotatedBeatmapLevelCollectionsViewController(AnnotatedBeatmapLevelCollectionsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnnotatedBeatmapLevelCollectionsViewController();

public:
  /// @brief Field _annotatedBeatmapLevelCollectionsGridView, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView* ____annotatedBeatmapLevelCollectionsGridView;

  /// @brief Field _loadingControl, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::LoadingControl* ____loadingControl;

  /// @brief Field _additionalContentModel, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action* ___didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* ___didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field _selectedItemIndex, offset: 0xa0, size: 0x4, def value: None
  int32_t ____selectedItemIndex;

  /// @brief Field _annotatedBeatmapLevelCollections, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* ____annotatedBeatmapLevelCollections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____annotatedBeatmapLevelCollectionsGridView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____loadingControl) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____additionalContentModel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ___didOpenBeatmapLevelCollectionsEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ___didCloseBeatmapLevelCollectionsEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ___didSelectAnnotatedBeatmapLevelCollectionEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____selectedItemIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, ____annotatedBeatmapLevelCollections) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*, "", "AnnotatedBeatmapLevelCollectionsViewController");

#pragma once
// IWYU pragma private; include "GlobalNamespace/AnnotatedBeatmapLevelCollectionsGridView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionsGridView_def.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionCell_def.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionsGridViewAnimator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoModel_def.hpp"
#include "GlobalNamespace/zzzz__GridView_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__PageControl_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__XRSystemEventType_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.get_numberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::get_numberOfCells)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5965fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "get_numberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.get_cellWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::get_cellWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5966068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "get_cellWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.get_cellHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::get_cellHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5966070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "get_cellHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.add_didOpenAnnotatedBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didOpenAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5966078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                           { "add_didOpenAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.remove_didOpenAnnotatedBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didOpenAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5966124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                           { "remove_didOpenAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.add_didCloseAnnotatedBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didCloseAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59661d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                           { "add_didCloseAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.remove_didCloseAnnotatedBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didCloseAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x596627c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                           { "remove_didCloseAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.add_didSelectAnnotatedBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5966328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                { "add_didSelectAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.remove_didSelectAnnotatedBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59663e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                { "remove_didSelectAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::SetData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59664a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                             { "SetData", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnEnable)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5966ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnDisable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5966cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.Show
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Show)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5966f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "Show", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Hide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5966f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "Hide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.CancelAsyncOperations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CancelAsyncOperations)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5966f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "CancelAsyncOperations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.RefreshAvailability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::RefreshAvailability)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x59670c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "RefreshAvailability", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.SelectAndScrollToCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(int32_t)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::SelectAndScrollToCellWithIdx)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5967360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "SelectAndScrollToCellWithIdx", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.OnPointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnPointerEnter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59676e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                           { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.OnPointerExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnPointerExit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5967be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                           { "OnPointerExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.CloseLevelCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(bool)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CloseLevelCollection)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5966ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "CloseLevelCollection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.HandleAdditionalContentModelDidInvalidateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5968054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "HandleAdditionalContentModelDidInvalidateData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.HandleSystemStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::GlobalNamespace::XRSystemEventType)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleSystemStateChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59680b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                           { "HandleSystemStateChange", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.HandleCellSelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(
    ::HMUI::SelectableCell*, ::HMUI::SelectableCell_TransitionType, ::System::Object*)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleCellSelectionDidChange)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x59680bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
            { "HandleCellSelectionDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)(::GlobalNamespace::GridView*, int32_t)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CellForIdx)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x596850c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                           { "CellForIdx", {}, { ::i2c::type_of<::GlobalNamespace::GridView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView.ShouldExpandCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::ShouldExpandCollection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x596772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "ShouldExpandCollection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596873c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GridView>& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__gridView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridView;
}
constexpr ::UnityW<::GlobalNamespace::GridView> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__gridView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridView;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__gridView(::UnityW<::GlobalNamespace::GridView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gridView = value;
}
constexpr ::UnityW<::GlobalNamespace::PageControl>& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__pageControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageControl;
}
constexpr ::UnityW<::GlobalNamespace::PageControl> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__pageControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageControl;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__pageControl(::UnityW<::GlobalNamespace::PageControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageControl = value;
}
constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator>& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__animator(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animator = value;
}
constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__cellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__cellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellPrefab = value;
}
constexpr float_t& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__cellWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellWidth;
}
constexpr float_t const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__cellWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellWidth;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__cellWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellWidth = value;
}
constexpr float_t& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__cellHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellHeight;
}
constexpr float_t const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__cellHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellHeight;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__cellHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellHeight = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__contentWarningLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentWarningLabel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__contentWarningLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentWarningLabel;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__contentWarningLabel(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentWarningLabel = value;
}
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::GlobalNamespace::IAdditionalContentModel* const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additionalContentModel = value;
}
constexpr ::GlobalNamespace::IEntitlementModel*& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__entitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr ::GlobalNamespace::IEntitlementModel* const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__entitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsPromoModel*& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__beatmapLevelsPromoModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsPromoModel* const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__beatmapLevelsPromoModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoModel;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__beatmapLevelsPromoModel(::GlobalNamespace::BeatmapLevelsPromoModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsPromoModel = value;
}
constexpr ::GlobalNamespace::IXRSystemState*& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__xrSystemState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr ::GlobalNamespace::IXRSystemState* const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__xrSystemState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xrSystemState = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::System::Action*& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenAnnotatedBeatmapLevelCollectionEvent;
}
constexpr ::System::Action* const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get_didOpenAnnotatedBeatmapLevelCollectionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenAnnotatedBeatmapLevelCollectionEvent;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didOpenAnnotatedBeatmapLevelCollectionEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCloseAnnotatedBeatmapLevelCollectionEvent;
}
constexpr ::System::Action* const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get_didCloseAnnotatedBeatmapLevelCollectionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCloseAnnotatedBeatmapLevelCollectionEvent;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didCloseAnnotatedBeatmapLevelCollectionEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectAnnotatedBeatmapLevelCollectionEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* const&
GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get_didSelectAnnotatedBeatmapLevelCollectionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectAnnotatedBeatmapLevelCollectionEvent;
}
constexpr void
GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectAnnotatedBeatmapLevelCollectionEvent = value;
}
constexpr bool& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
constexpr bool& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__isHovering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isHovering;
}
constexpr bool const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__isHovering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isHovering;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__isHovering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isHovering = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*&
GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__annotatedBeatmapLevelCollections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotatedBeatmapLevelCollections;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* const&
GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__annotatedBeatmapLevelCollections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotatedBeatmapLevelCollections;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__annotatedBeatmapLevelCollections(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____annotatedBeatmapLevelCollections = value;
}
constexpr int32_t& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__selectedCellIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIndex;
}
constexpr int32_t const& GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_get__selectedCellIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIndex;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::__cordl_internal_set__selectedCellIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedCellIndex = value;
}
inline int32_t GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::get_numberOfCells() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "get_numberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::get_cellWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "get_cellWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::get_cellHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "get_cellHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                         { "add_didOpenAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didOpenAnnotatedBeatmapLevelCollectionEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                         { "remove_didOpenAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                         { "add_didCloseAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didCloseAnnotatedBeatmapLevelCollectionEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                         { "remove_didCloseAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                              { "add_didSelectAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                              { "remove_didSelectAnnotatedBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* annotatedBeatmapLevelCollections) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                           { "SetData", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotatedBeatmapLevelCollections);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Show() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "Show", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::Hide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "Hide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CancelAsyncOperations() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "CancelAsyncOperations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::RefreshAvailability() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "RefreshAvailability", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::SelectAndScrollToCellWithIdx(int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "SelectAndScrollToCellWithIdx", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                         { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                         { "OnPointerExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CloseLevelCollection(bool animated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "CloseLevelCollection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleAdditionalContentModelDidInvalidateData() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "HandleAdditionalContentModelDidInvalidateData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleSystemStateChange(::GlobalNamespace::XRSystemEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                         { "HandleSystemStateChange", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell_TransitionType transition,
                                                                                                    ::System::Object* changeOwner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
          { "HandleCellSelectionDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectableCell, transition, changeOwner);
}
inline ::UnityW<::UnityEngine::Component> GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::CellForIdx(::GlobalNamespace::GridView* gridView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(),
                                                                                         { "CellForIdx", {}, { ::i2c::type_of<::GlobalNamespace::GridView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, gridView, idx);
}
inline bool GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::ShouldExpandCollection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { "ShouldExpandCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView* GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::GridView_IDataSource"
constexpr GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::operator ::GlobalNamespace::GridView_IDataSource*() noexcept {
  return static_cast<::GlobalNamespace::GridView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::GridView_IDataSource"
constexpr ::GlobalNamespace::GridView_IDataSource* GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::i___GlobalNamespace__GridView_IDataSource() noexcept {
  return static_cast<::GlobalNamespace::GridView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView::AnnotatedBeatmapLevelCollectionsGridView() {}

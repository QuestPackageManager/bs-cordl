#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MultiColumnController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnSortingMode_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnCollectionHeader_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnDataType_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnSortingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__Column_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnsDataType_def.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuPopulateEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescriptions_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.add_columnSortingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::System::Action*)>(
    &::UnityEngine::UIElements::MultiColumnController::add_columnSortingChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d5cb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "add_columnSortingChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.remove_columnSortingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::System::Action*)>(
    &::UnityEngine::UIElements::MultiColumnController::remove_columnSortingChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d5cbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "remove_columnSortingChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.add_headerContextMenuPopulateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*)>(
        &::UnityEngine::UIElements::MultiColumnController::add_headerContextMenuPopulateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5cca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
            { "add_headerContextMenuPopulateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.remove_headerContextMenuPopulateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*)>(
        &::UnityEngine::UIElements::MultiColumnController::remove_headerContextMenuPopulateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5cd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
            { "remove_headerContextMenuPopulateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.get_header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* (::UnityEngine::UIElements::MultiColumnController::*)()>(
    &::UnityEngine::UIElements::MultiColumnController::get_header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d5ce28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "get_header", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.get_sortingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ColumnSortingMode (::UnityEngine::UIElements::MultiColumnController::*)()>(
    &::UnityEngine::UIElements::MultiColumnController::get_sortingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d5ce30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "get_sortingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.set_sortingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::ColumnSortingMode)>(
    &::UnityEngine::UIElements::MultiColumnController::set_sortingMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6d5ce38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                                                           { "set_sortingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnSortingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(
    ::UnityEngine::UIElements::Columns*, ::UnityEngine::UIElements::SortColumnDescriptions*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*)>(
    &::UnityEngine::UIElements::MultiColumnController::_ctor)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x6d5ce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.UnbindCellItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, int32_t, ::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::MultiColumnController::UnbindCellItem)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d5d344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                         { "UnbindCellItem", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.DefaultMakeCellItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)()>(&::UnityEngine::UIElements::MultiColumnController::DefaultMakeCellItem)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d5d378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "DefaultMakeCellItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.MakeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::MultiColumnController::*)()>(
    &::UnityEngine::UIElements::MultiColumnController::MakeItem)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x6d5d424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "MakeItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.UnbindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::MultiColumnController::UnbindItem)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x6d5d874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                             { "UnbindItem", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.DestroyItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::MultiColumnController::DestroyItem)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x6d5dd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                                                           { "DestroyItem", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.PrepareView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::BaseVerticalCollectionView*)>(
    &::UnityEngine::UIElements::MultiColumnController::PrepareView)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x6d5e128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                                                           { "PrepareView", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)()>(&::UnityEngine::UIElements::MultiColumnController::Dispose)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x6d5e44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnHorizontalScrollerValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(float_t)>(
    &::UnityEngine::UIElements::MultiColumnController::OnHorizontalScrollerValueChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d5eaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnHorizontalScrollerValueChanged", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnViewportGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::MultiColumnController::OnViewportGeometryChanged)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6d5eabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                             { "OnViewportGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnColumnContainerGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::MultiColumnController::OnColumnContainerGeometryChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d5ef2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                             { "OnColumnContainerGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.UpdateContentContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::BaseVerticalCollectionView*)>(
    &::UnityEngine::UIElements::MultiColumnController::UpdateContentContainer)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6d5ed6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                             { "UpdateContentContainer", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnColumnSortingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)()>(&::UnityEngine::UIElements::MultiColumnController::OnColumnSortingChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6d5ef34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnColumnSortingChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.UpdateDragger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)()>(&::UnityEngine::UIElements::MultiColumnController::UpdateDragger)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d5ef84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "UpdateDragger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.SortIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)()>(&::UnityEngine::UIElements::MultiColumnController::SortIfNeeded)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x6d5f070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "SortIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.CombinedComparison
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::MultiColumnController::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::MultiColumnController::CombinedComparison)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x6d5f5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                                                           { "CombinedComparison", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.GetSourceIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::MultiColumnController::*)(int32_t)>(&::UnityEngine::UIElements::MultiColumnController::GetSourceIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6d5dc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "GetSourceIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.GetSortedIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::MultiColumnController::*)(int32_t)>(&::UnityEngine::UIElements::MultiColumnController::GetSortedIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6d5fbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "GetSortedIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.GetIndexFromList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::UIElements::MultiColumnController::GetIndexFromList)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6d5fb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                             { "GetIndexFromList", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnContextMenuPopulateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(
    ::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::MultiColumnController::OnContextMenuPopulateEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d5fc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                         { "OnContextMenuPopulateEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnColumnResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(int32_t, float_t)>(
    &::UnityEngine::UIElements::MultiColumnController::OnColumnResized)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x6d5fc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnColumnResized", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnColumnAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::Column*, int32_t)>(
    &::UnityEngine::UIElements::MultiColumnController::OnColumnAdded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d60008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                             { "OnColumnAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnColumnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::MultiColumnController::OnColumnRemoved)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d60020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnColumnRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnColumnReordered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::Column*, int32_t, int32_t)>(
    &::UnityEngine::UIElements::MultiColumnController::OnColumnReordered)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d60038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                { "OnColumnReordered", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnColumnsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType)>(
    &::UnityEngine::UIElements::MultiColumnController::OnColumnsChanged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6d6006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                { "OnColumnsChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::UIElements::ColumnDataType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnColumnChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)(::UnityEngine::UIElements::ColumnsDataType)>(
    &::UnityEngine::UIElements::MultiColumnController::OnColumnChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d600a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                                                           { "OnColumnChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnsDataType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnController.OnViewDataRestored
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnController::*)()>(&::UnityEngine::UIElements::MultiColumnController::OnViewDataRestored)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d600e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnViewDataRestored", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_columnSortingChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnSortingChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_columnSortingChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnSortingChanged;
}
constexpr void UnityEngine::UIElements::MultiColumnController::__cordl_internal_set_columnSortingChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnSortingChanged = value;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*&
UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_headerContextMenuPopulateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerContextMenuPopulateEvent;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* const&
UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_headerContextMenuPopulateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerContextMenuPopulateEvent;
}
constexpr void UnityEngine::UIElements::MultiColumnController::__cordl_internal_set_headerContextMenuPopulateEvent(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerContextMenuPopulateEvent = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_SortedToSourceIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedToSourceIndex;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_SortedToSourceIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedToSourceIndex;
}
constexpr void UnityEngine::UIElements::MultiColumnController::__cordl_internal_set_m_SortedToSourceIndex(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortedToSourceIndex = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_SourceToSortedIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceToSortedIndex;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_SourceToSortedIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceToSortedIndex;
}
constexpr void UnityEngine::UIElements::MultiColumnController::__cordl_internal_set_m_SourceToSortedIndex(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceToSortedIndex = value;
}
constexpr ::UnityEngine::UIElements::ColumnSortingMode& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_SortingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingMode;
}
constexpr ::UnityEngine::UIElements::ColumnSortingMode const& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_SortingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingMode;
}
constexpr void UnityEngine::UIElements::MultiColumnController::__cordl_internal_set_m_SortingMode(::UnityEngine::UIElements::ColumnSortingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortingMode = value;
}
constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_View() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView* const& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_View() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr void UnityEngine::UIElements::MultiColumnController::__cordl_internal_set_m_View(::UnityEngine::UIElements::BaseVerticalCollectionView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_View = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_HeaderContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_HeaderContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeaderContainer;
}
constexpr void UnityEngine::UIElements::MultiColumnController::__cordl_internal_set_m_HeaderContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HeaderContainer = value;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_MultiColumnHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MultiColumnHeader;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* const& UnityEngine::UIElements::MultiColumnController::__cordl_internal_get_m_MultiColumnHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MultiColumnHeader;
}
constexpr void UnityEngine::UIElements::MultiColumnController::__cordl_internal_set_m_MultiColumnHeader(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MultiColumnHeader = value;
}
inline void UnityEngine::UIElements::MultiColumnController::setStaticF_k_BoundColumnVePropertyName(::UnityEngine::PropertyName value) {
  ::cordl_internals::setStaticField<::UnityEngine::PropertyName, "k_BoundColumnVePropertyName", ::UnityEngine::UIElements::MultiColumnController*>(std::forward<::UnityEngine::PropertyName>(value));
}
inline ::UnityEngine::PropertyName UnityEngine::UIElements::MultiColumnController::getStaticF_k_BoundColumnVePropertyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::PropertyName, "k_BoundColumnVePropertyName", ::UnityEngine::UIElements::MultiColumnController*>();
}
inline void UnityEngine::UIElements::MultiColumnController::setStaticF_bindableElementPropertyName(::UnityEngine::PropertyName value) {
  ::cordl_internals::setStaticField<::UnityEngine::PropertyName, "bindableElementPropertyName", ::UnityEngine::UIElements::MultiColumnController*>(std::forward<::UnityEngine::PropertyName>(value));
}
inline ::UnityEngine::PropertyName UnityEngine::UIElements::MultiColumnController::getStaticF_bindableElementPropertyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::PropertyName, "bindableElementPropertyName", ::UnityEngine::UIElements::MultiColumnController*>();
}
inline void UnityEngine::UIElements::MultiColumnController::setStaticF_baseUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "baseUssClassName", ::UnityEngine::UIElements::MultiColumnController*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MultiColumnController::getStaticF_baseUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "baseUssClassName", ::UnityEngine::UIElements::MultiColumnController*>();
}
inline void UnityEngine::UIElements::MultiColumnController::setStaticF_k_HeaderContainerViewDataKey(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_HeaderContainerViewDataKey", ::UnityEngine::UIElements::MultiColumnController*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MultiColumnController::getStaticF_k_HeaderContainerViewDataKey() {
  return ::cordl_internals::getStaticField<::StringW, "k_HeaderContainerViewDataKey", ::UnityEngine::UIElements::MultiColumnController*>();
}
inline void UnityEngine::UIElements::MultiColumnController::setStaticF_headerContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "headerContainerUssClassName", ::UnityEngine::UIElements::MultiColumnController*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MultiColumnController::getStaticF_headerContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "headerContainerUssClassName", ::UnityEngine::UIElements::MultiColumnController*>();
}
inline void UnityEngine::UIElements::MultiColumnController::setStaticF_rowContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "rowContainerUssClassName", ::UnityEngine::UIElements::MultiColumnController*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MultiColumnController::getStaticF_rowContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "rowContainerUssClassName", ::UnityEngine::UIElements::MultiColumnController*>();
}
inline void UnityEngine::UIElements::MultiColumnController::setStaticF_cellUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "cellUssClassName", ::UnityEngine::UIElements::MultiColumnController*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MultiColumnController::getStaticF_cellUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "cellUssClassName", ::UnityEngine::UIElements::MultiColumnController*>();
}
inline void UnityEngine::UIElements::MultiColumnController::setStaticF_cellLabelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "cellLabelUssClassName", ::UnityEngine::UIElements::MultiColumnController*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MultiColumnController::getStaticF_cellLabelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "cellLabelUssClassName", ::UnityEngine::UIElements::MultiColumnController*>();
}
inline void UnityEngine::UIElements::MultiColumnController::setStaticF_k_HeaderViewDataKey(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_HeaderViewDataKey", ::UnityEngine::UIElements::MultiColumnController*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MultiColumnController::getStaticF_k_HeaderViewDataKey() {
  return ::cordl_internals::getStaticField<::StringW, "k_HeaderViewDataKey", ::UnityEngine::UIElements::MultiColumnController*>();
}
inline void UnityEngine::UIElements::MultiColumnController::add_columnSortingChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "add_columnSortingChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MultiColumnController::remove_columnSortingChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "remove_columnSortingChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MultiColumnController::add_headerContextMenuPopulateEvent(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
          { "add_headerContextMenuPopulateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MultiColumnController::remove_headerContextMenuPopulateEvent(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
          { "remove_headerContextMenuPopulateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* UnityEngine::UIElements::MultiColumnController::get_header() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "get_header", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ColumnSortingMode UnityEngine::UIElements::MultiColumnController::get_sortingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "get_sortingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ColumnSortingMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnController::set_sortingMode(::UnityEngine::UIElements::ColumnSortingMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                                                         { "set_sortingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnSortingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MultiColumnController::_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columns, sortDescriptions, sortedColumns);
}
template <typename T>
inline void UnityEngine::UIElements::MultiColumnController::BindCellItem(::UnityEngine::UIElements::VisualElement* ve, int32_t rowIndex, ::UnityEngine::UIElements::Column* column, T item) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                          { "BindCellItem",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, rowIndex, column, item);
}
inline void UnityEngine::UIElements::MultiColumnController::UnbindCellItem(::UnityEngine::UIElements::VisualElement* ve, int32_t rowIndex, ::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                          { "UnbindCellItem", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, rowIndex, column);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::MultiColumnController::DefaultMakeCellItem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "DefaultMakeCellItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MultiColumnController::DefaultBindCellItem(::UnityEngine::UIElements::VisualElement* ve, T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                           { "DefaultBindCellItem", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, item);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::MultiColumnController::MakeItem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "MakeItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MultiColumnController::BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index, T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                       { "BindItem", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index, item);
}
inline void UnityEngine::UIElements::MultiColumnController::UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                           { "UnbindItem", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::MultiColumnController::DestroyItem(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "DestroyItem", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::MultiColumnController::PrepareView(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                                                         { "PrepareView", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionView);
}
inline void UnityEngine::UIElements::MultiColumnController::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnController::OnHorizontalScrollerValueChanged(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnHorizontalScrollerValueChanged", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void UnityEngine::UIElements::MultiColumnController::OnViewportGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                                                         { "OnViewportGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::MultiColumnController::OnColumnContainerGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                           { "OnColumnContainerGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::MultiColumnController::UpdateContentContainer(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                           { "UpdateContentContainer", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionView);
}
inline void UnityEngine::UIElements::MultiColumnController::OnColumnSortingChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnColumnSortingChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnController::UpdateDragger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "UpdateDragger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnController::SortIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "SortIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::MultiColumnController::CombinedComparison(int32_t a, int32_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "CombinedComparison", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::MultiColumnController::GetSourceIndex(int32_t sortedIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "GetSourceIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sortedIndex);
}
inline int32_t UnityEngine::UIElements::MultiColumnController::GetSortedIndex(int32_t sourceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "GetSortedIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sourceIndex);
}
inline int32_t UnityEngine::UIElements::MultiColumnController::GetIndexFromList(int32_t index, ::System::Collections::Generic::List_1<int32_t>* indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                           { "GetIndexFromList", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index, indices);
}
inline void UnityEngine::UIElements::MultiColumnController::OnContextMenuPopulateEvent(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt, ::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                          { "OnContextMenuPopulateEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, column);
}
inline void UnityEngine::UIElements::MultiColumnController::OnColumnResized(int32_t index, float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnColumnResized", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, width);
}
inline void UnityEngine::UIElements::MultiColumnController::OnColumnAdded(::UnityEngine::UIElements::Column* column, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                           { "OnColumnAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, index);
}
inline void UnityEngine::UIElements::MultiColumnController::OnColumnRemoved(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnColumnRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::MultiColumnController::OnColumnReordered(::UnityEngine::UIElements::Column* column, int32_t from, int32_t to) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                              { "OnColumnReordered", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, from, to);
}
inline void UnityEngine::UIElements::MultiColumnController::OnColumnsChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                              { "OnColumnsChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::UIElements::ColumnDataType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, type);
}
inline void UnityEngine::UIElements::MultiColumnController::OnColumnChanged(::UnityEngine::UIElements::ColumnsDataType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(),
                                                                                         { "OnColumnChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnsDataType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void UnityEngine::UIElements::MultiColumnController::OnViewDataRestored() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnController*>(), { "OnViewDataRestored", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MultiColumnController*
UnityEngine::UIElements::MultiColumnController::New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MultiColumnController*>(columns, sortDescriptions, sortedColumns));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::MultiColumnController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::MultiColumnController::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MultiColumnController::MultiColumnController() {}

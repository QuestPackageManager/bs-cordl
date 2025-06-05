#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewReorderableDragAndDropController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseReorderableDragAndDropController_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewReorderableDragAndDropController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeView_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__TreeViewReorderableDragAndDropController_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::*)()>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4a219e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_expandedIdsBeforeDrag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandedIdsBeforeDrag;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_expandedIdsBeforeDrag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandedIdsBeforeDrag;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_set_expandedIdsBeforeDrag(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___expandedIdsBeforeDrag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_draggedIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___draggedIds;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_draggedIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___draggedIds;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_set_draggedIds(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___draggedIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_lastItemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastItemId;
}
constexpr int32_t const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_lastItemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastItemId;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_set_lastItemId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastItemId = value;
}
constexpr float_t& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_expandItemBeginTimerMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandItemBeginTimerMs;
}
constexpr float_t const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_expandItemBeginTimerMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandItemBeginTimerMs;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_set_expandItemBeginTimerMs(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expandItemBeginTimerMs = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_expandItemBeginPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandItemBeginPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_expandItemBeginPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandItemBeginPosition;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_set_expandItemBeginPosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expandItemBeginPosition = value;
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData* UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::TreeViewReorderableDragAndDropController_DropData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::BaseTreeView*)>(&::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4a2001c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseTreeView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.CompareId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::CompareId)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x4a200e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.SetupDragAndDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StartDragArgs (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*, bool)>(&::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::SetupDragAndDrop)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4a20724;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.HandleDragAndDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleDragAndDrop)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4a207c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.OnDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::OnDrop)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x4a208b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.DragCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DragCleanup)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4a2105c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.RestoreExpanded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(
    ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::RestoreExpanded)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x4a2119c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), "RestoreExpanded",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.HandleAutoExpand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::ReusableCollectionItem*, ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleAutoExpand)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x4a214f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.DelayExpandDropItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DelayExpandDropItem)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x4a2162c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(),
                                                 "DelayExpandDropItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.ExpandDropItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::ExpandDropItem)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x4a21844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), "ExpandDropItem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData*& UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_get_m_DropData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DropData;
}
constexpr ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData* const&
UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_get_m_DropData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DropData;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_set_m_DropData(::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DropData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::BaseTreeView*& UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_get_m_TreeView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TreeView;
}
constexpr ::UnityEngine::UIElements::BaseTreeView* const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_get_m_TreeView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TreeView;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_set_m_TreeView(::UnityEngine::UIElements::BaseTreeView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TreeView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_get_m_ExpandDropItemScheduledItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpandDropItemScheduledItem;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_get_m_ExpandDropItemScheduledItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpandDropItemScheduledItem;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_set_m_ExpandDropItemScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExpandDropItemScheduledItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_get_m_ExpandDropItemCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpandDropItemCallback;
}
constexpr ::System::Action* const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_get_m_ExpandDropItemCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExpandDropItemCallback;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::__cordl_internal_set_m_ExpandDropItemCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExpandDropItemCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::_ctor(::UnityEngine::UIElements::BaseTreeView* view) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseTreeView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, view);
}
inline int32_t UnityEngine::UIElements::TreeViewReorderableDragAndDropController::CompareId(int32_t id1, int32_t id2) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id1, id2);
}
inline ::UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::TreeViewReorderableDragAndDropController::SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds,
                                                                                                                                    bool skipText) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs, false>(this, ___internal_method, itemIds, skipText);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(this, ___internal_method, args);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DragCleanup() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::RestoreExpanded(::System::Collections::Generic::List_1<int32_t>* ids) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), "RestoreExpanded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ids);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, pointerPosition);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DelayExpandDropItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(),
                                               "DelayExpandDropItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::ExpandDropItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>::get(), "ExpandDropItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController* UnityEngine::UIElements::TreeViewReorderableDragAndDropController::New_ctor(::UnityEngine::UIElements::BaseTreeView* view) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(view));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::TreeViewReorderableDragAndDropController() {}

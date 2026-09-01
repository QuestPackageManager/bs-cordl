#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TreeViewReorderableDragAndDropController.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::*)()>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d91fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_expandedIdsBeforeDrag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandedIdsBeforeDrag;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_expandedIdsBeforeDrag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandedIdsBeforeDrag;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_set_expandedIdsBeforeDrag(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expandedIdsBeforeDrag = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_draggedIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___draggedIds;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_get_draggedIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___draggedIds;
}
constexpr void UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::__cordl_internal_set_draggedIds(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___draggedIds = value;
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData* UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController_DropData::TreeViewReorderableDragAndDropController_DropData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(::UnityEngine::UIElements::BaseTreeView*)>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6d91edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseTreeView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.CompareId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::CompareId)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x6d91fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.SetupDragAndDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StartDragArgs (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*, bool)>(&::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::SetupDragAndDrop)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6d92640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.HandleDragAndDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleDragAndDrop)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6d92784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.OnDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(::UnityEngine::UIElements::IListDragAndDropArgs*)>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::OnDrop)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x6d92858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.DragCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DragCleanup)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6d92fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.RestoreExpanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::RestoreExpanded)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6d9310c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                           { "RestoreExpanded", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.HandleAutoExpand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::ReusableCollectionItem*, ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleAutoExpand)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6d9344c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.DelayExpandDropItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DelayExpandDropItem)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6d9358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), { "DelayExpandDropItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController.ExpandDropItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::ExpandDropItem)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6d93798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), { "ExpandDropItem", {}, {} })));
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
  this->___m_DropData = value;
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
  this->___m_TreeView = value;
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
  this->___m_ExpandDropItemScheduledItem = value;
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
  this->___m_ExpandDropItemCallback = value;
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::_ctor(::UnityEngine::UIElements::BaseTreeView* view) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseTreeView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, view);
}
inline int32_t UnityEngine::UIElements::TreeViewReorderableDragAndDropController::CompareId(int32_t id1, int32_t id2) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id1, id2);
}
inline ::UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::TreeViewReorderableDragAndDropController::SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds,
                                                                                                                                    bool skipText) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs>(this, ___internal_method, itemIds, skipText);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode>(this, ___internal_method, args);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DragCleanup() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::RestoreExpanded(::System::Collections::Generic::List_1<int32_t>* ids) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(),
                                                                                         { "RestoreExpanded", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ids);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, pointerPosition);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::DelayExpandDropItem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), { "DelayExpandDropItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TreeViewReorderableDragAndDropController::ExpandDropItem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(), { "ExpandDropItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController* UnityEngine::UIElements::TreeViewReorderableDragAndDropController::New_ctor(::UnityEngine::UIElements::BaseTreeView* view) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TreeViewReorderableDragAndDropController*>(view));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TreeViewReorderableDragAndDropController::TreeViewReorderableDragAndDropController() {}

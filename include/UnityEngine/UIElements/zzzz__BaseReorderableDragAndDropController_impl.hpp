#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseReorderableDragAndDropController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseReorderableDragAndDropController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__IReorderable_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.GetSortedSelectedIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::GetSortedSelectedIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d85ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), { "GetSortedSelectedIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(::UnityEngine::UIElements::BaseVerticalCollectionView*)>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d85efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.get_enableReordering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::get_enableReordering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d85f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.set_enableReordering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(bool)>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::set_enableReordering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d85f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.CanStartDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::CanStartDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d85f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.SetupDragAndDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StartDragArgs (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*, bool)>(&::UnityEngine::UIElements::BaseReorderableDragAndDropController::SetupDragAndDrop)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x6d85f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.CompareId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::CompareId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d86618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.HandleDragAndDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::BaseReorderableDragAndDropController::HandleDragAndDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.OnDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(::UnityEngine::UIElements::IListDragAndDropArgs*)>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::OnDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.DragCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::DragCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d86628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.HandleAutoExpand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::ReusableCollectionItem*, ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::BaseReorderableDragAndDropController::HandleAutoExpand)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d8662c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get_m_View() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView* const& UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get_m_View() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr void UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_set_m_View(::UnityEngine::UIElements::BaseVerticalCollectionView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_View = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get_m_SortedSelectedIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedSelectedIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get_m_SortedSelectedIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedSelectedIds;
}
constexpr void UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_set_m_SortedSelectedIds(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortedSelectedIds = value;
}
constexpr bool& UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get__enableReordering_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableReordering_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get__enableReordering_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableReordering_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_set__enableReordering_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableReordering_k__BackingField = value;
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::UIElements::BaseReorderableDragAndDropController::GetSortedSelectedIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), { "GetSortedSelectedIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseReorderableDragAndDropController::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* view) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, view);
}
inline bool UnityEngine::UIElements::BaseReorderableDragAndDropController::get_enableReordering() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseReorderableDragAndDropController::set_enableReordering(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseReorderableDragAndDropController::CanStartDrag(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, itemIds);
}
inline ::UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::BaseReorderableDragAndDropController::SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds,
                                                                                                                                bool skipText) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs>(this, ___internal_method, itemIds, skipText);
}
inline int32_t UnityEngine::UIElements::BaseReorderableDragAndDropController::CompareId(int32_t id1, int32_t id2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id1, id2);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::BaseReorderableDragAndDropController::HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode>(this, ___internal_method, args);
}
inline void UnityEngine::UIElements::BaseReorderableDragAndDropController::OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::UIElements::BaseReorderableDragAndDropController::DragCleanup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseReorderableDragAndDropController::HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, pointerPosition);
}
inline ::UnityEngine::UIElements::BaseReorderableDragAndDropController*
UnityEngine::UIElements::BaseReorderableDragAndDropController::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* view) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(view));
}
/// @brief Convert operator to "::UnityEngine::UIElements::ICollectionDragAndDropController"
constexpr UnityEngine::UIElements::BaseReorderableDragAndDropController::operator ::UnityEngine::UIElements::ICollectionDragAndDropController*() noexcept {
  return static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::ICollectionDragAndDropController"
constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController*
UnityEngine::UIElements::BaseReorderableDragAndDropController::i___UnityEngine__UIElements__ICollectionDragAndDropController() noexcept {
  return static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>"
constexpr UnityEngine::UIElements::BaseReorderableDragAndDropController::operator ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*() noexcept {
  return static_cast<::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>"
constexpr ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*
UnityEngine::UIElements::BaseReorderableDragAndDropController::i___UnityEngine__UIElements__IDragAndDropController_1___UnityEngine__UIElements__IListDragAndDropArgs__() noexcept {
  return static_cast<::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IReorderable"
constexpr UnityEngine::UIElements::BaseReorderableDragAndDropController::operator ::UnityEngine::UIElements::IReorderable*() noexcept {
  return static_cast<::UnityEngine::UIElements::IReorderable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IReorderable"
constexpr ::UnityEngine::UIElements::IReorderable* UnityEngine::UIElements::BaseReorderableDragAndDropController::i___UnityEngine__UIElements__IReorderable() noexcept {
  return static_cast<::UnityEngine::UIElements::IReorderable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseReorderableDragAndDropController::BaseReorderableDragAndDropController() {}

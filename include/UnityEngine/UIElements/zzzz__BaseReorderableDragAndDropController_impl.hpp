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
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::BaseVerticalCollectionView*)>(&::UnityEngine::UIElements::BaseReorderableDragAndDropController::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3587ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.get_enableReordering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)()>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::get_enableReordering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x358832c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(),
                                                 "get_enableReordering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.set_enableReordering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(bool)>(
    &::UnityEngine::UIElements::BaseReorderableDragAndDropController::set_enableReordering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3588334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), "set_enableReordering",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.CanStartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::UIElements::BaseReorderableDragAndDropController::CanStartDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3588340;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.SetupDragAndDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::StartDragArgs* (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*, bool)>(
        &::UnityEngine::UIElements::BaseReorderableDragAndDropController::SetupDragAndDrop)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x3588348;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.HandleDragAndDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::BaseReorderableDragAndDropController::HandleDragAndDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseReorderableDragAndDropController.OnDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::BaseReorderableDragAndDropController::OnDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), 13));
    return ___internal_method;
  }
};
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
constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get_m_View() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVerticalCollectionView*> const&
UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get_m_View() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr void UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_set_m_View(::UnityEngine::UIElements::BaseVerticalCollectionView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_View)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get_m_SelectedIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedIndices;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const&
UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_get_m_SelectedIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedIndices;
}
constexpr void UnityEngine::UIElements::BaseReorderableDragAndDropController::__cordl_internal_set_m_SelectedIndices(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::UnityEngine::UIElements::BaseReorderableDragAndDropController*
UnityEngine::UIElements::BaseReorderableDragAndDropController::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* view) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>(view));
}
inline void UnityEngine::UIElements::BaseReorderableDragAndDropController::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* view) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, view);
}
inline bool UnityEngine::UIElements::BaseReorderableDragAndDropController::get_enableReordering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), "get_enableReordering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseReorderableDragAndDropController::set_enableReordering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), "set_enableReordering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseReorderableDragAndDropController::CanStartDrag(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIndices) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemIndices);
}
/// @param skipText: bool (default: false)
inline ::UnityEngine::UIElements::StartDragArgs* UnityEngine::UIElements::BaseReorderableDragAndDropController::SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIndices,
                                                                                                                                 bool skipText) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs*, false>(this, ___internal_method, itemIndices, skipText);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::BaseReorderableDragAndDropController::HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(this, ___internal_method, args);
}
inline void UnityEngine::UIElements::BaseReorderableDragAndDropController::OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseReorderableDragAndDropController*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseReorderableDragAndDropController::BaseReorderableDragAndDropController() {}

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDragAndDropController_1.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropController_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template <typename TArgs> inline bool UnityEngine::UIElements::IDragAndDropController_1<TArgs>::CanStartDrag(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemIds);
}
/// @param skipText: bool (default: false)
template <typename TArgs>
inline ::UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::IDragAndDropController_1<TArgs>::SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds,
                                                                                                                           bool skipText) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs, false>(this, ___internal_method, itemIds, skipText);
}
template <typename TArgs> inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::IDragAndDropController_1<TArgs>::HandleDragAndDrop(TArgs args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(this, ___internal_method, args);
}
template <typename TArgs> inline void UnityEngine::UIElements::IDragAndDropController_1<TArgs>::OnDrop(TArgs args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
template <typename TArgs> inline void UnityEngine::UIElements::IDragAndDropController_1<TArgs>::DragCleanup() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TArgs>
inline void UnityEngine::UIElements::IDragAndDropController_1<TArgs>::HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, pointerPosition);
}
template <typename TArgs> inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::UIElements::IDragAndDropController_1<TArgs>::GetSortedSelectedIds() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method);
}

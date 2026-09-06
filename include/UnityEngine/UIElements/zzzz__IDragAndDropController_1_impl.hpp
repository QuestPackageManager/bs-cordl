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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, itemIds);
}
template <typename TArgs>
inline ::UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::IDragAndDropController_1<TArgs>::SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIds,
                                                                                                                           bool skipText) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs>(this, ___internal_method, itemIds, skipText);
}
template <typename TArgs> inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::IDragAndDropController_1<TArgs>::HandleDragAndDrop(TArgs args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode>(this, ___internal_method, args);
}
template <typename TArgs> inline void UnityEngine::UIElements::IDragAndDropController_1<TArgs>::OnDrop(TArgs args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
template <typename TArgs> inline void UnityEngine::UIElements::IDragAndDropController_1<TArgs>::DragCleanup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TArgs>
inline void UnityEngine::UIElements::IDragAndDropController_1<TArgs>::HandleAutoExpand(::UnityEngine::UIElements::ReusableCollectionItem* item, ::UnityEngine::Vector2 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, pointerPosition);
}
template <typename TArgs> inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::UIElements::IDragAndDropController_1<TArgs>::GetSortedSelectedIds() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDragAndDropController_1<TArgs>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method);
}

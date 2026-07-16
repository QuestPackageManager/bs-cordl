#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewDragger.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger_DragPosition.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger_DragPosition::*)(::UnityEngine::UIElements::ListViewDragger_DragPosition)>(
    &::UnityEngine::UIElements::ListViewDragger_DragPosition::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6d8c414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger_DragPosition.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger_DragPosition::*)(::System::Object*)>(
    &::UnityEngine::UIElements::ListViewDragger_DragPosition::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6d8c4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger_DragPosition.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ListViewDragger_DragPosition::*)()>(&::UnityEngine::UIElements::ListViewDragger_DragPosition::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d8c53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::ListViewDragger_DragPosition::Equals(::UnityEngine::UIElements::ListViewDragger_DragPosition other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::ListViewDragger_DragPosition::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::ListViewDragger_DragPosition::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>"
constexpr UnityEngine::UIElements::ListViewDragger_DragPosition::operator ::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>*
UnityEngine::UIElements::ListViewDragger_DragPosition::i___System__IEquatable_1___UnityEngine__UIElements__ListViewDragger_DragPosition_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::ListViewDragger_DragPosition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "childIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recycledItem", ty: "::UnityEngine::UIElements::ReusableCollectionItem*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "dropPosition", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition::ListViewDragger_DragPosition(int32_t insertAtIndex, int32_t parentId, int32_t childIndex,
                                                                                                ::UnityEngine::UIElements::ReusableCollectionItem* recycledItem,
                                                                                                ::UnityEngine::UIElements::DragAndDropPosition dropPosition) noexcept {
  this->insertAtIndex = insertAtIndex;
  this->parentId = parentId;
  this->childIndex = childIndex;
  this->recycledItem = recycledItem;
  this->dropPosition = dropPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition::ListViewDragger_DragPosition() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_targetView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BaseVerticalCollectionView* (::UnityEngine::UIElements::ListViewDragger::*)()>(
    &::UnityEngine::UIElements::ListViewDragger::get_targetView)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d88630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "get_targetView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_targetScrollView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ScrollView* (::UnityEngine::UIElements::ListViewDragger::*)()>(
    &::UnityEngine::UIElements::ListViewDragger::get_targetScrollView)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d886b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "get_targetScrollView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_dragAndDropController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::ListViewDragger::*)()>(
    &::UnityEngine::UIElements::ListViewDragger::get_dragAndDropController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d886cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "get_dragAndDropController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.set_dragAndDropController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ICollectionDragAndDropController*)>(
    &::UnityEngine::UIElements::ListViewDragger::set_dragAndDropController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d886d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                             { "set_dragAndDropController", {}, { ::i2c::type_of<::UnityEngine::UIElements::ICollectionDragAndDropController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger::*)()>(&::UnityEngine::UIElements::ListViewDragger::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d886dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(bool)>(&::UnityEngine::UIElements::ListViewDragger::set_enabled)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x6d886e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::BaseVerticalCollectionView*)>(
    &::UnityEngine::UIElements::ListViewDragger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d88a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.CanStartDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::CanStartDrag)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6d88a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.StartDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StartDragArgs (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::ListViewDragger::StartDrag)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6d890dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.UpdateDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::UpdateDrag)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6d893f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetVisualMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::ListViewDragger::*)(
    ::UnityEngine::Vector3, ::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>)>(&::UnityEngine::UIElements::ListViewDragger::GetVisualMode)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6d895cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                         { "GetVisualMode", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.OnDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::OnDrop)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x6d8a360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.HandleDragAndScroll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::ListViewDragger::HandleDragAndScroll)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6d89778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "HandleDragAndScroll", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.HandleAutoExpansion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::ListViewDragger::HandleAutoExpansion)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6d8997c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "HandleAutoExpansion", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.ApplyDragAndDropUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ListViewDragger_DragPosition)>(
    &::UnityEngine::UIElements::ListViewDragger::ApplyDragAndDropUI)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x6d89a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                             { "ApplyDragAndDropUI", {}, { ::i2c::type_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.TryGetDragPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2, ::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>)>(
    &::UnityEngine::UIElements::ListViewDragger::TryGetDragPosition)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x6d8ae60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.HandleTreePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2, ::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>)>(
    &::UnityEngine::UIElements::ListViewDragger::HandleTreePosition)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6d8b24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                            { "HandleTreePosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::ListViewDragger::HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x6d8b368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                             { "HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetPreviousAndNextItemsIgnoringDraggedItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::UIElements::ListViewDragger::GetPreviousAndNextItemsIgnoringDraggedItems)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6d8b8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                            { "GetPreviousAndNextItemsIgnoringDraggedItems", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.MakeDragAndDropArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DragAndDropArgs (::UnityEngine::UIElements::ListViewDragger::*)(
    ::UnityEngine::UIElements::ListViewDragger_DragPosition)>(&::UnityEngine::UIElements::ListViewDragger::MakeDragAndDropArgs)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6d8a23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                             { "MakeDragAndDropArgs", {}, { ::i2c::type_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetHoverBarTopPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(
    &::UnityEngine::UIElements::ListViewDragger::GetHoverBarTopPosition)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6d8bb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                             { "GetHoverBarTopPosition", {}, { ::i2c::type_of<::UnityEngine::UIElements::ReusableCollectionItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.PlaceHoverBarAtElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(
    &::UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAtElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d8ae44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                             { "PlaceHoverBarAtElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::ReusableCollectionItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.PlaceHoverBarAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAt)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x6d8a7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                             { "PlaceHoverBarAt", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.ClearDragAndDropUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(bool)>(&::UnityEngine::UIElements::ListViewDragger::ClearDragAndDropUI)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x6d8bbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetRecycledItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ReusableCollectionItem* (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::ListViewDragger::GetRecycledItem)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6d88d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "GetRecycledItem", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.IsDraggingDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger::*)()>(&::UnityEngine::UIElements::ListViewDragger::IsDraggingDisabled)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d8a6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "IsDraggingDisabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger._ApplyDragAndDropUI_g__GeometryChangedCallback_31_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::ListViewDragger::_ApplyDragAndDropUI_g__GeometryChangedCallback_31_0)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6d8c1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                             { "<ApplyDragAndDropUI>g__GeometryChangedCallback|31_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_LastDragPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDragPosition;
}
constexpr ::UnityEngine::UIElements::ListViewDragger_DragPosition const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_LastDragPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDragPosition;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_LastDragPosition(::UnityEngine::UIElements::ListViewDragger_DragPosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastDragPosition = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHoverBar;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHoverBar;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_DragHoverBar(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragHoverBar = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverItemMarker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHoverItemMarker;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverItemMarker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHoverItemMarker;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_DragHoverItemMarker(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragHoverItemMarker = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverSiblingMarker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHoverSiblingMarker;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_DragHoverSiblingMarker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHoverSiblingMarker;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_DragHoverSiblingMarker(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragHoverSiblingMarker = value;
}
constexpr float_t& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_LeftIndentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftIndentation;
}
constexpr float_t const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_LeftIndentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftIndentation;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_LeftIndentation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LeftIndentation = value;
}
constexpr float_t& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_SiblingBottom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SiblingBottom;
}
constexpr float_t const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_SiblingBottom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SiblingBottom;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_SiblingBottom(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SiblingBottom = value;
}
constexpr bool& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_Enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enabled;
}
constexpr bool const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get_m_Enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enabled;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set_m_Enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Enabled = value;
}
constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController*& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get__dragAndDropController_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragAndDropController_k__BackingField;
}
constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController* const& UnityEngine::UIElements::ListViewDragger::__cordl_internal_get__dragAndDropController_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragAndDropController_k__BackingField;
}
constexpr void UnityEngine::UIElements::ListViewDragger::__cordl_internal_set__dragAndDropController_k__BackingField(::UnityEngine::UIElements::ICollectionDragAndDropController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dragAndDropController_k__BackingField = value;
}
inline ::UnityEngine::UIElements::BaseVerticalCollectionView* UnityEngine::UIElements::ListViewDragger::get_targetView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "get_targetView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVerticalCollectionView*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ScrollView* UnityEngine::UIElements::ListViewDragger::get_targetScrollView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "get_targetScrollView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollView*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::ListViewDragger::get_dragAndDropController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "get_dragAndDropController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListViewDragger::set_dragAndDropController(::UnityEngine::UIElements::ICollectionDragAndDropController* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                           { "set_dragAndDropController", {}, { ::i2c::type_of<::UnityEngine::UIElements::ICollectionDragAndDropController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::ListViewDragger::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListViewDragger::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ListViewDragger::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listView);
}
inline bool UnityEngine::UIElements::ListViewDragger::CanStartDrag(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::ListViewDragger::StartDrag(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::UpdateDrag(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::ListViewDragger::GetVisualMode(::UnityEngine::Vector3 pointerPosition,
                                                                                                         ::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition> dragPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                       { "GetVisualMode", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode>(this, ___internal_method, pointerPosition, dragPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::OnDrop(::UnityEngine::Vector3 pointerPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::HandleDragAndScroll(::UnityEngine::Vector2 pointerPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "HandleDragAndScroll", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::HandleAutoExpansion(::UnityEngine::Vector2 pointerPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "HandleAutoExpansion", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::ApplyDragAndDropUI(::UnityEngine::UIElements::ListViewDragger_DragPosition dragPosition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                                                         { "ApplyDragAndDropUI", {}, { ::i2c::type_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dragPosition);
}
inline bool UnityEngine::UIElements::ListViewDragger::TryGetDragPosition(::UnityEngine::Vector2 pointerPosition, ::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition> dragPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerPosition, dragPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::HandleTreePosition(::UnityEngine::Vector2 pointerPosition, ::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition> dragPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                          { "HandleTreePosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition, dragPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition> dragPosition,
                                                                                                                     ::UnityEngine::Vector2 pointerPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                           { "HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ListViewDragger_DragPosition>>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dragPosition, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::GetPreviousAndNextItemsIgnoringDraggedItems(int32_t insertAtIndex, ::by_ref<int32_t> previousItemId, ::by_ref<int32_t> nextItemId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                          { "GetPreviousAndNextItemsIgnoringDraggedItems", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, insertAtIndex, previousItemId, nextItemId);
}
inline ::UnityEngine::UIElements::DragAndDropArgs UnityEngine::UIElements::ListViewDragger::MakeDragAndDropArgs(::UnityEngine::UIElements::ListViewDragger_DragPosition dragPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                           { "MakeDragAndDropArgs", {}, { ::i2c::type_of<::UnityEngine::UIElements::ListViewDragger_DragPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragAndDropArgs>(this, ___internal_method, dragPosition);
}
inline float_t UnityEngine::UIElements::ListViewDragger::GetHoverBarTopPosition(::UnityEngine::UIElements::ReusableCollectionItem* item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                                                         { "GetHoverBarTopPosition", {}, { ::i2c::type_of<::UnityEngine::UIElements::ReusableCollectionItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAtElement(::UnityEngine::UIElements::ReusableCollectionItem* item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                                                         { "PlaceHoverBarAtElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::ReusableCollectionItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAt(float_t top, float_t indentationPadding, float_t siblingBottom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                           { "PlaceHoverBarAt", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, top, indentationPadding, siblingBottom);
}
inline void UnityEngine::UIElements::ListViewDragger::ClearDragAndDropUI(bool dragCancelled) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dragCancelled);
}
inline ::UnityEngine::UIElements::ReusableCollectionItem* UnityEngine::UIElements::ListViewDragger::GetRecycledItem(::UnityEngine::Vector3 pointerPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "GetRecycledItem", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ReusableCollectionItem*>(this, ___internal_method, pointerPosition);
}
inline bool UnityEngine::UIElements::ListViewDragger::IsDraggingDisabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(), { "IsDraggingDisabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ListViewDragger::_ApplyDragAndDropUI_g__GeometryChangedCallback_31_0(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDragger*>(),
                                                           { "<ApplyDragAndDropUI>g__GeometryChangedCallback|31_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::ListViewDragger::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ListViewDragger*>(listView));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewDragger::ListViewDragger() {}

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/ColumnMover.hpp"
#include "UnityEngine/UIElements/zzzz__PointerManipulator_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__ColumnMover_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnCollectionHeader_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnMoveLocationPreview_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnLayout_def.hpp"
#include "UnityEngine/UIElements/zzzz__Column_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.get_columnLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ColumnLayout* (::UnityEngine::UIElements::Internal::ColumnMover::*)()>(
    &::UnityEngine::UIElements::Internal::ColumnMover::get_columnLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1db44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "get_columnLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.set_columnLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::ColumnLayout*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::set_columnLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1db4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                           { "set_columnLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnLayout*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Internal::ColumnMover::*)()>(&::UnityEngine::UIElements::Internal::ColumnMover::get_active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.set_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(bool)>(&::UnityEngine::UIElements::Internal::ColumnMover::set_active)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d1db5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.get_moving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Internal::ColumnMover::*)()>(&::UnityEngine::UIElements::Internal::ColumnMover::get_moving)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1db94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "get_moving", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.set_moving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(bool)>(&::UnityEngine::UIElements::Internal::ColumnMover::set_moving)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d1db9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "set_moving", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.add_activeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::add_activeChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d1dbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                             { "add_activeChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.remove_activeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::remove_activeChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d1dc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                             { "remove_activeChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.add_movingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::add_movingChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d1dd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                             { "add_movingChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.remove_movingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::remove_movingChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d1de14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                             { "remove_movingChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)()>(&::UnityEngine::UIElements::Internal::ColumnMover::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6d1ded4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.RegisterCallbacksOnTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)()>(&::UnityEngine::UIElements::Internal::ColumnMover::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6d1df90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { ::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)()>(
    &::UnityEngine::UIElements::Internal::ColumnMover::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6d1e2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { ::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::OnPointerDown)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6d1e5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                           { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.OnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::OnPointerMove)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d1e844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                           { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::OnPointerUp)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6d1e9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                           { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.OnPointerCancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::PointerCancelEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::OnPointerCancel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6d1eb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                           { "OnPointerCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.OnPointerCaptureOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::PointerCaptureOutEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::OnPointerCaptureOut)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d1ece4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                           { "OnPointerCaptureOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.ProcessCancelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::EventBase*, int32_t)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::ProcessCancelEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6d1ec08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                             { "ProcessCancelEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.OnKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::KeyDownEvent*)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::OnKeyDown)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d1ee7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.ProcessDownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::ProcessDownEvent)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6d1e684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                            { "ProcessDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.ProcessMoveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::ProcessMoveEvent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6d1e8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                             { "ProcessMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.ProcessUpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::UIElements::Internal::ColumnMover::ProcessUpEvent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6d1ea78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                         { "ProcessUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.BeginDragMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(float_t)>(&::UnityEngine::UIElements::Internal::ColumnMover::BeginDragMove)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x6d1eefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "BeginDragMove", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.DragMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(float_t)>(&::UnityEngine::UIElements::Internal::ColumnMover::DragMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1f350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "DragMove", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.UpdatePreviewPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)()>(&::UnityEngine::UIElements::Internal::ColumnMover::UpdatePreviewPosition)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6d1f694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "UpdatePreviewPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.UpdateMoveLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)()>(&::UnityEngine::UIElements::Internal::ColumnMover::UpdateMoveLocation)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x6d1f358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "UpdateMoveLocation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::ColumnMover.EndDragMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::ColumnMover::*)(bool)>(&::UnityEngine::UIElements::Internal::ColumnMover::EndDragMove)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6d1ed5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "EndDragMove", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_StartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartPos;
}
constexpr float_t const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_StartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartPos;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_StartPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartPos = value;
}
constexpr float_t& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_LastPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPos;
}
constexpr float_t const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_LastPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPos;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_LastPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastPos = value;
}
constexpr bool& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_Active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr bool const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_Active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_Active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Active = value;
}
constexpr bool& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_Moving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Moving;
}
constexpr bool const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_Moving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Moving;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_Moving(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Moving = value;
}
constexpr bool& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_Cancelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cancelled;
}
constexpr bool const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_Cancelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cancelled;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_Cancelled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cancelled = value;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_Header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_Header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_Header(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Header = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_PreviewElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviewElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_PreviewElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviewElement;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_PreviewElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviewElement = value;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_LocationPreviewElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocationPreviewElement;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview* const&
UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_LocationPreviewElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocationPreviewElement;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_LocationPreviewElement(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocationPreviewElement = value;
}
constexpr ::UnityEngine::UIElements::Column*& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_ColumnToMove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnToMove;
}
constexpr ::UnityEngine::UIElements::Column* const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_ColumnToMove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnToMove;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_ColumnToMove(::UnityEngine::UIElements::Column* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColumnToMove = value;
}
constexpr float_t& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_ColumnToMovePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnToMovePos;
}
constexpr float_t const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_ColumnToMovePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnToMovePos;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_ColumnToMovePos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColumnToMovePos = value;
}
constexpr float_t& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_ColumnToMoveWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnToMoveWidth;
}
constexpr float_t const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_ColumnToMoveWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnToMoveWidth;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_ColumnToMoveWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColumnToMoveWidth = value;
}
constexpr ::UnityEngine::UIElements::Column*& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_DestinationColumn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DestinationColumn;
}
constexpr ::UnityEngine::UIElements::Column* const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_DestinationColumn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DestinationColumn;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_DestinationColumn(::UnityEngine::UIElements::Column* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DestinationColumn = value;
}
constexpr bool& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_MoveBeforeDestination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveBeforeDestination;
}
constexpr bool const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_m_MoveBeforeDestination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveBeforeDestination;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_m_MoveBeforeDestination(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveBeforeDestination = value;
}
constexpr ::UnityEngine::UIElements::ColumnLayout*& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get__columnLayout_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnLayout_k__BackingField;
}
constexpr ::UnityEngine::UIElements::ColumnLayout* const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get__columnLayout_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnLayout_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set__columnLayout_k__BackingField(::UnityEngine::UIElements::ColumnLayout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnLayout_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_activeChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeChanged;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_activeChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeChanged;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_activeChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activeChanged = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_movingChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___movingChanged;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* const& UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_get_movingChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___movingChanged;
}
constexpr void UnityEngine::UIElements::Internal::ColumnMover::__cordl_internal_set_movingChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___movingChanged = value;
}
inline ::UnityEngine::UIElements::ColumnLayout* UnityEngine::UIElements::Internal::ColumnMover::get_columnLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "get_columnLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ColumnLayout*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::set_columnLayout(::UnityEngine::UIElements::ColumnLayout* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                         { "set_columnLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnLayout*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Internal::ColumnMover::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::set_active(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "set_active", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Internal::ColumnMover::get_moving() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "get_moving", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::set_moving(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "set_moving", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::add_activeChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                           { "add_activeChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::remove_activeChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                           { "remove_activeChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::add_movingChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                           { "add_movingChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::remove_movingChanged(::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                           { "remove_movingChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Internal::ColumnMover*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::RegisterCallbacksOnTarget() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::UnregisterCallbacksFromTarget() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                         { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                         { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                         { "OnPointerCancel", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCancelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                                                         { "OnPointerCaptureOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerCaptureOutEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::ProcessCancelEvent(::UnityEngine::UIElements::EventBase* evt, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                           { "ProcessCancelEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, pointerId);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                       { "ProcessDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition, pointerId);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::ProcessMoveEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::Vector2 localPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                                           { "ProcessMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, localPosition);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(),
                                       { "ProcessUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition, pointerId);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::BeginDragMove(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "BeginDragMove", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::DragMove(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "DragMove", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::UpdatePreviewPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "UpdatePreviewPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::UpdateMoveLocation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "UpdateMoveLocation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::ColumnMover::EndDragMove(bool cancelled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::ColumnMover*>(), { "EndDragMove", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancelled);
}
inline ::UnityEngine::UIElements::Internal::ColumnMover* UnityEngine::UIElements::Internal::ColumnMover::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::ColumnMover*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::ColumnMover::ColumnMover() {}

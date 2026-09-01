#pragma once
// IWYU pragma private; include "HMUI\TextSlider.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "HMUI/zzzz__TextSlider_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::HMUI::TextSlider.set_valueTextColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::UnityEngine::Color)>(&::HMUI::TextSlider::set_valueTextColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x587dd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_valueTextColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.get_handleRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::get_handleRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_handleRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.set_handleRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::UnityEngine::RectTransform*)>(&::HMUI::TextSlider::set_handleRect)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x587f52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_handleRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.set_handleColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::UnityEngine::Color)>(&::HMUI::TextSlider::set_handleColor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x587dca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_handleColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.get_handleSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::get_handleSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_handleSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.set_handleSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(float_t)>(&::HMUI::TextSlider::set_handleSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x587f718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_handleSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.get_valueSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::get_valueSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_valueSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.set_valueSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(float_t)>(&::HMUI::TextSlider::set_valueSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x587f7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_valueSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.get_separatorSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::get_separatorSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_separatorSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.set_separatorSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(float_t)>(&::HMUI::TextSlider::set_separatorSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x587f830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_separatorSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.get_numberOfSteps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::get_numberOfSteps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_numberOfSteps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.set_numberOfSteps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(int32_t)>(&::HMUI::TextSlider::set_numberOfSteps)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x587d488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_numberOfSteps", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.get_normalizedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::get_normalizedValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x587dbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_normalizedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.set_normalizedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(float_t)>(&::HMUI::TextSlider::set_normalizedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587e424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_normalizedValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.add_normalizedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>*)>(
    &::HMUI::TextSlider::add_normalizedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587d51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "add_normalizedValueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.remove_normalizedValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>*)>(
    &::HMUI::TextSlider::remove_normalizedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587d65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "remove_normalizedValueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::UnityEngine::UI::CanvasUpdate)>(&::HMUI::TextSlider::Rebuild)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587f954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.LayoutComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587f958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587f95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::Refresh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x587f960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x587f970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.UpdateCachedReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::UpdateCachedReferences)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x587f5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "UpdateCachedReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.SetNormalizedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(float_t)>(&::HMUI::TextSlider::SetNormalizedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587e99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "SetNormalizedValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.SetNormalizedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(float_t, bool)>(&::HMUI::TextSlider::SetNormalizedValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x587f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "SetNormalizedValue", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x587f9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.UpdateVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::UpdateVisuals)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x587d8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.UpdateDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::TextSlider::UpdateDrag)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x587f9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "UpdateDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.MayDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::TextSlider::MayDrag)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x587fc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "MayDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.OnBeginDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::TextSlider::OnBeginDrag)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x587fca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.OnDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::TextSlider::OnDrag)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x587fd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::TextSlider::OnPointerDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x587fde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.OnInitializePotentialDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::TextSlider::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x587fe90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.TextForNormalizedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::TextSlider::*)(float_t)>(&::HMUI::TextSlider::TextForNormalizedValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x587fea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ::i2c::class_of<::HMUI::TextSlider*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x587e010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSlider.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::HMUI::TextSlider::*)()>(&::HMUI::TextSlider::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587fec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& HMUI::TextSlider::__cordl_internal_get__valueText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& HMUI::TextSlider::__cordl_internal_get__valueText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueText;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__valueText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueText = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::TextSlider::__cordl_internal_get__handleRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::TextSlider::__cordl_internal_get__handleRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleRect;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__handleRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleRect = value;
}
constexpr bool& HMUI::TextSlider::__cordl_internal_get__enableDragging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableDragging;
}
constexpr bool const& HMUI::TextSlider::__cordl_internal_get__enableDragging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableDragging;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__enableDragging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableDragging = value;
}
constexpr float_t& HMUI::TextSlider::__cordl_internal_get__handleSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleSize;
}
constexpr float_t const& HMUI::TextSlider::__cordl_internal_get__handleSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleSize;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__handleSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleSize = value;
}
constexpr float_t& HMUI::TextSlider::__cordl_internal_get__valueSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueSize;
}
constexpr float_t const& HMUI::TextSlider::__cordl_internal_get__valueSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueSize;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__valueSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueSize = value;
}
constexpr float_t& HMUI::TextSlider::__cordl_internal_get__separatorSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separatorSize;
}
constexpr float_t const& HMUI::TextSlider::__cordl_internal_get__separatorSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separatorSize;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__separatorSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____separatorSize = value;
}
constexpr int32_t& HMUI::TextSlider::__cordl_internal_get__numberOfSteps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfSteps;
}
constexpr int32_t const& HMUI::TextSlider::__cordl_internal_get__numberOfSteps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfSteps;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__numberOfSteps(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfSteps = value;
}
constexpr float_t& HMUI::TextSlider::__cordl_internal_get__normalizedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedValue;
}
constexpr float_t const& HMUI::TextSlider::__cordl_internal_get__normalizedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedValue;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__normalizedValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalizedValue = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>*& HMUI::TextSlider::__cordl_internal_get_normalizedValueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizedValueDidChangeEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>* const& HMUI::TextSlider::__cordl_internal_get_normalizedValueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizedValueDidChangeEvent;
}
constexpr void HMUI::TextSlider::__cordl_internal_set_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalizedValueDidChangeEvent = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::TextSlider::__cordl_internal_get__containerRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::TextSlider::__cordl_internal_get__containerRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerRect;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__containerRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerRect = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& HMUI::TextSlider::__cordl_internal_get__handleGraphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleGraphic;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& HMUI::TextSlider::__cordl_internal_get__handleGraphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleGraphic;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__handleGraphic(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleGraphic = value;
}
constexpr ::UnityEngine::DrivenRectTransformTracker& HMUI::TextSlider::__cordl_internal_get__tracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracker;
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& HMUI::TextSlider::__cordl_internal_get__tracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tracker;
}
constexpr void HMUI::TextSlider::__cordl_internal_set__tracker(::UnityEngine::DrivenRectTransformTracker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tracker = value;
}
inline void HMUI::TextSlider::set_valueTextColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_valueTextColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::TextSlider::get_handleRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_handleRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void HMUI::TextSlider::set_handleRect(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_handleRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TextSlider::set_handleColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_handleColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::TextSlider::get_handleSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_handleSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::TextSlider::set_handleSize(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_handleSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::TextSlider::get_valueSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_valueSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::TextSlider::set_valueSize(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_valueSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::TextSlider::get_separatorSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_separatorSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::TextSlider::set_separatorSize(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_separatorSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HMUI::TextSlider::get_numberOfSteps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_numberOfSteps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HMUI::TextSlider::set_numberOfSteps(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_numberOfSteps", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::TextSlider::get_normalizedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "get_normalizedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::TextSlider::set_normalizedValue(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "set_normalizedValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TextSlider::add_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "add_normalizedValueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TextSlider::remove_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "remove_normalizedValueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TextSlider::Rebuild(::UnityEngine::UI::CanvasUpdate executing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, executing);
}
inline void HMUI::TextSlider::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TextSlider::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TextSlider::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TextSlider::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TextSlider::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TextSlider::UpdateCachedReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "UpdateCachedReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TextSlider::SetNormalizedValue(float_t input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "SetNormalizedValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void HMUI::TextSlider::SetNormalizedValue(float_t input, bool sendCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "SetNormalizedValue", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, sendCallback);
}
inline void HMUI::TextSlider::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TextSlider::UpdateVisuals() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TextSlider::UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "UpdateDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline bool HMUI::TextSlider::MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "MayDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventData);
}
inline void HMUI::TextSlider::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::TextSlider::OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::TextSlider::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::TextSlider::OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::StringW HMUI::TextSlider::TextForNormalizedValue(float_t normalizedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TextSlider*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, normalizedValue);
}
inline void HMUI::TextSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> HMUI::TextSlider::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSlider*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::HMUI::TextSlider* HMUI::TextSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::TextSlider*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr HMUI::TextSlider::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* HMUI::TextSlider::i___UnityEngine__EventSystems__IBeginDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr HMUI::TextSlider::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* HMUI::TextSlider::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr HMUI::TextSlider::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* HMUI::TextSlider::i___UnityEngine__EventSystems__IDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr HMUI::TextSlider::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* HMUI::TextSlider::i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr HMUI::TextSlider::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* HMUI::TextSlider::i___UnityEngine__UI__ICanvasElement() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::TextSlider::TextSlider() {}

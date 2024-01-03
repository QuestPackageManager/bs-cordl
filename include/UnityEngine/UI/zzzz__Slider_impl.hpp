#pragma once
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/UI/zzzz__Slider_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__Slider__Direction::__Slider__Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__Slider__Direction::__Slider__Direction() {}
constexpr ::UnityEngine::UI::__Slider__Direction UnityEngine::UI::__Slider__Direction::LeftToRight{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::__Slider__Direction UnityEngine::UI::__Slider__Direction::RightToLeft{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::__Slider__Direction UnityEngine::UI::__Slider__Direction::BottomToTop{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::__Slider__Direction UnityEngine::UI::__Slider__Direction::TopToBottom{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::UI::__Slider__SliderEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__Slider__SliderEvent::*)()>(&::UnityEngine::UI::__Slider__SliderEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d88e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__Slider__SliderEvent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UI::__Slider__SliderEvent* UnityEngine::UI::__Slider__SliderEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__Slider__SliderEvent*>());
}
inline void UnityEngine::UI::__Slider__SliderEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__Slider__SliderEvent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__Slider__SliderEvent::__Slider__SliderEvent() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__Slider__Axis::__Slider__Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__Slider__Axis::__Slider__Axis() {}
constexpr ::UnityEngine::UI::__Slider__Axis UnityEngine::UI::__Slider__Axis::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::__Slider__Axis UnityEngine::UI::__Slider__Axis::Vertical{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_fillRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_fillRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d882d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_fillRect",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.set_fillRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::RectTransform*)>(&::UnityEngine::UI::Slider::set_fillRect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d882dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_fillRect", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_handleRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_handleRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d888e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_handleRect",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.set_handleRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::RectTransform*)>(&::UnityEngine::UI::Slider::set_handleRect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d888ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_handleRect", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_direction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__Slider__Direction (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d88968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_direction",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.set_direction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::UI::__Slider__Direction)>(
    &::UnityEngine::UI::Slider::set_direction)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d88970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_direction", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Slider__Direction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_minValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_minValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d889e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_minValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.set_minValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(float_t)>(&::UnityEngine::UI::Slider::set_minValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d889ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_minValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_maxValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_maxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d88a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_maxValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.set_maxValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(float_t)>(&::UnityEngine::UI::Slider::set_maxValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d88a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_maxValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_wholeNumbers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_wholeNumbers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d88b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_wholeNumbers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.set_wholeNumbers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(bool)>(&::UnityEngine::UI::Slider::set_wholeNumbers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d88b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_wholeNumbers", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_value)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d88bac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(float_t)>(&::UnityEngine::UI::Slider::set_value)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d88c4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(float_t)>(&::UnityEngine::UI::Slider::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d88c60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_normalizedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_normalizedValue)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2d88c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_normalizedValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.set_normalizedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(float_t)>(&::UnityEngine::UI::Slider::set_normalizedValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d88d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_normalizedValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_onValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__Slider__SliderEvent* (::UnityEngine::UI::Slider::*)()>(
    &::UnityEngine::UI::Slider::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d88d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_onValueChanged",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.set_onValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::UI::__Slider__SliderEvent*)>(
    &::UnityEngine::UI::Slider::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d88d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_onValueChanged", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Slider__SliderEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_stepSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_stepSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d88da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_stepSize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2d88dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.Rebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::Slider::Rebuild)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d88ed8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.LayoutComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d88edc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d88ee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::OnEnable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d88ee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d88f20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d88f40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.OnDidApplyAnimationProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2d88f80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.UpdateCachedReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::UpdateCachedReferences)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2d88358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "UpdateCachedReferences",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.ClampValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Slider::*)(float_t)>(&::UnityEngine::UI::Slider::ClampValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d89170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "ClampValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(float_t, bool)>(&::UnityEngine::UI::Slider::Set)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2d89248;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d8930c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_axis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__Slider__Axis (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_axis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d89238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_axis",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.get_reverseValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::get_reverseValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d89224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_reverseValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.UpdateVisuals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::UpdateVisuals)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x2d885fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "UpdateVisuals",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.UpdateDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Camera*)>(
    &::UnityEngine::UI::Slider::UpdateDrag)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2d89344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "UpdateDrag", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.MayDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Slider::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Slider::MayDrag)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d8957c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "MayDrag", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.OnPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Slider::OnPointerDown)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2d895e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.OnDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Slider::OnDrag)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d89798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.OnMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::EventSystems::AxisEventData*)>(
    &::UnityEngine::UI::Slider::OnMove)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2d897e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.FindSelectableOnLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::FindSelectableOnLeft)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d89a34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.FindSelectableOnRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::FindSelectableOnRight)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d89a58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.FindSelectableOnUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::FindSelectableOnUp)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d89a7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.FindSelectableOnDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (::UnityEngine::UI::Slider::*)()>(&::UnityEngine::UI::Slider::FindSelectableOnDown)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d89aa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.OnInitializePotentialDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Slider::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d89ac4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.SetDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Slider::*)(::UnityEngine::UI::__Slider__Direction, bool)>(
    &::UnityEngine::UI::Slider::SetDirection)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2d89adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "SetDirection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Slider__Direction>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Slider.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::UnityEngine::UI::Slider::*)()>(
    &::UnityEngine::UI::Slider::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d89c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                               "UnityEngine.UI.ICanvasElement.get_transform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr UnityEngine::UI::Slider::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::UI::Slider::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr UnityEngine::UI::Slider::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr UnityEngine::UI::Slider::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::RectTransform*& UnityEngine::UI::Slider::__get_m_FillRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillRect;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& UnityEngine::UI::Slider::__get_m_FillRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillRect;
}
constexpr void UnityEngine::UI::Slider::__set_m_FillRect(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FillRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& UnityEngine::UI::Slider::__get_m_HandleRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleRect;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& UnityEngine::UI::Slider::__get_m_HandleRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleRect;
}
constexpr void UnityEngine::UI::Slider::__set_m_HandleRect(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HandleRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::__Slider__Direction& UnityEngine::UI::Slider::__get_m_Direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr ::UnityEngine::UI::__Slider__Direction const& UnityEngine::UI::Slider::__get_m_Direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr void UnityEngine::UI::Slider::__set_m_Direction(::UnityEngine::UI::__Slider__Direction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Direction = value;
}
constexpr float_t& UnityEngine::UI::Slider::__get_m_MinValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinValue;
}
constexpr float_t const& UnityEngine::UI::Slider::__get_m_MinValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinValue;
}
constexpr void UnityEngine::UI::Slider::__set_m_MinValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinValue = value;
}
constexpr float_t& UnityEngine::UI::Slider::__get_m_MaxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxValue;
}
constexpr float_t const& UnityEngine::UI::Slider::__get_m_MaxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxValue;
}
constexpr void UnityEngine::UI::Slider::__set_m_MaxValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxValue = value;
}
constexpr bool& UnityEngine::UI::Slider::__get_m_WholeNumbers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WholeNumbers;
}
constexpr bool const& UnityEngine::UI::Slider::__get_m_WholeNumbers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WholeNumbers;
}
constexpr void UnityEngine::UI::Slider::__set_m_WholeNumbers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WholeNumbers = value;
}
constexpr float_t& UnityEngine::UI::Slider::__get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr float_t const& UnityEngine::UI::Slider::__get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UI::Slider::__set_m_Value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
constexpr ::UnityEngine::UI::__Slider__SliderEvent*& UnityEngine::UI::Slider::__get_m_OnValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Slider__SliderEvent*> const& UnityEngine::UI::Slider::__get_m_OnValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr void UnityEngine::UI::Slider::__set_m_OnValueChanged(::UnityEngine::UI::__Slider__SliderEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnValueChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& UnityEngine::UI::Slider::__get_m_FillImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& UnityEngine::UI::Slider::__get_m_FillImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillImage;
}
constexpr void UnityEngine::UI::Slider::__set_m_FillImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FillImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& UnityEngine::UI::Slider::__get_m_FillTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& UnityEngine::UI::Slider::__get_m_FillTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillTransform;
}
constexpr void UnityEngine::UI::Slider::__set_m_FillTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FillTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& UnityEngine::UI::Slider::__get_m_FillContainerRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillContainerRect;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& UnityEngine::UI::Slider::__get_m_FillContainerRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillContainerRect;
}
constexpr void UnityEngine::UI::Slider::__set_m_FillContainerRect(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FillContainerRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& UnityEngine::UI::Slider::__get_m_HandleTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& UnityEngine::UI::Slider::__get_m_HandleTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleTransform;
}
constexpr void UnityEngine::UI::Slider::__set_m_HandleTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HandleTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& UnityEngine::UI::Slider::__get_m_HandleContainerRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleContainerRect;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& UnityEngine::UI::Slider::__get_m_HandleContainerRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleContainerRect;
}
constexpr void UnityEngine::UI::Slider::__set_m_HandleContainerRect(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HandleContainerRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::Slider::__get_m_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::Slider::__get_m_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr void UnityEngine::UI::Slider::__set_m_Offset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Offset = value;
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::Slider::__get_m_Tracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::Slider::__get_m_Tracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr void UnityEngine::UI::Slider::__set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tracker = value;
}
constexpr bool& UnityEngine::UI::Slider::__get_m_DelayedUpdateVisuals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedUpdateVisuals;
}
constexpr bool const& UnityEngine::UI::Slider::__get_m_DelayedUpdateVisuals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedUpdateVisuals;
}
constexpr void UnityEngine::UI::Slider::__set_m_DelayedUpdateVisuals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DelayedUpdateVisuals = value;
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::Slider::get_fillRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_fillRect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::set_fillRect(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_fillRect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::Slider::get_handleRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_handleRect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::set_handleRect(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_handleRect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::__Slider__Direction UnityEngine::UI::Slider::get_direction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_direction",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__Slider__Direction, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::set_direction(::UnityEngine::UI::__Slider__Direction value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_direction", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Slider__Direction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Slider::get_minValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_minValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::set_minValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_minValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Slider::get_maxValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_maxValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::set_maxValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_maxValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Slider::get_wholeNumbers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_wholeNumbers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::set_wholeNumbers(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_wholeNumbers", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Slider::get_value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::set_value(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Slider::SetValueWithoutNotify(float_t input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline float_t UnityEngine::UI::Slider::get_normalizedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_normalizedValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::set_normalizedValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_normalizedValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::__Slider__SliderEvent* UnityEngine::UI::Slider::get_onValueChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_onValueChanged",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__Slider__SliderEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::set_onValueChanged(::UnityEngine::UI::__Slider__SliderEvent* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "set_onValueChanged", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Slider__SliderEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Slider::get_stepSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_stepSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Slider* UnityEngine::UI::Slider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::Slider*>());
}
inline void UnityEngine::UI::Slider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::Rebuild(::UnityEngine::UI::CanvasUpdate executing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executing);
}
inline void UnityEngine::UI::Slider::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::OnDidApplyAnimationProperties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::UpdateCachedReferences() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "UpdateCachedReferences",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Slider::ClampValue(float_t input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "ClampValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, input);
}
/// @param sendCallback: bool (default: true)
inline void UnityEngine::UI::Slider::Set(float_t input, bool sendCallback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, sendCallback);
}
inline void UnityEngine::UI::Slider::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::__Slider__Axis UnityEngine::UI::Slider::get_axis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_axis",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__Slider__Axis, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::Slider::get_reverseValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "get_reverseValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::UpdateVisuals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "UpdateVisuals",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Camera* cam) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "UpdateDrag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, cam);
}
inline bool UnityEngine::UI::Slider::MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "MayDrag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Slider::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Slider::OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Slider::OnMove(::UnityEngine::EventSystems::AxisEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::UnityEngine::UI::Selectable* UnityEngine::UI::Slider::FindSelectableOnLeft() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable*, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Selectable* UnityEngine::UI::Slider::FindSelectableOnRight() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable*, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Selectable* UnityEngine::UI::Slider::FindSelectableOnUp() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable*, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Selectable* UnityEngine::UI::Slider::FindSelectableOnDown() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable*, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Slider::OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Slider::SetDirection(::UnityEngine::UI::__Slider__Direction direction, bool includeRectLayouts) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(), "SetDirection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Slider__Direction>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, direction, includeRectLayouts);
}
inline ::UnityEngine::Transform* UnityEngine::UI::Slider::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Slider*>::get(),
                                                                             "UnityEngine.UI.ICanvasElement.get_transform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Slider::Slider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MinMaxSlider_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MinMaxSlider_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__MinMaxSlider_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2e36c9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::*)()>(
    &::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2e36e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__get_m_MinValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__get_m_MinValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinValue;
}
constexpr void UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__set_m_MinValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MinValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__get_m_MaxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__get_m_MaxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxValue;
}
constexpr void UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__set_m_MaxValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MaxValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__get_m_LowLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowLimit;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__get_m_LowLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowLimit;
}
constexpr void UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__set_m_LowLimit(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LowLimit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__get_m_HighLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighLimit;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__get_m_HighLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighLimit;
}
constexpr void UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__set_m_HighLimit(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HighLimit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                      ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits* UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits::__MinMaxSlider__UxmlTraits() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState::__MinMaxSlider__DragState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState::__MinMaxSlider__DragState() {}
constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState UnityEngine::UIElements::__MinMaxSlider__DragState::NoThumb{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState UnityEngine::UIElements::__MinMaxSlider__DragState::MinThumb{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState UnityEngine::UIElements::__MinMaxSlider__DragState::MiddleThumb{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState UnityEngine::UIElements::__MinMaxSlider__DragState::MaxThumb{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.get_dragElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::MinMaxSlider::*)()>(
    &::UnityEngine::UIElements::MinMaxSlider::get_dragElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e34090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                               "get_dragElement", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.set_dragElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::MinMaxSlider::set_dragElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e34098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_dragElement", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.get_dragMinThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::MinMaxSlider::*)()>(
    &::UnityEngine::UIElements::MinMaxSlider::get_dragMinThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e340a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                               "get_dragMinThumb", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.set_dragMinThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::MinMaxSlider::set_dragMinThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e340a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_dragMinThumb", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.get_dragMaxThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::MinMaxSlider::*)()>(
    &::UnityEngine::UIElements::MinMaxSlider::get_dragMaxThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e340b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                               "get_dragMaxThumb", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.set_dragMaxThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::MinMaxSlider::set_dragMaxThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e340b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_dragMaxThumb", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.get_clampedDragger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ClampedDragger_1<float_t>* (::UnityEngine::UIElements::MinMaxSlider::*)()>(
    &::UnityEngine::UIElements::MinMaxSlider::get_clampedDragger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e340c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                               "get_clampedDragger", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.set_clampedDragger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(::UnityEngine::UIElements::ClampedDragger_1<float_t>*)>(
    &::UnityEngine::UIElements::MinMaxSlider::set_clampedDragger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e340c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_clampedDragger", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.get_minValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::MinMaxSlider::*)()>(&::UnityEngine::UIElements::MinMaxSlider::get_minValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e340d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_minValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.set_minValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(float_t)>(&::UnityEngine::UIElements::MinMaxSlider::set_minValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e340e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_minValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.get_maxValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::MinMaxSlider::*)()>(&::UnityEngine::UIElements::MinMaxSlider::get_maxValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e341c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_maxValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.set_maxValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(float_t)>(&::UnityEngine::UIElements::MinMaxSlider::set_maxValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e341e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_maxValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::MinMaxSlider::*)()>(
    &::UnityEngine::UIElements::MinMaxSlider::get_value)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e34288;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::MinMaxSlider::set_value)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e342d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::MinMaxSlider::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e3435c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), 105));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.get_lowLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::MinMaxSlider::*)()>(&::UnityEngine::UIElements::MinMaxSlider::get_lowLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e358cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_lowLimit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.set_lowLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(float_t)>(&::UnityEngine::UIElements::MinMaxSlider::set_lowLimit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2e358d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_lowLimit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.get_highLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::MinMaxSlider::*)()>(&::UnityEngine::UIElements::MinMaxSlider::get_highLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e35a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_highLimit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.set_highLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(float_t)>(
    &::UnityEngine::UIElements::MinMaxSlider::set_highLimit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2e35a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_highLimit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)()>(&::UnityEngine::UIElements::MinMaxSlider::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e35bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(::StringW, float_t, float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::MinMaxSlider::_ctor)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x2e35bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.ClampValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::MinMaxSlider::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::MinMaxSlider::ClampValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2e34188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "ClampValues", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.UpdateDragElementPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::MinMaxSlider::UpdateDragElementPosition)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e36104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "UpdateDragElementPosition", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.UpdateDragElementPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)()>(
    &::UnityEngine::UIElements::MinMaxSlider::UpdateDragElementPosition)> {
  constexpr static std::size_t size = 0x14dc;
  constexpr static std::size_t addrs = 0x2e343f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                               "UpdateDragElementPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.SliderLerpUnclamped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::MinMaxSlider::*)(float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::MinMaxSlider::SliderLerpUnclamped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e361a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "SliderLerpUnclamped", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.SliderNormalizeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::MinMaxSlider::*)(float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::MinMaxSlider::SliderNormalizeValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e36198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "SliderNormalizeValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.ComputeValueFromPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::MinMaxSlider::*)(float_t)>(
    &::UnityEngine::UIElements::MinMaxSlider::ComputeValueFromPosition)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2e361b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "ComputeValueFromPosition",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.ExecuteDefaultAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::MinMaxSlider::ExecuteDefaultAction)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2e36378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.SetSliderValueFromDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)()>(
    &::UnityEngine::UIElements::MinMaxSlider::SetSliderValueFromDrag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e36484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                               "SetSliderValueFromDrag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.SetSliderValueFromClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)()>(
    &::UnityEngine::UIElements::MinMaxSlider::SetSliderValueFromClick)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2e366bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                               "SetSliderValueFromClick", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.ComputeValueDragStateNoThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(float_t, float_t, float_t)>(
    &::UnityEngine::UIElements::MinMaxSlider::ComputeValueDragStateNoThumb)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e36a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "ComputeValueDragStateNoThumb", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.ComputeValueFromDraggingThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)(float_t, float_t)>(
    &::UnityEngine::UIElements::MinMaxSlider::ComputeValueFromDraggingThumb)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2e36518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "ComputeValueFromDraggingThumb", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MinMaxSlider.UpdateMixedValueContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MinMaxSlider::*)()>(
    &::UnityEngine::UIElements::MinMaxSlider::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e36ab0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), 104));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::MinMaxSlider::__get__dragElement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragElement_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::MinMaxSlider::__get__dragElement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragElement_k__BackingField;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dragElement_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::MinMaxSlider::__get__dragMinThumb_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragMinThumb_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::MinMaxSlider::__get__dragMinThumb_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragMinThumb_k__BackingField;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set__dragMinThumb_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dragMinThumb_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::MinMaxSlider::__get__dragMaxThumb_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragMaxThumb_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::MinMaxSlider::__get__dragMaxThumb_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragMaxThumb_k__BackingField;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set__dragMaxThumb_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dragMaxThumb_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::ClampedDragger_1<float_t>*& UnityEngine::UIElements::MinMaxSlider::__get__clampedDragger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampedDragger_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClampedDragger_1<float_t>*> const& UnityEngine::UIElements::MinMaxSlider::__get__clampedDragger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampedDragger_k__BackingField;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clampedDragger_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::MinMaxSlider::__get_m_DragElementStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragElementStartPos;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::MinMaxSlider::__get_m_DragElementStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragElementStartPos;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set_m_DragElementStartPos(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragElementStartPos = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::MinMaxSlider::__get_m_ValueStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueStartPos;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::MinMaxSlider::__get_m_ValueStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueStartPos;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set_m_ValueStartPos(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValueStartPos = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::MinMaxSlider::__get_m_DragMinThumbRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragMinThumbRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::MinMaxSlider::__get_m_DragMinThumbRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragMinThumbRect;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set_m_DragMinThumbRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragMinThumbRect = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::MinMaxSlider::__get_m_DragMaxThumbRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragMaxThumbRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::MinMaxSlider::__get_m_DragMaxThumbRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragMaxThumbRect;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set_m_DragMaxThumbRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragMaxThumbRect = value;
}
constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState& UnityEngine::UIElements::MinMaxSlider::__get_m_DragState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragState;
}
constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState const& UnityEngine::UIElements::MinMaxSlider::__get_m_DragState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragState;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set_m_DragState(::UnityEngine::UIElements::__MinMaxSlider__DragState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragState = value;
}
constexpr float_t& UnityEngine::UIElements::MinMaxSlider::__get_m_MinLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinLimit;
}
constexpr float_t const& UnityEngine::UIElements::MinMaxSlider::__get_m_MinLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinLimit;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set_m_MinLimit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinLimit = value;
}
constexpr float_t& UnityEngine::UIElements::MinMaxSlider::__get_m_MaxLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLimit;
}
constexpr float_t const& UnityEngine::UIElements::MinMaxSlider::__get_m_MaxLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLimit;
}
constexpr void UnityEngine::UIElements::MinMaxSlider::__set_m_MaxLimit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxLimit = value;
}
inline void UnityEngine::UIElements::MinMaxSlider::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MinMaxSlider::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>();
}
inline void UnityEngine::UIElements::MinMaxSlider::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MinMaxSlider::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>();
}
inline void UnityEngine::UIElements::MinMaxSlider::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MinMaxSlider::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>();
}
inline void UnityEngine::UIElements::MinMaxSlider::setStaticF_trackerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MinMaxSlider::getStaticF_trackerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>();
}
inline void UnityEngine::UIElements::MinMaxSlider::setStaticF_draggerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MinMaxSlider::getStaticF_draggerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>();
}
inline void UnityEngine::UIElements::MinMaxSlider::setStaticF_minThumbUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "minThumbUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MinMaxSlider::getStaticF_minThumbUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "minThumbUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>();
}
inline void UnityEngine::UIElements::MinMaxSlider::setStaticF_maxThumbUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "maxThumbUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::MinMaxSlider::getStaticF_maxThumbUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "maxThumbUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::MinMaxSlider::get_dragElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_dragElement",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::set_dragElement(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_dragElement", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::MinMaxSlider::get_dragMinThumb() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                             "get_dragMinThumb", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::set_dragMinThumb(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_dragMinThumb", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::MinMaxSlider::get_dragMaxThumb() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                             "get_dragMaxThumb", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::set_dragMaxThumb(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_dragMaxThumb", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ClampedDragger_1<float_t>* UnityEngine::UIElements::MinMaxSlider::get_clampedDragger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                             "get_clampedDragger", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ClampedDragger_1<float_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_clampedDragger", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::MinMaxSlider::get_minValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_minValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::set_minValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_minValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::MinMaxSlider::get_maxValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_maxValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::set_maxValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_maxValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::MinMaxSlider::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::set_value(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_value", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MinMaxSlider::SetValueWithoutNotify(::UnityEngine::Vector2 newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "SetValueWithoutNotify",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline float_t UnityEngine::UIElements::MinMaxSlider::get_lowLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_lowLimit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::set_lowLimit(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_lowLimit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::MinMaxSlider::get_highLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "get_highLimit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::set_highLimit(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "set_highLimit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::MinMaxSlider* UnityEngine::UIElements::MinMaxSlider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::MinMaxSlider*>());
}
inline void UnityEngine::UIElements::MinMaxSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param minValue: float_t (default: 0.0)
/// @param maxValue: float_t (default: 10.0)
/// @param minLimit: float_t (default: -340282350000000000000000000000000000000.0)
/// @param maxLimit: float_t (default: 340282350000000000000000000000000000000.0)
inline ::UnityEngine::UIElements::MinMaxSlider* UnityEngine::UIElements::MinMaxSlider::New_ctor(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::MinMaxSlider*>(label, minValue, maxValue, minLimit, maxLimit));
}
/// @param minValue: float_t (default: 0.0)
/// @param maxValue: float_t (default: 10.0)
/// @param minLimit: float_t (default: -340282350000000000000000000000000000000.0)
/// @param maxLimit: float_t (default: 340282350000000000000000000000000000000.0)
inline void UnityEngine::UIElements::MinMaxSlider::_ctor(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, minValue, maxValue, minLimit, maxLimit);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::MinMaxSlider::ClampValues(::UnityEngine::Vector2 valueToClamp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "ClampValues", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, valueToClamp);
}
inline void UnityEngine::UIElements::MinMaxSlider::UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "UpdateDragElementPosition", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::MinMaxSlider::UpdateDragElementPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                             "UpdateDragElementPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::MinMaxSlider::SliderLerpUnclamped(float_t a, float_t b, float_t interpolant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "SliderLerpUnclamped", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, a, b, interpolant);
}
inline float_t UnityEngine::UIElements::MinMaxSlider::SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "SliderNormalizeValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, currentValue, lowerValue, higherValue);
}
inline float_t UnityEngine::UIElements::MinMaxSlider::ComputeValueFromPosition(float_t positionToConvert) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "ComputeValueFromPosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, positionToConvert);
}
inline void UnityEngine::UIElements::MinMaxSlider::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "ExecuteDefaultAction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::MinMaxSlider::SetSliderValueFromDrag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                             "SetSliderValueFromDrag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::SetSliderValueFromClick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                             "SetSliderValueFromClick", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MinMaxSlider::ComputeValueDragStateNoThumb(float_t lowLimitPosition, float_t highLimitPosition, float_t dragElementPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "ComputeValueDragStateNoThumb", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowLimitPosition, highLimitPosition, dragElementPos);
}
inline void UnityEngine::UIElements::MinMaxSlider::ComputeValueFromDraggingThumb(float_t dragElementStartPos, float_t dragElementEndPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(), "ComputeValueFromDraggingThumb", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dragElementStartPos, dragElementEndPos);
}
inline void UnityEngine::UIElements::MinMaxSlider::UpdateMixedValueContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MinMaxSlider*>::get(),
                                                                             "UpdateMixedValueContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MinMaxSlider::MinMaxSlider() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e36c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory* UnityEngine::UIElements::__MinMaxSlider__UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__MinMaxSlider__UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory::__MinMaxSlider__UxmlFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

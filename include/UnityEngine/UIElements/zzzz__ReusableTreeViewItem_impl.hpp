#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReusableTreeViewItem.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableTreeViewItem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__Toggle_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.get_rootElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ReusableTreeViewItem::*)()>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::get_rootElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c52fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.add_onPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>*)>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::add_onPointerUp)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c4c3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                             { "add_onPointerUp", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.remove_onPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>*)>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::remove_onPointerUp)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c4c230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                             { "remove_onPointerUp", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.add_onToggleValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*)>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::add_onToggleValueChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c4c490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                             { "add_onToggleValueChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.remove_onToggleValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*)>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::remove_onToggleValueChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c4c2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                             { "remove_onToggleValueChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)()>(&::UnityEngine::UIElements::ReusableTreeViewItem::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6c52ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::Init)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c52fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.InitExpandHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::InitExpandHierarchy)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x6c529f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                         { "InitExpandHierarchy", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.PreAttachElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)()>(&::UnityEngine::UIElements::ReusableTreeViewItem::PreAttachElement)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6c530b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.DetachElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)()>(&::UnityEngine::UIElements::ReusableTreeViewItem::DetachElement)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6c53268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { ::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.Indent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(int32_t)>(&::UnityEngine::UIElements::ReusableTreeViewItem::Indent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c4bff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { "Indent", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.SetExpandedWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(bool)>(&::UnityEngine::UIElements::ReusableTreeViewItem::SetExpandedWithoutNotify)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c4c05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { "SetExpandedWithoutNotify", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.SetToggleVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(bool)>(&::UnityEngine::UIElements::ReusableTreeViewItem::SetToggleVisibility)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c4c0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { "SetToggleVisibility", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.OnToggleGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::OnToggleGeometryChanged)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6c53564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                                                           { "OnToggleGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.UpdateIndentLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)()>(&::UnityEngine::UIElements::ReusableTreeViewItem::UpdateIndentLayout)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c53420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { "UpdateIndentLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::OnPointerUp)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c53778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                                                           { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReusableTreeViewItem.OnToggleValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReusableTreeViewItem::*)(::UnityEngine::UIElements::ChangeEvent_1<bool>*)>(
    &::UnityEngine::UIElements::ReusableTreeViewItem::OnToggleValueChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c53794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                                                           { "OnToggleValueChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<bool>*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Toggle*& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_Toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggle;
}
constexpr ::UnityEngine::UIElements::Toggle* const& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_Toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggle;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_Toggle(::UnityEngine::UIElements::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Toggle = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_Container(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Container = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_IndentElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndentElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_IndentElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndentElement;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_IndentElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndentElement = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_BindableContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindableContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_BindableContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindableContainer;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_BindableContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindableContainer = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_Checkmark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Checkmark;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_Checkmark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Checkmark;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_Checkmark(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Checkmark = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>*& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_onPointerUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPointerUp;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* const& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_onPointerUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPointerUp;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_onPointerUp(::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onPointerUp = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_onToggleValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onToggleValueChanged;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* const& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_onToggleValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onToggleValueChanged;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_onToggleValueChanged(::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onToggleValueChanged = value;
}
constexpr int32_t& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_Depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Depth;
}
constexpr int32_t const& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_Depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Depth;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_Depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Depth = value;
}
constexpr float_t& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_IndentWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndentWidth;
}
constexpr float_t const& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_IndentWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndentWidth;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_IndentWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndentWidth = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_PointerUpCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerUpCallback;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const&
UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_PointerUpCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerUpCallback;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_PointerUpCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerUpCallback = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*&
UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_ToggleValueChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleValueChangedCallback;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* const&
UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_ToggleValueChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleValueChangedCallback;
}
constexpr void
UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_ToggleValueChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ToggleValueChangedCallback = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>*&
UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_ToggleGeometryChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleGeometryChangedCallback;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* const&
UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_get_m_ToggleGeometryChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleGeometryChangedCallback;
}
constexpr void UnityEngine::UIElements::ReusableTreeViewItem::__cordl_internal_set_m_ToggleGeometryChangedCallback(
    ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ToggleGeometryChangedCallback = value;
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ReusableTreeViewItem::get_rootElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::add_onPointerUp(::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                           { "add_onPointerUp", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::remove_onPointerUp(::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                           { "remove_onPointerUp", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::add_onToggleValueChanged(::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                           { "add_onToggleValueChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::remove_onToggleValueChanged(::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                           { "remove_onToggleValueChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::Init(::UnityEngine::UIElements::VisualElement* item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::InitExpandHierarchy(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::VisualElement* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                       { "InitExpandHierarchy", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, item);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::PreAttachElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::DetachElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::Indent(int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { "Indent", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depth);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::SetExpandedWithoutNotify(bool expanded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { "SetExpandedWithoutNotify", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expanded);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::SetToggleVisibility(bool visible) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { "SetToggleVisibility", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::OnToggleGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                                                         { "OnToggleGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::UpdateIndentLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { "UpdateIndentLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ReusableTreeViewItem::OnToggleValueChanged(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ReusableTreeViewItem*>(),
                                                                                         { "OnToggleValueChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::ReusableTreeViewItem* UnityEngine::UIElements::ReusableTreeViewItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ReusableTreeViewItem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ReusableTreeViewItem::ReusableTreeViewItem() {}

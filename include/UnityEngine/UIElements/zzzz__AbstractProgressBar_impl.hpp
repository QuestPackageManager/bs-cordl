#pragma once
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AbstractProgressBar_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__AbstractProgressBar_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2e38460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::*)()>(
    &::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2e38644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__get_m_LowValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__get_m_LowValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr void UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LowValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__get_m_HighValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__get_m_HighValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr void UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HighValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__set_m_Value(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__get_m_Title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Title;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__get_m_Title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Title;
}
constexpr void UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__set_m_Title(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                             ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits* UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits::__AbstractProgressBar__UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.set_title
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(::StringW)>(
    &::UnityEngine::UIElements::AbstractProgressBar::set_title)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e37b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "set_title",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.get_lowValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::AbstractProgressBar::*)()>(
    &::UnityEngine::UIElements::AbstractProgressBar::get_lowValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e37b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(),
                                                                               "get_lowValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.set_lowValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(
    &::UnityEngine::UIElements::AbstractProgressBar::set_lowValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e37b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "set_lowValue",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.get_highValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::AbstractProgressBar::*)()>(
    &::UnityEngine::UIElements::AbstractProgressBar::get_highValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e37c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(),
                                                                               "get_highValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.set_highValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(
    &::UnityEngine::UIElements::AbstractProgressBar::set_highValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e37c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "set_highValue",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)()>(&::UnityEngine::UIElements::AbstractProgressBar::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2e37c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.OnGeometryChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::AbstractProgressBar::OnGeometryChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e37f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "OnGeometryChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::AbstractProgressBar::*)()>(
    &::UnityEngine::UIElements::AbstractProgressBar::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e37f60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(
    &::UnityEngine::UIElements::AbstractProgressBar::set_value)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2e37f68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(
    &::UnityEngine::UIElements::AbstractProgressBar::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e381c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "SetValueWithoutNotify",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.SetProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(
    &::UnityEngine::UIElements::AbstractProgressBar::SetProgress)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2e37b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "SetProgress",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractProgressBar.CalculateProgressWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::AbstractProgressBar::*)(float_t)>(
    &::UnityEngine::UIElements::AbstractProgressBar::CalculateProgressWidth)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2e381ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "CalculateProgressWidth",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<float_t>"
constexpr UnityEngine::UIElements::AbstractProgressBar::operator ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>*() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<float_t>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::AbstractProgressBar::__get_m_Background() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Background;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::AbstractProgressBar::__get_m_Background() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Background;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__set_m_Background(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Background)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::AbstractProgressBar::__get_m_Progress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Progress;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::AbstractProgressBar::__get_m_Progress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Progress;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__set_m_Progress(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Progress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::AbstractProgressBar::__get_m_Title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Title;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& UnityEngine::UIElements::AbstractProgressBar::__get_m_Title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Title;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__set_m_Title(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::UIElements::AbstractProgressBar::__get_m_LowValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr float_t const& UnityEngine::UIElements::AbstractProgressBar::__get_m_LowValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__set_m_LowValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LowValue = value;
}
constexpr float_t& UnityEngine::UIElements::AbstractProgressBar::__get_m_HighValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr float_t const& UnityEngine::UIElements::AbstractProgressBar::__get_m_HighValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__set_m_HighValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighValue = value;
}
constexpr float_t& UnityEngine::UIElements::AbstractProgressBar::__get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr float_t const& UnityEngine::UIElements::AbstractProgressBar::__get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UIElements::AbstractProgressBar::__set_m_Value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_containerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_containerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_titleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "titleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_titleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "titleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_titleContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "titleContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_titleContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "titleContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_progressUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "progressUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_progressUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "progressUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::setStaticF_backgroundUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "backgroundUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::AbstractProgressBar::getStaticF_backgroundUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "backgroundUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get>();
}
inline void UnityEngine::UIElements::AbstractProgressBar::set_title(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "set_title", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::AbstractProgressBar::get_lowValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(),
                                                                             "get_lowValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AbstractProgressBar::set_lowValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "set_lowValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::AbstractProgressBar::get_highValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(),
                                                                             "get_highValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AbstractProgressBar::set_highValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "set_highValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::AbstractProgressBar* UnityEngine::UIElements::AbstractProgressBar::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::AbstractProgressBar*>());
}
inline void UnityEngine::UIElements::AbstractProgressBar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AbstractProgressBar::OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "OnGeometryChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline float_t UnityEngine::UIElements::AbstractProgressBar::get_value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AbstractProgressBar::set_value(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::AbstractProgressBar::SetValueWithoutNotify(float_t newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "SetValueWithoutNotify",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::AbstractProgressBar::SetProgress(float_t p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "SetProgress",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline float_t UnityEngine::UIElements::AbstractProgressBar::CalculateProgressWidth(float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AbstractProgressBar*>::get(), "CalculateProgressWidth",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, width);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::AbstractProgressBar::AbstractProgressBar() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

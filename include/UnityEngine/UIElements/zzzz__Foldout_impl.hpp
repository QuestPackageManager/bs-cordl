#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Foldout.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "UnityEngine/UIElements/zzzz__Toggle_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout_UxmlFactory::*)()>(&::UnityEngine::UIElements::Foldout_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4997004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlFactory*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Foldout_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlFactory*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Foldout_UxmlFactory* UnityEngine::UIElements::Foldout_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Foldout_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Foldout_UxmlFactory::Foldout_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::Foldout_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x499704c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout_UxmlTraits::*)()>(&::UnityEngine::UIElements::Foldout_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4997178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Foldout_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                              ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::Foldout_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Foldout_UxmlTraits* UnityEngine::UIElements::Foldout_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Foldout_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Foldout_UxmlTraits::Foldout_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.get_contentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Foldout::*)()>(
    &::UnityEngine::UIElements::Foldout::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4996280;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 99));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(::StringW)>(&::UnityEngine::UIElements::Foldout::set_text)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4996288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Foldout::*)()>(&::UnityEngine::UIElements::Foldout::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49963b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "get_value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(bool)>(&::UnityEngine::UIElements::Foldout::set_value)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x49963b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(bool)>(&::UnityEngine::UIElements::Foldout::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x49965c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "SetValueWithoutNotify",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.OnViewDataReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)()>(&::UnityEngine::UIElements::Foldout::OnViewDataReady)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4996708;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 96));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::Foldout::Apply)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4996748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Foldout::*)(::UnityEngine::UIElements::KeyboardNavigationOperation)>(
    &::UnityEngine::UIElements::Foldout::Apply)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4996778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)()>(&::UnityEngine::UIElements::Foldout::_ctor)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x499684c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.OnAttachToPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::Foldout::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x4996bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.__ctor_b__29_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(::UnityEngine::UIElements::ChangeEvent_1<bool>*)>(
    &::UnityEngine::UIElements::Foldout::__ctor_b__29_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4996fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "<.ctor>b__29_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<bool>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Toggle*& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggle;
}
constexpr ::UnityEngine::UIElements::Toggle* const& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggle;
}
constexpr void UnityEngine::UIElements::Foldout::__cordl_internal_set_m_Toggle(::UnityEngine::UIElements::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr void UnityEngine::UIElements::Foldout::__cordl_internal_set_m_Container(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr bool const& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UIElements::Foldout::__cordl_internal_set_m_Value(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_NavigationManipulator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator* const& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_NavigationManipulator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr void UnityEngine::UIElements::Foldout::__cordl_internal_set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NavigationManipulator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Foldout::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_toggleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "toggleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_toggleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "toggleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_contentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_contentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_checkmarkUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_checkmarkUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_textUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_textUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "textUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_toggleInspectorUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "toggleInspectorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_toggleInspectorUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "toggleInspectorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_ussFoldoutDepthClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussFoldoutDepthClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_ussFoldoutDepthClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussFoldoutDepthClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_ussFoldoutMaxDepth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ussFoldoutMaxDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::Foldout::getStaticF_ussFoldoutMaxDepth() {
  return ::cordl_internals::getStaticField<int32_t, "ussFoldoutMaxDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Foldout::get_contentContainer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 99)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Foldout::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "get_value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::set_value(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Foldout::SetValueWithoutNotify(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "SetValueWithoutNotify",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::Foldout::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 96)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, sourceEvent);
}
inline bool UnityEngine::UIElements::Foldout::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, op);
}
inline void UnityEngine::UIElements::Foldout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Foldout::__ctor_b__29_0(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "<.ctor>b__29_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::Foldout* UnityEngine::UIElements::Foldout::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Foldout*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
constexpr UnityEngine::UIElements::Foldout::operator ::UnityEngine::UIElements::INotifyValueChanged_1<bool>*() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<bool>* UnityEngine::UIElements::Foldout::i___UnityEngine__UIElements__INotifyValueChanged_1_bool_() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<bool>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Foldout::Foldout() {}

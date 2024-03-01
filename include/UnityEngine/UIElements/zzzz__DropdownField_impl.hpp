#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownField_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownField_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__DropdownField__UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DropdownField__UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::__DropdownField__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2f373f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DropdownField__UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DropdownField__UxmlTraits::*)()>(
    &::UnityEngine::UIElements::__DropdownField__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2f37570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__UxmlTraits*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__DropdownField__UxmlTraits::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const&
UnityEngine::UIElements::__DropdownField__UxmlTraits::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::UIElements::__DropdownField__UxmlTraits::__cordl_internal_set_m_Index(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Index)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::__DropdownField__UxmlTraits::__cordl_internal_get_m_Choices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const&
UnityEngine::UIElements::__DropdownField__UxmlTraits::__cordl_internal_get_m_Choices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
constexpr void UnityEngine::UIElements::__DropdownField__UxmlTraits::__cordl_internal_set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Choices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__DropdownField__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                       ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__DropdownField__UxmlTraits* UnityEngine::UIElements::__DropdownField__UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DropdownField__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__DropdownField__UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__UxmlTraits*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DropdownField__UxmlTraits::__DropdownField__UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.get_textElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextElement* (::UnityEngine::UIElements::DropdownField::*)()>(
    &::UnityEngine::UIElements::DropdownField::get_textElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f36128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                               "get_textElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.GetValueToDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::DropdownField::*)()>(
    &::UnityEngine::UIElements::DropdownField::GetValueToDisplay)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f36130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                               "GetValueToDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.GetListItemToDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(
    &::UnityEngine::UIElements::DropdownField::GetListItemToDisplay)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2f361bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "GetListItemToDisplay",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.set_index
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(int32_t)>(&::UnityEngine::UIElements::DropdownField::set_index)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f36268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "set_index", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)()>(&::UnityEngine::UIElements::DropdownField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f36304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(&::UnityEngine::UIElements::DropdownField::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2f3630c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.AddMenuItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::UnityEngine::UIElements::IGenericMenu*)>(
    &::UnityEngine::UIElements::DropdownField::AddMenuItems)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2f3661c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "AddMenuItems", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGenericMenu*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.ChangeValueFromMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(
    &::UnityEngine::UIElements::DropdownField::ChangeValueFromMenu)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f3692c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "ChangeValueFromMenu",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.set_choices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::UIElements::DropdownField::set_choices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3693c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 106));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::DropdownField::*)()>(&::UnityEngine::UIElements::DropdownField::get_value)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f369ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(
    &::UnityEngine::UIElements::DropdownField::set_value)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f369f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(
    &::UnityEngine::UIElements::DropdownField::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2f36a78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 105));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.ExecuteDefaultActionAtTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::DropdownField::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2f36b88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.ShowMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)()>(&::UnityEngine::UIElements::DropdownField::ShowMenu)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2f36d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "ShowMenu",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.UpdateMixedValueContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)()>(
    &::UnityEngine::UIElements::DropdownField::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2f3715c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 104));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_Choices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_Choices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
constexpr void UnityEngine::UIElements::DropdownField::__cordl_internal_set_m_Choices(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Choices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_TextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextElement*> const& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_TextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr void UnityEngine::UIElements::DropdownField::__cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_ArrowElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArrowElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_ArrowElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArrowElement;
}
constexpr void UnityEngine::UIElements::DropdownField::__cordl_internal_set_m_ArrowElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ArrowElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<::StringW, ::StringW>*& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_FormatSelectedValueCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FormatSelectedValueCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, ::StringW>*> const& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_FormatSelectedValueCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FormatSelectedValueCallback;
}
constexpr void UnityEngine::UIElements::DropdownField::__cordl_internal_set_m_FormatSelectedValueCallback(::System::Func_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FormatSelectedValueCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<::StringW, ::StringW>*& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_FormatListItemCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FormatListItemCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, ::StringW>*> const& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_FormatListItemCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FormatListItemCallback;
}
constexpr void UnityEngine::UIElements::DropdownField::__cordl_internal_set_m_FormatListItemCallback(::System::Func_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FormatListItemCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*& UnityEngine::UIElements::DropdownField::__cordl_internal_get_createMenuCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createMenuCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*> const&
UnityEngine::UIElements::DropdownField::__cordl_internal_get_createMenuCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createMenuCallback;
}
constexpr void UnityEngine::UIElements::DropdownField::__cordl_internal_set_createMenuCallback(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___createMenuCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr int32_t const& UnityEngine::UIElements::DropdownField::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::UIElements::DropdownField::__cordl_internal_set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
inline void UnityEngine::UIElements::DropdownField::setStaticF_ussClassNameBasePopupField(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::DropdownField::getStaticF_ussClassNameBasePopupField() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>();
}
inline void UnityEngine::UIElements::DropdownField::setStaticF_textUssClassNameBasePopupField(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::DropdownField::getStaticF_textUssClassNameBasePopupField() {
  return ::cordl_internals::getStaticField<::StringW, "textUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>();
}
inline void UnityEngine::UIElements::DropdownField::setStaticF_arrowUssClassNameBasePopupField(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arrowUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::DropdownField::getStaticF_arrowUssClassNameBasePopupField() {
  return ::cordl_internals::getStaticField<::StringW, "arrowUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>();
}
inline void UnityEngine::UIElements::DropdownField::setStaticF_labelUssClassNameBasePopupField(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::DropdownField::getStaticF_labelUssClassNameBasePopupField() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>();
}
inline void UnityEngine::UIElements::DropdownField::setStaticF_inputUssClassNameBasePopupField(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::DropdownField::getStaticF_inputUssClassNameBasePopupField() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>();
}
inline void UnityEngine::UIElements::DropdownField::setStaticF_ussClassNamePopupField(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::DropdownField::getStaticF_ussClassNamePopupField() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>();
}
inline void UnityEngine::UIElements::DropdownField::setStaticF_labelUssClassNamePopupField(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::DropdownField::getStaticF_labelUssClassNamePopupField() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>();
}
inline void UnityEngine::UIElements::DropdownField::setStaticF_inputUssClassNamePopupField(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::DropdownField::getStaticF_inputUssClassNamePopupField() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get>();
}
inline ::UnityEngine::UIElements::TextElement* UnityEngine::UIElements::DropdownField::get_textElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                             "get_textElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextElement*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::DropdownField::GetValueToDisplay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(),
                                                                             "GetValueToDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::DropdownField::GetListItemToDisplay(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "GetListItemToDisplay",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DropdownField::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "set_index",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::DropdownField* UnityEngine::UIElements::DropdownField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DropdownField*>());
}
inline void UnityEngine::UIElements::DropdownField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DropdownField* UnityEngine::UIElements::DropdownField::New_ctor(::StringW label) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DropdownField*>(label));
}
inline void UnityEngine::UIElements::DropdownField::_ctor(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::DropdownField::AddMenuItems(::UnityEngine::UIElements::IGenericMenu* menu) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "AddMenuItems", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGenericMenu*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menu);
}
inline void UnityEngine::UIElements::DropdownField::ChangeValueFromMenu(::StringW menuItem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "ChangeValueFromMenu",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuItem);
}
inline void UnityEngine::UIElements::DropdownField::set_choices(::System::Collections::Generic::List_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 106)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::DropdownField::get_value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DropdownField::set_value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DropdownField::SetValueWithoutNotify(::StringW newValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 105)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::DropdownField::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::DropdownField::ShowMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), "ShowMenu",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DropdownField::UpdateMixedValueContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField*>::get(), 104)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownField::DropdownField() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__DropdownField__UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DropdownField__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__DropdownField__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f373ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__UxmlFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__DropdownField__UxmlFactory* UnityEngine::UIElements::__DropdownField__UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DropdownField__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__DropdownField__UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__UxmlFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DropdownField__UxmlFactory::__DropdownField__UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__DropdownField__PopupTextElement.DoMeasure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::__DropdownField__PopupTextElement::*)(
    float_t, ::UnityEngine::UIElements::__VisualElement__MeasureMode, float_t, ::UnityEngine::UIElements::__VisualElement__MeasureMode)>(
    &::UnityEngine::UIElements::__DropdownField__PopupTextElement::DoMeasure)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2f3765c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__PopupTextElement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__PopupTextElement*>::get(), 94));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DropdownField__PopupTextElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DropdownField__PopupTextElement::*)()>(
    &::UnityEngine::UIElements::__DropdownField__PopupTextElement::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f365c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__PopupTextElement*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::UIElements::__DropdownField__PopupTextElement::DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode,
                                                                                                    float_t desiredHeight, ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__PopupTextElement*>::get(), 94)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
inline ::UnityEngine::UIElements::__DropdownField__PopupTextElement* UnityEngine::UIElements::__DropdownField__PopupTextElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DropdownField__PopupTextElement*>());
}
inline void UnityEngine::UIElements::__DropdownField__PopupTextElement::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField__PopupTextElement*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DropdownField__PopupTextElement::__DropdownField__PopupTextElement() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::*)()>(
    &::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f36924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0._AddMenuItems_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::*)()>(
    &::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::_AddMenuItems_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f37700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0*>::get(),
                                                 "<AddMenuItems>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::__cordl_internal_get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
constexpr ::StringW const& UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::__cordl_internal_get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
constexpr void UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::__cordl_internal_set_item(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___item)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::DropdownField*& UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownField*> const&
UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::__cordl_internal_set___4__this(::UnityEngine::UIElements::DropdownField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0* UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0*>());
}
inline void UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::_AddMenuItems_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0*>::get(), "<AddMenuItems>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DropdownField____c__DisplayClass38_0::__DropdownField____c__DisplayClass38_0() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

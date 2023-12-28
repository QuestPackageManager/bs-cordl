#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlAttribute_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputControlLayout__ControlItem__Flags::__InputControlLayout__ControlItem__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlLayout__ControlItem__Flags::__InputControlLayout__ControlItem__Flags() {}
constexpr ::GlobalNamespace::__InputControlLayout__ControlItem__Flags GlobalNamespace::__InputControlLayout__ControlItem__Flags::isModifyingExistingControl{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__InputControlLayout__ControlItem__Flags GlobalNamespace::__InputControlLayout__ControlItem__Flags::IsNoisy{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__InputControlLayout__ControlItem__Flags GlobalNamespace::__InputControlLayout__ControlItem__Flags::IsSynthetic{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__InputControlLayout__ControlItem__Flags GlobalNamespace::__InputControlLayout__ControlItem__Flags::IsFirstDefinedInThisLayout{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__InputControlLayout__ControlItem__Flags GlobalNamespace::__InputControlLayout__ControlItem__Flags::DontReset{ static_cast<int32_t>(0x10) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_name",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_name", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_layout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_layout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_layout",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_layout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_layout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_variants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_variants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_variants",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_variants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_variants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_variants", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_useStateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_useStateFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_useStateFrom", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_useStateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_useStateFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_useStateFrom",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_displayName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_displayName",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_shortDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_shortDisplayName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_shortDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_shortDisplayName",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_usages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_usages)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_usages",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_usages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_usages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_usages", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_aliases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_aliases)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_aliases",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_aliases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_aliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_aliases", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_parameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_parameters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_parameters", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_processors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_processors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_processors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_processors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_processors", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_offset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_offset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_offset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(uint32_t)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_offset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_bit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_bit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_bit",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_bit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(uint32_t)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_bit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_bit",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_sizeInBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_sizeInBits", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_sizeInBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(uint32_t)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_sizeInBits",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_format",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::FourCC)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_format", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__ControlItem__Flags (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_flags",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::GlobalNamespace::__InputControlLayout__ControlItem__Flags)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_flags", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InputControlLayout__ControlItem__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_arraySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_arraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_arraySize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_arraySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(int32_t)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_arraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_arraySize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_defaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_defaultState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_defaultState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_defaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_defaultState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_defaultState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_minValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_minValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_minValue",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_minValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_minValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_minValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_maxValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_maxValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_maxValue",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_maxValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_maxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_maxValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_isModifyingExistingControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isModifyingExistingControl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_isModifyingExistingControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_isModifyingExistingControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_isModifyingExistingControl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afd650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_isModifyingExistingControl",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_isNoisy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isNoisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_isNoisy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_isNoisy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_isNoisy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afd688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_isNoisy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_isSynthetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isSynthetic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_isSynthetic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_isSynthetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_isSynthetic)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afd6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_isSynthetic",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_dontReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_dontReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_dontReset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_dontReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_dontReset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afd6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_dontReset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_isFirstDefinedInThisLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isFirstDefinedInThisLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aff8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                                 "get_isFirstDefinedInThisLayout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.set_isFirstDefinedInThisLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_isFirstDefinedInThisLayout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afd66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_isFirstDefinedInThisLayout",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.get_isArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2afaf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_isArray",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem.Merge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::*)(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::Merge)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2afeef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "Merge", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_name() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_name",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_name(::UnityEngine::InputSystem::Utilities::InternedString value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_name", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_layout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_layout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_layout(::UnityEngine::InputSystem::Utilities::InternedString value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_layout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_variants() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_variants",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_variants(::UnityEngine::InputSystem::Utilities::InternedString value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_variants", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_useStateFrom() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                               "get_useStateFrom", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_useStateFrom(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_useStateFrom",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_displayName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_displayName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_displayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_displayName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_shortDisplayName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                               "get_shortDisplayName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_shortDisplayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_shortDisplayName",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>
UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_usages() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_usages",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>, false>(this, ___internal_method);
}
inline void
UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_usages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_usages", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>
UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_aliases() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_aliases",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>, false>(this, ___internal_method);
}
inline void
UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_aliases(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_aliases", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>
UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_parameters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_parameters",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>, false>(this, ___internal_method);
}
inline void
UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_parameters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>
UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_processors() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_processors",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_processors(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_processors", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_offset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_offset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_offset(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_offset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_bit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_bit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_bit(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_bit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_sizeInBits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_sizeInBits",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_sizeInBits(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_sizeInBits",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_format() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_format",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_format(::UnityEngine::InputSystem::Utilities::FourCC value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_format", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__InputControlLayout__ControlItem__Flags UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_flags() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_flags",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__ControlItem__Flags, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_flags(::GlobalNamespace::__InputControlLayout__ControlItem__Flags value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_flags", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InputControlLayout__ControlItem__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_arraySize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_arraySize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_arraySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_arraySize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_defaultState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                               "get_defaultState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_defaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_defaultState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_minValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_minValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_minValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_minValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_maxValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_maxValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_maxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_maxValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isModifyingExistingControl() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                               "get_isModifyingExistingControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_isModifyingExistingControl(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_isModifyingExistingControl",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isNoisy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_isNoisy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_isNoisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_isNoisy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isSynthetic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_isSynthetic",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_isSynthetic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_isSynthetic",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_dontReset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_dontReset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_dontReset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_dontReset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isFirstDefinedInThisLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(),
                                               "get_isFirstDefinedInThisLayout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::set_isFirstDefinedInThisLayout(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "set_isFirstDefinedInThisLayout",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::get_isArray() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "get_isArray",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem
UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::Merge(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get(), "Merge", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_layout_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "_variants_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useStateFrom_k__BackingField", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_shortDisplayName_k__BackingField", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_usages_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_aliases_k__BackingField",
// ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_parameters_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_processors_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_offset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bit_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_format_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "_flags_k__BackingField", ty:
// "::GlobalNamespace::__InputControlLayout__ControlItem__Flags", modifiers: "", def_value: Some("{}") }, CppParam { name: "_arraySize_k__BackingField", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_defaultState_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_minValue_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }, CppParam { name: "_maxValue_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::__InputControlLayout__ControlItem(
    ::UnityEngine::InputSystem::Utilities::InternedString _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::InternedString _layout_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::InternedString _variants_k__BackingField, ::StringW _useStateFrom_k__BackingField, ::StringW _displayName_k__BackingField,
    ::StringW _shortDisplayName_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _usages_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _aliases_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> _processors_k__BackingField, uint32_t _offset_k__BackingField,
    uint32_t _bit_k__BackingField, uint32_t _sizeInBits_k__BackingField, ::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField,
    ::GlobalNamespace::__InputControlLayout__ControlItem__Flags _flags_k__BackingField, int32_t _arraySize_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::PrimitiveValue _defaultState_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue _minValue_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::PrimitiveValue _maxValue_k__BackingField) noexcept {
  this->_name_k__BackingField = _name_k__BackingField;
  this->_layout_k__BackingField = _layout_k__BackingField;
  this->_variants_k__BackingField = _variants_k__BackingField;
  this->_useStateFrom_k__BackingField = _useStateFrom_k__BackingField;
  this->_displayName_k__BackingField = _displayName_k__BackingField;
  this->_shortDisplayName_k__BackingField = _shortDisplayName_k__BackingField;
  this->_usages_k__BackingField = _usages_k__BackingField;
  this->_aliases_k__BackingField = _aliases_k__BackingField;
  this->_parameters_k__BackingField = _parameters_k__BackingField;
  this->_processors_k__BackingField = _processors_k__BackingField;
  this->_offset_k__BackingField = _offset_k__BackingField;
  this->_bit_k__BackingField = _bit_k__BackingField;
  this->_sizeInBits_k__BackingField = _sizeInBits_k__BackingField;
  this->_format_k__BackingField = _format_k__BackingField;
  this->_flags_k__BackingField = _flags_k__BackingField;
  this->_arraySize_k__BackingField = _arraySize_k__BackingField;
  this->_defaultState_k__BackingField = _defaultState_k__BackingField;
  this->_minValue_k__BackingField = _minValue_k__BackingField;
  this->_maxValue_k__BackingField = _maxValue_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem::__InputControlLayout__ControlItem() {}
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::*)()>(
    &::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b00890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c._WithUsages_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::*)(::StringW)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::_WithUsages_b__14_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b00898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>::get(), "<WithUsages>b__14_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::setStaticF___9(::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>::get>(
      std::forward<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>(value));
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c* GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::setStaticF___9__14_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>::get>();
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c* GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>());
}
inline void GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::_WithUsages_b__14_0(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c*>::get(), "<WithUsages>b__14_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder____c::__InputControlLayout__Builder__ControlBuilder____c() {}
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2affe78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithDisplayName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithLayout)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2affec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithLayout",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(
        &::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithFormat)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2afffac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithFormat", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithFormat)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2affff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithFormat",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithByteOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(uint32_t)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithByteOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b00028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithByteOffset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithBitOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(uint32_t)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithBitOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b00070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithBitOffset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.IsSynthetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(bool)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::IsSynthetic)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b000b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "IsSynthetic",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.IsNoisy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(bool)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b00114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "IsNoisy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.DontReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(bool)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::DontReset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b00170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "DontReset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithSizeInBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(uint32_t)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithSizeInBits)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b001cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithSizeInBits",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(float_t, float_t)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithRange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b00214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithRange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(
        ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>)>(
        &::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2b002b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithUsages", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2b00484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithUsages", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b005a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithUsages", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithParameters)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b005ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithParameters",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithProcessors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithProcessors)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2b00664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithProcessors",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.WithDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithDefaultState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b00738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithDefaultState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.UsingStateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::UsingStateFrom)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b00780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "UsingStateFrom",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder.AsArrayOfControlsWithSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::*)(int32_t)>(&::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::AsArrayOfControlsWithSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b007e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "AsArrayOfControlsWithSize",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithDisplayName(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithDisplayName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, displayName);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithLayout(::StringW layout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithLayout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, layout);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder
GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithFormat", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, format);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithFormat(::StringW format) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithFormat",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, format);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithByteOffset(uint32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithByteOffset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, offset);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithBitOffset(uint32_t bit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithBitOffset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, bit);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::IsSynthetic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "IsSynthetic",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::IsNoisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "IsNoisy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::DontReset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "DontReset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithSizeInBits(uint32_t sizeInBits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithSizeInBits",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, sizeInBits);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithRange(float_t minValue, float_t maxValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithRange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, minValue, maxValue);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithUsages(
    ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> usages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithUsages", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, usages);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder
GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithUsages(::System::Collections::Generic::IEnumerable_1<::StringW>* usages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithUsages", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, usages);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithUsages(::ArrayW<::StringW, ::Array<::StringW>*> usages) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithUsages", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, usages);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithParameters(::StringW parameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithParameters",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, parameters);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithProcessors(::StringW processors) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithProcessors",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, processors);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder
GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "WithDefaultState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::UsingStateFrom(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "UsingStateFrom",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, path);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::AsArrayOfControlsWithSize(int32_t arraySize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder>::get(), "AsArrayOfControlsWithSize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, arraySize);
}
// Ctor Parameters [CppParam { name: "builder", ty: "::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "index", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::__InputControlLayout__Builder__ControlBuilder(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* builder,
                                                                                                                          int32_t index) noexcept {
  this->builder = builder;
  this->index = index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder::__InputControlLayout__Builder__ControlBuilder() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_name",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.set_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff8e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_name",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_displayName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.set_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_displayName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.set_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.get_stateFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_stateFormat",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.set_stateFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(
    ::UnityEngine::InputSystem::Utilities::FourCC)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_stateFormat", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.get_stateSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(),
                                                 "get_stateSizeInBytes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.set_stateSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(int32_t)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_stateSizeInBytes",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.get_extendsLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_extendsLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(),
                                                 "get_extendsLayout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.set_extendsLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_extendsLayout)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2aff934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_extendsLayout",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.get_updateBeforeRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(),
                                                 "get_updateBeforeRender", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.set_updateBeforeRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::System::Nullable_1<bool>)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_updateBeforeRender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aff970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_updateBeforeRender",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.get_controls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> (
        ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_controls)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2aff978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_controls",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.AddControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::AddControl)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2aff9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "AddControl",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.WithName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2affbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.WithDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2affbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithDisplayName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.WithFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2affbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithFormat", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.WithFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithFormat)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2affbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithFormat",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.WithSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(int32_t)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2affbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithSizeInBytes",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.Extend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::Extend)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2affc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "Extend",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::Build)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2affc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "Build",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2affe70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__set__type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____type_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__stateFormat_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateFormat_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__stateFormat_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateFormat_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__set__stateFormat_k__BackingField(::UnityEngine::InputSystem::Utilities::FourCC value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateFormat_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__stateSizeInBytes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSizeInBytes_k__BackingField;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__stateSizeInBytes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSizeInBytes_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__set__stateSizeInBytes_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateSizeInBytes_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get_m_ExtendsLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtendsLayout;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get_m_ExtendsLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtendsLayout;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__set_m_ExtendsLayout(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExtendsLayout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__updateBeforeRender_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBeforeRender_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get__updateBeforeRender_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBeforeRender_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__set__updateBeforeRender_k__BackingField(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateBeforeRender_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get_m_ControlCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlCount;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get_m_ControlCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlCount;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__set_m_ControlCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlCount = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>&
UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get_m_Controls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> const&
UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__get_m_Controls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__set_m_Controls(
    ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Controls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_name() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_name",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_name",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_displayName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_displayName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_displayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_displayName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_type(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_stateFormat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_stateFormat",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_stateFormat", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_stateSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(),
                                               "get_stateSizeInBytes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_stateSizeInBytes(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_stateSizeInBytes",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_extendsLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_extendsLayout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_extendsLayout(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_extendsLayout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_updateBeforeRender() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(),
                                               "get_updateBeforeRender", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::set_updateBeforeRender(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "set_updateBeforeRender",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>
UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::get_controls() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "get_controls",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline ::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::AddControl(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "AddControl",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__InputControlLayout__Builder__ControlBuilder, false>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*, false>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithDisplayName(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithDisplayName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*, false>(this, ___internal_method, displayName);
}
template <typename T> inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithType",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*
UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithFormat", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*, false>(this, ___internal_method, format);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithFormat(::StringW format) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithFormat",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*, false>(this, ___internal_method, format);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::WithSizeInBytes(int32_t sizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "WithSizeInBytes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*, false>(this, ___internal_method, sizeInBytes);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::Extend(::StringW baseLayoutName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "Extend",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*, false>(this, ___internal_method, baseLayoutName);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::Build() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), "Build",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder* UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>());
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder::__InputControlLayout__Builder() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags::__InputControlLayout__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags::__InputControlLayout__Flags() {}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags::IsGenericTypeOfDevice{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags::HideInUI{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags::IsOverride{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags::CanRunInBackground{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags::CanRunInBackgroundIsSet{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags::IsNoisy{ static_cast<int32_t>(0x20) };
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "device", ty:
// "::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__InputControlLayout__LayoutJsonNameAndDescriptorOnly(
    ::StringW name, ::StringW extend, ::ArrayW<::StringW, ::Array<::StringW>*> extendMultiple, ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson device) noexcept {
  this->name = name;
  this->extend = extend;
  this->extendMultiple = extendMultiple;
  this->device = device;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__InputControlLayout__LayoutJsonNameAndDescriptorOnly() {}
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__LayoutJson____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputControlLayout__LayoutJson____c::*)()>(
    &::GlobalNamespace::__InputControlLayout__LayoutJson____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b01690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__LayoutJson____c._ToLayout_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::__InputControlLayout__LayoutJson____c::*)(
    ::StringW)>(&::GlobalNamespace::__InputControlLayout__LayoutJson____c::_ToLayout_b__14_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b01698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get(), "<ToLayout>b__14_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__LayoutJson____c._FromLayout_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__InputControlLayout__LayoutJson____c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::__InputControlLayout__LayoutJson____c::_FromLayout_b__15_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b016c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get(), "<FromLayout>b__15_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__LayoutJson____c._FromLayout_b__15_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__InputControlLayout__LayoutJson____c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::__InputControlLayout__LayoutJson____c::_FromLayout_b__15_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b016e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get(), "<FromLayout>b__15_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__InputControlLayout__LayoutJson____c::setStaticF___9(::GlobalNamespace::__InputControlLayout__LayoutJson____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__InputControlLayout__LayoutJson____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get>(
      std::forward<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>(value));
}
inline ::GlobalNamespace::__InputControlLayout__LayoutJson____c* GlobalNamespace::__InputControlLayout__LayoutJson____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__InputControlLayout__LayoutJson____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__LayoutJson____c::setStaticF___9__14_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* GlobalNamespace::__InputControlLayout__LayoutJson____c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__LayoutJson____c::setStaticF___9__15_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__15_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* GlobalNamespace::__InputControlLayout__LayoutJson____c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__15_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__LayoutJson____c::setStaticF___9__15_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__15_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* GlobalNamespace::__InputControlLayout__LayoutJson____c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__15_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get>();
}
inline ::GlobalNamespace::__InputControlLayout__LayoutJson____c* GlobalNamespace::__InputControlLayout__LayoutJson____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>());
}
inline void GlobalNamespace::__InputControlLayout__LayoutJson____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::__InputControlLayout__LayoutJson____c::_ToLayout_b__14_0(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get(), "<ToLayout>b__14_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::__InputControlLayout__LayoutJson____c::_FromLayout_b__15_0(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get(), "<FromLayout>b__15_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::__InputControlLayout__LayoutJson____c::_FromLayout_b__15_1(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__LayoutJson____c*>::get(), "<FromLayout>b__15_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlLayout__LayoutJson____c::__InputControlLayout__LayoutJson____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson.ToLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson::ToLayout)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x2afb994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson>::get(), "ToLayout",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson.FromLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson (*)(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson::FromLayout)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2afb5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson>::get(), "FromLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson::ToLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson>::get(), "ToLayout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson
UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson::FromLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson>::get(), "FromLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson, false>(nullptr, ___internal_method, layout);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "beforeRender", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "runInBackground", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "commonUsages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "displayName", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "type", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "variant", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isGenericTypeOfDevice", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "hideInUI", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "controls", ty:
// "::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*,::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson::__InputControlLayout__LayoutJson(
    ::StringW name, ::StringW extend, ::ArrayW<::StringW, ::Array<::StringW>*> extendMultiple, ::StringW format, ::StringW beforeRender, ::StringW runInBackground,
    ::ArrayW<::StringW, ::Array<::StringW>*> commonUsages, ::StringW displayName, ::StringW description, ::StringW type, ::StringW variant, bool isGenericTypeOfDevice, bool hideInUI,
    ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*> controls) noexcept {
  this->name = name;
  this->extend = extend;
  this->extendMultiple = extendMultiple;
  this->format = format;
  this->beforeRender = beforeRender;
  this->runInBackground = runInBackground;
  this->commonUsages = commonUsages;
  this->displayName = displayName;
  this->description = description;
  this->type = type;
  this->variant = variant;
  this->isGenericTypeOfDevice = isGenericTypeOfDevice;
  this->hideInUI = hideInUI;
  this->controls = controls;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutJson::__InputControlLayout__LayoutJson() {}
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__ControlItemJson____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputControlLayout__ControlItemJson____c::*)()>(
    &::GlobalNamespace::__InputControlLayout__ControlItemJson____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0178c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__ControlItemJson____c._ToLayout_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::GlobalNamespace::__InputControlLayout__ControlItemJson____c::*)(::StringW)>(&::GlobalNamespace::__InputControlLayout__ControlItemJson____c::_ToLayout_b__24_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b01794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<ToLayout>b__24_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__ControlItemJson____c._ToLayout_b__24_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::GlobalNamespace::__InputControlLayout__ControlItemJson____c::*)(::StringW)>(&::GlobalNamespace::__InputControlLayout__ControlItemJson____c::_ToLayout_b__24_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b017bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<ToLayout>b__24_1",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__ControlItemJson____c._FromControlItems_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__InputControlLayout__ControlItemJson____c::*)(
    ::UnityEngine::InputSystem::Utilities::NamedValue)>(&::GlobalNamespace::__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b017e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<FromControlItems>b__25_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::NamedValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__ControlItemJson____c._FromControlItems_b__25_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__InputControlLayout__ControlItemJson____c::*)(
    ::UnityEngine::InputSystem::Utilities::NameAndParameters)>(&::GlobalNamespace::__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b017f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<FromControlItems>b__25_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::NameAndParameters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__ControlItemJson____c._FromControlItems_b__25_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__InputControlLayout__ControlItemJson____c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b017fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<FromControlItems>b__25_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__ControlItemJson____c._FromControlItems_b__25_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__InputControlLayout__ControlItemJson____c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b01820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<FromControlItems>b__25_3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__InputControlLayout__ControlItemJson____c::setStaticF___9(::GlobalNamespace::__InputControlLayout__ControlItemJson____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>(
      std::forward<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>(value));
}
inline ::GlobalNamespace::__InputControlLayout__ControlItemJson____c* GlobalNamespace::__InputControlLayout__ControlItemJson____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__ControlItemJson____c::setStaticF___9__24_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* GlobalNamespace::__InputControlLayout__ControlItemJson____c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__ControlItemJson____c::setStaticF___9__24_1(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* GlobalNamespace::__InputControlLayout__ControlItemJson____c::getStaticF___9__24_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__ControlItemJson____c::setStaticF___9__25_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>*, "<>9__25_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* GlobalNamespace::__InputControlLayout__ControlItemJson____c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>*, "<>9__25_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__ControlItemJson____c::setStaticF___9__25_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>*, "<>9__25_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* GlobalNamespace::__InputControlLayout__ControlItemJson____c::getStaticF___9__25_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>*, "<>9__25_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__ControlItemJson____c::setStaticF___9__25_2(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__25_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* GlobalNamespace::__InputControlLayout__ControlItemJson____c::getStaticF___9__25_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__25_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>();
}
inline void GlobalNamespace::__InputControlLayout__ControlItemJson____c::setStaticF___9__25_3(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__25_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* GlobalNamespace::__InputControlLayout__ControlItemJson____c::getStaticF___9__25_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__25_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get>();
}
inline ::GlobalNamespace::__InputControlLayout__ControlItemJson____c* GlobalNamespace::__InputControlLayout__ControlItemJson____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>());
}
inline void GlobalNamespace::__InputControlLayout__ControlItemJson____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::__InputControlLayout__ControlItemJson____c::_ToLayout_b__24_0(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<ToLayout>b__24_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::__InputControlLayout__ControlItemJson____c::_ToLayout_b__24_1(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<ToLayout>b__24_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_0(::UnityEngine::InputSystem::Utilities::NamedValue x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<FromControlItems>b__25_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::NamedValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_1(::UnityEngine::InputSystem::Utilities::NameAndParameters x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<FromControlItems>b__25_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::NameAndParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_2(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<FromControlItems>b__25_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW GlobalNamespace::__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_3(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__ControlItemJson____c*>::get(), "<FromControlItems>b__25_3", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlLayout__ControlItemJson____c::__InputControlLayout__ControlItemJson____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b01708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson.ToLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::*)()>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::ToLayout)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x2b008c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>::get(), "ToLayout",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson.FromControlItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*> (*)(
        ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>)>(
        &::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::FromControlItems)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x2b00f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>::get(), "FromControlItems", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_layout(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___layout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_variants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___variants;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_variants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___variants;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_variants(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___variants)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_usage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_usage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_usage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___usage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_alias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alias;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_alias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alias;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_alias(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___alias)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_useStateFrom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useStateFrom;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_useStateFrom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useStateFrom;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_useStateFrom(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___useStateFrom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr uint32_t const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_offset(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_bit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bit;
}
constexpr uint32_t const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_bit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bit;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_bit(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bit = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_sizeInBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeInBits;
}
constexpr uint32_t const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_sizeInBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeInBits;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_sizeInBits(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sizeInBits = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_format(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___format)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_arraySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arraySize;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_arraySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arraySize;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_arraySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arraySize = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_usages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usages;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_usages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usages;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_usages(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___usages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_aliases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliases;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_aliases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliases;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_aliases(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aliases)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_parameters(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_processors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processors;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_processors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processors;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_processors(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___processors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_shortDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortDisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_shortDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortDisplayName;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_shortDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shortDisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_noisy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noisy;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_noisy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noisy;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_noisy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noisy = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_dontReset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dontReset;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_dontReset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dontReset;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_dontReset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dontReset = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_synthetic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synthetic;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_synthetic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synthetic;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_synthetic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___synthetic = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_defaultState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultState;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_defaultState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultState;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_defaultState(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_minValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValue;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_minValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValue;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_minValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___minValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_maxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxValue;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__get_maxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxValue;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__set_maxValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maxValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson* UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>());
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::ToLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>::get(), "ToLayout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>
UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::FromControlItems(
    ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> items) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>::get(), "FromControlItems", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson*>*>, false>(
      nullptr, ___internal_method, items);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItemJson::__InputControlLayout__ControlItemJson() {}
// Ctor Parameters [CppParam { name: "layoutName", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceMatcher", ty:
// "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher::__InputControlLayout__Collection__LayoutMatcher(
    ::UnityEngine::InputSystem::Utilities::InternedString layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher) noexcept {
  this->layoutName = layoutName;
  this->deviceMatcher = deviceMatcher;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher::__InputControlLayout__Collection__LayoutMatcher() {}
// Ctor Parameters [CppParam { name: "factoryMethod", ty: "::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "metadata", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout::__InputControlLayout__Collection__PrecompiledLayout(
    ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* factoryMethod, ::StringW metadata) noexcept {
  this->factoryMethod = factoryMethod;
  this->metadata = metadata;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout::__InputControlLayout__Collection__PrecompiledLayout() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::Allocate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2b01844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "Allocate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.TryFindLayoutForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(::System::Type*)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::TryFindLayoutForType)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2afd6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "TryFindLayoutForType",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.TryFindMatchingLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::TryFindMatchingLayout)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2b01a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "TryFindMatchingLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.HasLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::HasLayout)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2afd88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "HasLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.TryLoadLayoutInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::TryLoadLayoutInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2b01f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "TryLoadLayoutInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.TryLoadLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString,
                                                                              ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,
                                                                                                                           ::UnityEngine::InputSystem::Layouts::InputControlLayout*>*)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::TryLoadLayout)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2b02190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "TryLoadLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.GetBaseLayoutName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::GetBaseLayoutName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b025d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "GetBaseLayoutName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.GetRootLayoutName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::GetRootLayoutName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b02664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "GetRootLayoutName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.ComputeDistanceInInheritanceHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ByRef<int32_t>)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::ComputeDistanceInInheritanceHierarchy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2b026f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(),
                                                 "ComputeDistanceInInheritanceHierarchy", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.FindLayoutThatIntroducesControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::FindLayoutThatIntroducesControl)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2b0282c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "FindLayoutThatIntroducesControl",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.GetControlTypeForLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
        &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::GetControlTypeForLayout)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2b02a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "GetControlTypeForLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.ValueTypeIsAssignableFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::ValueTypeIsAssignableFrom)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2b02ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "ValueTypeIsAssignableFrom", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.IsGeneratedLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::IsGeneratedLayout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b02cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "IsGeneratedLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.GetBaseLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString, bool)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::GetBaseLayouts)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b02d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "GetBaseLayouts", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.IsBasedOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::IsBasedOn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b02e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "IsBasedOn", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection.AddMatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::AddMatcher)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2b02ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "AddMatcher", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::Allocate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "Allocate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::TryFindLayoutForType(::System::Type* layoutType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "TryFindLayoutForType",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, layoutType);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "TryFindMatchingLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, deviceDescription);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::HasLayout(::UnityEngine::InputSystem::Utilities::InternedString name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "HasLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout*
UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::TryLoadLayoutInternal(::UnityEngine::InputSystem::Utilities::InternedString name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "TryLoadLayoutInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(this, ___internal_method, name);
}
/// @param table: ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>* (default: nullptr)
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::TryLoadLayout(
    ::UnityEngine::InputSystem::Utilities::InternedString name,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "TryLoadLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(this, ___internal_method, name, table);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::GetBaseLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "GetBaseLayoutName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, layoutName);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::GetRootLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "GetRootLayoutName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, layoutName);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::ComputeDistanceInInheritanceHierarchy(::UnityEngine::InputSystem::Utilities::InternedString firstLayout,
                                                                                                                       ::UnityEngine::InputSystem::Utilities::InternedString secondLayout,
                                                                                                                       ByRef<int32_t> distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(),
                                               "ComputeDistanceInInheritanceHierarchy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, firstLayout, secondLayout, distance);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::FindLayoutThatIntroducesControl(::UnityEngine::InputSystem::InputControl* control,
                                                                                                     ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache cache) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(),
                                  "FindLayoutThatIntroducesControl", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, control, cache);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::GetControlTypeForLayout(::UnityEngine::InputSystem::Utilities::InternedString layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "GetControlTypeForLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, layoutName);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::ValueTypeIsAssignableFrom(::UnityEngine::InputSystem::Utilities::InternedString layoutName,
                                                                                                           ::System::Type* valueType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "ValueTypeIsAssignableFrom", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, layoutName, valueType);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::IsGeneratedLayout(::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "IsGeneratedLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, layout);
}
/// @param includeSelf: bool (default: true)
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*
UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::GetBaseLayouts(::UnityEngine::InputSystem::Utilities::InternedString layout, bool includeSelf) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "GetBaseLayouts", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*, false>(this, ___internal_method, layout,
                                                                                                                                                           includeSelf);
}
inline bool UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::IsBasedOn(::UnityEngine::InputSystem::Utilities::InternedString parentLayout,
                                                                                           ::UnityEngine::InputSystem::Utilities::InternedString childLayout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "IsBasedOn", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, parentLayout, childLayout);
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::AddMatcher(::UnityEngine::InputSystem::Utilities::InternedString layout,
                                                                                            ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>::get(), "AddMatcher", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout, matcher);
}
// Ctor Parameters [CppParam { name: "layoutTypes", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "layoutStrings", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "layoutBuilders", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "baseLayoutTable", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "layoutOverrides", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "layoutOverrideNames", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "precompiledLayouts", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "layoutMatchers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>*", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::__InputControlLayout__Collection(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* layoutTypes,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* layoutStrings,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>* layoutBuilders,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString>* baseLayoutTable,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,
                                                 ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>* layoutOverrides,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* layoutOverrideNames,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::GlobalNamespace::__InputControlLayout__Collection__PrecompiledLayout>* precompiledLayouts,
    ::System::Collections::Generic::List_1<::GlobalNamespace::__InputControlLayout__Collection__LayoutMatcher>* layoutMatchers) noexcept {
  this->layoutTypes = layoutTypes;
  this->layoutStrings = layoutStrings;
  this->layoutBuilders = layoutBuilders;
  this->baseLayoutTable = baseLayoutTable;
  this->layoutOverrides = layoutOverrides;
  this->layoutOverrideNames = layoutOverrideNames;
  this->precompiledLayouts = precompiledLayouts;
  this->layoutMatchers = layoutMatchers;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection::__InputControlLayout__Collection() {}
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::*)(int32_t)>(
    &::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2b02de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(
    &::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b03064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(
    &::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b03068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(
        &::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b03124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
        "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(
    &::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2b03130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(
    &::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b03170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* (
    ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(
    &::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2b031cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
        "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(
        &::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b03298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___2__current(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr bool& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get_includeSelf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeSelf;
}
constexpr bool const& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get_includeSelf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeSelf;
}
constexpr void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__set_includeSelf(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeSelf = value;
}
constexpr bool& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___3__includeSelf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__includeSelf;
}
constexpr bool const& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___3__includeSelf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__includeSelf;
}
constexpr void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___3__includeSelf(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__includeSelf = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get_layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get_layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__set_layout(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layout = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___3__layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__layout;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___3__layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__layout;
}
constexpr void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___3__layout(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__layout = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection const& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___4__this(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___3____4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection const& GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___3____4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___3____4__this(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3____4__this = value;
}
inline ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24* GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>(__1__state));
}
inline void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
      "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method);
}
inline void GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*
GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
      "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlLayout__Collection___GetBaseLayouts_d__24::__InputControlLayout__Collection___GetBaseLayouts_d__24() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException.get_layout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0329c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(),
                                                 "get_layout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b032a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::*)(::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b032fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b0251c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::*)(
    ::StringW, ::System::Exception*)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2b03370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b033e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::__get__layout_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::__get__layout_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::__set__layout_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layout_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::get_layout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(),
                                               "get_layout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>());
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*
UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::New_ctor(::StringW name, ::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>(name, message));
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor(::StringW name, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, message);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException* UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>(name));
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*
UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>(message, innerException));
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, innerException);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*
UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                           ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>(info, context));
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__LayoutNotFoundException::__InputControlLayout__LayoutNotFoundException() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b03460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache>::get(), "Clear",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache.FindOrLoadLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache::*)(::StringW, bool)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache::FindOrLoadLayout)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2b02928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache>::get(), "FindOrLoadLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache>::get(), "Clear",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param throwIfNotFound: bool (default: true)
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache::FindOrLoadLayout(::StringW name, bool throwIfNotFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache>::get(), "FindOrLoadLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(this, ___internal_method, name, throwIfNotFound);
}
// Ctor Parameters [CppParam { name: "table", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache::__InputControlLayout__Cache(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table) noexcept {
  this->table = table;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache::__InputControlLayout__Cache() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b03468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance>::get(), "Dispose",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance::__InputControlLayout__CacheRefInstance(bool valid) noexcept {
  this->valid = valid;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance::__InputControlLayout__CacheRefInstance() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputControlLayout____c::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputControlLayout____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b03564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c._FromType_b__52_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout____c::_FromType_b__52_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b0356c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get(), "<FromType>b__52_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c._CreateControlItemFromMember_b__75_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout____c::_CreateControlItemFromMember_b__75_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b03594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get(), "<CreateControlItemFromMember>b__75_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c._CreateControlItemFromMember_b__75_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::__InputControlLayout____c::_CreateControlItemFromMember_b__75_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b035bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get(), "<CreateControlItemFromMember>b__75_1",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout____c::setStaticF___9(::UnityEngine::InputSystem::Layouts::__InputControlLayout____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get>(
      std::forward<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c* UnityEngine::InputSystem::Layouts::__InputControlLayout____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get>();
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout____c::setStaticF___9__52_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__52_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::__InputControlLayout____c::getStaticF___9__52_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__52_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get>();
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout____c::setStaticF___9__75_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::__InputControlLayout____c::getStaticF___9__75_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get>();
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout____c::setStaticF___9__75_1(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::__InputControlLayout____c::getStaticF___9__75_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get>();
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c* UnityEngine::InputSystem::Layouts::__InputControlLayout____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>());
}
inline void UnityEngine::InputSystem::Layouts::__InputControlLayout____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::__InputControlLayout____c::_FromType_b__52_0(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get(), "<FromType>b__52_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::__InputControlLayout____c::_CreateControlItemFromMember_b__75_0(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get(), "<CreateControlItemFromMember>b__75_0",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::__InputControlLayout____c::_CreateControlItemFromMember_b__75_1(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputControlLayout____c*>::get(), "<CreateControlItemFromMember>b__75_1",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout____c::__InputControlLayout____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_DefaultVariant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_DefaultVariant)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2afa45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_DefaultVariant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2afa4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_name", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_displayName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2afa4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_displayName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2afa4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_variants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_variants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2afa4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_variants", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_stateFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2afa4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_stateFormat", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_stateSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2afa4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_stateSizeInBytes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_baseLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_baseLayouts)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2afa504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_baseLayouts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_appliedOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_appliedOverrides)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2afa564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_appliedOverrides", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_commonUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_commonUsages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2afa5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_commonUsages", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_controls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_controls)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2afa624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_controls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_updateBeforeRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2afa684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_updateBeforeRender", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isDeviceLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isDeviceLayout)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2afa6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_isDeviceLayout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isControlLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isControlLayout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2afa754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_isControlLayout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2afa76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_isOverride", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_isOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_isOverride)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afa778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_isOverride",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isGenericTypeOfDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isGenericTypeOfDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2afa794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_isGenericTypeOfDevice", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_isGenericTypeOfDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_isGenericTypeOfDevice)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afa7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_isGenericTypeOfDevice",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_hideInUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_hideInUI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2afa7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_hideInUI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_hideInUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_hideInUI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afa7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_hideInUI",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isNoisy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isNoisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2afa7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_isNoisy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_isNoisy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_isNoisy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2afa7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_isNoisy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_canRunInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_canRunInBackground)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2afa80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_canRunInBackground", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_canRunInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::System::Nullable_1<bool>)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_canRunInBackground)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2afa874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_canRunInBackground",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_Item)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2afa910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "get_Item",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FindControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::FindControl)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2afaa94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "FindControl", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FindControlIncludingArrayElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW, ByRef<int32_t>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::FindControlIncludingArrayElements)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2afac30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "FindControlIncludingArrayElements", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.GetValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::GetValueType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afaf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "GetValueType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FromType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW, ::System::Type*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::FromType)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x2afafe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "FromType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::ToJson)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2afb544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "ToJson", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FromJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::FromJson)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2afb904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "FromJson",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2afb4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*, ::StringW)>(
        &::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItems)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2afb478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItems", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromFields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*, ::StringW)>(
        &::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromFields)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2afc3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItemsFromFields", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*, ::StringW)>(
        &::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromProperties)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2afc454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItemsFromProperties", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>,
                         ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*, ::StringW)>(
        &::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMembers)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x2afc4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItemsFromMembers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Reflection::MemberInfo*, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*, ::Array<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>*>,
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMember)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2afca14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItemsFromMember", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*, ::Array<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.CreateControlItemFromMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem (*)(
    ::System::Reflection::MemberInfo*, ::UnityEngine::InputSystem::Layouts::InputControlAttribute*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::CreateControlItemFromMember)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x2afcc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "CreateControlItemFromMember", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.InferLayoutFromValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::InferLayoutFromValueType)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2afd498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "InferLayoutFromValueType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.MergeLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::MergeLayout)> {
  constexpr static std::size_t size = 0x117c;
  constexpr static std::size_t addrs = 0x2afd968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "MergeLayout", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.CreateLookupTableForControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* (*)(::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem,
                                                                                                     ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>,
                                                                                            ::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::CreateLookupTableForControls)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2afeae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "CreateLookupTableForControls", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.VariantsMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2aff3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "VariantsMatch", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.VariantsMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2aff290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "VariantsMatch", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.ParseHeaderFieldsFromJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::StringW, ByRef<::UnityEngine::InputSystem::Utilities::InternedString>, ByRef<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>,
    ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::ParseHeaderFieldsFromJson)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2aff420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "ParseHeaderFieldsFromJson", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_cache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache> (*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_cache)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2aff59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "get_cache", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.CacheRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance (*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::CacheRef)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2aff5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                               "CacheRef", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout._MergeLayout_b__77_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(
    ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::_MergeLayout_b__77_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2aff6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "<MergeLayout>b__77_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Variants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variants;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Variants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variants;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Variants = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_StateFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateFormat;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_StateFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateFormat;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_StateFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateFormat = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_StateSizeInBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateSizeInBytes;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_StateSizeInBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateSizeInBytes;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_StateSizeInBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateSizeInBytes = value;
}
constexpr ::System::Nullable_1<bool>& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_UpdateBeforeRender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateBeforeRender;
}
constexpr ::System::Nullable_1<bool> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_UpdateBeforeRender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateBeforeRender;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_UpdateBeforeRender(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateBeforeRender = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_BaseLayouts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseLayouts;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const&
UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_BaseLayouts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseLayouts;
}
constexpr void
UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_BaseLayouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BaseLayouts = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>&
UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_AppliedOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AppliedOverrides;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const&
UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_AppliedOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AppliedOverrides;
}
constexpr void
UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_AppliedOverrides(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AppliedOverrides = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>&
UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_CommonUsages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonUsages;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const&
UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_CommonUsages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonUsages;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_CommonUsages(
    ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommonUsages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>&
UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Controls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> const&
UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Controls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Controls(
    ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Controls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Description;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Description;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags const& UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Flags(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_DefaultVariant(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "s_DefaultVariant",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_DefaultVariant() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "s_DefaultVariant",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_Layouts(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, "s_Layouts",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get>(
      std::forward<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection>(value));
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_Layouts() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Collection, "s_Layouts",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_CacheInstance(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache, "s_CacheInstance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get>(
      std::forward<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache>(value));
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_CacheInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache, "s_CacheInstance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_CacheInstanceRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CacheInstanceRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_CacheInstanceRef() {
  return ::cordl_internals::getStaticField<int32_t, "s_CacheInstanceRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get>();
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_DefaultVariant() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_DefaultVariant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_name", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_displayName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::InputControlLayout::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_variants() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_variants", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_stateFormat", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_stateSizeInBytes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout::get_baseLayouts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_baseLayouts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout::get_appliedOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_appliedOverrides", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout::get_commonUsages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_commonUsages", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>
UnityEngine::InputSystem::Layouts::InputControlLayout::get_controls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_controls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_updateBeforeRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_updateBeforeRender", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isDeviceLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_isDeviceLayout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isControlLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_isControlLayout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_isOverride", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isOverride(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_isOverride",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isGenericTypeOfDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_isGenericTypeOfDevice", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isGenericTypeOfDevice(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_isGenericTypeOfDevice",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_hideInUI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_hideInUI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_hideInUI(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_hideInUI",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isNoisy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_isNoisy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isNoisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_isNoisy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::InputControlLayout::get_canRunInBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_canRunInBackground", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_canRunInBackground(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "set_canRunInBackground",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem UnityEngine::InputSystem::Layouts::InputControlLayout::get_Item(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, false>(this, ___internal_method, path);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>
UnityEngine::InputSystem::Layouts::InputControlLayout::FindControl(::UnityEngine::InputSystem::Utilities::InternedString path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "FindControl", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>, false>(this, ___internal_method, path);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>
UnityEngine::InputSystem::Layouts::InputControlLayout::FindControlIncludingArrayElements(::StringW path, ByRef<int32_t> arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "FindControlIncludingArrayElements", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>, false>(this, ___internal_method, path, arrayIndex);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::InputControlLayout::GetValueType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "GetValueType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout::FromType(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "FromType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(nullptr, ___internal_method, name, type);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::ToJson() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "ToJson", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout::FromJson(::StringW json) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "FromJson",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(nullptr, ___internal_method, json);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout::New_ctor(::StringW name, ::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(name, type));
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::_ctor(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, type);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItems(
    ::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlLayouts, ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItems", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromFields(
    ::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlLayouts, ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItemsFromFields", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromProperties(
    ::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlLayouts, ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItemsFromProperties", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMembers(
    ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> members,
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlItems, ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItemsFromMembers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, members, controlItems, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMember(
    ::System::Reflection::MemberInfo* member, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*, ::Array<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>*> attributes,
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* controlItems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "AddControlItemsFromMember", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*, ::Array<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, member, attributes, controlItems);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem
UnityEngine::InputSystem::Layouts::InputControlLayout::CreateControlItemFromMember(::System::Reflection::MemberInfo* member, ::UnityEngine::InputSystem::Layouts::InputControlAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "CreateControlItemFromMember", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, false>(nullptr, ___internal_method, member, attribute);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::InferLayoutFromValueType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "InferLayoutFromValueType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::MergeLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "MergeLayout", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
/// @param variants: ::System::Collections::Generic::List_1<::StringW>* (default: nullptr)
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*
UnityEngine::InputSystem::Layouts::InputControlLayout::CreateLookupTableForControls(
    ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*> controlItems,
    ::System::Collections::Generic::List_1<::StringW>* variants) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "CreateLookupTableForControls", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::Array<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*, false>(
      nullptr, ___internal_method, controlItems, variants);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch(::UnityEngine::InputSystem::Utilities::InternedString expected,
                                                                                 ::UnityEngine::InputSystem::Utilities::InternedString actual) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "VariantsMatch", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expected, actual);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch(::StringW expected, ::StringW actual) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "VariantsMatch", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expected, actual);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::ParseHeaderFieldsFromJson(
    ::StringW json, ByRef<::UnityEngine::InputSystem::Utilities::InternedString> name,
    ByRef<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>> baseLayouts,
    ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> deviceMatcher) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "ParseHeaderFieldsFromJson", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, json, name, baseLayouts, deviceMatcher);
}
inline ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache> UnityEngine::InputSystem::Layouts::InputControlLayout::get_cache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "get_cache", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance UnityEngine::InputSystem::Layouts::InputControlLayout::CacheRef() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                                                             "CacheRef", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::_MergeLayout_b__77_0(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(), "<MergeLayout>b__77_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout::InputControlLayout() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

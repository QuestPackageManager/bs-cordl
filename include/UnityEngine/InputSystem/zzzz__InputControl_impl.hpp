#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags::__InputControl__ControlFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags::__InputControl__ControlFlags() {}
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags UnityEngine::InputSystem::__InputControl__ControlFlags::ConfigUpToDate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags UnityEngine::InputSystem::__InputControl__ControlFlags::IsNoisy{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags UnityEngine::InputSystem::__InputControl__ControlFlags::IsSynthetic{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags UnityEngine::InputSystem::__InputControl__ControlFlags::IsButton{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags UnityEngine::InputSystem::__InputControl__ControlFlags::DontReset{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags UnityEngine::InputSystem::__InputControl__ControlFlags::SetupFinished{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags UnityEngine::InputSystem::__InputControl__ControlFlags::UsesStateFromOtherControl{ static_cast<int32_t>(0x40) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a63388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_displayName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a63398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControl::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a63424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_displayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_shortDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_shortDisplayName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a6342c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_shortDisplayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_shortDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControl::set_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a63470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_shortDisplayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_path)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a63478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_path",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_layout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_layout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a635ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_layout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_variants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_variants)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a635bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_variants",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a635cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_device",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_parent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a635d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_parent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (
    ::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_children)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a635dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_children",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_usages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_usages)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a6364c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_usages",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_aliases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_aliases)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a636bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_aliases",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_stateBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateBlock (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_stateBlock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6372c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_stateBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_noisy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_noisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a63738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_noisy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_noisy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_noisy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2a63744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_noisy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_synthetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_synthetic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6381c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_synthetic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_synthetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_synthetic)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a63828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_synthetic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControl::get_Item)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a63844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_valueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_valueType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_valueSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a6392c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.DebuggerDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::DebuggerDisplay)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2a63994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "DebuggerDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a63b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "EvaluateMagnitude", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputControl::*)(::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControl::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a63b74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.ReadValueFromBufferAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputControl::*)(::cordl_internals::Ptr<void>, int32_t)>(
    &::UnityEngine::InputSystem::InputControl::ReadValueFromBufferAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.ReadValueFromStateAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputControl::*)(::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControl::ReadValueFromStateAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.ReadValueFromStateIntoBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>, int32_t)>(&::UnityEngine::InputSystem::InputControl::ReadValueFromStateIntoBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.WriteValueFromBufferIntoState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(
    ::cordl_internals::Ptr<void>, int32_t, ::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::InputControl::WriteValueFromBufferIntoState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a63b7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.WriteValueFromObjectIntoState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(::System::Object*, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControl::WriteValueFromObjectIntoState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a63be4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.CompareValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControl::CompareValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.TryGetChildControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControl::TryGetChildControl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a63c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "TryGetChildControl",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.GetChildControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControl::GetChildControl)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2a63cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "GetChildControl",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a63e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::FinishSetup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a63eb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.RefreshConfigurationIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::RefreshConfigurationIfNeeded)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a633f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "RefreshConfigurationIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.RefreshConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::RefreshConfiguration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a63ee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_currentStatePtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_currentStatePtr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a63b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_currentStatePtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_previousFrameStatePtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_previousFrameStatePtr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a640a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_previousFrameStatePtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_defaultStatePtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_defaultStatePtr)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a640b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_defaultStatePtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_noiseMaskPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_noiseMaskPtr)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a64100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_noiseMaskPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_stateOffsetRelativeToDeviceRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_stateOffsetRelativeToDeviceRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a64148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_stateOffsetRelativeToDeviceRoot",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_isSetupFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_isSetupFinished)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6416c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_isSetupFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_isSetupFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(
    &::UnityEngine::InputSystem::InputControl::set_isSetupFinished)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a64178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_isSetupFinished",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_isButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_isButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a64194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_isButton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_isButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_isButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a641a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_isButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_isConfigUpToDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_isConfigUpToDate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a63ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_isConfigUpToDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_isConfigUpToDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(
    &::UnityEngine::InputSystem::InputControl::set_isConfigUpToDate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a63ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_isConfigUpToDate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_dontReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::get_dontReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a641bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_dontReset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_dontReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(&::UnityEngine::InputSystem::InputControl::set_dontReset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a641c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_dontReset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_usesStateFromOtherControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_usesStateFromOtherControl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a641e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_usesStateFromOtherControl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.set_usesStateFromOtherControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(bool)>(
    &::UnityEngine::InputSystem::InputControl::set_usesStateFromOtherControl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a641f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_usesStateFromOtherControl",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.get_hasDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::get_hasDefaultState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a6420c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "get_hasDefaultState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.CallFinishSetupRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)()>(
    &::UnityEngine::InputSystem::InputControl::CallFinishSetupRecursive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a6422c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "CallFinishSetupRecursive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.MakeChildPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputControl::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputControl::MakeChildPath)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2a63dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "MakeChildPath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.BakeOffsetIntoStateBlockRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(uint32_t)>(
    &::UnityEngine::InputSystem::InputControl::BakeOffsetIntoStateBlockRecursive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a642dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "BakeOffsetIntoStateBlockRecursive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.GetDeviceIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputControl::*)()>(&::UnityEngine::InputSystem::InputControl::GetDeviceIndex)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2a63ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                               "GetDeviceIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.IsValueConsideredPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputControl::*)(float_t)>(
    &::UnityEngine::InputSystem::InputControl::IsValueConsideredPressed)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a6438c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "IsValueConsideredPressed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControl.AddProcessor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputControl::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::InputControl::AddProcessor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a64444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 15));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_StateBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateBlock;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_StateBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateBlock;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_StateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateBlock = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Path;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DisplayNameFromLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayNameFromLayout;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DisplayNameFromLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayNameFromLayout;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_DisplayNameFromLayout(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DisplayNameFromLayout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ShortDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortDisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ShortDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortDisplayName;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ShortDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShortDisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ShortDisplayNameFromLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortDisplayNameFromLayout;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ShortDisplayNameFromLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortDisplayNameFromLayout;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ShortDisplayNameFromLayout(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShortDisplayNameFromLayout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layout;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layout;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Layout(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Layout = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Variants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variants;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Variants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variants;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Variants = value;
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputControl*& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_Parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_Parent(::UnityEngine::InputSystem::InputControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UsageCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UsageCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageCount;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_UsageCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsageCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UsageStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_UsageStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsageStartIndex;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_UsageStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsageStartIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_AliasCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_AliasCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasCount;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_AliasCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AliasCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_AliasStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_AliasStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AliasStartIndex;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_AliasStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AliasStartIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ChildCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ChildCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildCount;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ChildCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChildCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ChildStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ChildStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildStartIndex;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ChildStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChildStartIndex = value;
}
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ControlFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlFlags;
}
constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_ControlFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlFlags;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_ControlFlags(::UnityEngine::InputSystem::__InputControl__ControlFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlFlags = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DefaultState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultState;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_DefaultState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultState;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_DefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultState = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_MinValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinValue;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_MinValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinValue;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_MinValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinValue = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_MaxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxValue;
}
constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& UnityEngine::InputSystem::InputControl::__cordl_internal_get_m_MaxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxValue;
}
constexpr void UnityEngine::InputSystem::InputControl::__cordl_internal_set_m_MaxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxValue = value;
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_displayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_displayName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_shortDisplayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_shortDisplayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_shortDisplayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_shortDisplayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_path() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_path",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_layout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_layout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::get_variants() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_variants",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputControl::get_device() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_device",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::get_parent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_parent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputControl::get_children() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_children",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::InputControl::get_usages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_usages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::InputControl::get_aliases() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_aliases",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputStateBlock UnityEngine::InputSystem::InputControl::get_stateBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_stateBlock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateBlock, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControl::get_noisy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_noisy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_noisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_noisy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_synthetic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_synthetic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_synthetic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_synthetic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::get_Item(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method, path);
}
inline ::System::Type* UnityEngine::InputSystem::InputControl::get_valueType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputControl::get_valueSizeInBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::DebuggerDisplay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "DebuggerDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputControl::EvaluateMagnitude() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "EvaluateMagnitude", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputControl::EvaluateMagnitude(::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, statePtr);
}
inline ::System::Object* UnityEngine::InputSystem::InputControl::ReadValueFromBufferAsObject(::cordl_internals::Ptr<void> buffer, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputControl::ReadValueFromStateAsObject(::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::InputControl::ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void> statePtr, ::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statePtr, bufferPtr, bufferSize);
}
inline void UnityEngine::InputSystem::InputControl::WriteValueFromBufferIntoState(::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize, ::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferPtr, bufferSize, statePtr);
}
inline void UnityEngine::InputSystem::InputControl::WriteValueFromObjectIntoState(::System::Object* value, ::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, statePtr);
}
inline bool UnityEngine::InputSystem::InputControl::CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, firstStatePtr, secondStatePtr);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::TryGetChildControl(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "TryGetChildControl",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method, path);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControl::TryGetChildControl(::StringW path) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "TryGetChildControl",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }));
  return ::cordl_internals::RunMethodRethrow<TControl, false>(this, ___internal_method, path);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::GetChildControl(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "GetChildControl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method, path);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControl::GetChildControl(::StringW path) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "GetChildControl",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }));
  return ::cordl_internals::RunMethodRethrow<TControl, false>(this, ___internal_method, path);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputControl*>());
}
inline void UnityEngine::InputSystem::InputControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::RefreshConfigurationIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "RefreshConfigurationIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::RefreshConfiguration() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::InputControl::get_currentStatePtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_currentStatePtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::InputControl::get_previousFrameStatePtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_previousFrameStatePtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::InputControl::get_defaultStatePtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_defaultStatePtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::InputControl::get_noiseMaskPtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_noiseMaskPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::InputControl::get_stateOffsetRelativeToDeviceRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_stateOffsetRelativeToDeviceRoot",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControl::get_isSetupFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_isSetupFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_isSetupFinished(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_isSetupFinished",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_isButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_isButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_isButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_isButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_isConfigUpToDate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_isConfigUpToDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_isConfigUpToDate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_isConfigUpToDate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_dontReset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "get_dontReset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_dontReset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_dontReset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_usesStateFromOtherControl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_usesStateFromOtherControl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::set_usesStateFromOtherControl(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "set_usesStateFromOtherControl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputControl::get_hasDefaultState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "get_hasDefaultState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControl::CallFinishSetupRecursive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                             "CallFinishSetupRecursive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControl::MakeChildPath(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "MakeChildPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, path);
}
inline void UnityEngine::InputSystem::InputControl::BakeOffsetIntoStateBlockRecursive(uint32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "BakeOffsetIntoStateBlockRecursive",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset);
}
inline int32_t UnityEngine::InputSystem::InputControl::GetDeviceIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "GetDeviceIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControl::IsValueConsideredPressed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), "IsValueConsideredPressed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputControl::AddProcessor(::System::Object* first) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControl::InputControl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

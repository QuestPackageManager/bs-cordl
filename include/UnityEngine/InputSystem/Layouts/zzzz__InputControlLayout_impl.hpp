#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Layouts\InputControlLayout.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlAttribute_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags::ControlItem_InputControlLayout_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags::ControlItem_InputControlLayout_Flags() {}
constexpr ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags::isModifyingExistingControl{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags::IsNoisy{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags::IsSynthetic{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags::IsFirstDefinedInThisLayout{
  static_cast<int32_t>(0x8)
};
constexpr ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags::DontReset{ static_cast<int32_t>(0x10) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c48c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c48cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                           { "set_name", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_layout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_layout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c48d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_layout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_layout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c48e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                           { "set_layout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_variants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_variants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c48e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_variants", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_variants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_variants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c48f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                           { "set_variants", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_useStateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_useStateFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c48fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_useStateFrom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_useStateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_useStateFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_useStateFrom", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c490c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_shortDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c491c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_shortDisplayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_shortDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_shortDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_usages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_usages)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c492c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_usages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_usages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_usages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                         { "set_usages", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_aliases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_aliases)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c4940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_aliases", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_aliases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_aliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c494c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                         { "set_aliases", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_parameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c4954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                         { "set_parameters", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_processors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_processors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c4968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_processors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_processors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                            { "set_processors", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_offset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c497c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_offset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_offset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(uint32_t)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_offset", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_bit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_bit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c498c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_bit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_bit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(uint32_t)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_bit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_bit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_sizeInBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c499c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_sizeInBits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_sizeInBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(uint32_t)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c49a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_sizeInBits", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c49ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c49b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                           { "set_format", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c49bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(
    ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c49c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                             { "set_flags", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_arraySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_arraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c49cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_arraySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_arraySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(int32_t)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_arraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c49d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_arraySize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_defaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_defaultState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c49dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_defaultState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_defaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_defaultState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c49e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                           { "set_defaultState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_minValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_minValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c49f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_minValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_minValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_minValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c49fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                           { "set_minValue", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_maxValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_maxValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c4a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_maxValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_maxValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_maxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                           { "set_maxValue", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_isModifyingExistingControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isModifyingExistingControl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c4a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isModifyingExistingControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_isModifyingExistingControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_isModifyingExistingControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65c28b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                           { "set_isModifyingExistingControl", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_isNoisy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isNoisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c4a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isNoisy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_isNoisy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_isNoisy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c28e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_isNoisy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_isSynthetic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isSynthetic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c4a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isSynthetic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_isSynthetic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_isSynthetic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c2920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_isSynthetic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_dontReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_dontReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c4a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_dontReset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_dontReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_dontReset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c2900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_dontReset", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_isFirstDefinedInThisLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isFirstDefinedInThisLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c4a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isFirstDefinedInThisLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.set_isFirstDefinedInThisLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_isFirstDefinedInThisLayout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c28c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                           { "set_isFirstDefinedInThisLayout", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.get_isArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65c040c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem.Merge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::*)(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::Merge)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x65c4180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                             { "Merge", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_name() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_name(::UnityEngine::InputSystem::Utilities::InternedString value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                         { "set_name", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_layout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_layout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_layout(::UnityEngine::InputSystem::Utilities::InternedString value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                         { "set_layout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_variants() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_variants", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_variants(::UnityEngine::InputSystem::Utilities::InternedString value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                         { "set_variants", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_useStateFrom() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_useStateFrom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_useStateFrom(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_useStateFrom", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_displayName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_displayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_shortDisplayName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_shortDisplayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_shortDisplayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_shortDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_usages() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_usages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(*this, ___internal_method);
}
inline void
UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_usages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                       { "set_usages", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_aliases() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_aliases", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(*this, ___internal_method);
}
inline void
UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_aliases(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                       { "set_aliases", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_parameters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>(*this, ___internal_method);
}
inline void
UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                       { "set_parameters", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>
UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_processors() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_processors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_processors(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                          { "set_processors", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_offset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_offset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_offset(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_offset", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_bit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_bit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_bit(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_bit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_sizeInBits() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_sizeInBits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_sizeInBits(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_sizeInBits", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_format() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_format(::UnityEngine::InputSystem::Utilities::FourCC value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                         { "set_format", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_flags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_flags(::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                           { "set_flags", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_arraySize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_arraySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_arraySize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_arraySize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_defaultState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_defaultState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_defaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                         { "set_defaultState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_minValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_minValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_minValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                         { "set_minValue", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_maxValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_maxValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_maxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                         { "set_maxValue", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isModifyingExistingControl() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isModifyingExistingControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_isModifyingExistingControl(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_isModifyingExistingControl", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isNoisy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isNoisy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_isNoisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_isNoisy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isSynthetic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isSynthetic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_isSynthetic(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_isSynthetic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_dontReset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_dontReset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_dontReset(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_dontReset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isFirstDefinedInThisLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isFirstDefinedInThisLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::set_isFirstDefinedInThisLayout(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "set_isFirstDefinedInThisLayout", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::get_isArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(), { "get_isArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem
UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::Merge(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(),
                                                                                         { "Merge", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_layout_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "_variants_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useStateFrom_k__BackingField", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_shortDisplayName_k__BackingField", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_usages_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_aliases_k__BackingField",
// ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_parameters_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_processors_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_offset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bit_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_format_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "_flags_k__BackingField", ty:
// "::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags", modifiers: "", def_value: Some("{}") }, CppParam { name: "_arraySize_k__BackingField", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_defaultState_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_minValue_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }, CppParam { name: "_maxValue_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::InputControlLayout_ControlItem(
    ::UnityEngine::InputSystem::Utilities::InternedString _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::InternedString _layout_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::InternedString _variants_k__BackingField, ::StringW _useStateFrom_k__BackingField, ::StringW _displayName_k__BackingField,
    ::StringW _shortDisplayName_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _usages_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> _aliases_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField,
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> _processors_k__BackingField, uint32_t _offset_k__BackingField,
    uint32_t _bit_k__BackingField, uint32_t _sizeInBits_k__BackingField, ::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField,
    ::UnityEngine::InputSystem::Layouts::ControlItem_InputControlLayout_Flags _flags_k__BackingField, int32_t _arraySize_k__BackingField,
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
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem::InputControlLayout_ControlItem() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::*)()>(
    &::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c586c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c._WithUsages_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::*)(
    ::StringW)>(&::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::_WithUsages_b__14_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65c5870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(),
                                                                                           { "<WithUsages>b__14_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::setStaticF___9(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*, "<>9",
                                    ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(
      std::forward<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*, "<>9",
                                           ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>();
}
inline void
UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::setStaticF___9__14_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0",
                                    ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0",
                                           ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::_WithUsages_b__14_0(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(),
                                                                                         { "<WithUsages>b__14_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::ControlBuilder_Builder_InputControlLayout___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65c4ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "WithDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithLayout)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65c4f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithLayout", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(
    &::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithFormat)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65c4fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "WithFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65c5028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithFormat", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithByteOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(uint32_t)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithByteOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65c5058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithByteOffset", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithBitOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(uint32_t)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithBitOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65c50a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithBitOffset", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.IsSynthetic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(bool)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::IsSynthetic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65c50e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "IsSynthetic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.IsNoisy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(bool)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65c5148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "IsNoisy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.DontReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(bool)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::DontReset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65c51a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "DontReset", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithSizeInBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(uint32_t)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithSizeInBits)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65c5208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithSizeInBits", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(float_t, float_t)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithRange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65c5250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "WithRange", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>)>(
    &::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x65c52dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                             { "WithUsages", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x65c5484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "WithUsages", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::ArrayW<::StringW>)>(
    &::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c55b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "WithUsages", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithParameters)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65c55b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "WithParameters", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithProcessors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithProcessors)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x65c5668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "WithProcessors", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.WithDefaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithDefaultState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65c5738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "WithDefaultState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.UsingStateFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::UsingStateFrom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65c5780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "UsingStateFrom", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder.AsArrayOfControlsWithSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::*)(int32_t)>(
        &::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::AsArrayOfControlsWithSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x65c57d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                           { "AsArrayOfControlsWithSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithDisplayName(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, displayName);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithLayout(::StringW layout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithLayout", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, layout);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                         { "WithFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, format);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithFormat(::StringW format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithFormat", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, format);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithByteOffset(uint32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithByteOffset", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, offset);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithBitOffset(uint32_t bit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithBitOffset", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, bit);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::IsSynthetic(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "IsSynthetic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::IsNoisy(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "IsNoisy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::DontReset(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "DontReset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithSizeInBits(uint32_t sizeInBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithSizeInBits", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, sizeInBits);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithRange(float_t minValue,
                                                                                                                                                                              float_t maxValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                         { "WithRange", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, minValue, maxValue);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> usages) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                         { "WithUsages", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, usages);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithUsages(::System::Collections::Generic::IEnumerable_1<::StringW>* usages) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                         { "WithUsages", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, usages);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithUsages(::ArrayW<::StringW> usages) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                         { "WithUsages", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, usages);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithParameters(::StringW parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithParameters", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, parameters);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithProcessors(::StringW processors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "WithProcessors", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, processors);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                         { "WithDefaultState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::UsingStateFrom(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(), { "UsingStateFrom", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, path);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder
UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::AsArrayOfControlsWithSize(int32_t arraySize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(),
                                                                                         { "AsArrayOfControlsWithSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(*this, ___internal_method, arraySize);
}
// Ctor Parameters [CppParam { name: "builder", ty: "::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::Builder_InputControlLayout_ControlBuilder(
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* builder, int32_t index) noexcept {
  this->builder = builder;
  this->index = index;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder::Builder_InputControlLayout_ControlBuilder() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_type", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_stateFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_stateFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_stateFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                                                                                           { "set_stateFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_stateSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_stateSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_stateSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(int32_t)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_stateSizeInBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_extendsLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_extendsLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_extendsLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_extendsLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_extendsLayout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65c4aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_extendsLayout", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_updateBeforeRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_updateBeforeRender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_updateBeforeRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::System::Nullable_1<bool>)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_updateBeforeRender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                                                                                           { "set_updateBeforeRender", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_controls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_controls)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65c4ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_controls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.AddControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::AddControl)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x65c4b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "AddControl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "WithName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "WithDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                                                                                           { "WithFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithFormat)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65c4c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "WithFormat", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(int32_t)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c4ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "WithSizeInBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.Extend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::Extend)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65c4cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "Extend", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::Build)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x65c4cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "Build", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c4ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName_k__BackingField = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__stateFormat_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateFormat_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__stateFormat_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateFormat_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__stateFormat_k__BackingField(::UnityEngine::InputSystem::Utilities::FourCC value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateFormat_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__stateSizeInBytes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSizeInBytes_k__BackingField;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__stateSizeInBytes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSizeInBytes_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__stateSizeInBytes_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateSizeInBytes_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_ExtendsLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtendsLayout;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_ExtendsLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtendsLayout;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set_m_ExtendsLayout(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExtendsLayout = value;
}
constexpr ::System::Nullable_1<bool>& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__updateBeforeRender_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBeforeRender_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__updateBeforeRender_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBeforeRender_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__updateBeforeRender_k__BackingField(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateBeforeRender_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_ControlCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlCount;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_ControlCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlCount;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set_m_ControlCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlCount = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_Controls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_Controls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set_m_Controls(::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Controls = value;
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_displayName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_displayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_type(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_type", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_stateFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_stateFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                                                                                         { "set_stateFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_stateSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_stateSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_stateSizeInBytes(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_stateSizeInBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_extendsLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_extendsLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_extendsLayout(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "set_extendsLayout", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_updateBeforeRender() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_updateBeforeRender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_updateBeforeRender(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                                                                                         { "set_updateBeforeRender", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>
UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_controls() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "get_controls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::AddControl(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "AddControl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::Builder_InputControlLayout_ControlBuilder>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "WithName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithDisplayName(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "WithDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, displayName);
}
template <typename T> inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithType() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "WithType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*
UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                                                                                         { "WithFormat", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, format);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithFormat(::StringW format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "WithFormat", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, format);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithSizeInBytes(int32_t sizeInBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "WithSizeInBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, sizeInBytes);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::Extend(::StringW baseLayoutName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "Extend", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, baseLayoutName);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { "Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::InputControlLayout_Builder() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags::InputControlLayout_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags::InputControlLayout_Flags() {}
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags UnityEngine::InputSystem::Layouts::InputControlLayout_Flags::IsGenericTypeOfDevice{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags UnityEngine::InputSystem::Layouts::InputControlLayout_Flags::HideInUI{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags UnityEngine::InputSystem::Layouts::InputControlLayout_Flags::IsOverride{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags UnityEngine::InputSystem::Layouts::InputControlLayout_Flags::CanRunInBackground{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags UnityEngine::InputSystem::Layouts::InputControlLayout_Flags::CanRunInBackgroundIsSet{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags UnityEngine::InputSystem::Layouts::InputControlLayout_Flags::IsNoisy{ static_cast<int32_t>(0x20) };
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly::InputControlLayout_LayoutJsonNameAndDescriptorOnly(
    ::StringW name, ::StringW extend, ::ArrayW<::StringW> extendMultiple, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson device) noexcept {
  this->name = name;
  this->extend = extend;
  this->extendMultiple = extendMultiple;
  this->device = device;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJsonNameAndDescriptorOnly::InputControlLayout_LayoutJsonNameAndDescriptorOnly() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::*)()>(
    &::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c668c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c._ToLayout_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_ToLayout_b__14_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65c6690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(), { "<ToLayout>b__14_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c._FromLayout_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_FromLayout_b__15_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c66b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                                                             { "<FromLayout>b__15_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c._FromLayout_b__15_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_FromLayout_b__15_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c66d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                                                             { "<FromLayout>b__15_1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::setStaticF___9(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(
      std::forward<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::setStaticF___9__14_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0",
                                    ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0",
                                           ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::setStaticF___9__15_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__15_0",
                                    ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__15_0",
                                           ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::setStaticF___9__15_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__15_1",
                                    ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__15_1",
                                           ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_ToLayout_b__14_0(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(), { "<ToLayout>b__14_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_FromLayout_b__15_0(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                                                                                         { "<FromLayout>b__15_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_FromLayout_b__15_1(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                                                                                         { "<FromLayout>b__15_1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::LayoutJson_InputControlLayout___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c66f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson.ToLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::ToLayout)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x65c5898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(), { "ToLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson.FromControlItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*> (*)(
    ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::FromControlItems)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x65c5f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(),
                                                             { "FromControlItems", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_layout(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layout = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_variants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___variants;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_variants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___variants;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_variants(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___variants = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_usage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_usage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_usage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usage = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_alias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alias;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_alias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alias;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_alias(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alias = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_useStateFrom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useStateFrom;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_useStateFrom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useStateFrom;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_useStateFrom(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useStateFrom = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr uint32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_offset(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_bit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bit;
}
constexpr uint32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_bit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bit;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_bit(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bit = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_sizeInBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeInBits;
}
constexpr uint32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_sizeInBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeInBits;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_sizeInBits(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sizeInBits = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_format(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_arraySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arraySize;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_arraySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arraySize;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_arraySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arraySize = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_usages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usages;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_usages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usages;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_usages(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usages = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_aliases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliases;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_aliases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliases;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_aliases(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aliases = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_parameters(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_processors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processors;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_processors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processors;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_processors(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processors = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayName = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_shortDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortDisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_shortDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortDisplayName;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_shortDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shortDisplayName = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_noisy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noisy;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_noisy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noisy;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_noisy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noisy = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_dontReset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dontReset;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_dontReset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dontReset;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_dontReset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dontReset = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_synthetic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synthetic;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_synthetic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synthetic;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_synthetic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___synthetic = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_defaultState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultState;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_defaultState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultState;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_defaultState(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultState = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_minValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValue;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_minValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValue;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_minValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minValue = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_maxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxValue;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_maxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxValue;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_maxValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxValue = value;
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::ToLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(), { "ToLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>
UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::FromControlItems(::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> items) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(),
                                                           { "FromControlItems", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>>(nullptr, ___internal_method, items);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson* UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::InputControlLayout_ControlItemJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson.ToLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson::ToLayout)> {
  constexpr static std::size_t size = 0x884;
  constexpr static std::size_t addrs = 0x65c0e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson>(), { "ToLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson.FromLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson (*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson::FromLayout)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x65c0a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson>(),
                                                                                           { "FromLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson::ToLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson>(), { "ToLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson
UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson::FromLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson>(),
                                                                                         { "FromLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson>(nullptr, ___internal_method, layout);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "beforeRender", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "runInBackground", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "commonUsages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "description", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "variant", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "isGenericTypeOfDevice", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hideInUI", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "controls", ty: "::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson::InputControlLayout_LayoutJson(
    ::StringW name, ::StringW extend, ::ArrayW<::StringW> extendMultiple, ::StringW format, ::StringW beforeRender, ::StringW runInBackground, ::ArrayW<::StringW> commonUsages, ::StringW displayName,
    ::StringW description, ::StringW type, ::StringW variant, bool isGenericTypeOfDevice, bool hideInUI,
    ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*> controls) noexcept {
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
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson::InputControlLayout_LayoutJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)()>(
    &::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c6758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._ToLayout_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(
    ::StringW)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ToLayout_b__24_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65c675c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                                                           { "<ToLayout>b__24_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._ToLayout_b__24_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(
    ::StringW)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ToLayout_b__24_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65c6784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                                                           { "<ToLayout>b__24_1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._FromControlItems_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(::UnityEngine::InputSystem::Utilities::NamedValue)>(
    &::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c67ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                             { "<FromControlItems>b__25_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._FromControlItems_b__25_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(
    ::UnityEngine::InputSystem::Utilities::NameAndParameters)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c67b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                             { "<FromControlItems>b__25_1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._FromControlItems_b__25_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c67c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                             { "<FromControlItems>b__25_2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._FromControlItems_b__25_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c67e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                             { "<FromControlItems>b__25_3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(
      std::forward<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*, "<>9",
                                           ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__24_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_0",
                                    ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_0",
                                           ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__24_1(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_1",
                                    ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__24_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_1",
                                           ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__25_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>*, "<>9__25_0",
                                    ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>*, "<>9__25_0",
                                           ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void
UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__25_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>*, "<>9__25_1",
                                    ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__25_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::StringW>*, "<>9__25_1",
                                           ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__25_2(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__25_2",
                                    ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__25_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__25_2",
                                           ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__25_3(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__25_3",
                                    ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__25_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>*, "<>9__25_3",
                                           ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ToLayout_b__24_0(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(), { "<ToLayout>b__24_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ToLayout_b__24_1(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(), { "<ToLayout>b__24_1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_0(::UnityEngine::InputSystem::Utilities::NamedValue x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                           { "<FromControlItems>b__25_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_1(::UnityEngine::InputSystem::Utilities::NameAndParameters x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                           { "<FromControlItems>b__25_1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_2(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                           { "<FromControlItems>b__25_2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_3(::UnityEngine::InputSystem::Utilities::InternedString x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                                                           { "<FromControlItems>b__25_3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::ControlItemJson_InputControlLayout___c() {}
// Ctor Parameters [CppParam { name: "layoutName", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceMatcher", ty:
// "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher::Collection_InputControlLayout_LayoutMatcher(
    ::UnityEngine::InputSystem::Utilities::InternedString layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher) noexcept {
  this->layoutName = layoutName;
  this->deviceMatcher = deviceMatcher;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher::Collection_InputControlLayout_LayoutMatcher() {}
// Ctor Parameters [CppParam { name: "factoryMethod", ty: "::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "metadata", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout::Collection_InputControlLayout_PrecompiledLayout(
    ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* factoryMethod, ::StringW metadata) noexcept {
  this->factoryMethod = factoryMethod;
  this->metadata = metadata;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout::Collection_InputControlLayout_PrecompiledLayout() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::Allocate)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x65c6804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(), { "Allocate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.TryFindLayoutForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(::System::Type*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::TryFindLayoutForType)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x65c2940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                                                           { "TryFindLayoutForType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.TryFindMatchingLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::TryFindMatchingLayout)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x65c6b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                             { "TryFindMatchingLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.HasLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::HasLayout)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x65c2abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                                                           { "HasLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.TryLoadLayoutInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::TryLoadLayoutInternal)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x65c6d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                             { "TryLoadLayoutInternal", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.TryLoadLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString,
                                                                           ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,
                                                                                                                        ::UnityEngine::InputSystem::Layouts::InputControlLayout*>*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::TryLoadLayout)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x65c6f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
            { "TryLoadLayout",
              {},
              { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.GetBaseLayoutName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::GetBaseLayoutName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x65c73c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                                                           { "GetBaseLayoutName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.GetRootLayoutName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::GetRootLayoutName)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65c7454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                                                           { "GetRootLayoutName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.ComputeDistanceInInheritanceHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ::by_ref<int32_t>)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::ComputeDistanceInInheritanceHierarchy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x65c74ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                             { "ComputeDistanceInInheritanceHierarchy",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.FindLayoutThatIntroducesControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::FindLayoutThatIntroducesControl)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x65c75cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                { "FindLayoutThatIntroducesControl",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.GetControlTypeForLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::GetControlTypeForLayout)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x65c7840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                             { "GetControlTypeForLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.ValueTypeIsAssignableFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::ValueTypeIsAssignableFrom)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x65c7998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                { "ValueTypeIsAssignableFrom", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.IsGeneratedLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::IsGeneratedLayout)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x65c7a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                                                           { "IsGeneratedLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.GetBaseLayouts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::GetBaseLayouts)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65c7b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                             { "GetBaseLayouts", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.IsBasedOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::IsBasedOn)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x65c7be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                         { "IsBasedOn", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection.AddMatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::AddMatcher)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x65c7c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
            { "AddMatcher", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::Allocate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(), { "Allocate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::TryFindLayoutForType(::System::Type* layoutType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(), { "TryFindLayoutForType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, layoutType);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                           { "TryFindMatchingLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, deviceDescription);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::HasLayout(::UnityEngine::InputSystem::Utilities::InternedString name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                                                         { "HasLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout*
UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::TryLoadLayoutInternal(::UnityEngine::InputSystem::Utilities::InternedString name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                           { "TryLoadLayoutInternal", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(*this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::TryLoadLayout(
    ::UnityEngine::InputSystem::Utilities::InternedString name,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
          { "TryLoadLayout",
            {},
            { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(*this, ___internal_method, name, table);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::GetBaseLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                                                         { "GetBaseLayoutName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, layoutName);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::GetRootLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                                                         { "GetRootLayoutName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, layoutName);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::ComputeDistanceInInheritanceHierarchy(::UnityEngine::InputSystem::Utilities::InternedString firstLayout,
                                                                                                                    ::UnityEngine::InputSystem::Utilities::InternedString secondLayout,
                                                                                                                    ::by_ref<int32_t> distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                           { "ComputeDistanceInInheritanceHierarchy",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, firstLayout, secondLayout, distance);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::FindLayoutThatIntroducesControl(::UnityEngine::InputSystem::InputControl* control,
                                                                                                  ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache cache) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                              { "FindLayoutThatIntroducesControl",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, control, cache);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::GetControlTypeForLayout(::UnityEngine::InputSystem::Utilities::InternedString layoutName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                           { "GetControlTypeForLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method, layoutName);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::ValueTypeIsAssignableFrom(::UnityEngine::InputSystem::Utilities::InternedString layoutName, ::System::Type* valueType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                              { "ValueTypeIsAssignableFrom", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, layoutName, valueType);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::IsGeneratedLayout(::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                                                         { "IsGeneratedLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, layout);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*
UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::GetBaseLayouts(::UnityEngine::InputSystem::Utilities::InternedString layout, bool includeSelf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                                                           { "GetBaseLayouts", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(*this, ___internal_method, layout, includeSelf);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::IsBasedOn(::UnityEngine::InputSystem::Utilities::InternedString parentLayout,
                                                                                        ::UnityEngine::InputSystem::Utilities::InternedString childLayout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                          { "IsBasedOn", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, parentLayout, childLayout);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::AddMatcher(::UnityEngine::InputSystem::Utilities::InternedString layout,
                                                                                         ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(),
                       { "AddMatcher", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layout, matcher);
}
// Ctor Parameters [CppParam { name: "layoutTypes", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "layoutStrings", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "layoutBuilders", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "baseLayoutTable", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "layoutOverrides", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "layoutOverrideNames", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "precompiledLayouts", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout>*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "layoutMatchers", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::InputControlLayout_Collection(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* layoutTypes,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* layoutStrings,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>* layoutBuilders,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString>* baseLayoutTable,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>>* layoutOverrides,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* layoutOverrideNames,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_PrecompiledLayout>*
        precompiledLayouts,
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout_LayoutMatcher>* layoutMatchers) noexcept {
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
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection::InputControlLayout_Collection() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)(int32_t)>(
    &::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c7bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(
    &::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c7e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(
    &::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x65c7e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (
    ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(
    &::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65c7ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                             { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(
    &::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65c7ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                                                           { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(
    &::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65c7f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* (
    ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(
    &::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::
        System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65c7f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                             { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(
    &::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c801c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                                                           { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const&
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___2__current(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get_includeSelf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeSelf;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get_includeSelf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeSelf;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set_includeSelf(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeSelf = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3__includeSelf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__includeSelf;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3__includeSelf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__includeSelf;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___3__includeSelf(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__includeSelf = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get_layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get_layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set_layout(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layout = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3__layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__layout;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const&
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3__layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__layout;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___3__layout(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__layout = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection const&
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___4__this(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection&
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3____4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection const&
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3____4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr void
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___3____4__this(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3____4__this = value;
}
inline void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                                                         { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                                                                                         { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*
UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::
    i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__Utilities__InternedString_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::
    i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__Utilities__InternedString_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::Collection_InputControlLayout__GetBaseLayouts_d__24() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException.get_layout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c8020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(), { "get_layout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65c8028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)(::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65c8080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x65c7308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)(::StringW, ::System::Exception*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65c80f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                                                                 ::System::Runtime::Serialization::StreamingContext)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x65c8168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::__cordl_internal_get__layout_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::__cordl_internal_get__layout_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::__cordl_internal_set__layout_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layout_k__BackingField = value;
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::get_layout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(), { "get_layout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor(::StringW name, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, message);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                 ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>());
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor(::StringW name,
                                                                                                                                                                                ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(name, message));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(name));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*
UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(message, innerException));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*
UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                        ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(info, context));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::InputControlLayout_LayoutNotFoundException() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65c81ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache.FindOrLoadLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache::FindOrLoadLayout)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x65c76f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache>(),
                                                                                           { "FindOrLoadLayout", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Cache::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout_Cache::FindOrLoadLayout(::StringW name, bool throwIfNotFound) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache>(),
                                                                                         { "FindOrLoadLayout", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(*this, ___internal_method, name, throwIfNotFound);
}
// Ctor Parameters [CppParam { name: "table", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache::InputControlLayout_Cache(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table) noexcept {
  this->table = table;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache::InputControlLayout_Cache() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance::Dispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65c81f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance::InputControlLayout_CacheRefInstance(bool valid) noexcept {
  this->valid = valid;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance::InputControlLayout_CacheRefInstance() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout___c::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65c82e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout___c._FromType_b__52_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout___c::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout___c::_FromType_b__52_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65c82e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(), { "<FromType>b__52_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout___c._CreateControlItemFromMember_b__75_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout___c::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout___c::_CreateControlItemFromMember_b__75_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65c8310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                                                                                           { "<CreateControlItemFromMember>b__75_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout___c._CreateControlItemFromMember_b__75_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout___c::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout___c::_CreateControlItemFromMember_b__75_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65c8338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                                                                                           { "<CreateControlItemFromMember>b__75_1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::setStaticF___9(::UnityEngine::InputSystem::Layouts::InputControlLayout___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(
      std::forward<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout___c* UnityEngine::InputSystem::Layouts::InputControlLayout___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::setStaticF___9__52_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__52_0", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout___c::getStaticF___9__52_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__52_0",
                                           ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::setStaticF___9__75_0(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_0", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout___c::getStaticF___9__75_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_0",
                                           ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::setStaticF___9__75_1(::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_1", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(
      std::forward<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout___c::getStaticF___9__75_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_1",
                                           ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout___c::_FromType_b__52_0(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(), { "<FromType>b__52_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout___c::_CreateControlItemFromMember_b__75_0(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                                                                                         { "<CreateControlItemFromMember>b__75_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout___c::_CreateControlItemFromMember_b__75_1(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                                                                                         { "<CreateControlItemFromMember>b__75_1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout___c* UnityEngine::InputSystem::Layouts::InputControlLayout___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout___c::InputControlLayout___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_DefaultVariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_DefaultVariant)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65bf9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_DefaultVariant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65bfa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_displayName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x65bfa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65bfa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_variants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_variants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65bfa94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_variants", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_stateFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65bfaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_stateFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_stateSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65bfaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_stateSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_baseLayouts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_baseLayouts)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65bfab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_baseLayouts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_appliedOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_appliedOverrides)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65bfb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_appliedOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_commonUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_commonUsages)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65bfb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_commonUsages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_controls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_controls)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65bfbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_controls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_updateBeforeRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65bfc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_updateBeforeRender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isDeviceLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isDeviceLayout)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x65bfc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isDeviceLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isControlLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isControlLayout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65bfcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isControlLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65bfd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_isOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_isOverride)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65bfd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "set_isOverride", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isGenericTypeOfDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isGenericTypeOfDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65bfd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isGenericTypeOfDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_isGenericTypeOfDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_isGenericTypeOfDevice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65bfd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "set_isGenericTypeOfDevice", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_hideInUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_hideInUI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65bfd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_hideInUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_hideInUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_hideInUI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65bfd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "set_hideInUI", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isNoisy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isNoisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65bfd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isNoisy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_isNoisy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_isNoisy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65bfd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "set_isNoisy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_canRunInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_canRunInBackground)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65bfda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_canRunInBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_canRunInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::System::Nullable_1<bool>)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::set_canRunInBackground)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65bfdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                           { "set_canRunInBackground", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_Item)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x65bfe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FindControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::FindControl)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x65bfffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                           { "FindControl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FindControlIncludingArrayElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> (
    ::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW, ::by_ref<int32_t>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::FindControlIncludingArrayElements)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x65c0150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                             { "FindControlIncludingArrayElements", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.GetValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::GetValueType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65c041c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "GetValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FromType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW, ::System::Type*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::FromType)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x65c0498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                           { "FromType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.ToJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::ToJson)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x65c09e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "ToJson", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FromJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::FromJson)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65c0df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65c09a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*,
                                                                ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItems)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x65c0920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                            { "AddControlItems",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>(),
                                ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*,
                                                                ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromFields)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65c16e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                            { "AddControlItemsFromFields",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>(),
                                ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*,
                                                                ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromProperties)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65c1778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                            { "AddControlItemsFromProperties",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>(),
                                ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::ArrayW<::System::Reflection::MemberInfo*>, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*, ::StringW)>(
        &::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMembers)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x65c1810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                            { "AddControlItemsFromMembers",
                              {},
                              { ::i2c::type_of<::ArrayW<::System::Reflection::MemberInfo*>>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::MemberInfo*, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMember)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x65c1d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                { "AddControlItemsFromMember",
                                                  {},
                                                  { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.CreateControlItemFromMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem (*)(
    ::System::Reflection::MemberInfo*, ::UnityEngine::InputSystem::Layouts::InputControlAttribute*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::CreateControlItemFromMember)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x65c1f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
            { "CreateControlItemFromMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.InferLayoutFromValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::InferLayoutFromValueType)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x65c26e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "InferLayoutFromValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.MergeLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::MergeLayout)> {
  constexpr static std::size_t size = 0x1180;
  constexpr static std::size_t addrs = 0x65c2bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                           { "MergeLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.CreateLookupTableForControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* (*)(::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>,
                                                                                         ::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::CreateLookupTableForControls)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x65c3d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                           { "CreateLookupTableForControls",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.VariantsMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65c4524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
            { "VariantsMatch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.VariantsMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x65c43e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                           { "VariantsMatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.ParseHeaderFieldsFromJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::StringW, ::by_ref<::UnityEngine::InputSystem::Utilities::InternedString>, ::by_ref<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>,
    ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::ParseHeaderFieldsFromJson)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x65c458c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                { "ParseHeaderFieldsFromJson",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::InternedString>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_cache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache> (*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::get_cache)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65c4700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_cache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.CacheRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance (*)()>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::CacheRef)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65c475c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "CacheRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout._MergeLayout_b__77_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem)>(
    &::UnityEngine::InputSystem::Layouts::InputControlLayout::_MergeLayout_b__77_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65c4848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                             { "<MergeLayout>b__77_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr ::System::Type* const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Variants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variants;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Variants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Variants;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Variants = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_StateFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateFormat;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_StateFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateFormat;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_StateFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateFormat = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_StateSizeInBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateSizeInBytes;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_StateSizeInBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateSizeInBytes;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_StateSizeInBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateSizeInBytes = value;
}
constexpr ::System::Nullable_1<bool>& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_UpdateBeforeRender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateBeforeRender;
}
constexpr ::System::Nullable_1<bool> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_UpdateBeforeRender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateBeforeRender;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_UpdateBeforeRender(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateBeforeRender = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>&
UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_BaseLayouts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseLayouts;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const&
UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_BaseLayouts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseLayouts;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_BaseLayouts(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BaseLayouts = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>&
UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_AppliedOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AppliedOverrides;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const&
UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_AppliedOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AppliedOverrides;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_AppliedOverrides(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AppliedOverrides = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_CommonUsages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonUsages;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_CommonUsages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonUsages;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_CommonUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CommonUsages = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Controls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Controls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controls;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Controls(::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Controls = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayName = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Description;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Description;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Description = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Flags(::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_DefaultVariant(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "s_DefaultVariant", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_DefaultVariant() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "s_DefaultVariant", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_Layouts(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, "s_Layouts", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>(
      std::forward<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection>(value));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_Layouts() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection, "s_Layouts", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_CacheInstance(::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache, "s_CacheInstance", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>(
      std::forward<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache>(value));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_CacheInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache, "s_CacheInstance", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_CacheInstanceRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CacheInstanceRef", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_CacheInstanceRef() {
  return ::cordl_internals::getStaticField<int32_t, "s_CacheInstanceRef", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>();
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_DefaultVariant() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_DefaultVariant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::InputControlLayout::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_variants() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_variants", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_stateFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_stateSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout::get_baseLayouts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_baseLayouts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout::get_appliedOverrides() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_appliedOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout::get_commonUsages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_commonUsages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>
UnityEngine::InputSystem::Layouts::InputControlLayout::get_controls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_controls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_updateBeforeRender() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_updateBeforeRender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isDeviceLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isDeviceLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isControlLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isControlLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isOverride(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "set_isOverride", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isGenericTypeOfDevice() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isGenericTypeOfDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isGenericTypeOfDevice(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "set_isGenericTypeOfDevice", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_hideInUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_hideInUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_hideInUI(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "set_hideInUI", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isNoisy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_isNoisy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isNoisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "set_isNoisy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::InputControlLayout::get_canRunInBackground() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_canRunInBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_canRunInBackground(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                         { "set_canRunInBackground", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem UnityEngine::InputSystem::Layouts::InputControlLayout::get_Item(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(this, ___internal_method, path);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>
UnityEngine::InputSystem::Layouts::InputControlLayout::FindControl(::UnityEngine::InputSystem::Utilities::InternedString path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                         { "FindControl", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(this, ___internal_method, path);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>
UnityEngine::InputSystem::Layouts::InputControlLayout::FindControlIncludingArrayElements(::StringW path, ::by_ref<int32_t> arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                           { "FindControlIncludingArrayElements", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(this, ___internal_method, path, arrayIndex);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::InputControlLayout::GetValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "GetValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout::FromType(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                         { "FromType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(nullptr, ___internal_method, name, type);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::ToJson() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "ToJson", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout::FromJson(::StringW json) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(nullptr, ___internal_method, json);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::_ctor(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItems(
    ::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlLayouts, ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                          { "AddControlItems",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>(),
                              ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromFields(
    ::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlLayouts, ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                          { "AddControlItemsFromFields",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>(),
                              ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromProperties(
    ::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlLayouts, ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                          { "AddControlItemsFromProperties",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>(),
                              ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMembers(
    ::ArrayW<::System::Reflection::MemberInfo*> members, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlItems,
    ::StringW layoutName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                          { "AddControlItemsFromMembers",
                            {},
                            { ::i2c::type_of<::ArrayW<::System::Reflection::MemberInfo*>>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, members, controlItems, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMember(
    ::System::Reflection::MemberInfo* member, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*> attributes,
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlItems) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                              { "AddControlItemsFromMember",
                                                {},
                                                { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, member, attributes, controlItems);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem
UnityEngine::InputSystem::Layouts::InputControlLayout::CreateControlItemFromMember(::System::Reflection::MemberInfo* member, ::UnityEngine::InputSystem::Layouts::InputControlAttribute* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                       { "CreateControlItemFromMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(nullptr, ___internal_method, member, attribute);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::InferLayoutFromValueType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "InferLayoutFromValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::MergeLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                         { "MergeLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*
UnityEngine::InputSystem::Layouts::InputControlLayout::CreateLookupTableForControls(::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItems,
                                                                                    ::System::Collections::Generic::List_1<::StringW>* variants) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                         { "CreateLookupTableForControls",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*>(nullptr, ___internal_method,
                                                                                                                                                                            controlItems, variants);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch(::UnityEngine::InputSystem::Utilities::InternedString expected,
                                                                                 ::UnityEngine::InputSystem::Utilities::InternedString actual) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                       { "VariantsMatch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expected, actual);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch(::StringW expected, ::StringW actual) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                                                         { "VariantsMatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expected, actual);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::ParseHeaderFieldsFromJson(
    ::StringW json, ::by_ref<::UnityEngine::InputSystem::Utilities::InternedString> name,
    ::by_ref<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>> baseLayouts,
    ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> deviceMatcher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                           { "ParseHeaderFieldsFromJson",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::InternedString>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, json, name, baseLayouts, deviceMatcher);
}
inline ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache> UnityEngine::InputSystem::Layouts::InputControlLayout::get_cache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "get_cache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache>>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance UnityEngine::InputSystem::Layouts::InputControlLayout::CacheRef() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), { "CacheRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance>(nullptr, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::_MergeLayout_b__77_0(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                                                           { "<MergeLayout>b__77_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout::New_ctor(::StringW name, ::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(name, type));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout::InputControlLayout() {}

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceMatcher.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability::__InputDeviceMatcher__MatcherJson__Capability(::StringW path, ::StringW value) noexcept {
  this->path = path;
  this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability::__InputDeviceMatcher__MatcherJson__Capability() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson.FromMatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson (*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson::FromMatcher)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x319ceac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson>::get(), "FromMatcher", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson.ToMatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (
    ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson::*)()>(&::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson::ToMatcher)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x319d218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson>::get(), "ToMatcher",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson
UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson::FromMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson>::get(), "FromMatcher", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, false>(nullptr, ___internal_method, matcher);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson::ToMatcher() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson>::get(), "ToMatcher",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "interfaces", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "deviceClass", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "deviceClasses", ty:
// "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "manufacturers", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "products", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "version", ty: "::StringW", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "versions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "capabilities", ty:
// "::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability,::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson::__InputDeviceMatcher__MatcherJson(
    ::StringW interface, ::ArrayW<::StringW, ::Array<::StringW>*> interfaces, ::StringW deviceClass, ::ArrayW<::StringW, ::Array<::StringW>*> deviceClasses, ::StringW manufacturer,
    ::ArrayW<::StringW, ::Array<::StringW>*> manufacturers, ::StringW product, ::ArrayW<::StringW, ::Array<::StringW>*> products, ::StringW version, ::ArrayW<::StringW, ::Array<::StringW>*> versions,
    ::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability, ::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*> capabilities) noexcept {
  this->interface = interface;
  this->interfaces = interfaces;
  this->deviceClass = deviceClass;
  this->deviceClasses = deviceClasses;
  this->manufacturer = manufacturer;
  this->manufacturers = manufacturers;
  this->product = product;
  this->products = products;
  this->version = version;
  this->versions = versions;
  this->capabilities = capabilities;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson::__InputDeviceMatcher__MatcherJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_empty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x319b734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                                                               "get_empty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.get_patterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_patterns)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x319b744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                                                               "get_patterns", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(
    ::StringW, bool)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithInterface)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x319b7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithInterface", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithDeviceClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(
    ::StringW, bool)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithDeviceClass)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x319ba7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithDeviceClass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithManufacturer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(
    ::StringW, bool)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x319baf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithManufacturer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithProduct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(
    ::StringW, bool)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithProduct)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x319bb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithProduct", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(
    ::StringW, bool)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithVersion)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x319bbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithVersion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.With
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*, bool)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::With)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x319b86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "With", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.MatchPercentage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchPercentage)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x319bc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "MatchPercentage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.MatchSingleProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSingleProperty)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x319bfa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                                                               "MatchSingleProperty", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.GetNumPropertiesIn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetNumPropertiesIn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x319c714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "GetNumPropertiesIn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.FromDeviceDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::FromDeviceDescription)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x319c7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "FromDeviceDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::ToString)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x319c8c4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x319ca5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x319cb8c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Equality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x319cc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x319cc20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x319cc94;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*
UnityEngine::InputSystem::Layouts::InputDeviceMatcher::i___System__IEquatable_1___UnityEngine__InputSystem__Layouts__InputDeviceMatcher_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kInterfaceKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kInterfaceKey",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kInterfaceKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kInterfaceKey",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kDeviceClassKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kDeviceClassKey",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kDeviceClassKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kDeviceClassKey",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kManufacturerKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kManufacturerKey",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kManufacturerKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kManufacturerKey",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kProductKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kProductKey",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kProductKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kProductKey",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kVersionKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kVersionKey",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kVersionKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kVersionKey",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get>();
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                                                             "get_empty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_patterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                                                             "get_patterns", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*, false>(this,
                                                                                                                                                                                  ___internal_method);
}
/// @param supportRegex: bool (default: true)
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithInterface(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithInterface", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(this, ___internal_method, pattern, supportRegex);
}
/// @param supportRegex: bool (default: true)
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithDeviceClass(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithDeviceClass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(this, ___internal_method, pattern, supportRegex);
}
/// @param supportRegex: bool (default: true)
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturer(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithManufacturer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(this, ___internal_method, pattern, supportRegex);
}
/// @param supportRegex: bool (default: true)
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithProduct(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithProduct", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(this, ___internal_method, pattern, supportRegex);
}
/// @param supportRegex: bool (default: true)
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithVersion(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(this, ___internal_method, pattern, supportRegex);
}
template <typename TValue> inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithCapability(::StringW path, TValue value) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "WithCapability",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(this, ___internal_method, path, value);
}
/// @param supportRegex: bool (default: true)
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::With(::UnityEngine::InputSystem::Utilities::InternedString key,
                                                                                                                           ::System::Object* value, bool supportRegex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "With", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(this, ___internal_method, key, value, supportRegex);
}
inline float_t UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchPercentage(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "MatchPercentage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, deviceDescription);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSingleProperty(::System::Object* pattern, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "MatchSingleProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, value);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetNumPropertiesIn(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "GetNumPropertiesIn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, description);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher
UnityEngine::InputSystem::Layouts::InputDeviceMatcher::FromDeviceDescription(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "FromDeviceDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(nullptr, ___internal_method, deviceDescription);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceMatcher::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher left,
                                                                               ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher left,
                                                                                 ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Patterns", ty:
// "::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>,::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>>*>",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::InputDeviceMatcher(
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*>,
             ::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*>>*>
        m_Patterns) noexcept {
  this->m_Patterns = m_Patterns;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::InputDeviceMatcher() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::*)(int32_t)>(
    &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x319b7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319d524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x319d528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::*)()>(
        &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::
            System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x319d684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x319d690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x319d6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4.System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x319d72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                                 "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::*)()>(
        &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319d7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* UnityEngine::InputSystem::Layouts::
    __InputDeviceMatcher___get_patterns_d__4::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* UnityEngine::InputSystem::Layouts::
    __InputDeviceMatcher___get_patterns_d__4::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>&
UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> const&
UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void
UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_set___4__this(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___3____4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get___3____4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_set___3____4__this(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3____4__this = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get__count_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count_5__2;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get__count_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count_5__2;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_set__count_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count_5__2 = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__cordl_internal_set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__3 = value;
}
inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4* UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>(__1__state));
}
inline void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::
    System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* UnityEngine::InputSystem::Layouts::
    __InputDeviceMatcher___get_patterns_d__4::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                               "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4::__InputDeviceMatcher___get_patterns_d__4() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::*)()>(
    &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319d838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c._With_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::*)(char16_t)>(
    &::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::_With_b__11_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x319d840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>::get(), "<With>b__11_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::setStaticF___9(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>::get>(
      std::forward<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c* UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>::get>();
}
inline void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::setStaticF___9__11_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>::get>(
      std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>::get>();
}
inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c* UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>());
}
inline void UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::_With_b__11_0(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*>::get(), "<With>b__11_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ch);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c::__InputDeviceMatcher____c() {}

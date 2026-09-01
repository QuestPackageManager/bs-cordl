#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Layouts\InputDeviceMatcher.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
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
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::MatcherJson_InputDeviceMatcher_Capability::MatcherJson_InputDeviceMatcher_Capability(::StringW path, ::StringW value) noexcept {
  this->path = path;
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::MatcherJson_InputDeviceMatcher_Capability::MatcherJson_InputDeviceMatcher_Capability() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson.FromMatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson (*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson::FromMatcher)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x64f92a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson>(),
                                                                                           { "FromMatcher", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson.ToMatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson::ToMatcher)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x64f959c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson>(), { "ToMatcher", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson
UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson::FromMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson>(),
                                                                                         { "FromMatcher", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson>(nullptr, ___internal_method, matcher);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson::ToMatcher() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson>(), { "ToMatcher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "interfaces", ty: "::ArrayW<::StringW>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "deviceClass", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceClasses", ty: "::ArrayW<::StringW>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "manufacturerContains", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "manufacturers", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "products", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "versions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "capabilities", ty:
// "::ArrayW<::UnityEngine::InputSystem::Layouts::MatcherJson_InputDeviceMatcher_Capability>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson::InputDeviceMatcher_MatcherJson(
    ::StringW interface, ::ArrayW<::StringW> interfaces, ::StringW deviceClass, ::ArrayW<::StringW> deviceClasses, ::StringW manufacturer, ::StringW manufacturerContains,
    ::ArrayW<::StringW> manufacturers, ::StringW product, ::ArrayW<::StringW> products, ::StringW version, ::ArrayW<::StringW> versions,
    ::ArrayW<::UnityEngine::InputSystem::Layouts::MatcherJson_InputDeviceMatcher_Capability> capabilities) noexcept {
  this->interface = interface;
  this->interfaces = interfaces;
  this->deviceClass = deviceClass;
  this->deviceClasses = deviceClasses;
  this->manufacturer = manufacturer;
  this->manufacturerContains = manufacturerContains;
  this->manufacturers = manufacturers;
  this->product = product;
  this->products = products;
  this->version = version;
  this->versions = versions;
  this->capabilities = capabilities;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson::InputDeviceMatcher_MatcherJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::*)()>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f9a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c._With_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::*)(char16_t)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::_With_b__12_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x64f9a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>(), { "<With>b__12_0", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::setStaticF___9(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*, "<>9", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>(
      std::forward<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c* UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*, "<>9", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::setStaticF___9__12_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__12_0", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>(
      std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__12_0", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::_With_b__12_0(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>(), { "<With>b__12_0", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c* UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c::InputDeviceMatcher___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_empty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f7fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.get_patterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_patterns)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64f7fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "get_patterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithInterface)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64f8054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                           { "WithInterface", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithDeviceClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithDeviceClass)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64f82b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                           { "WithDeviceClass", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithManufacturer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64f8330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                           { "WithManufacturer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithManufacturerContains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturerContains)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x64f83ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "WithManufacturerContains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithProduct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithProduct)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64f8424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "WithProduct", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.WithVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithVersion)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64f84a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "WithVersion", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.With
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*, bool)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::With)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x64f80d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                         { "With", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.MatchPercentage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchPercentage)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x64f851c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                             { "MatchPercentage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.MatchSingleProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSingleProperty)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64f8850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                           { "MatchSingleProperty", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.MatchSinglePropertyContains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSinglePropertyContains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64f8920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                             { "MatchSinglePropertyContains", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.GetNumPropertiesIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetNumPropertiesIn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x64f8998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                             { "GetNumPropertiesIn", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.FromDeviceDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::FromDeviceDescription)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x64f8a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                             { "FromDeviceDescription", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::ToString)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x64f8bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x64f8dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64f8ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64f8f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64f8fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
            { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f9048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kInterfaceKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kInterfaceKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kInterfaceKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kInterfaceKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kDeviceClassKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kDeviceClassKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kDeviceClassKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kDeviceClassKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kManufacturerKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kManufacturerKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kManufacturerKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kManufacturerKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kManufacturerContainsKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kManufacturerContainsKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kManufacturerContainsKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kManufacturerContainsKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kProductKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kProductKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kProductKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kProductKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>();
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher::setStaticF_kVersionKey(::UnityEngine::InputSystem::Utilities::InternedString value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kVersionKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(
      std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputDeviceMatcher::getStaticF_kVersionKey() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "kVersionKey", ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>();
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_patterns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "get_patterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithInterface(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "WithInterface", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method, pattern, supportRegex);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithDeviceClass(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                         { "WithDeviceClass", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method, pattern, supportRegex);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturer(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                         { "WithManufacturer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method, pattern, supportRegex);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturerContains(::StringW noRegExPattern) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "WithManufacturerContains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method, noRegExPattern);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithProduct(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "WithProduct", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method, pattern, supportRegex);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithVersion(::StringW pattern, bool supportRegex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), { "WithVersion", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method, pattern, supportRegex);
}
template <typename TValue> inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithCapability(::StringW path, TValue value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                           { "WithCapability", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method, path, value);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher UnityEngine::InputSystem::Layouts::InputDeviceMatcher::With(::UnityEngine::InputSystem::Utilities::InternedString key,
                                                                                                                           ::System::Object* value, bool supportRegex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                       { "With", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method, key, value, supportRegex);
}
inline float_t UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchPercentage(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                           { "MatchPercentage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, deviceDescription);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSingleProperty(::System::Object* pattern, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                         { "MatchSingleProperty", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pattern, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSinglePropertyContains(::System::Object* pattern, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                         { "MatchSinglePropertyContains", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pattern, value);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetNumPropertiesIn(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                           { "GetNumPropertiesIn", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, description);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher
UnityEngine::InputSystem::Layouts::InputDeviceMatcher::FromDeviceDescription(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                           { "FromDeviceDescription", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(nullptr, ___internal_method, deviceDescription);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceMatcher::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher left,
                                                                               ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher::op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher left,
                                                                                 ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(),
          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*
UnityEngine::InputSystem::Layouts::InputDeviceMatcher::i___System__IEquatable_1___UnityEngine__InputSystem__Layouts__InputDeviceMatcher_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Patterns", ty: "::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::InputDeviceMatcher(
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Object*>> m_Patterns) noexcept {
  this->m_Patterns = m_Patterns;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::InputDeviceMatcher() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::*)(int32_t)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f8034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f9a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x64f9a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::*)()>(
        &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::
            System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f9ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(),
                                                             { "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64f9bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64f9be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4.System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* (
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x64f9c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(),
                                                { "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f9cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> const&
UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void
UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_set___4__this(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___3____4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get___3____4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_set___3____4__this(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3____4__this = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get__count_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count_5__2;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get__count_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count_5__2;
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_set__count_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count_5__2 = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr void UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::__cordl_internal_set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__3 = value;
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>
UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(),
                                                           { "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*
UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(),
                                                           { "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4* UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* UnityEngine::InputSystem::Layouts::
    InputDeviceMatcher__get_patterns_d__4::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>* UnityEngine::InputSystem::Layouts::
    InputDeviceMatcher__get_patterns_d__4::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher__get_patterns_d__4::InputDeviceMatcher__get_patterns_d__4() {}

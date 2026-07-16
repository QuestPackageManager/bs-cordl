#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceDescription.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "product", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "serial", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "capabilities", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription_DeviceDescriptionJson::InputDeviceDescription_DeviceDescriptionJson(::StringW interface, ::StringW type, ::StringW product,
                                                                                                                                          ::StringW serial, ::StringW version, ::StringW manufacturer,
                                                                                                                                          ::StringW capabilities) noexcept {
  this->interface = interface;
  this->type = type;
  this->product = product;
  this->serial = serial;
  this->version = version;
  this->manufacturer = manufacturer;
  this->capabilities = capabilities;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription_DeviceDescriptionJson::InputDeviceDescription_DeviceDescriptionJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_interfaceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_interfaceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f1934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_interfaceName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_interfaceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_interfaceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f193c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_interfaceName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_deviceClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_deviceClass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f1944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_deviceClass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_deviceClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_deviceClass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f194c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_deviceClass", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_manufacturer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_manufacturer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f1954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_manufacturer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_manufacturer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_manufacturer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f195c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_manufacturer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_product
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_product)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f1964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_product", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_product
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_product)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f196c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_product", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_serial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_serial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f1974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_serial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_serial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_serial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f197c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_serial", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f1984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_version", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_capabilities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_capabilities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f1994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_capabilities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_capabilities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_capabilities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f199c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_capabilities", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_empty)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64f19a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToString)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x64f1a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x64f1c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x64f1d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::GetHashCode)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x64f1dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Equality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64f1f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64f1f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
                            { "op_Inequality",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.ToJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToJson)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64f1f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "ToJson", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.FromJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceDescription (*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::FromJson)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64f1ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.ComparePropertyToDeviceDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, ::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::ComparePropertyToDeviceDescriptor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x64f20c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
                                                { "ComparePropertyToDeviceDescriptor",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_interfaceName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_interfaceName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_interfaceName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_interfaceName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_deviceClass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_deviceClass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_deviceClass(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_deviceClass", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_manufacturer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_manufacturer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_manufacturer(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_manufacturer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_product() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_product", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_product(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_product", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_serial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_serial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_serial(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_serial", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_version(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_version", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_capabilities() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_capabilities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_capabilities(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "set_capabilities", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals(::UnityEngine::InputSystem::Layouts::InputDeviceDescription other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputDeviceDescription::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription left,
                                                                                   ::UnityEngine::InputSystem::Layouts::InputDeviceDescription right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription left,
                                                                                     ::UnityEngine::InputSystem::Layouts::InputDeviceDescription right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToJson() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "ToJson", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription UnityEngine::InputSystem::Layouts::InputDeviceDescription::FromJson(::StringW json) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(nullptr, ___internal_method, json);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::ComparePropertyToDeviceDescriptor(::StringW propertyName,
                                                                                                         ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString propertyValue,
                                                                                                         ::StringW deviceDescriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>(),
          { "ComparePropertyToDeviceDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, propertyName, propertyValue, deviceDescriptor);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*
UnityEngine::InputSystem::Layouts::InputDeviceDescription::i___System__IEquatable_1___UnityEngine__InputSystem__Layouts__InputDeviceDescription_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_InterfaceName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceClass", ty: "::StringW", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_Manufacturer", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Product", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Serial", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Capabilities",
// ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription::InputDeviceDescription(::StringW m_InterfaceName, ::StringW m_DeviceClass, ::StringW m_Manufacturer, ::StringW m_Product,
                                                                                              ::StringW m_Serial, ::StringW m_Version, ::StringW m_Capabilities) noexcept {
  this->m_InterfaceName = m_InterfaceName;
  this->m_DeviceClass = m_DeviceClass;
  this->m_Manufacturer = m_Manufacturer;
  this->m_Product = m_Product;
  this->m_Serial = m_Serial;
  this->m_Version = m_Version;
  this->m_Capabilities = m_Capabilities;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription::InputDeviceDescription() {}

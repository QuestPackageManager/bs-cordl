#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyName.hpp"
#include "System/Configuration/Assemblies/zzzz__AssemblyHashAlgorithm_impl.hpp"
#include "System/Configuration/Assemblies/zzzz__AssemblyVersionCompatibility_impl.hpp"
#include "System/Reflection/zzzz__AssemblyContentType_impl.hpp"
#include "System/Reflection/zzzz__AssemblyNameFlags_impl.hpp"
#include "System/Reflection/zzzz__ProcessorArchitecture_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "Mono/zzzz__MonoAssemblyName_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__AssemblyNameFlags_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__StrongNameKeyPair_def.hpp"
#include "System/Runtime/InteropServices/zzzz___AssemblyName_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b85368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.ParseAssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::Mono::MonoAssemblyName>, ::by_ref<bool>, ::by_ref<bool>)>(
    &::System::Reflection::AssemblyName::ParseAssemblyName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b85cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "ParseAssemblyName",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Mono::MonoAssemblyName>>(),
                                                                                                            ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(::StringW)>(&::System::Reflection::AssemblyName::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5b85cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                    ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::AssemblyName::_ctor)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5b85fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b86518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(::StringW)>(&::System::Reflection::AssemblyName::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b86520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_CultureInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_CultureInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b86528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_CultureInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.set_CultureInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(::System::Globalization::CultureInfo*)>(&::System::Reflection::AssemblyName::set_CultureInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b86530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "set_CultureInfo", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::AssemblyNameFlags (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b86538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_Flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.set_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(::System::Reflection::AssemblyNameFlags)>(&::System::Reflection::AssemblyName::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b86540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "set_Flags", {}, { ::i2c::type_of<::System::Reflection::AssemblyNameFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_FullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_FullName)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5b86548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_FullName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b869a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.set_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(::System::Version*)>(&::System::Reflection::AssemblyName::set_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b85394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "set_Version", {}, { ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::ToString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b869ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { ::i2c::class_of<::System::Reflection::AssemblyName*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.GetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::GetPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b869d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "GetPublicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.GetPublicKeyToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::GetPublicKeyToken)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b869dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "GetPublicKeyToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_IsPublicKeyValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::get_IsPublicKeyValid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b86ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_IsPublicKeyValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.InternalGetPublicKeyToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::InternalGetPublicKeyToken)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b868bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "InternalGetPublicKeyToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.get_public_token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::Reflection::AssemblyName::get_public_token)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b86c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(),
                                                             { "get_public_token", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.ComputePublicKeyToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::ComputePublicKeyToken)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b86b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "ComputePublicKeyToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.SetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(::ArrayW<uint8_t>)>(&::System::Reflection::AssemblyName::SetPublicKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b85374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "SetPublicKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::AssemblyName::GetObjectData)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5b86c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Reflection::AssemblyName*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::AssemblyName::*)()>(&::System::Reflection::AssemblyName::Clone)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b86fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(::System::Object*)>(&::System::Reflection::AssemblyName::OnDeserialization)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b87074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.GetNativeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::MonoAssemblyName* (*)(::System::IntPtr)>(&::System::Reflection::AssemblyName::GetNativeName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b87090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "GetNativeName", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.FillName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::AssemblyName::*)(::Mono::MonoAssemblyName*, ::StringW, bool, bool, bool, bool)>(
    &::System::Reflection::AssemblyName::FillName)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5b8587c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "FillName",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::Mono::MonoAssemblyName*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                                                     ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::AssemblyName.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::AssemblyName* (*)(::System::Reflection::Assembly*, bool)>(&::System::Reflection::AssemblyName::Create)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b87094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "Create", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyName::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Reflection::AssemblyName::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& System::Reflection::AssemblyName::__cordl_internal_get_codebase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___codebase;
}
constexpr ::StringW const& System::Reflection::AssemblyName::__cordl_internal_get_codebase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___codebase;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_codebase(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___codebase = value;
}
constexpr int32_t& System::Reflection::AssemblyName::__cordl_internal_get_major() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___major;
}
constexpr int32_t const& System::Reflection::AssemblyName::__cordl_internal_get_major() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___major;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_major(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___major = value;
}
constexpr int32_t& System::Reflection::AssemblyName::__cordl_internal_get_minor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minor;
}
constexpr int32_t const& System::Reflection::AssemblyName::__cordl_internal_get_minor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minor;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_minor(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minor = value;
}
constexpr int32_t& System::Reflection::AssemblyName::__cordl_internal_get_build() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build;
}
constexpr int32_t const& System::Reflection::AssemblyName::__cordl_internal_get_build() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_build(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___build = value;
}
constexpr int32_t& System::Reflection::AssemblyName::__cordl_internal_get_revision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revision;
}
constexpr int32_t const& System::Reflection::AssemblyName::__cordl_internal_get_revision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revision;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_revision(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revision = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Reflection::AssemblyName::__cordl_internal_get_cultureinfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cultureinfo;
}
constexpr ::System::Globalization::CultureInfo* const& System::Reflection::AssemblyName::__cordl_internal_get_cultureinfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cultureinfo;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_cultureinfo(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cultureinfo = value;
}
constexpr ::System::Reflection::AssemblyNameFlags& System::Reflection::AssemblyName::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::System::Reflection::AssemblyNameFlags const& System::Reflection::AssemblyName::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_flags(::System::Reflection::AssemblyNameFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm& System::Reflection::AssemblyName::__cordl_internal_get_hashalg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashalg;
}
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm const& System::Reflection::AssemblyName::__cordl_internal_get_hashalg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashalg;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_hashalg(::System::Configuration::Assemblies::AssemblyHashAlgorithm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashalg = value;
}
constexpr ::System::Reflection::StrongNameKeyPair*& System::Reflection::AssemblyName::__cordl_internal_get_keypair() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypair;
}
constexpr ::System::Reflection::StrongNameKeyPair* const& System::Reflection::AssemblyName::__cordl_internal_get_keypair() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypair;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_keypair(::System::Reflection::StrongNameKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keypair = value;
}
constexpr ::ArrayW<uint8_t>& System::Reflection::AssemblyName::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::ArrayW<uint8_t> const& System::Reflection::AssemblyName::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_publicKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKey = value;
}
constexpr ::ArrayW<uint8_t>& System::Reflection::AssemblyName::__cordl_internal_get_keyToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyToken;
}
constexpr ::ArrayW<uint8_t> const& System::Reflection::AssemblyName::__cordl_internal_get_keyToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyToken;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_keyToken(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyToken = value;
}
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility& System::Reflection::AssemblyName::__cordl_internal_get_versioncompat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versioncompat;
}
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility const& System::Reflection::AssemblyName::__cordl_internal_get_versioncompat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versioncompat;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_versioncompat(::System::Configuration::Assemblies::AssemblyVersionCompatibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___versioncompat = value;
}
constexpr ::System::Version*& System::Reflection::AssemblyName::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::System::Version* const& System::Reflection::AssemblyName::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::System::Reflection::ProcessorArchitecture& System::Reflection::AssemblyName::__cordl_internal_get_processor_architecture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processor_architecture;
}
constexpr ::System::Reflection::ProcessorArchitecture const& System::Reflection::AssemblyName::__cordl_internal_get_processor_architecture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processor_architecture;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_processor_architecture(::System::Reflection::ProcessorArchitecture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processor_architecture = value;
}
constexpr ::System::Reflection::AssemblyContentType& System::Reflection::AssemblyName::__cordl_internal_get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr ::System::Reflection::AssemblyContentType const& System::Reflection::AssemblyName::__cordl_internal_get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr void System::Reflection::AssemblyName::__cordl_internal_set_contentType(::System::Reflection::AssemblyContentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentType = value;
}
inline void System::Reflection::AssemblyName::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Reflection::AssemblyName::ParseAssemblyName(::System::IntPtr name, ::by_ref<::Mono::MonoAssemblyName> aname, ::by_ref<bool> is_version_definited, ::by_ref<bool> is_token_defined) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "ParseAssemblyName",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Mono::MonoAssemblyName>>(),
                                                                                                          ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, aname, is_version_definited, is_token_defined);
}
inline void System::Reflection::AssemblyName::_ctor(::StringW assemblyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assemblyName);
}
inline void System::Reflection::AssemblyName::_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, si, sc);
}
inline ::StringW System::Reflection::AssemblyName::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::set_Name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* System::Reflection::AssemblyName::get_CultureInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_CultureInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::set_CultureInfo(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "set_CultureInfo", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Reflection::AssemblyNameFlags System::Reflection::AssemblyName::get_Flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_Flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyNameFlags>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::set_Flags(::System::Reflection::AssemblyNameFlags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "set_Flags", {}, { ::i2c::type_of<::System::Reflection::AssemblyNameFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Reflection::AssemblyName::get_FullName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_FullName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Version* System::Reflection::AssemblyName::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::set_Version(::System::Version* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "set_Version", {}, { ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Reflection::AssemblyName::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::AssemblyName*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Reflection::AssemblyName::GetPublicKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "GetPublicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Reflection::AssemblyName::GetPublicKeyToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "GetPublicKeyToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool System::Reflection::AssemblyName::get_IsPublicKeyValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_IsPublicKeyValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Reflection::AssemblyName::InternalGetPublicKeyToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "InternalGetPublicKeyToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::get_public_token(uint8_t* token, uint8_t* pubkey, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "get_public_token", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, token, pubkey, len);
}
inline ::ArrayW<uint8_t> System::Reflection::AssemblyName::ComputePublicKeyToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "ComputePublicKeyToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::SetPublicKey(::ArrayW<uint8_t> publicKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "SetPublicKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicKey);
}
inline void System::Reflection::AssemblyName::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Reflection::AssemblyName::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Reflection::AssemblyName::OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline ::Mono::MonoAssemblyName* System::Reflection::AssemblyName::GetNativeName(::System::IntPtr assembly_ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "GetNativeName", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::MonoAssemblyName*>(nullptr, ___internal_method, assembly_ptr);
}
inline void System::Reflection::AssemblyName::FillName(::Mono::MonoAssemblyName* native, ::StringW codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "FillName",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::Mono::MonoAssemblyName*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                                                   ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, native, codeBase, addVersion, addPublickey, defaultToken, assemblyRef);
}
inline ::System::Reflection::AssemblyName* System::Reflection::AssemblyName::Create(::System::Reflection::Assembly* assembly, bool fillCodebase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::AssemblyName*>(), { "Create", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*>(nullptr, ___internal_method, assembly, fillCodebase);
}
inline ::System::Reflection::AssemblyName* System::Reflection::AssemblyName::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyName*>());
}
inline ::System::Reflection::AssemblyName* System::Reflection::AssemblyName::New_ctor(::StringW assemblyName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyName*>(assemblyName));
}
inline ::System::Reflection::AssemblyName* System::Reflection::AssemblyName::New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::AssemblyName*>(si, sc));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Reflection::AssemblyName::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Reflection::AssemblyName::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::AssemblyName::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::AssemblyName::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Reflection::AssemblyName::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Reflection::AssemblyName::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::InteropServices::_AssemblyName"
constexpr System::Reflection::AssemblyName::operator ::System::Runtime::InteropServices::_AssemblyName*() noexcept {
  return static_cast<::System::Runtime::InteropServices::_AssemblyName*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::InteropServices::_AssemblyName"
constexpr ::System::Runtime::InteropServices::_AssemblyName* System::Reflection::AssemblyName::i___System__Runtime__InteropServices___AssemblyName() noexcept {
  return static_cast<::System::Runtime::InteropServices::_AssemblyName*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyName::AssemblyName() {}

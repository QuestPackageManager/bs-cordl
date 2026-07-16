#pragma once
// IWYU pragma private; include "System/Reflection/Assembly.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Reflection/zzzz__AssemblyNameFlags_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/Reflection/zzzz__ManifestResourceInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Runtime/InteropServices/zzzz___Assembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Reflection::Assembly_ResolveEventHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Assembly_ResolveEventHolder::*)()>(&::System::Reflection::Assembly_ResolveEventHolder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b85cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly_ResolveEventHolder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Reflection::Assembly_ResolveEventHolder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly_ResolveEventHolder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::Assembly_ResolveEventHolder* System::Reflection::Assembly_ResolveEventHolder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::Assembly_ResolveEventHolder*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::Assembly_ResolveEventHolder::Assembly_ResolveEventHolder() {}
//  Writing Method size for method: ::System::Reflection::Assembly.get_CodeBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_CodeBase)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_FullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_FullName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_MonoAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_MonoAssembly)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_Location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_Location)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Assembly::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::Assembly::GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Assembly::*)(::System::Type*, bool)>(&::System::Reflection::Assembly::IsDefined)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Assembly::*)(::System::Type*, bool)>(&::System::Reflection::Assembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetManifestResourceStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Reflection::Assembly::*)(::StringW)>(&::System::Reflection::Assembly::GetManifestResourceStream)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetManifestResourceStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Reflection::Assembly::*)(::System::Type*, ::StringW, bool, ::by_ref<::System::Threading::StackCrawlMark>)>(
    &::System::Reflection::Assembly::GetManifestResourceStream)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b84c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetManifestResourceStream",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                                                        ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetManifestResourceStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Reflection::Assembly::*)(::StringW, ::by_ref<::System::Threading::StackCrawlMark>, bool)>(
    &::System::Reflection::Assembly::GetManifestResourceStream)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b84d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                            { "GetManifestResourceStream", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetSimpleName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetSimpleName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b84da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetSimpleName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetPublicKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b84dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetPublicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetVersion)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b84e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::AssemblyNameFlags (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetFlags)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b84e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::GetTypes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b84e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetTypes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b84e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::StringW, bool)>(&::System::Reflection::Assembly::GetType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b84e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::StringW)>(&::System::Reflection::Assembly::GetType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b84e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.InternalGetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::System::Reflection::Module*, ::StringW, bool, bool)>(
    &::System::Reflection::Assembly::InternalGetType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b84ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                         { "InternalGetType", {}, { ::i2c::type_of<::System::Reflection::Module*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::AssemblyName* (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::GetName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b84ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::AssemblyName* (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b84ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b84ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::System::Type*)>(&::System::Reflection::Assembly::GetAssembly)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b84efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetAssembly", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.InternalGetSatelliteAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeAssembly* (::System::Reflection::Assembly::*)(::StringW, ::System::Globalization::CultureInfo*, ::System::Version*,
                                                                                                                                  bool, ::by_ref<::System::Threading::StackCrawlMark>)>(
    &::System::Reflection::Assembly::InternalGetSatelliteAssembly)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5b84f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                             { "InternalGetSatelliteAssembly",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Version*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW, bool, ::by_ref<::System::Threading::StackCrawlMark>)>(
    &::System::Reflection::Assembly::LoadFrom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b85408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                { "LoadFrom", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Reflection::Assembly::Load)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b8540c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "Load", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.ReflectionOnlyLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Reflection::Assembly::ReflectionOnlyLoad)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b85430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "ReflectionOnlyLoad", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadWithPartialName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b85474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "LoadWithPartialName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.load_with_partial_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW, ::System::Security::Policy::Evidence*)>(
    &::System::Reflection::Assembly::load_with_partial_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b85488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                             { "load_with_partial_name", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadWithPartialName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW, ::System::Security::Policy::Evidence*)>(&::System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                             { "LoadWithPartialName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadWithPartialName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW, ::System::Security::Policy::Evidence*, bool)>(
    &::System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b8548c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                { "LoadWithPartialName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetModulesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Module*> (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetModulesInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b854f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetExecutingAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)()>(&::System::Reflection::Assembly::GetExecutingAssembly)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b8552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetExecutingAssembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetCallingAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)()>(&::System::Reflection::Assembly::GetCallingAssembly)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8557c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetCallingAssembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.InternalGetReferencedAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Reflection::Assembly*)>(&::System::Reflection::Assembly::InternalGetReferencedAssemblies)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b85590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "InternalGetReferencedAssemblies", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetManifestResourceNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetManifestResourceNames)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b85594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetReferencedAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::AssemblyName*> (*)(::System::Reflection::Assembly*)>(&::System::Reflection::Assembly::GetReferencedAssemblies)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5b855cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetReferencedAssemblies", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetManifestResourceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ManifestResourceInfo* (::System::Reflection::Assembly::*)(::StringW)>(
    &::System::Reflection::Assembly::GetManifestResourceInfo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b85b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_ReflectionOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_ReflectionOnly)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b85b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b85b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Assembly::*)(::System::Object*)>(&::System::Reflection::Assembly::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b85b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.CreateNIE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Reflection::Assembly::CreateNIE)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b85b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "CreateNIE", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_IsFullyTrusted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_IsFullyTrusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "get_IsFullyTrusted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::StringW, bool, bool)>(&::System::Reflection::Assembly::GetType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b85c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::Assembly::*)(::StringW)>(&::System::Reflection::Assembly::GetModule)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b85c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetReferencedAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::AssemblyName*> (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetReferencedAssemblies)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b85c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetModules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Module*> (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::GetModules)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b85c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ::i2c::class_of<::System::Reflection::Assembly*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*)>(&::System::Reflection::Assembly::op_Equality)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b85ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*)>(&::System::Reflection::Assembly::op_Inequality)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b853b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b85cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW System::Reflection::Assembly::get_CodeBase() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::Assembly::get_FullName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IntPtr System::Reflection::Assembly::get_MonoAssembly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::StringW System::Reflection::Assembly::get_Location() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Reflection::Assembly::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline bool System::Reflection::Assembly::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Assembly::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Assembly::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::IO::Stream* System::Reflection::Assembly::GetManifestResourceStream(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, name);
}
inline ::System::IO::Stream* System::Reflection::Assembly::GetManifestResourceStream(::System::Type* type, ::StringW name, bool skipSecurityCheck,
                                                                                     ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetManifestResourceStream",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                                                      ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, type, name, skipSecurityCheck, stackMark);
}
inline ::System::IO::Stream* System::Reflection::Assembly::GetManifestResourceStream(::StringW name, ::by_ref<::System::Threading::StackCrawlMark> stackMark, bool skipSecurityCheck) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                       { "GetManifestResourceStream", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, name, stackMark, skipSecurityCheck);
}
inline ::StringW System::Reflection::Assembly::GetSimpleName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetSimpleName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Reflection::Assembly::GetPublicKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetPublicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Version* System::Reflection::Assembly::GetVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline ::System::Reflection::AssemblyNameFlags System::Reflection::Assembly::GetFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyNameFlags>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::Reflection::Assembly::GetTypes(bool exportedOnly) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, exportedOnly);
}
inline ::ArrayW<::System::Type*> System::Reflection::Assembly::GetTypes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Assembly::GetType(::StringW name, bool throwOnError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, throwOnError);
}
inline ::System::Type* System::Reflection::Assembly::GetType(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name);
}
inline ::System::Type* System::Reflection::Assembly::InternalGetType(::System::Reflection::Module* _cordl_module, ::StringW name, bool throwOnError, bool ignoreCase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                       { "InternalGetType", {}, { ::i2c::type_of<::System::Reflection::Module*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, _cordl_module, name, throwOnError, ignoreCase);
}
inline ::System::Reflection::AssemblyName* System::Reflection::Assembly::GetName(bool copiedName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*>(this, ___internal_method, copiedName);
}
inline ::System::Reflection::AssemblyName* System::Reflection::Assembly::GetName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Assembly::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::GetAssembly(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetAssembly", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::RuntimeAssembly* System::Reflection::Assembly::InternalGetSatelliteAssembly(::StringW name, ::System::Globalization::CultureInfo* culture, ::System::Version* version,
                                                                                                         bool throwOnFileNotFound, ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                           { "InternalGetSatelliteAssembly",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Version*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*>(this, ___internal_method, name, culture, version, throwOnFileNotFound, stackMark);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadFrom(::StringW assemblyFile, bool refOnly, ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                              { "LoadFrom", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, assemblyFile, refOnly, stackMark);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::Load(::StringW assemblyString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "Load", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, assemblyString);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::ReflectionOnlyLoad(::StringW assemblyString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "ReflectionOnlyLoad", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, assemblyString);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadWithPartialName(::StringW partialName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "LoadWithPartialName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, partialName);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::load_with_partial_name(::StringW name, ::System::Security::Policy::Evidence* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                           { "load_with_partial_name", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, name, e);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                           { "LoadWithPartialName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, partialName, securityEvidence);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence, bool oldBehavior) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                              { "LoadWithPartialName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, partialName, securityEvidence, oldBehavior);
}
inline ::ArrayW<::System::Reflection::Module*> System::Reflection::Assembly::GetModulesInternal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*>>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::GetExecutingAssembly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetExecutingAssembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::GetCallingAssembly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetCallingAssembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::Reflection::Assembly::InternalGetReferencedAssemblies(::System::Reflection::Assembly* _cordl_module) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "InternalGetReferencedAssemblies", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _cordl_module);
}
inline ::ArrayW<::StringW> System::Reflection::Assembly::GetManifestResourceNames() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::AssemblyName*> System::Reflection::Assembly::GetReferencedAssemblies(::System::Reflection::Assembly* _cordl_module) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "GetReferencedAssemblies", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::AssemblyName*>>(nullptr, ___internal_method, _cordl_module);
}
inline ::System::Reflection::ManifestResourceInfo* System::Reflection::Assembly::GetManifestResourceInfo(::StringW resourceName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ManifestResourceInfo*>(this, ___internal_method, resourceName);
}
inline bool System::Reflection::Assembly::get_ReflectionOnly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Reflection::Assembly::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::Assembly::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::System::Exception* System::Reflection::Assembly::CreateNIE() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "CreateNIE", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline bool System::Reflection::Assembly::get_IsFullyTrusted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { "get_IsFullyTrusted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Assembly::GetType(::StringW name, bool throwOnError, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, throwOnError, ignoreCase);
}
inline ::System::Reflection::Module* System::Reflection::Assembly::GetModule(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Reflection::AssemblyName*> System::Reflection::Assembly::GetReferencedAssemblies() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::AssemblyName*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::Module*> System::Reflection::Assembly::GetModules(bool getResourceModules) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Assembly*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*>>(this, ___internal_method, getResourceModules);
}
inline bool System::Reflection::Assembly::op_Equality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::Assembly::op_Inequality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline void System::Reflection::Assembly::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::Assembly*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::Assembly*>());
}
/// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
constexpr System::Reflection::Assembly::operator ::System::Reflection::ICustomAttributeProvider*() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
constexpr ::System::Reflection::ICustomAttributeProvider* System::Reflection::Assembly::i___System__Reflection__ICustomAttributeProvider() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::Assembly::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::Assembly::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::InteropServices::_Assembly"
constexpr System::Reflection::Assembly::operator ::System::Runtime::InteropServices::_Assembly*() noexcept {
  return static_cast<::System::Runtime::InteropServices::_Assembly*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::InteropServices::_Assembly"
constexpr ::System::Runtime::InteropServices::_Assembly* System::Reflection::Assembly::i___System__Runtime__InteropServices___Assembly() noexcept {
  return static_cast<::System::Runtime::InteropServices::_Assembly*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::Assembly::Assembly() {}

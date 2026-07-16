#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeAssembly.hpp"
#include "System/IO/zzzz__UnmanagedMemoryStream_impl.hpp"
#include "System/Reflection/zzzz__Assembly_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__ManifestResourceInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::*)(uint8_t*, int64_t, ::System::Reflection::Module*)>(
    &::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b89454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Reflection::Module*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::*)(bool)>(
    &::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b896bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule*>(),
                                                                                          { ::i2c::class_of<::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Module*& System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::__cordl_internal_get__cordl_module() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_module;
}
constexpr ::System::Reflection::Module* const& System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::__cordl_internal_get__cordl_module() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_module;
}
constexpr void System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::__cordl_internal_set__cordl_module(::System::Reflection::Module* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_module = value;
}
inline void System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::_ctor(uint8_t* pointer, int64_t length, ::System::Reflection::Module* _cordl_module) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Reflection::Module*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, length, _cordl_module);
}
inline void System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule* System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::New_ctor(uint8_t* pointer, int64_t length,
                                                                                                                                                          ::System::Reflection::Module* _cordl_module) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule*>(pointer, length, _cordl_module));
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeAssembly_UnmanagedMemoryStreamForModule::RuntimeAssembly_UnmanagedMemoryStreamForModule() {}
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b88a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeAssembly::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeAssembly::GetObjectData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b88a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.LoadWithPartialNameInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeAssembly* (*)(::StringW, ::System::Security::Policy::Evidence*, ::by_ref<::System::Threading::StackCrawlMark>)>(
    &::System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b88b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "LoadWithPartialNameInternal",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(),
                                                                                                               ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.LoadWithPartialNameInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Reflection::RuntimeAssembly* (*)(::System::Reflection::AssemblyName*, ::System::Security::Policy::Evidence*, ::by_ref<::System::Threading::StackCrawlMark>)>(
        &::System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b88bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                                                             { "LoadWithPartialNameInternal",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::AssemblyName*>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::AssemblyName* (::System::Reflection::RuntimeAssembly::*)(bool)>(&::System::Reflection::RuntimeAssembly::GetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b88bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeAssembly::*)(::StringW, bool, bool)>(&::System::Reflection::RuntimeAssembly::GetType)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b88be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::RuntimeAssembly::*)(::StringW)>(&::System::Reflection::RuntimeAssembly::GetModule)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b88c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetReferencedAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::AssemblyName*> (::System::Reflection::RuntimeAssembly::*)()>(
    &::System::Reflection::RuntimeAssembly::GetReferencedAssemblies)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b88db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetModules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Module*> (::System::Reflection::RuntimeAssembly::*)(bool)>(&::System::Reflection::RuntimeAssembly::GetModules)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5b88db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetAotId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::System::Reflection::RuntimeAssembly::GetAotId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b88f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "GetAotId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_code_base
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::Assembly*, bool)>(&::System::Reflection::RuntimeAssembly::get_code_base)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b88fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                                                                                           { "get_code_base", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::get_location)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b88fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "get_location", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_fullname
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::Assembly*)>(&::System::Reflection::RuntimeAssembly::get_fullname)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b88fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "get_fullname", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetAotIdInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::System::Reflection::RuntimeAssembly::GetAotIdInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b88fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "GetAotIdInternal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_ReflectionOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::get_ReflectionOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b88fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetCodeBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::Assembly*, bool)>(&::System::Reflection::RuntimeAssembly::GetCodeBase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b88fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                                                                                           { "GetCodeBase", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_CodeBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::get_CodeBase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b88fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_FullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::get_FullName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b88fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_MonoAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::get_MonoAssembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b88fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_Location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::get_Location)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b88fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetManifestResourceInfoInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeAssembly::*)(::StringW, ::System::Reflection::ManifestResourceInfo*)>(
    &::System::Reflection::RuntimeAssembly::GetManifestResourceInfoInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b89000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                                                { "GetManifestResourceInfoInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::ManifestResourceInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetManifestResourceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ManifestResourceInfo* (::System::Reflection::RuntimeAssembly::*)(::StringW)>(
    &::System::Reflection::RuntimeAssembly::GetManifestResourceInfo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b89004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetManifestResourceNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::GetManifestResourceNames)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b89108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetManifestResourceInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Reflection::RuntimeAssembly::*)(::StringW, ::by_ref<int32_t>, ::by_ref<::System::Reflection::Module*>)>(
    &::System::Reflection::RuntimeAssembly::GetManifestResourceInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8910c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                            { "GetManifestResourceInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Reflection::Module*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetManifestResourceStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Reflection::RuntimeAssembly::*)(::StringW)>(
    &::System::Reflection::RuntimeAssembly::GetManifestResourceStream)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5b89110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeAssembly::*)(::System::Type*, bool)>(&::System::Reflection::RuntimeAssembly::IsDefined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8947c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeAssembly::*)(bool)>(&::System::Reflection::RuntimeAssembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b894f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeAssembly::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeAssembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8955c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetModulesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Module*> (::System::Reflection::RuntimeAssembly::*)()>(
    &::System::Reflection::RuntimeAssembly::GetModulesInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b895d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b895d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeAssembly::*)(::System::Object*)>(&::System::Reflection::RuntimeAssembly::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b895e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b89690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Reflection::RuntimeAssembly::__cordl_internal_get__mono_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mono_assembly;
}
constexpr ::System::IntPtr const& System::Reflection::RuntimeAssembly::__cordl_internal_get__mono_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mono_assembly;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__mono_assembly(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mono_assembly = value;
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__evidence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evidence;
}
constexpr ::System::Object* const& System::Reflection::RuntimeAssembly::__cordl_internal_get__evidence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evidence;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__evidence(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____evidence = value;
}
constexpr ::System::Reflection::Assembly_ResolveEventHolder*& System::Reflection::RuntimeAssembly::__cordl_internal_get_resolve_event_holder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolve_event_holder;
}
constexpr ::System::Reflection::Assembly_ResolveEventHolder* const& System::Reflection::RuntimeAssembly::__cordl_internal_get_resolve_event_holder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolve_event_holder;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set_resolve_event_holder(::System::Reflection::Assembly_ResolveEventHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resolve_event_holder = value;
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__minimum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimum;
}
constexpr ::System::Object* const& System::Reflection::RuntimeAssembly::__cordl_internal_get__minimum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimum;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__minimum(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minimum = value;
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__optional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optional;
}
constexpr ::System::Object* const& System::Reflection::RuntimeAssembly::__cordl_internal_get__optional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optional;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__optional(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optional = value;
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__refuse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refuse;
}
constexpr ::System::Object* const& System::Reflection::RuntimeAssembly::__cordl_internal_get__refuse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refuse;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__refuse(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refuse = value;
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__granted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granted;
}
constexpr ::System::Object* const& System::Reflection::RuntimeAssembly::__cordl_internal_get__granted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granted;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__granted(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____granted = value;
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__denied() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____denied;
}
constexpr ::System::Object* const& System::Reflection::RuntimeAssembly::__cordl_internal_get__denied() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____denied;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__denied(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____denied = value;
}
constexpr bool& System::Reflection::RuntimeAssembly::__cordl_internal_get_fromByteArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromByteArray;
}
constexpr bool const& System::Reflection::RuntimeAssembly::__cordl_internal_get_fromByteArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromByteArray;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set_fromByteArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fromByteArray = value;
}
constexpr ::StringW& System::Reflection::RuntimeAssembly::__cordl_internal_get_assemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr ::StringW const& System::Reflection::RuntimeAssembly::__cordl_internal_get_assemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set_assemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemblyName = value;
}
inline void System::Reflection::RuntimeAssembly::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Reflection::RuntimeAssembly::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Reflection::RuntimeAssembly* System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence,
                                                                                                               ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                                       { "LoadWithPartialNameInternal",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*>(nullptr, ___internal_method, partialName, securityEvidence, stackMark);
}
inline ::System::Reflection::RuntimeAssembly* System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal(::System::Reflection::AssemblyName* an,
                                                                                                               ::System::Security::Policy::Evidence* securityEvidence,
                                                                                                               ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "LoadWithPartialNameInternal",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Reflection::AssemblyName*>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(),
                                                                                         ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*>(nullptr, ___internal_method, an, securityEvidence, stackMark);
}
inline ::System::Reflection::AssemblyName* System::Reflection::RuntimeAssembly::GetName(bool copiedName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*>(this, ___internal_method, copiedName);
}
inline ::System::Type* System::Reflection::RuntimeAssembly::GetType(::StringW name, bool throwOnError, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, throwOnError, ignoreCase);
}
inline ::System::Reflection::Module* System::Reflection::RuntimeAssembly::GetModule(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Reflection::AssemblyName*> System::Reflection::RuntimeAssembly::GetReferencedAssemblies() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::AssemblyName*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::Module*> System::Reflection::RuntimeAssembly::GetModules(bool getResourceModules) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*>>(this, ___internal_method, getResourceModules);
}
inline ::ArrayW<uint8_t> System::Reflection::RuntimeAssembly::GetAotId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "GetAotId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_code_base(::System::Reflection::Assembly* a, bool escaped) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                                                                                         { "get_code_base", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, a, escaped);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_location() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "get_location", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_fullname(::System::Reflection::Assembly* a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "get_fullname", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, a);
}
inline bool System::Reflection::RuntimeAssembly::GetAotIdInternal(::ArrayW<uint8_t> aotid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), { "GetAotIdInternal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aotid);
}
inline bool System::Reflection::RuntimeAssembly::get_ReflectionOnly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeAssembly::GetCodeBase(::System::Reflection::Assembly* a, bool escaped) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                                                                                         { "GetCodeBase", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, a, escaped);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_CodeBase() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_FullName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IntPtr System::Reflection::RuntimeAssembly::get_MonoAssembly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_Location() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeAssembly::GetManifestResourceInfoInternal(::StringW name, ::System::Reflection::ManifestResourceInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                                                           { "GetManifestResourceInfoInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::ManifestResourceInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, info);
}
inline ::System::Reflection::ManifestResourceInfo* System::Reflection::RuntimeAssembly::GetManifestResourceInfo(::StringW resourceName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ManifestResourceInfo*>(this, ___internal_method, resourceName);
}
inline ::ArrayW<::StringW> System::Reflection::RuntimeAssembly::GetManifestResourceNames() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::IntPtr System::Reflection::RuntimeAssembly::GetManifestResourceInternal(::StringW name, ::by_ref<int32_t> size, ::by_ref<::System::Reflection::Module*> _cordl_module) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeAssembly*>(),
                          { "GetManifestResourceInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Reflection::Module*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, name, size, _cordl_module);
}
inline ::System::IO::Stream* System::Reflection::RuntimeAssembly::GetManifestResourceStream(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, name);
}
inline bool System::Reflection::RuntimeAssembly::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeAssembly::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeAssembly::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Reflection::Module*> System::Reflection::RuntimeAssembly::GetModulesInternal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*>>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeAssembly::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeAssembly::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::StringW System::Reflection::RuntimeAssembly::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeAssembly*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeAssembly* System::Reflection::RuntimeAssembly::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimeAssembly*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeAssembly::RuntimeAssembly() {}

#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ObjectReader.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__HeaderHandler_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__Header_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__IntSizedArray_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalFE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__NameCache_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d0eb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::__cordl_internal_get_assemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::__cordl_internal_get_assemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::__cordl_internal_set_assemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly* System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly::ObjectReader_TypeNAssembly() {}
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::*)(
    ::System::Reflection::Assembly*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d0ec34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver.ResolveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::*)(::System::Reflection::Assembly*, ::StringW, bool)>(
        &::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::ResolveType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3d0ee04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver*>::get(), "ResolveType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::__cordl_internal_get_m_topLevelAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_topLevelAssembly;
}
constexpr ::System::Reflection::Assembly* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::__cordl_internal_get_m_topLevelAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_topLevelAssembly;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::__cordl_internal_set_m_topLevelAssembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_topLevelAssembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::_ctor(::System::Reflection::Assembly* topLevelAssembly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topLevelAssembly);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::ResolveType(::System::Reflection::Assembly* assembly, ::StringW simpleTypeName,
                                                                                                                                  bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver*>::get(), "ResolveType",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assembly, simpleTypeName, ignoreCase);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver*
System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::New_ctor(::System::Reflection::Assembly* topLevelAssembly) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver*>(topLevelAssembly));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::ObjectReader_TopLevelAssemblyTypeResolver() {}
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.get_ValueFixupStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::SerStack* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_ValueFixupStack)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3d0acf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                                 "get_ValueFixupStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.get_TopObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_TopObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d0ad70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "get_TopObject",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.set_TopObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Object*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::set_TopObject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3d0ad78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "set_TopObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::IO::Stream*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*,
    ::System::Runtime::Serialization::SerializationBinder*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3d0ad8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalFE*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Remoting::Messaging::HeaderHandler*,
                                                                                                          ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, bool)>(
        &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Deserialize)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x3d0ae9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::HeaderHandler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.HasSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Type*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::HasSurrogate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3d0b750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "HasSurrogate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CheckSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Type*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckSerializable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3d0b824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "CheckSerializable",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.InitFullDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::InitFullDeserialization)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3d0b954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                                 "InitFullDeserialization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CrossAppDomainArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CrossAppDomainArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3d0ba4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "CrossAppDomainArray",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CreateReadObjectInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Type*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3d0ba7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "CreateReadObjectInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CreateReadObjectInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Type*, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3d0baac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "CreateReadObjectInfo",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Parse)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3d0baec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseError)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x3d0c6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseSerializedStreamHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeader)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3d0bc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseSerializedStreamHeader",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseSerializedStreamHeaderEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeaderEnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3d0bc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseSerializedStreamHeaderEnd",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObject)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x3d0bc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseObjectEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObjectEnd)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x3d0bf5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseObjectEnd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArray)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x3d0c8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.NextRectangleMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::NextRectangleMap)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3d0d304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "NextRectangleMap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseArrayMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMember)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x3d0d3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseArrayMember",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseArrayMemberEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMemberEnd)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d0dfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseArrayMemberEnd",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMember)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x3d0c174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseMemberEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMemberEnd)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3d0c634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseMemberEnd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3d0db9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.RegisterObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d0cfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.RegisterObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(
    ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3d0e048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.GetId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(int64_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3d0e168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "GetId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Bind)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3d0e3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.FastBindToType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::FastBindToType)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x3d0e434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "FastBindToType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ResolveSimpleAssemblyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::System::Reflection::AssemblyName*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ResolveSimpleAssemblyName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3d0e7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ResolveSimpleAssemblyName",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.GetSimplyNamedTypeFromAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::Assembly*, ::StringW, ::ByRef<::System::Type*>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetSimplyNamedTypeFromAssembly)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3d0e81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                                 "GetSimplyNamedTypeFromAssembly", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Type*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::StringW)>(
        &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetType)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3d0ec5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CheckTypeForwardedTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*, ::System::Type*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckTypeForwardedTo)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3d0ea58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                                 "CheckTypeForwardedTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stream;
}
constexpr ::System::IO::Stream* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stream;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_m_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_surrogates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogates;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_surrogates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogates;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_m_surrogates(::System::Runtime::Serialization::ISurrogateSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_surrogates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_context;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_m_context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_context = value;
}
constexpr ::System::Runtime::Serialization::ObjectManager*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_objectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objectManager;
}
constexpr ::System::Runtime::Serialization::ObjectManager* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_objectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objectManager;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_m_objectManager(::System::Runtime::Serialization::ObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_objectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_formatterEnums() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterEnums;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_formatterEnums() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterEnums;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_formatterEnums(::System::Runtime::Serialization::Formatters::Binary::InternalFE* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___formatterEnums)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SerializationBinder*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_binder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_binder;
}
constexpr ::System::Runtime::Serialization::SerializationBinder* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_binder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_binder;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_m_binder(::System::Runtime::Serialization::SerializationBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_binder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_topId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_topId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_topId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topId = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_bSimpleAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bSimpleAssembly;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_bSimpleAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bSimpleAssembly;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_bSimpleAssembly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bSimpleAssembly = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_handlerObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handlerObject;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_handlerObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handlerObject;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_handlerObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handlerObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_topObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_topObject;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_topObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_topObject;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_m_topObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_topObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>&
System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_headers(
    ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::HeaderHandler*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr ::System::Runtime::Remoting::Messaging::HeaderHandler* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_handler(::System::Runtime::Remoting::Messaging::HeaderHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_serObjectInfoInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* const&
System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_serObjectInfoInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serObjectInfoInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::IFormatterConverter*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_formatterConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_formatterConverter;
}
constexpr ::System::Runtime::Serialization::IFormatterConverter* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_m_formatterConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_formatterConverter;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_m_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_formatterConverter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_stack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_valueFixupStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueFixupStack;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_valueFixupStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueFixupStack;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_valueFixupStack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueFixupStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_crossAppDomainArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossAppDomainArray;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_crossAppDomainArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossAppDomainArray;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_crossAppDomainArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___crossAppDomainArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_bFullDeserialization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bFullDeserialization;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_bFullDeserialization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bFullDeserialization;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_bFullDeserialization(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bFullDeserialization = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_bOldFormatDetected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bOldFormatDetected;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_bOldFormatDetected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bOldFormatDetected;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_bOldFormatDetected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bOldFormatDetected = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_valTypeObjectIdTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valTypeObjectIdTable;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* const&
System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_valTypeObjectIdTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valTypeObjectIdTable;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_valTypeObjectIdTable(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valTypeObjectIdTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::NameCache*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_typeCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeCache;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::NameCache* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_typeCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeCache;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_typeCache(::System::Runtime::Serialization::Formatters::Binary::NameCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_previousAssemblyString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousAssemblyString;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_previousAssemblyString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousAssemblyString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_previousAssemblyString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousAssemblyString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_previousName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_previousName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_previousName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_previousType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_get_previousType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectReader::__cordl_internal_set_previousType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerStack* System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_ValueFixupStack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                               "get_ValueFixupStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::SerStack*, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_TopObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "get_TopObject",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::set_TopObject(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "set_TopObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::_ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::ISurrogateSelector* selector,
                                                                                    ::System::Runtime::Serialization::StreamingContext context,
                                                                                    ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums,
                                                                                    ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalFE*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, selector, context, formatterEnums, binder);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::ObjectReader::Deserialize(::System::Runtime::Remoting::Messaging::HeaderHandler* handler,
                                                                                                       ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* serParser, bool fCheck) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::HeaderHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, handler, serParser, fCheck);
}
inline bool System::Runtime::Serialization::Formatters::Binary::ObjectReader::HasSurrogate(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "HasSurrogate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckSerializable(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "CheckSerializable",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::InitFullDeserialization() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                               "InitFullDeserialization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::ObjectReader::CrossAppDomainArray(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "CrossAppDomainArray",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo(::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "CreateReadObjectInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, false>(this, ___internal_method, objectType);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*
System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo(::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "CreateReadObjectInfo",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, false>(this, ___internal_method, objectType, memberNames, memberTypes);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::Parse(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseError(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* processing,
                                                                                         ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* onStack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processing, onStack);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeader(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseSerializedStreamHeader",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeaderEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseSerializedStreamHeaderEnd",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObject(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObjectEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseObjectEnd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArray(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::NextRectangleMap(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "NextRectangleMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseArrayMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseArrayMemberEnd",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseMemberEnd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseString(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parentPr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ParseString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr, parentPr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject(::System::Object* obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr,
                                                                                             ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, pr, objectPr);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject(::System::Object* obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr,
                                                                                             ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr, bool bIsString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, pr, objectPr, bIsString);
}
inline int64_t System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetId(int64_t objectId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "GetId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, objectId);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::ObjectReader::Bind(::StringW assemblyString, ::StringW typeString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assemblyString, typeString);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::ObjectReader::FastBindToType(::StringW assemblyName, ::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "FastBindToType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assemblyName, typeName);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::Formatters::Binary::ObjectReader::ResolveSimpleAssemblyName(::System::Reflection::AssemblyName* assemblyName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "ResolveSimpleAssemblyName",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, assemblyName);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetSimplyNamedTypeFromAssembly(::System::Reflection::Assembly* assm, ::StringW typeName, ::ByRef<::System::Type*> type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                               "GetSimplyNamedTypeFromAssembly", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Type*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, assm, typeName, type);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetType(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
                                                                                                 ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assemblyInfo, name);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckTypeForwardedTo(::System::Reflection::Assembly* sourceAssembly, ::System::Reflection::Assembly* destAssembly,
                                                                                                   ::System::Type* resolvedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                               "CheckTypeForwardedTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceAssembly, destAssembly, resolvedType);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* System::Runtime::Serialization::Formatters::Binary::ObjectReader::New_ctor(
    ::System::IO::Stream* stream, ::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context,
    ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, ::System::Runtime::Serialization::SerializationBinder* binder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(stream, selector, context, formatterEnums, binder));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ObjectReader() {}

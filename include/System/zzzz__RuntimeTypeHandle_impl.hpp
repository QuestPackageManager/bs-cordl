#pragma once
// IWYU pragma private; include "System/RuntimeTypeHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__CorElementType_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::RuntimeTypeHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeTypeHandle::*)(::System::IntPtr)>(&::System::RuntimeTypeHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c95ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeTypeHandle::*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c95ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeTypeHandle::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::RuntimeTypeHandle::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c96014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::RuntimeTypeHandle::*)()>(&::System::RuntimeTypeHandle::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c96198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::RuntimeTypeHandle::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::RuntimeTypeHandle::GetObjectData)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c961a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::RuntimeTypeHandle>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeTypeHandle::*)(::System::Object*)>(&::System::RuntimeTypeHandle::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c96324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { ::i2c::class_of<::System::RuntimeTypeHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::RuntimeTypeHandle::*)(::System::RuntimeTypeHandle)>(&::System::RuntimeTypeHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c9640c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "Equals", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::RuntimeTypeHandle::*)()>(&::System::RuntimeTypeHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { ::i2c::class_of<::System::RuntimeTypeHandle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeAttributes (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c96424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetAttributes", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetMetadataToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetMetadataToken)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c96448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetMetadataToken", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetToken)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c9646c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetToken", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetGenericTypeDefinition_impl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetGenericTypeDefinition_impl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c96490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetGenericTypeDefinition_impl", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetGenericTypeDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c96494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetGenericTypeDefinition", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsPrimitive)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c96498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsPrimitive", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsByRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c964e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsByRef", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsPointer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c96504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsPointer", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsArray)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c96520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsArray", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsSzArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsSzArray)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c9654c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsSzArray", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.HasElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::HasElementType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c96568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "HasElementType", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetCorElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::CorElementType (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetCorElementType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c964cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetCorElementType", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.HasInstantiation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::HasInstantiation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c965ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "HasInstantiation", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsComObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsComObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c965b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsComObject", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsInstanceOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, ::System::Object*)>(&::System::RuntimeTypeHandle::IsInstanceOfType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c965b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsInstanceOfType", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.HasReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::HasReferences)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c965e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "HasReferences", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsComObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, bool)>(&::System::RuntimeTypeHandle::IsComObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsComObject", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsContextful
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsContextful)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c96614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsContextful", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c96694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsEquivalentTo", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsInterface)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c9669c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsInterface", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetArrayRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetArrayRank)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c966c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetArrayRank", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeAssembly* (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetAssembly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c966e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetAssembly", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetElementType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c96700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetElementType", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeModule* (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetModule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c96704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetModule", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsGenericVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsGenericVariable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c96720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsGenericVariable", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetBaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetBaseType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c96748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetBaseType", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.CanCastTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::RuntimeTypeHandle::CanCastTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c9674c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "CanCastTo", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.type_is_assignable_from
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::RuntimeTypeHandle::type_is_assignable_from)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9675c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "type_is_assignable_from", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsGenericTypeDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c96760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsGenericTypeDefinition", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetGenericParameterInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::RuntimeType*)>(&::System::RuntimeTypeHandle::GetGenericParameterInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c96794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetGenericParameterInfo", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.IsSubclassOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::RuntimeTypeHandle::IsSubclassOf)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c96798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsSubclassOf", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.is_subclass_of
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::System::RuntimeTypeHandle::is_subclass_of)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c967b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "is_subclass_of", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.internal_from_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (*)(::StringW, ::by_ref<::System::Threading::StackCrawlMark>, ::System::Reflection::Assembly*, bool, bool, bool)>(
    &::System::RuntimeTypeHandle::internal_from_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c967bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(),
                                                             { "internal_from_name",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(),
                                                                 ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::RuntimeTypeHandle.GetTypeByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (*)(::StringW, bool, bool, bool, ::by_ref<::System::Threading::StackCrawlMark>, bool)>(
    &::System::RuntimeTypeHandle::GetTypeByName)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5c967c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetTypeByName",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                                    ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::RuntimeTypeHandle::_ctor(::System::IntPtr val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, val);
}
inline void System::RuntimeTypeHandle::_ctor(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type);
}
inline void System::RuntimeTypeHandle::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline ::System::IntPtr System::RuntimeTypeHandle::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void System::RuntimeTypeHandle::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline bool System::RuntimeTypeHandle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeTypeHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::RuntimeTypeHandle::Equals(::System::RuntimeTypeHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "Equals", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, handle);
}
inline int32_t System::RuntimeTypeHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::RuntimeTypeHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes System::RuntimeTypeHandle::GetAttributes(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetAttributes", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes>(nullptr, ___internal_method, type);
}
inline int32_t System::RuntimeTypeHandle::GetMetadataToken(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetMetadataToken", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline int32_t System::RuntimeTypeHandle::GetToken(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetToken", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::RuntimeTypeHandle::GetGenericTypeDefinition_impl(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetGenericTypeDefinition_impl", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::RuntimeTypeHandle::GetGenericTypeDefinition(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetGenericTypeDefinition", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsPrimitive(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsPrimitive", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsByRef(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsByRef", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsPointer(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsPointer", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsArray(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsArray", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsSzArray(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsSzArray", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::HasElementType(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "HasElementType", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::CorElementType System::RuntimeTypeHandle::GetCorElementType(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetCorElementType", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::CorElementType>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::HasInstantiation(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "HasInstantiation", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsComObject(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsComObject", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsInstanceOfType(::System::RuntimeType* type, ::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsInstanceOfType", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, o);
}
inline bool System::RuntimeTypeHandle::HasReferences(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "HasReferences", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsComObject(::System::RuntimeType* type, bool isGenericCOM) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsComObject", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, isGenericCOM);
}
inline bool System::RuntimeTypeHandle::IsContextful(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsContextful", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsEquivalentTo(::System::RuntimeType* rtType1, ::System::RuntimeType* rtType2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsEquivalentTo", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rtType1, rtType2);
}
inline bool System::RuntimeTypeHandle::IsInterface(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsInterface", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline int32_t System::RuntimeTypeHandle::GetArrayRank(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetArrayRank", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::RuntimeAssembly* System::RuntimeTypeHandle::GetAssembly(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetAssembly", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*>(nullptr, ___internal_method, type);
}
inline ::System::RuntimeType* System::RuntimeTypeHandle::GetElementType(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetElementType", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::RuntimeModule* System::RuntimeTypeHandle::GetModule(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetModule", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsGenericVariable(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsGenericVariable", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::RuntimeType* System::RuntimeTypeHandle::GetBaseType(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetBaseType", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::CanCastTo(::System::RuntimeType* type, ::System::RuntimeType* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "CanCastTo", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, target);
}
inline bool System::RuntimeTypeHandle::type_is_assignable_from(::System::Type* a, ::System::Type* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "type_is_assignable_from", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool System::RuntimeTypeHandle::IsGenericTypeDefinition(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsGenericTypeDefinition", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::IntPtr System::RuntimeTypeHandle::GetGenericParameterInfo(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetGenericParameterInfo", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, type);
}
inline bool System::RuntimeTypeHandle::IsSubclassOf(::System::RuntimeType* childType, ::System::RuntimeType* baseType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "IsSubclassOf", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, childType, baseType);
}
inline bool System::RuntimeTypeHandle::is_subclass_of(::System::IntPtr childType, ::System::IntPtr baseType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "is_subclass_of", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, childType, baseType);
}
inline ::System::RuntimeType* System::RuntimeTypeHandle::internal_from_name(::StringW name, ::by_ref<::System::Threading::StackCrawlMark> stackMark, ::System::Reflection::Assembly* callerAssembly,
                                                                            bool throwOnError, bool ignoreCase, bool reflectionOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(),
                                                           { "internal_from_name",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(),
                                                               ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(nullptr, ___internal_method, name, stackMark, callerAssembly, throwOnError, ignoreCase, reflectionOnly);
}
inline ::System::RuntimeType* System::RuntimeTypeHandle::GetTypeByName(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly,
                                                                       ::by_ref<::System::Threading::StackCrawlMark> stackMark, bool loadTypeFromPartialName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::RuntimeTypeHandle>(), { "GetTypeByName",
                                                                                                {},
                                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                                  ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(nullptr, ___internal_method, typeName, throwOnError, ignoreCase, reflectionOnly, stackMark, loadTypeFromPartialName);
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::RuntimeTypeHandle::operator ::System::Runtime::Serialization::ISerializable*() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::RuntimeTypeHandle::i___System__Runtime__Serialization__ISerializable() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::RuntimeTypeHandle::RuntimeTypeHandle(::System::IntPtr value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::System::RuntimeTypeHandle::RuntimeTypeHandle() {}

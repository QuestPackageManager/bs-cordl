#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeFieldInfo.hpp"
#include "System/Reflection/zzzz__FieldAttributes_impl.hpp"
#include "System/Reflection/zzzz__RtFieldInfo_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__RuntimeFieldHandle_impl.hpp"
#include "System/Reflection/zzzz__RuntimeFieldInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__TypedReference_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_BindingFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::BindingFlags (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b89e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "get_BindingFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_Module
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b89e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetDeclaringTypeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::GetDeclaringTypeInternal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b89e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "GetDeclaringTypeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_ReflectedTypeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b89ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "get_ReflectedTypeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetRuntimeModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeModule* (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b89e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "GetRuntimeModule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeFieldInfo::GetObjectData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b89f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.UnsafeGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*)>(&::System::Reflection::RuntimeFieldInfo::UnsafeGetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8a014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.CheckConsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*)>(&::System::Reflection::RuntimeFieldInfo::CheckConsistency)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5b8a01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.UnsafeSetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags,
                                                                                                        ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::RuntimeFieldInfo::UnsafeSetValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b8a178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.SetValueDirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::System::TypedReference, ::System::Object*)>(
    &::System::Reflection::RuntimeFieldInfo::SetValueDirect)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b8a1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldAttributes (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8a30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_FieldHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeFieldHandle (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_FieldHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8a314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.ResolveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::ResolveType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8a31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "ResolveType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_FieldType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_FieldType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8a31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetParentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)(bool)>(&::System::Reflection::RuntimeFieldInfo::GetParentType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b8a348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "GetParentType", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b8a368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b8a374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8a384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeFieldInfo::*)(::System::Type*, bool)>(&::System::Reflection::RuntimeFieldInfo::IsDefined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8a38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeFieldInfo::*)(bool)>(&::System::Reflection::RuntimeFieldInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8a400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeFieldInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeFieldInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8a46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetFieldOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::GetFieldOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b8a4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetValueInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*)>(&::System::Reflection::RuntimeFieldInfo::GetValueInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8a4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "GetValueInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*)>(&::System::Reflection::RuntimeFieldInfo::GetValue)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b8a4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b8a708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.SetValueInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*)>(&::System::Reflection::RuntimeFieldInfo::SetValueInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8a7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(),
                            { "SetValueInternal", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags,
                                                                                                        ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::RuntimeFieldInfo::SetValue)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5b8a7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetRawConstantValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::GetRawConstantValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8aa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.CheckGeneric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::CheckGeneric)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b8a68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "CheckGeneric", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_MetadataToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8aa58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_metadata_token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::RuntimeFieldInfo*)>(&::System::Reflection::RuntimeFieldInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8aa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "get_metadata_token", {}, { ::i2c::type_of<::System::Reflection::RuntimeFieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8aa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_klass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___klass;
}
constexpr ::System::IntPtr const& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_klass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___klass;
}
constexpr void System::Reflection::RuntimeFieldInfo::__cordl_internal_set_klass(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___klass = value;
}
constexpr ::System::RuntimeFieldHandle& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_fhandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fhandle;
}
constexpr ::System::RuntimeFieldHandle const& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_fhandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fhandle;
}
constexpr void System::Reflection::RuntimeFieldInfo::__cordl_internal_set_fhandle(::System::RuntimeFieldHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fhandle = value;
}
constexpr ::StringW& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Reflection::RuntimeFieldInfo::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Type*& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Reflection::RuntimeFieldInfo::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Reflection::FieldAttributes& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_attrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrs;
}
constexpr ::System::Reflection::FieldAttributes const& System::Reflection::RuntimeFieldInfo::__cordl_internal_get_attrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrs;
}
constexpr void System::Reflection::RuntimeFieldInfo::__cordl_internal_set_attrs(::System::Reflection::FieldAttributes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrs = value;
}
inline ::System::Reflection::BindingFlags System::Reflection::RuntimeFieldInfo::get_BindingFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "get_BindingFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Reflection::RuntimeFieldInfo::get_Module() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimeFieldInfo::GetDeclaringTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "GetDeclaringTypeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimeFieldInfo::get_ReflectedTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "get_ReflectedTypeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::Reflection::RuntimeFieldInfo::GetRuntimeModule() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "GetRuntimeModule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*>(this, ___internal_method);
}
inline void System::Reflection::RuntimeFieldInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Reflection::RuntimeFieldInfo::UnsafeGetValue(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline void System::Reflection::RuntimeFieldInfo::CheckConsistency(::System::Object* target) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void System::Reflection::RuntimeFieldInfo::UnsafeSetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                 ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value, invokeAttr, binder, culture);
}
inline void System::Reflection::RuntimeFieldInfo::SetValueDirect(::System::TypedReference obj, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value);
}
inline ::System::Reflection::FieldAttributes System::Reflection::RuntimeFieldInfo::get_Attributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldAttributes>(this, ___internal_method);
}
inline ::System::RuntimeFieldHandle System::Reflection::RuntimeFieldInfo::get_FieldHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeFieldHandle>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::ResolveType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "ResolveType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::get_FieldType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::GetParentType(bool declaring) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "GetParentType", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, declaring);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::get_ReflectedType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeFieldInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeFieldInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeFieldInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeFieldInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline int32_t System::Reflection::RuntimeFieldInfo::GetFieldOffset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::RuntimeFieldInfo::GetValueInternal(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "GetValueInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::System::Object* System::Reflection::RuntimeFieldInfo::GetValue(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::StringW System::Reflection::RuntimeFieldInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Reflection::RuntimeFieldInfo::SetValueInternal(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(),
                                       { "SetValueInternal", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fi, obj, value);
}
inline void System::Reflection::RuntimeFieldInfo::SetValue(::System::Object* obj, ::System::Object* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                           ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, val, invokeAttr, binder, culture);
}
inline ::System::Object* System::Reflection::RuntimeFieldInfo::GetRawConstantValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Reflection::RuntimeFieldInfo::CheckGeneric() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "CheckGeneric", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeFieldInfo::get_MetadataToken() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeFieldInfo::get_metadata_token(::System::Reflection::RuntimeFieldInfo* monoField) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { "get_metadata_token", {}, { ::i2c::type_of<::System::Reflection::RuntimeFieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, monoField);
}
inline void System::Reflection::RuntimeFieldInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeFieldInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeFieldInfo* System::Reflection::RuntimeFieldInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimeFieldInfo*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::RuntimeFieldInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::RuntimeFieldInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeFieldInfo::RuntimeFieldInfo() {}

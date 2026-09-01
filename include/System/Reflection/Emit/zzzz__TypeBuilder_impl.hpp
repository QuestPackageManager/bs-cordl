#pragma once
// IWYU pragma private; include "System\Reflection\Emit\TypeBuilder.hpp"
#include "System/Reflection/zzzz__TypeInfo_impl.hpp"
#include "System/Reflection/Emit/zzzz__TypeBuilder_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_Assembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_Assembly)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9383c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_AssemblyQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_BaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_BaseType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b938ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 116 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_FullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_FullName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b938e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_GUID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_GUID)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9391c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 115 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_Module
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_Module)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9398c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_Namespace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b939c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_UnderlyingSystemType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b939fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetAttributeFlagsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeAttributes (::System::Reflection::Emit::TypeBuilder::*)()>(
    &::System::Reflection::Emit::TypeBuilder::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetConstructorImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (
    ::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>,
                                                ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::Emit::TypeBuilder::GetConstructorImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetConstructors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::Emit::TypeBuilder::GetConstructors)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::TypeBuilder::*)(bool)>(&::System::Reflection::Emit::TypeBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Type*, bool)>(
    &::System::Reflection::Emit::TypeBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::GetElementType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Reflection::Emit::TypeBuilder::GetEvent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::EventInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::Emit::TypeBuilder::GetEvents)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 85 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Reflection::Emit::TypeBuilder::GetField)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 87 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::Emit::TypeBuilder::GetFields)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, bool)>(&::System::Reflection::Emit::TypeBuilder::GetInterface)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 119 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::GetInterfaces)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 120 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::Emit::TypeBuilder::GetMembers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetMethodImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (
    ::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>,
                                                ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::Emit::TypeBuilder::GetMethodImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 100 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetMethods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::Emit::TypeBuilder::GetMethods)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 102 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetNestedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Reflection::Emit::TypeBuilder::GetNestedType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 103 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::Emit::TypeBuilder::GetProperties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 112 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetPropertyImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (
    ::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*>,
                                                ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::Emit::TypeBuilder::GetPropertyImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 110 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.HasElementTypeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.InvokeMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::ArrayW<::System::Object*>,
                                                ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>)>(
    &::System::Reflection::Emit::TypeBuilder::InvokeMember)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 117 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsArrayImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsByRefImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsByRefImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsCOMObjectImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)(::System::Type*, bool)>(&::System::Reflection::Emit::TypeBuilder::IsDefined)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsPointerImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsPointerImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsPrimitiveImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b93fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 73 }));
    return ___internal_method;
  }
};
inline ::System::Reflection::Assembly* System::Reflection::Emit::TypeBuilder::get_Assembly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::TypeBuilder::get_AssemblyQualifiedName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::get_BaseType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 116 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::TypeBuilder::get_FullName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Guid System::Reflection::Emit::TypeBuilder::get_GUID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 115 })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Reflection::Emit::TypeBuilder::get_Module() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::TypeBuilder::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::TypeBuilder::get_Namespace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::get_UnderlyingSystemType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes System::Reflection::Emit::TypeBuilder::GetAttributeFlagsImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Reflection::Emit::TypeBuilder::GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                                        ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                                                                        ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*> System::Reflection::Emit::TypeBuilder::GetConstructors(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::TypeBuilder::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::TypeBuilder::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::GetElementType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::EventInfo* System::Reflection::Emit::TypeBuilder::GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::EventInfo*> System::Reflection::Emit::TypeBuilder::GetEvents(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 85 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::FieldInfo* System::Reflection::Emit::TypeBuilder::GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::FieldInfo*> System::Reflection::Emit::TypeBuilder::GetFields(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::GetInterface(::StringW name, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 119 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, ignoreCase);
}
inline ::ArrayW<::System::Type*> System::Reflection::Emit::TypeBuilder::GetInterfaces() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 120 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Reflection::Emit::TypeBuilder::GetMembers(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::MethodInfo* System::Reflection::Emit::TypeBuilder::GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                              ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                                                              ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 100 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::MethodInfo*> System::Reflection::Emit::TypeBuilder::GetMethods(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 102 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 103 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::PropertyInfo*> System::Reflection::Emit::TypeBuilder::GetProperties(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 112 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::PropertyInfo* System::Reflection::Emit::TypeBuilder::GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                                  ::System::Type* returnType, ::ArrayW<::System::Type*> types,
                                                                                                  ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 110 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline bool System::Reflection::Emit::TypeBuilder::HasElementTypeImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::Emit::TypeBuilder::InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                             ::System::Object* target, ::ArrayW<::System::Object*> args, ::ArrayW<::System::Reflection::ParameterModifier> modifiers,
                                                                             ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW> namedParameters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 117 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
}
inline bool System::Reflection::Emit::TypeBuilder::IsArrayImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::Emit::TypeBuilder::IsByRefImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::Emit::TypeBuilder::IsCOMObjectImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::Emit::TypeBuilder::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline bool System::Reflection::Emit::TypeBuilder::IsPointerImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::Emit::TypeBuilder::IsPrimitiveImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::TypeBuilder::TypeBuilder() {}

#pragma once
// IWYU pragma private; include "System\Reflection\TypeDelegator.hpp"
#include "System/Reflection/zzzz__TypeInfo_impl.hpp"
#include "System/Reflection/zzzz__TypeDelegator_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__InterfaceMapping_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::TypeDelegator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::TypeDelegator::*)(::System::Type*)>(&::System::Reflection::TypeDelegator::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b7ed38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_GUID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_GUID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b83f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 115 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_MetadataToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_MetadataToken)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b83f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.InvokeMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Reflection::TypeDelegator::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::ArrayW<::System::Object*>,
                                                                           ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>)>(
        &::System::Reflection::TypeDelegator::InvokeMember)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b83f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 117 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_Module
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_Module)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b83f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_Assembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_Assembly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b83fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_TypeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeTypeHandle (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_TypeHandle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b83fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 113 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_Name)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b83fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_FullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_FullName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_Namespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_AssemblyQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_BaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_BaseType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 116 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetConstructorImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (
    ::System::Reflection::TypeDelegator::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>,
                                            ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::TypeDelegator::GetConstructorImpl)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b84088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetConstructors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*> (::System::Reflection::TypeDelegator::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::TypeDelegator::GetConstructors)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b840a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetMethodImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (
    ::System::Reflection::TypeDelegator::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>,
                                            ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::TypeDelegator::GetMethodImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b840c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 100 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetMethods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (::System::Reflection::TypeDelegator::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::TypeDelegator::GetMethods)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b840f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 102 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::System::Reflection::TypeDelegator::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Reflection::TypeDelegator::GetField)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 87 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (::System::Reflection::TypeDelegator::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::TypeDelegator::GetFields)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::TypeDelegator::*)(::StringW, bool)>(&::System::Reflection::TypeDelegator::GetInterface)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b84150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 119 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::GetInterfaces)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 120 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (::System::Reflection::TypeDelegator::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Reflection::TypeDelegator::GetEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetPropertyImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (
    ::System::Reflection::TypeDelegator::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*>,
                                            ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::TypeDelegator::GetPropertyImpl)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b841b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 110 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*> (::System::Reflection::TypeDelegator::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::TypeDelegator::GetProperties)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 112 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::EventInfo*> (::System::Reflection::TypeDelegator::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::TypeDelegator::GetEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 85 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetNestedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::TypeDelegator::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Reflection::TypeDelegator::GetNestedType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b842a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 103 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::Reflection::TypeDelegator::*)(
    ::StringW, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags)>(&::System::Reflection::TypeDelegator::GetMember)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b842c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::Reflection::TypeDelegator::*)(::System::Reflection::BindingFlags)>(
    &::System::Reflection::TypeDelegator::GetMembers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b842e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetAttributeFlagsImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeAttributes (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_IsSZArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_IsSZArray)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.IsArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::IsArrayImpl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.IsPrimitiveImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.IsByRefImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::IsByRefImpl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_IsGenericMethodParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_IsGenericMethodParameter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b843a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.IsPointerImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::IsPointerImpl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b843c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.IsValueTypeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::IsValueTypeImpl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b843e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.IsCOMObjectImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_IsConstructedGenericType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_IsConstructedGenericType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_IsCollectible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_IsCollectible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::GetElementType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.HasElementTypeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.get_UnderlyingSystemType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::TypeDelegator::*)()>(&::System::Reflection::TypeDelegator::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b844a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::TypeDelegator::*)(bool)>(&::System::Reflection::TypeDelegator::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b844c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::TypeDelegator::*)(::System::Type*, bool)>(
    &::System::Reflection::TypeDelegator::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b844e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::TypeDelegator::*)(::System::Type*, bool)>(&::System::Reflection::TypeDelegator::IsDefined)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b84508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeDelegator.GetInterfaceMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::InterfaceMapping (::System::Reflection::TypeDelegator::*)(::System::Type*)>(
    &::System::Reflection::TypeDelegator::GetInterfaceMap)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b84528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 121 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Reflection::TypeDelegator::__cordl_internal_get_typeImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeImpl;
}
constexpr ::System::Type* const& System::Reflection::TypeDelegator::__cordl_internal_get_typeImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeImpl;
}
constexpr void System::Reflection::TypeDelegator::__cordl_internal_set_typeImpl(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeImpl = value;
}
inline void System::Reflection::TypeDelegator::_ctor(::System::Type* delegatingType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::TypeDelegator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delegatingType);
}
inline ::System::Guid System::Reflection::TypeDelegator::get_GUID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 115 })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline int32_t System::Reflection::TypeDelegator::get_MetadataToken() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::TypeDelegator::InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target,
                                                                         ::ArrayW<::System::Object*> args, ::ArrayW<::System::Reflection::ParameterModifier> modifiers,
                                                                         ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW> namedParameters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 117 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
}
inline ::System::Reflection::Module* System::Reflection::TypeDelegator::get_Module() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::TypeDelegator::get_Assembly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method);
}
inline ::System::RuntimeTypeHandle System::Reflection::TypeDelegator::get_TypeHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 113 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle>(this, ___internal_method);
}
inline ::StringW System::Reflection::TypeDelegator::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::TypeDelegator::get_FullName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::TypeDelegator::get_Namespace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::TypeDelegator::get_AssemblyQualifiedName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::TypeDelegator::get_BaseType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 116 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Reflection::TypeDelegator::GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                                    ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                                                                    ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*> System::Reflection::TypeDelegator::GetConstructors(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::MethodInfo* System::Reflection::TypeDelegator::GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                          ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                                                          ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 100 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::MethodInfo*> System::Reflection::TypeDelegator::GetMethods(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 102 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::FieldInfo* System::Reflection::TypeDelegator::GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::FieldInfo*> System::Reflection::TypeDelegator::GetFields(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* System::Reflection::TypeDelegator::GetInterface(::StringW name, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 119 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, ignoreCase);
}
inline ::ArrayW<::System::Type*> System::Reflection::TypeDelegator::GetInterfaces() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 120 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::Reflection::EventInfo* System::Reflection::TypeDelegator::GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Reflection::PropertyInfo* System::Reflection::TypeDelegator::GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                                              ::System::Type* returnType, ::ArrayW<::System::Type*> types,
                                                                                              ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 110 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline ::ArrayW<::System::Reflection::PropertyInfo*> System::Reflection::TypeDelegator::GetProperties(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 112 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::EventInfo*> System::Reflection::TypeDelegator::GetEvents(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 85 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* System::Reflection::TypeDelegator::GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 103 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Reflection::TypeDelegator::GetMember(::StringW name, ::System::Reflection::MemberTypes type,
                                                                                                ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, name, type, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Reflection::TypeDelegator::GetMembers(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::TypeAttributes System::Reflection::TypeDelegator::GetAttributeFlagsImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::get_IsSZArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::IsArrayImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::IsPrimitiveImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::IsByRefImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::get_IsGenericMethodParameter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::IsPointerImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::IsValueTypeImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::IsCOMObjectImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::get_IsConstructedGenericType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::get_IsCollectible() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::TypeDelegator::GetElementType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Reflection::TypeDelegator::HasElementTypeImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::TypeDelegator::get_UnderlyingSystemType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Reflection::TypeDelegator::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::TypeDelegator::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline bool System::Reflection::TypeDelegator::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Reflection::InterfaceMapping System::Reflection::TypeDelegator::GetInterfaceMap(::System::Type* interfaceType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeDelegator*>(), 121 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::InterfaceMapping>(this, ___internal_method, interfaceType);
}
inline ::System::Reflection::TypeDelegator* System::Reflection::TypeDelegator::New_ctor(::System::Type* delegatingType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::TypeDelegator*>(delegatingType));
}
// Ctor Parameters []
constexpr ::System::Reflection::TypeDelegator::TypeDelegator() {}

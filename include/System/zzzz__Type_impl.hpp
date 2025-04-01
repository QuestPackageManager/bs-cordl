#pragma once
// IWYU pragma private; include "System/Type.hpp"
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/zzzz__RuntimeTypeHandle_impl.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__GenericParameterAttributes_def.hpp"
#include "System/Reflection/zzzz__MemberFilter_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
//  Writing Method size for method: ::System::Type.IsEnumDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)(::System::Object*)>(&::System::Type::IsEnumDefined)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x3dfe4e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)(::System::Object*)>(&::System::Type::GetEnumName)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x3dfec48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Type::*)()>(&::System::Type::GetEnumNames)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3dfee38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumRawConstantValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (::System::Type::*)()>(&::System::Type::GetEnumRawConstantValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3dfeae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetEnumRawConstantValues",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Type::*)(::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>, ::ByRef<::System::Array*>)>(
    &::System::Type::GetEnumData)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x3dfeedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetEnumData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Array*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.BinarySearch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Array*, ::System::Object*)>(&::System::Type::BinarySearch)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3dfeb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "BinarySearch", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsIntegerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::System::Type::IsIntegerType)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x3dfe868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "IsIntegerType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSerializable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3dff40c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_ContainsGenericParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3dff5e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetRootElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetRootElementType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3dff6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetRootElementType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsVisible)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3dff740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsVisible",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsSubclassOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::IsSubclassOf)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3dff970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsAssignableFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3dffa2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.ImplementInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::ImplementInterface)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3dffca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "ImplementInterface", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FilterAttributeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Object*)>(&::System::Type::FilterAttributeImpl)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x3dffde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "FilterAttributeImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FilterNameImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Object*)>(&::System::Type::FilterNameImpl)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3e00144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "FilterNameImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FilterNameIgnoreCaseImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Object*)>(&::System::Type::FilterNameIgnoreCaseImpl)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3e002c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "FilterNameIgnoreCaseImpl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Type::*)()>(&::System::Type::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_MemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (::System::Type::*)()>(&::System::Type::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00458;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_Namespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_AssemblyQualifiedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_FullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_FullName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_Assembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::Type::*)()>(&::System::Type::get_Assembly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_Module
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (::System::Type::*)()>(&::System::Type::get_Module)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsNested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsNested)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3dff8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsNested",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_DeclaringType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::get_DeclaringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00468;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_DeclaringMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (::System::Type::*)()>(&::System::Type::get_DeclaringMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00470;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_ReflectedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_UnderlyingSystemType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e00480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsArray",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsArrayImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsArrayImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsByRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e00490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsByRef",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsByRefImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsByRefImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e004a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsPointer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsPointerImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsPointerImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsConstructedGenericType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsConstructedGenericType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e004b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsGenericParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsGenericParameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00528;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsGenericMethodParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsGenericMethodParameter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e00530;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsGenericType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsGenericType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e0057c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsGenericTypeDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00584;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSZArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSZArray)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e0058c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsVariableBoundArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsVariableBoundArray)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3e005b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_HasElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_HasElementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3dff6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_HasElementType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.HasElementTypeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetElementType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetArrayRank
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Type::*)()>(&::System::Type::GetArrayRank)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e005f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetGenericTypeDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e00644;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_GenericTypeArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::Type::*)()>(
    &::System::Type::get_GenericTypeArguments)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3e00690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetGenericArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::Type::*)()>(&::System::Type::GetGenericArguments)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e0076c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_GenericParameterPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Type::*)()>(&::System::Type::get_GenericParameterPosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e007b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_GenericParameterAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::GenericParameterAttributes (::System::Type::*)()>(
    &::System::Type::get_GenericParameterAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e00804;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetGenericParameterConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::Type::*)()>(
    &::System::Type::GetGenericParameterConstraints)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3e0083c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeAttributes (::System::Type::*)()>(&::System::Type::get_Attributes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e008b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_Attributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetAttributeFlagsImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeAttributes (::System::Type::*)()>(&::System::Type::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsAbstract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsAbstract)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3e008c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsAbstract",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSealed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSealed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3e008e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsSealed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsClass)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3e00904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsClass",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsNestedAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsNestedAssembly)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3e0095c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsNestedAssembly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsNestedPublic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsNestedPublic)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3dff8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsNestedPublic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsNotPublic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsNotPublic)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e00984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsNotPublic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsPublic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsPublic)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3dff948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsPublic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsExplicitLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsExplicitLayout)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3e009a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsExplicitLayout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsCOMObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsCOMObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e009d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsCOMObject",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsCOMObjectImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsContextful
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsContextful)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e009e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsContextful",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsContextfulImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsContextfulImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3e009f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsCollectible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsCollectible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00a80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3e00a88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsMarshalByRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsMarshalByRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e00b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsMarshalByRef",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsMarshalByRefImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsMarshalByRefImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3e00b24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 71));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsPrimitive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e00bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsPrimitive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsPrimitiveImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsValueType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e0094c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsValueType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsValueTypeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsValueTypeImpl)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3e00bc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 75));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSignatureType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSignatureType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00c50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 76));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (::System::Type::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::Type::GetConstructor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3e00c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetConstructor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (
    ::System::Type::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::Type::GetConstructor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e00c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetConstructor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (
    ::System::Type::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::Type::GetConstructor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3e00c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetConstructor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructorImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (
    ::System::Type::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::Type::GetConstructorImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 80));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> (::System::Type::*)()>(&::System::Type::GetConstructors)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3e00dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetConstructors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> (
    ::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetConstructors)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 82));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::EventInfo* (::System::Type::*)(::StringW)>(&::System::Type::GetEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3e00dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::EventInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Type::GetEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 84));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 85));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (::System::Type::*)(::StringW)>(&::System::Type::GetField)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3e00dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetField", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Type::GetField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 87));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetFields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> (::System::Type::*)()>(
    &::System::Type::GetFields)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3e00de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetFields",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetFields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetFields)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 89));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (::System::Type::*)(::StringW)>(&::System::Type::GetMember)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3e00dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMember", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (::System::Type::*)(
    ::StringW, ::System::Reflection::BindingFlags)>(&::System::Type::GetMember)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3e00e10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 91));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (::System::Type::*)(
    ::StringW, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags)>(&::System::Type::GetMember)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e00e28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 92));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetMembers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 93));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e00e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3e00e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3e00ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (
    ::System::Type::*)(::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(
    &::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3e00f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (
    ::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e00f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (
    ::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3e00f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethodImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (
    ::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::Type::GetMethodImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 100));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethods
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> (::System::Type::*)()>(
    &::System::Type::GetMethods)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3e01088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethods",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethods
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetMethods)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetNestedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Type::GetNestedType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 103));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e0109c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(
    &::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3e010a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW, ::System::Type*)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3e01118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW, ::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3e01210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (
    ::System::Type::*)(::StringW, ::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3e01228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (
    ::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3e01240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetPropertyImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (
    ::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::Type::GetPropertyImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 110));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 111));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_TypeHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeTypeHandle (::System::Type::*)()>(&::System::Type::get_TypeHandle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e012c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 112));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeTypeHandle (*)(::System::Object*)>(&::System::Type::GetTypeHandle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3e01300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeHandle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (*)(::System::Type*)>(&::System::Type::GetTypeCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3e01378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeCode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeCodeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (::System::Type::*)()>(&::System::Type::GetTypeCodeImpl)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3e013f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 113));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_GUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Type::*)()>(&::System::Type::get_GUID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 114));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeFromCLSID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Guid)>(&::System::Type::GetTypeFromCLSID)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3e014d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeFromCLSID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_BaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::get_BaseType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 115));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.InvokeMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>, ::System::Globalization::CultureInfo*,
                       ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Type::InvokeMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 116));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::Type::*)()>(&::System::Type::GetInterfaces)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 117));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsInstanceOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)(::System::Object*)>(&::System::Type::IsInstanceOfType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3e015c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 118));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3e01600;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 119));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumUnderlyingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetEnumUnderlyingType)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3e01664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 120));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (::System::Type::*)()>(&::System::Type::GetEnumValues)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3e0174c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 121));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeArrayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::MakeArrayType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e017d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 122));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeArrayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)(int32_t)>(&::System::Type::MakeArrayType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e01808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 123));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeByRefType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::MakeByRefType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e01840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 124));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeGenericType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::Type::MakeGenericType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e01878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 125));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakePointerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::MakePointerType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e018c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 126));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeGenericSignatureType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::Type::MakeGenericSignatureType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3e018fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "MakeGenericSignatureType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3e01968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)(::System::Object*)>(&::System::Type::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3e019c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Type::*)()>(&::System::Type::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3e01a64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3e01aac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 127));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_DefaultBinder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Binder* (*)()>(&::System::Type::get_DefaultBinder)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3e01b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_DefaultBinder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeFromHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::RuntimeTypeHandle)>(&::System::Type::GetTypeFromHandle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3df553c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeFromHandle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.internal_from_handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::IntPtr)>(&::System::Type::internal_from_handle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e01c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "internal_from_handle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSzArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSzArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e01c20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 128));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FormatTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::FormatTypeName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3e01c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "FormatTypeName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FormatTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)(bool)>(&::System::Type::FormatTypeName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e01c3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 129));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsInterface)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3dffbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsInterface",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW, bool, bool)>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3e01c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW, bool)>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3e01d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e01d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (*)(::StringW, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*,
                                    ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*, bool)>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3e01dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Type::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3dfe85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Type::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3dff5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeFromCLSID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Guid, ::StringW, bool)>(&::System::Type::GetTypeFromCLSID)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3e01544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeFromCLSID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_FullNameOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_FullNameOrDefault)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3e01e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_FullNameOrDefault",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsRuntimeImplemented
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsRuntimeImplemented)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3dff548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "IsRuntimeImplemented",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.InternalGetNameIfAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)(::ByRef<::System::Type*>)>(&::System::Type::InternalGetNameIfAvailable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e01f40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 131));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_InternalNameIfAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_InternalNameIfAvailable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e01f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_InternalNameIfAvailable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_NameOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_NameOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3e01f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_NameOrDefault",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::RuntimeTypeHandle& System::Type::__cordl_internal_get__impl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____impl;
}
constexpr ::System::RuntimeTypeHandle const& System::Type::__cordl_internal_get__impl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____impl;
}
constexpr void System::Type::__cordl_internal_set__impl(::System::RuntimeTypeHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____impl = value;
}
inline void System::Type::setStaticF_s_defaultBinder(::System::Reflection::Binder* value) {
  ::cordl_internals::setStaticField<::System::Reflection::Binder*, "s_defaultBinder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>(
      std::forward<::System::Reflection::Binder*>(value));
}
inline ::System::Reflection::Binder* System::Type::getStaticF_s_defaultBinder() {
  return ::cordl_internals::getStaticField<::System::Reflection::Binder*, "s_defaultBinder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>();
}
inline void System::Type::setStaticF_Delimiter(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "Delimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>(std::forward<char16_t>(value));
}
inline char16_t System::Type::getStaticF_Delimiter() {
  return ::cordl_internals::getStaticField<char16_t, "Delimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>();
}
inline void System::Type::setStaticF_EmptyTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "EmptyTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>(
      std::forward<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>(value));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Type::getStaticF_EmptyTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "EmptyTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>();
}
inline void System::Type::setStaticF_Missing(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "Missing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Type::getStaticF_Missing() {
  return ::cordl_internals::getStaticField<::System::Object*, "Missing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>();
}
inline void System::Type::setStaticF_FilterAttribute(::System::Reflection::MemberFilter* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MemberFilter*, "FilterAttribute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>(
      std::forward<::System::Reflection::MemberFilter*>(value));
}
inline ::System::Reflection::MemberFilter* System::Type::getStaticF_FilterAttribute() {
  return ::cordl_internals::getStaticField<::System::Reflection::MemberFilter*, "FilterAttribute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>();
}
inline void System::Type::setStaticF_FilterName(::System::Reflection::MemberFilter* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MemberFilter*, "FilterName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>(
      std::forward<::System::Reflection::MemberFilter*>(value));
}
inline ::System::Reflection::MemberFilter* System::Type::getStaticF_FilterName() {
  return ::cordl_internals::getStaticField<::System::Reflection::MemberFilter*, "FilterName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>();
}
inline void System::Type::setStaticF_FilterNameIgnoreCase(::System::Reflection::MemberFilter* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MemberFilter*, "FilterNameIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>(
      std::forward<::System::Reflection::MemberFilter*>(value));
}
inline ::System::Reflection::MemberFilter* System::Type::getStaticF_FilterNameIgnoreCase() {
  return ::cordl_internals::getStaticField<::System::Reflection::MemberFilter*, "FilterNameIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get>();
}
inline bool System::Type::IsEnumDefined(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline ::StringW System::Type::GetEnumName(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Type::GetEnumNames() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::System::Array* System::Type::GetEnumRawConstantValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetEnumRawConstantValues",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method);
}
inline void System::Type::GetEnumData(::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> enumNames, ::ByRef<::System::Array*> enumValues) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetEnumData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Array*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumNames, enumValues);
}
inline int32_t System::Type::BinarySearch(::System::Array* array, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "BinarySearch", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, value);
}
inline bool System::Type::IsIntegerType(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "IsIntegerType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline bool System::Type::get_IsSerializable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_ContainsGenericParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetRootElementType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetRootElementType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline bool System::Type::get_IsVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsVisible",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::IsSubclassOf(::System::Type* c) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool System::Type::IsAssignableFrom(::System::Type* c) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool System::Type::ImplementInterface(::System::Type* ifaceType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "ImplementInterface", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ifaceType);
}
inline bool System::Type::FilterAttributeImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "FilterAttributeImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m, filterCriteria);
}
inline bool System::Type::FilterNameImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "FilterNameImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m, filterCriteria);
}
inline bool System::Type::FilterNameIgnoreCaseImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "FilterNameIgnoreCaseImpl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m, filterCriteria);
}
inline void System::Type::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Type::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Type::get_Namespace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Type::get_AssemblyQualifiedName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Type::get_FullName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Type::get_Assembly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Type::get_Module() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*, false>(this, ___internal_method);
}
inline bool System::Type::get_IsNested() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsNested",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodBase* System::Type::get_DeclaringMethod() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::get_ReflectedType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::get_UnderlyingSystemType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline bool System::Type::get_IsArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsArray",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::IsArrayImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsByRef() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsByRef",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::IsByRefImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsPointer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsPointer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::IsPointerImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsConstructedGenericType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsGenericParameter() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsGenericMethodParameter() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsGenericType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsGenericTypeDefinition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsSZArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsVariableBoundArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_HasElementType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_HasElementType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::HasElementTypeImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetElementType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t System::Type::GetArrayRank() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetGenericTypeDefinition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Type::get_GenericTypeArguments() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Type::GetGenericArguments() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline int32_t System::Type::get_GenericParameterPosition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Reflection::GenericParameterAttributes System::Type::get_GenericParameterAttributes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::GenericParameterAttributes, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Type::GetGenericParameterConstraints() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes System::Type::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_Attributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes, false>(this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes System::Type::GetAttributeFlagsImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes, false>(this, ___internal_method);
}
inline bool System::Type::get_IsAbstract() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsAbstract",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsSealed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsSealed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsClass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsClass",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsNestedAssembly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsNestedAssembly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsNestedPublic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsNestedPublic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsNotPublic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsNotPublic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsPublic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsPublic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsExplicitLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsExplicitLayout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsCOMObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsCOMObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::IsCOMObjectImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsContextful() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsContextful",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::IsContextfulImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsCollectible() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsEnum() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsMarshalByRef() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsMarshalByRef",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::IsMarshalByRefImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 71)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsPrimitive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsPrimitive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::IsPrimitiveImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsValueType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsValueType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::IsValueTypeImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 75)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Type::get_IsSignatureType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 76)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Type::GetConstructor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetConstructor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method, types);
}
inline ::System::Reflection::ConstructorInfo* System::Type::GetConstructor(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                           ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                           ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetConstructor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method, bindingAttr, binder, types, modifiers);
}
inline ::System::Reflection::ConstructorInfo* System::Type::GetConstructor(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                           ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                           ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetConstructor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::System::Reflection::ConstructorInfo* System::Type::GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                               ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                               ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 80)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> System::Type::GetConstructors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetConstructors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> System::Type::GetConstructors(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 82)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::EventInfo* System::Type::GetEvent(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*, false>(this, ___internal_method, name);
}
inline ::System::Reflection::EventInfo* System::Type::GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 84)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*, false>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> System::Type::GetEvents(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 85)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::FieldInfo* System::Type::GetField(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetField", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*, false>(this, ___internal_method, name);
}
inline ::System::Reflection::FieldInfo* System::Type::GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 87)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*, false>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> System::Type::GetFields() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetFields",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> System::Type::GetFields(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> System::Type::GetMember(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMember", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> System::Type::GetMember(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 91)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> System::Type::GetMember(::StringW name, ::System::Reflection::MemberTypes type,
                                                                                                                        ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(this, ___internal_method, name, type, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> System::Type::GetMembers(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 93)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, types);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                 ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, types, modifiers);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                 ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                 ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, bindingAttr, binder, types, modifiers);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                 ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                 ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                     ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                     ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 100)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> System::Type::GetMethods() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetMethods",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> System::Type::GetMethods(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* System::Type::GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 103)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(this, ___internal_method, name);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW name, ::System::Reflection::BindingFlags bindingAttr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW name, ::System::Type* returnType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(this, ___internal_method, name, returnType);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW name, ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(this, ___internal_method, name, returnType, types);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW name, ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                     ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(this, ___internal_method, name, returnType, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                                     ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                     ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                         ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 110)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> System::Type::GetProperties(::System::Reflection::BindingFlags bindingAttr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 111)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*>, false>(this, ___internal_method, bindingAttr);
}
inline ::System::RuntimeTypeHandle System::Type::get_TypeHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 112)));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle, false>(this, ___internal_method);
}
inline ::System::RuntimeTypeHandle System::Type::GetTypeHandle(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeHandle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle, false>(nullptr, ___internal_method, o);
}
inline ::System::TypeCode System::Type::GetTypeCode(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeCode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode, false>(nullptr, ___internal_method, type);
}
inline ::System::TypeCode System::Type::GetTypeCodeImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 113)));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode, false>(this, ___internal_method);
}
inline ::System::Guid System::Type::get_GUID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 114)));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetTypeFromCLSID(::System::Guid clsid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeFromCLSID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, clsid);
}
inline ::System::Type* System::Type::get_BaseType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 115)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Object* System::Type::InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target,
                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                                    ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers,
                                                    ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW, ::Array<::StringW>*> namedParameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 116)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Type::GetInterfaces() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 117)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline bool System::Type::IsInstanceOfType(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 118)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline bool System::Type::IsEquivalentTo(::System::Type* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 119)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::System::Type* System::Type::GetEnumUnderlyingType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 120)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Array* System::Type::GetEnumValues() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 121)));
  return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::MakeArrayType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 122)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::MakeArrayType(int32_t rank) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 123)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, rank);
}
inline ::System::Type* System::Type::MakeByRefType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 124)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::MakeGenericType(::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 125)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, typeArguments);
}
inline ::System::Type* System::Type::MakePointerType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 126)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::MakeGenericSignatureType(::System::Type* genericTypeDefinition, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "MakeGenericSignatureType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, genericTypeDefinition, typeArguments);
}
inline ::StringW System::Type::ToString() {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Type::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline int32_t System::Type::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Type::Equals(::System::Type* o) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 127)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline ::System::Reflection::Binder* System::Type::get_DefaultBinder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_DefaultBinder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Binder*, false>(nullptr, ___internal_method);
}
inline ::System::Type* System::Type::GetTypeFromHandle(::System::RuntimeTypeHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeFromHandle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, handle);
}
inline ::System::Type* System::Type::internal_from_handle(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "internal_from_handle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, handle);
}
inline bool System::Type::get_IsSzArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 128)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Type::FormatTypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "FormatTypeName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Type::FormatTypeName(bool serialization) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 129)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, serialization);
}
inline bool System::Type::get_IsInterface() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_IsInterface",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetType(::StringW typeName, bool throwOnError, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, typeName, throwOnError, ignoreCase);
}
inline ::System::Type* System::Type::GetType(::StringW typeName, bool throwOnError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, typeName, throwOnError);
}
inline ::System::Type* System::Type::GetType(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, typeName);
}
inline ::System::Type* System::Type::GetType(::StringW typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                             ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, typeName, assemblyResolver, typeResolver, throwOnError);
}
inline bool System::Type::op_Equality(::System::Type* left, ::System::Type* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Type::op_Inequality(::System::Type* left, ::System::Type* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::System::Type* System::Type::GetTypeFromCLSID(::System::Guid clsid, ::StringW server, bool throwOnError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "GetTypeFromCLSID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, clsid, server, throwOnError);
}
inline ::StringW System::Type::get_FullNameOrDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_FullNameOrDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Type::IsRuntimeImplemented() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "IsRuntimeImplemented",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Type::InternalGetNameIfAvailable(::ByRef<::System::Type*> rootCauseForFailure) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), 131)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, rootCauseForFailure);
}
inline ::StringW System::Type::get_InternalNameIfAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_InternalNameIfAvailable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Type::get_NameOrDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Type*>::get(), "get_NameOrDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* System::Type::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Type*>());
}
// Ctor Parameters []
constexpr ::System::Type::Type() {}
constexpr ::System::Reflection::BindingFlags System::Type::DefaultLookup{ static_cast<int32_t>(0x1c) };

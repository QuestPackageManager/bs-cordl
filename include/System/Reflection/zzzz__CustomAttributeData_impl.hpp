#pragma once
// IWYU pragma private; include "System/Reflection/CustomAttributeData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeNamedArgument_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeTypedArgument_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::CustomAttributeData_LazyCAttrData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData_LazyCAttrData::*)()>(
    &::System::Reflection::CustomAttributeData_LazyCAttrData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2ca08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData_LazyCAttrData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr ::System::Reflection::Assembly* const& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr void System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_set_assembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IntPtr& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::IntPtr const& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_set_data(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr uint32_t& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_data_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data_length;
}
constexpr uint32_t const& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_data_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data_length;
}
constexpr void System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_set_data_length(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data_length = value;
}
inline void System::Reflection::CustomAttributeData_LazyCAttrData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData_LazyCAttrData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::CustomAttributeData_LazyCAttrData* System::Reflection::CustomAttributeData_LazyCAttrData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::CustomAttributeData_LazyCAttrData*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::CustomAttributeData_LazyCAttrData::CustomAttributeData_LazyCAttrData() {}
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2c968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)(
    ::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::IntPtr, uint32_t)>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3d2c970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)(::System::Reflection::ConstructorInfo*)>(
    &::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3d23020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)(
    ::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*,
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*)>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3d233dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.ResolveArgumentsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::IntPtr, uint32_t, ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>,
                         ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>)>(&::System::Reflection::CustomAttributeData::ResolveArgumentsInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d2ca10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "ResolveArgumentsInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.ResolveArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)()>(
    &::System::Reflection::CustomAttributeData::ResolveArguments)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3d2ca14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                               "ResolveArguments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_Constructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (::System::Reflection::CustomAttributeData::*)()>(
    &::System::Reflection::CustomAttributeData::get_Constructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2cbc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_ConstructorArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* (
    ::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::get_ConstructorArguments)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3d2cbcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_NamedArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* (
    ::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::get_NamedArguments)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3d2cbe4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::Assembly*)>(&::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3d2cbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::MemberInfo*)>(&::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3d2cc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::RuntimeType*)>(
    &::System::Reflection::CustomAttributeData::GetCustomAttributesInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3d2ccb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::Module*)>(&::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3d2cd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::ParameterInfo*)>(&::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3d2cd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_AttributeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::CustomAttributeData::*)()>(
    &::System::Reflection::CustomAttributeData::get_AttributeType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3d2cdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                               "get_AttributeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::ToString)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x3d2cde8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::CustomAttributeData::*)(::System::Object*)>(
    &::System::Reflection::CustomAttributeData::Equals)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x3d2d368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::GetHashCode)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3d2d9e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ConstructorInfo*& System::Reflection::CustomAttributeData::__cordl_internal_get_ctorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctorInfo;
}
constexpr ::System::Reflection::ConstructorInfo* const& System::Reflection::CustomAttributeData::__cordl_internal_get_ctorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctorInfo;
}
constexpr void System::Reflection::CustomAttributeData::__cordl_internal_set_ctorInfo(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ctorInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*& System::Reflection::CustomAttributeData::__cordl_internal_get_ctorArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctorArgs;
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* const& System::Reflection::CustomAttributeData::__cordl_internal_get_ctorArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctorArgs;
}
constexpr void System::Reflection::CustomAttributeData::__cordl_internal_set_ctorArgs(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ctorArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*& System::Reflection::CustomAttributeData::__cordl_internal_get_namedArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namedArgs;
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* const& System::Reflection::CustomAttributeData::__cordl_internal_get_namedArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namedArgs;
}
constexpr void System::Reflection::CustomAttributeData::__cordl_internal_set_namedArgs(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namedArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::CustomAttributeData_LazyCAttrData*& System::Reflection::CustomAttributeData::__cordl_internal_get_lazyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lazyData;
}
constexpr ::System::Reflection::CustomAttributeData_LazyCAttrData* const& System::Reflection::CustomAttributeData::__cordl_internal_get_lazyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lazyData;
}
constexpr void System::Reflection::CustomAttributeData::__cordl_internal_set_lazyData(::System::Reflection::CustomAttributeData_LazyCAttrData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lazyData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Reflection::CustomAttributeData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Reflection::CustomAttributeData::_ctor(::System::Reflection::ConstructorInfo* ctorInfo, ::System::Reflection::Assembly* assembly, ::System::IntPtr data, uint32_t data_length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctorInfo, assembly, data, data_length);
}
inline void System::Reflection::CustomAttributeData::_ctor(::System::Reflection::ConstructorInfo* ctorInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctorInfo);
}
inline void System::Reflection::CustomAttributeData::_ctor(::System::Reflection::ConstructorInfo* ctorInfo,
                                                           ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs,
                                                           ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctorInfo, ctorArgs, namedArgs);
}
inline void System::Reflection::CustomAttributeData::ResolveArgumentsInternal(::System::Reflection::ConstructorInfo* ctor, ::System::Reflection::Assembly* assembly, ::System::IntPtr data,
                                                                              uint32_t data_length, ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> ctorArgs,
                                                                              ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> namedArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "ResolveArgumentsInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ctor, assembly, data, data_length, ctorArgs, namedArgs);
}
inline void System::Reflection::CustomAttributeData::ResolveArguments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                             "ResolveArguments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Reflection::CustomAttributeData::get_Constructor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* System::Reflection::CustomAttributeData::get_ConstructorArguments() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* System::Reflection::CustomAttributeData::get_NamedArguments() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::Assembly* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*, false>(nullptr, ___internal_method, target);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::MemberInfo* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*, false>(nullptr, ___internal_method, target);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributesInternal(::System::RuntimeType* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*, false>(nullptr, ___internal_method, target);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::Module* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*, false>(nullptr, ___internal_method, target);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::ParameterInfo* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "GetCustomAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*, false>(nullptr, ___internal_method, target);
}
inline ::System::Type* System::Reflection::CustomAttributeData::get_AttributeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(),
                                                                             "get_AttributeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::CustomAttributeData::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Reflection::CustomAttributeData::UnboxValues(::ArrayW<::System::Object*, ::Array<::System::Object*>*> values) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), "UnboxValues",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(nullptr, ___internal_method, values);
}
inline bool System::Reflection::CustomAttributeData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::CustomAttributeData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Reflection::CustomAttributeData* System::Reflection::CustomAttributeData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::CustomAttributeData*>());
}
inline ::System::Reflection::CustomAttributeData* System::Reflection::CustomAttributeData::New_ctor(::System::Reflection::ConstructorInfo* ctorInfo, ::System::Reflection::Assembly* assembly,
                                                                                                    ::System::IntPtr data, uint32_t data_length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::CustomAttributeData*>(ctorInfo, assembly, data, data_length));
}
inline ::System::Reflection::CustomAttributeData* System::Reflection::CustomAttributeData::New_ctor(::System::Reflection::ConstructorInfo* ctorInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::CustomAttributeData*>(ctorInfo));
}
inline ::System::Reflection::CustomAttributeData*
System::Reflection::CustomAttributeData::New_ctor(::System::Reflection::ConstructorInfo* ctorInfo,
                                                  ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs,
                                                  ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::CustomAttributeData*>(ctorInfo, ctorArgs, namedArgs));
}
// Ctor Parameters []
constexpr ::System::Reflection::CustomAttributeData::CustomAttributeData() {}

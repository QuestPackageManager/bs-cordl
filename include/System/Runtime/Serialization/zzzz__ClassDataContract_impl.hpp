#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ClassDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractPairKey_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataMember_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatClassReaderDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatClassWriterDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member::*)(
    ::System::Runtime::Serialization::DataMember*, ::StringW, int32_t)>(&::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f84070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member::_ctor(::System::Runtime::Serialization::DataMember* member, ::StringW ns, int32_t baseTypeIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member, ns, baseTypeIndex);
}
// Ctor Parameters [CppParam { name: "member", ty: "::System::Runtime::Serialization::DataMember*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ns", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "baseTypeIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member::ClassDataContractCriticalHelper_ClassDataContract_Member(
    ::System::Runtime::Serialization::DataMember* member, ::StringW ns, int32_t baseTypeIndex) noexcept {
  this->member = member;
  this->ns = ns;
  this->baseTypeIndex = baseTypeIndex;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member::ClassDataContractCriticalHelper_ClassDataContract_Member() {}
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::*)(
        ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member, ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member)>(
        &::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::Compare)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f84d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>::get(), "Compare",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::*)()>(
        &::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f84e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::setStaticF_Singleton(
    ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer* value) {
  ::cordl_internals::setStaticField<
      ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*, "Singleton",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>::get>(
      std::forward<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>(value));
}
inline ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*
System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::getStaticF_Singleton() {
  return ::cordl_internals::getStaticField<
      ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*, "Singleton",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>::get>();
}
inline int32_t System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::Compare(
    ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member x, ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>::get(), "Compare",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline void System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*
System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>"
constexpr System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::operator ::System::Collections::Generic::IComparer_1<
    ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>*
System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::
    i___System__Collections__Generic__IComparer_1___System__Runtime__Serialization__ClassDataContractCriticalHelper_ClassDataContract_Member_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::
    ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer() {}
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x5f7f430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Type*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5f7ff58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.EnsureIsReferenceImported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::EnsureIsReferenceImported)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5f8363c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "EnsureIsReferenceImported",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.ImportDataMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::ImportDataMembers)> {
  constexpr static std::size_t size = 0x10dc;
  constexpr static std::size_t addrs = 0x5f82560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "ImportDataMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.SetIfGetOnlyCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::DataMember*, bool)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIfGetOnlyCollection)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f839e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "SetIfGetOnlyCollection", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.SetIfMembersHaveConflict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*)>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIfMembersHaveConflict)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x5f83a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "SetIfMembersHaveConflict",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.GetStableNameAndSetHasDataContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Type*)>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetStableNameAndSetHasDataContract)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f81fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "GetStableNameAndSetHasDataContract",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.SetIsNonAttributedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIsNonAttributedType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f8233c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "SetIsNonAttributedType",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.IsMethodOverriding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MethodInfo*)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsMethodOverriding)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f83998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "IsMethodOverriding",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.EnsureMethodsImported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::EnsureMethodsImported)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5f81fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "EnsureMethodsImported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.IsValidExtensionDataSetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsValidExtensionDataSetMethod)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5f8407c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "IsValidExtensionDataSetMethod",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.IsValidCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>, ::System::Type*,
                         ::System::Reflection::MethodInfo*, ::ByRef<::System::Type*>)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsValidCallback)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5f844c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "IsValidCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Type*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_BaseContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::ClassDataContract* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_BaseContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_BaseContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.set_BaseContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_BaseContract)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5f823b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                    "set_BaseContract", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_Members
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* (
    ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_Members", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_OnSerializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnSerializing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f805d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_OnSerializing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_OnSerialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnSerialized)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f80610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_OnSerialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_OnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnDeserializing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f8064c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_OnDeserializing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_OnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnDeserialized)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f80688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_OnDeserialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_ExtensionDataSetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_ExtensionDataSetMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f806c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_ExtensionDataSetMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f84ad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_SerializationExceptionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_SerializationExceptionMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_SerializationExceptionMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_DeserializationExceptionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_DeserializationExceptionMessage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f80770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_DeserializationExceptionMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_IsISerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_IsISerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84be8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_HasDataContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_HasDataContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_HasDataContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_HasExtensionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_HasExtensionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_HasExtensionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_IsNonAttributedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_IsNonAttributedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_IsNonAttributedType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.GetISerializableConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetISerializableConstructor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f80878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "GetISerializableConstructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.GetNonAttributedTypeConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetNonAttributedTypeConstructor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5f809c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "GetNonAttributedTypeConstructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_XmlFormatWriterDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::XmlFormatClassWriterDelegate* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_XmlFormatWriterDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_XmlFormatWriterDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.set_XmlFormatWriterDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::XmlFormatClassWriterDelegate*)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_XmlFormatWriterDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "set_XmlFormatWriterDelegate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_XmlFormatReaderDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::XmlFormatClassReaderDelegate* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_XmlFormatReaderDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_XmlFormatReaderDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.set_XmlFormatReaderDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::XmlFormatClassReaderDelegate*)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_XmlFormatReaderDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "set_XmlFormatReaderDelegate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_ChildElementNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> (
    ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_ChildElementNamespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_ChildElementNamespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.set_ChildElementNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_ChildElementNamespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                    "set_ChildElementNamespaces", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_SerInfoCtorArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_SerInfoCtorArgs)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f84c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                                 "get_SerInfoCtorArgs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::ClassDataContract*& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_baseContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseContract;
}
constexpr ::System::Runtime::Serialization::ClassDataContract* const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_baseContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseContract;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_baseContract(::System::Runtime::Serialization::ClassDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseContract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* const&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_members(
    ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___members)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodInfo*& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_onSerializing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSerializing;
}
constexpr ::System::Reflection::MethodInfo* const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_onSerializing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSerializing;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_onSerializing(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSerializing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodInfo*& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_onSerialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSerialized;
}
constexpr ::System::Reflection::MethodInfo* const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_onSerialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSerialized;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_onSerialized(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSerialized)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodInfo*& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_onDeserializing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDeserializing;
}
constexpr ::System::Reflection::MethodInfo* const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_onDeserializing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDeserializing;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_onDeserializing(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDeserializing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodInfo*& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_onDeserialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDeserialized;
}
constexpr ::System::Reflection::MethodInfo* const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_onDeserialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onDeserialized;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_onDeserialized(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onDeserialized)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodInfo*& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_extensionDataSetMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensionDataSetMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_extensionDataSetMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensionDataSetMethod;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_extensionDataSetMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extensionDataSetMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_knownDataContracts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownDataContracts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_knownDataContracts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownDataContracts;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_knownDataContracts(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___knownDataContracts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_serializationExceptionMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationExceptionMessage;
}
constexpr ::StringW const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_serializationExceptionMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationExceptionMessage;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_serializationExceptionMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializationExceptionMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_isISerializable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isISerializable;
}
constexpr bool const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_isISerializable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isISerializable;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_isISerializable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isISerializable = value;
}
constexpr bool& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_isKnownTypeAttributeChecked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKnownTypeAttributeChecked;
}
constexpr bool const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_isKnownTypeAttributeChecked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKnownTypeAttributeChecked;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_isKnownTypeAttributeChecked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isKnownTypeAttributeChecked = value;
}
constexpr bool& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_isMethodChecked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMethodChecked;
}
constexpr bool const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_isMethodChecked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMethodChecked;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_isMethodChecked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMethodChecked = value;
}
constexpr bool& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_hasExtensionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasExtensionData;
}
constexpr bool const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_hasExtensionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasExtensionData;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_hasExtensionData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasExtensionData = value;
}
constexpr bool& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_isNonAttributedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNonAttributedType;
}
constexpr bool const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_isNonAttributedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNonAttributedType;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_isNonAttributedType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isNonAttributedType = value;
}
constexpr bool& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_hasDataContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDataContract;
}
constexpr bool const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_hasDataContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDataContract;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_hasDataContract(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasDataContract = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_childElementNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_childElementNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespaces;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_childElementNamespaces(
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___childElementNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::XmlFormatClassReaderDelegate*&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_xmlFormatReaderDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatReaderDelegate;
}
constexpr ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* const&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_xmlFormatReaderDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatReaderDelegate;
}
constexpr void
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_xmlFormatReaderDelegate(::System::Runtime::Serialization::XmlFormatClassReaderDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlFormatReaderDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::XmlFormatClassWriterDelegate*&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_xmlFormatWriterDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatWriterDelegate;
}
constexpr ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* const&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_xmlFormatWriterDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatWriterDelegate;
}
constexpr void
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_xmlFormatWriterDelegate(::System::Runtime::Serialization::XmlFormatClassWriterDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlFormatWriterDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_ContractNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_ContractNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractNamespaces;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_ContractNamespaces(
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ContractNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_MemberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNames;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_MemberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNames;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_MemberNames(
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MemberNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_MemberNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_MemberNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNamespaces;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_MemberNamespaces(
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MemberNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::setStaticF_serInfoCtorArgs(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "serInfoCtorArgs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get>(
      std::forward<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>(value));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::getStaticF_serInfoCtorArgs() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "serInfoCtorArgs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get>();
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns,
                                                                                                     ::ArrayW<::StringW, ::Array<::StringW>*> memberNames) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, ns, memberNames);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::EnsureIsReferenceImported(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "EnsureIsReferenceImported",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::ImportDataMembers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "ImportDataMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIfGetOnlyCollection(::System::Runtime::Serialization::DataMember* memberContract,
                                                                                                                      bool skipIfReadOnlyContract) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "SetIfGetOnlyCollection", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, memberContract, skipIfReadOnlyContract);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIfMembersHaveConflict(
    ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* members) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "SetIfMembersHaveConflict",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, members);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetStableNameAndSetHasDataContract(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "GetStableNameAndSetHasDataContract",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIsNonAttributedType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "SetIsNonAttributedType",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsMethodOverriding(::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "IsMethodOverriding",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::EnsureMethodsImported() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "EnsureMethodsImported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsValidExtensionDataSetMethod(
    ::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                  "IsValidExtensionDataSetMethod", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, method, parameters);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsValidCallback(
    ::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> parameters, ::System::Type* attributeType,
    ::System::Reflection::MethodInfo* currentCallback, ::ByRef<::System::Type*> prevAttributeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), "IsValidCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Type*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, method, parameters, attributeType, currentCallback, prevAttributeType);
}
inline ::System::Runtime::Serialization::ClassDataContract* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_BaseContract() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_BaseContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ClassDataContract*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_BaseContract(::System::Runtime::Serialization::ClassDataContract* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                  "set_BaseContract", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_Members() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_Members", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnSerializing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_OnSerializing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnSerialized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_OnSerialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnDeserializing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_OnDeserializing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnDeserialized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_OnDeserialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_ExtensionDataSetMethod() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_ExtensionDataSetMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_KnownDataContracts() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*, false>(
      this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_SerializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_SerializationExceptionMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_DeserializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_DeserializationExceptionMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_IsISerializable() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_HasDataContract() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_HasDataContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_HasExtensionData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_HasExtensionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_IsNonAttributedType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_IsNonAttributedType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetISerializableConstructor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "GetISerializableConstructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetNonAttributedTypeConstructor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "GetNonAttributedTypeConstructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_XmlFormatWriterDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_XmlFormatWriterDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_XmlFormatWriterDelegate(::System::Runtime::Serialization::XmlFormatClassWriterDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                 "set_XmlFormatWriterDelegate", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_XmlFormatReaderDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_XmlFormatReaderDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_XmlFormatReaderDelegate(::System::Runtime::Serialization::XmlFormatClassReaderDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                 "set_XmlFormatReaderDelegate", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_ChildElementNamespaces() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_ChildElementNamespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_ChildElementNamespaces(
    ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                  "set_ChildElementNamespaces", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_SerInfoCtorArgs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>::get(),
                                               "get_SerInfoCtorArgs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(nullptr, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(type));
}
inline ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns,
                                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> memberNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(type, ns, memberNames));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::ClassDataContract_ClassDataContractCriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::ClassDataContract_DataMemberComparer::*)(
    ::System::Runtime::Serialization::DataMember*, ::System::Runtime::Serialization::DataMember*)>(&::System::Runtime::Serialization::ClassDataContract_DataMemberComparer::Compare)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f84e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_DataMemberComparer::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_DataMemberComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f84eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ClassDataContract_DataMemberComparer::setStaticF_Singleton(::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*, "Singleton",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>::get>(
      std::forward<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>(value));
}
inline ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* System::Runtime::Serialization::ClassDataContract_DataMemberComparer::getStaticF_Singleton() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*, "Singleton",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>::get>();
}
inline int32_t System::Runtime::Serialization::ClassDataContract_DataMemberComparer::Compare(::System::Runtime::Serialization::DataMember* x, ::System::Runtime::Serialization::DataMember* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline void System::Runtime::Serialization::ClassDataContract_DataMemberComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* System::Runtime::Serialization::ClassDataContract_DataMemberComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>"
constexpr System::Runtime::Serialization::ClassDataContract_DataMemberComparer::operator ::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>*
System::Runtime::Serialization::ClassDataContract_DataMemberComparer::i___System__Collections__Generic__IComparer_1___System__Runtime__Serialization__DataMember__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Runtime::Serialization::DataMember*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer::ClassDataContract_DataMemberComparer() {}
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract::*)(::System::Type*)>(
    &::System::Runtime::Serialization::ClassDataContract::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f7f3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract::*)(
    ::System::Type*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Runtime::Serialization::ClassDataContract::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f7fec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.InitClassDataContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::InitClassDataContract)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f7fe30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "InitClassDataContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_BaseContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ClassDataContract* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_BaseContract)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f80278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_BaseContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_Members
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* (
    ::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::get_Members)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f80290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_Members", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_ChildElementNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> (
    ::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::get_ChildElementNamespaces)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f802a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_ChildElementNamespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_OnSerializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_OnSerializing)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f805b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_OnSerializing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_OnSerialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_OnSerialized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f805ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_OnSerialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_OnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_OnDeserializing)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f80628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_OnDeserializing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_OnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_OnDeserialized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f80664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_OnDeserialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_ExtensionDataSetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_ExtensionDataSetMethod)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f806a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_ExtensionDataSetMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f806dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_IsISerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_IsISerializable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f806f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_IsNonAttributedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_IsNonAttributedType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f80714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_IsNonAttributedType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_HasExtensionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_HasExtensionData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f8072c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_HasExtensionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_SerializationExceptionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_SerializationExceptionMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f80744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                 "get_SerializationExceptionMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_DeserializationExceptionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_DeserializationExceptionMessage)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f8075c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                 "get_DeserializationExceptionMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_IsReadOnlyContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_IsReadOnlyContract)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f80840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_IsReadOnlyContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.GetISerializableConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::GetISerializableConstructor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f80864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "GetISerializableConstructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.GetNonAttributedTypeConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::GetNonAttributedTypeConstructor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f809ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "GetNonAttributedTypeConstructor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_XmlFormatWriterDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::XmlFormatClassWriterDelegate* (
    ::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::get_XmlFormatWriterDelegate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f80b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_XmlFormatWriterDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_XmlFormatReaderDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::XmlFormatClassReaderDelegate* (
    ::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::get_XmlFormatReaderDelegate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5f80cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "get_XmlFormatReaderDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.CreateClassDataContractForKeyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::ClassDataContract* (*)(::System::Type*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
        &::System::Runtime::Serialization::ClassDataContract::CreateClassDataContractForKeyValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f80e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                 "CreateClassDataContractForKeyValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.CheckAndAddMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*, ::System::Runtime::Serialization::DataMember*,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataMember*>*)>(&::System::Runtime::Serialization::ClassDataContract::CheckAndAddMember)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5f80ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "CheckAndAddMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataMember*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.GetChildNamespaceToDeclare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlDictionaryString* (*)(::System::Runtime::Serialization::DataContract*, ::System::Type*, ::System::Xml::XmlDictionary*)>(
        &::System::Runtime::Serialization::ClassDataContract::GetChildNamespaceToDeclare)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5f811e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "GetChildNamespaceToDeclare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.IsNonAttributedTypeValidForSerialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(
    &::System::Runtime::Serialization::ClassDataContract::IsNonAttributedTypeValidForSerialization)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5f81360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "IsNonAttributedTypeValidForSerialization",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.CreateChildElementNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> (
    ::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::CreateChildElementNamespaces)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5f803b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                               "CreateChildElementNamespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ClassDataContract::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::ClassDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f8173c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::ClassDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::ClassDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f81794;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)(
    ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::ClassDataContract::Equals)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x5f81808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.IsEveryDataMemberOptional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Runtime::Serialization::DataMember*>*)>(&::System::Runtime::Serialization::ClassDataContract::IsEveryDataMemberOptional)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5f81cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "IsEveryDataMemberOptional", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Runtime::Serialization::DataMember*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f81f94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_ContractNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_ContractNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractNamespaces;
}
constexpr void
System::Runtime::Serialization::ClassDataContract::__cordl_internal_set_ContractNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ContractNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_MemberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNames;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_MemberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNames;
}
constexpr void System::Runtime::Serialization::ClassDataContract::__cordl_internal_set_MemberNames(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MemberNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_MemberNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_MemberNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNamespaces;
}
constexpr void
System::Runtime::Serialization::ClassDataContract::__cordl_internal_set_MemberNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MemberNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>&
System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_childElementNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_childElementNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespaces;
}
constexpr void
System::Runtime::Serialization::ClassDataContract::__cordl_internal_set_childElementNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___childElementNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper* const& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Runtime::Serialization::ClassDataContract::__cordl_internal_set_helper(::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___helper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::ClassDataContract::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::ClassDataContract::_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, ns, memberNames);
}
inline void System::Runtime::Serialization::ClassDataContract::InitClassDataContract() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "InitClassDataContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract* System::Runtime::Serialization::ClassDataContract::get_BaseContract() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_BaseContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ClassDataContract*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* System::Runtime::Serialization::ClassDataContract::get_Members() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_Members", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> System::Runtime::Serialization::ClassDataContract::get_ChildElementNamespaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_ChildElementNamespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_OnSerializing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_OnSerializing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_OnSerialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_OnSerialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_OnDeserializing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_OnDeserializing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_OnDeserialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_OnDeserialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_ExtensionDataSetMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_ExtensionDataSetMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::ClassDataContract::get_KnownDataContracts() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*, false>(
      this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract::get_IsISerializable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract::get_IsNonAttributedType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_IsNonAttributedType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract::get_HasExtensionData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_HasExtensionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ClassDataContract::get_SerializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "get_SerializationExceptionMessage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ClassDataContract::get_DeserializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                               "get_DeserializationExceptionMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract::get_IsReadOnlyContract() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_IsReadOnlyContract", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::ClassDataContract::GetISerializableConstructor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "GetISerializableConstructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::ClassDataContract::GetNonAttributedTypeConstructor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "GetNonAttributedTypeConstructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* System::Runtime::Serialization::ClassDataContract::get_XmlFormatWriterDelegate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_XmlFormatWriterDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* System::Runtime::Serialization::ClassDataContract::get_XmlFormatReaderDelegate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "get_XmlFormatReaderDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract*
System::Runtime::Serialization::ClassDataContract::CreateClassDataContractForKeyValue(::System::Type* type, ::System::Xml::XmlDictionaryString* ns,
                                                                                      ::ArrayW<::StringW, ::Array<::StringW>*> memberNames) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                               "CreateClassDataContractForKeyValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ClassDataContract*, false>(nullptr, ___internal_method, type, ns, memberNames);
}
inline void
System::Runtime::Serialization::ClassDataContract::CheckAndAddMember(::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* members,
                                                                     ::System::Runtime::Serialization::DataMember* memberContract,
                                                                     ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataMember*>* memberNamesTable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "CheckAndAddMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataMember*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataMember*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, members, memberContract, memberNamesTable);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::ClassDataContract::GetChildNamespaceToDeclare(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                                         ::System::Type* childType, ::System::Xml::XmlDictionary* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "GetChildNamespaceToDeclare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*, false>(nullptr, ___internal_method, dataContract, childType, dictionary);
}
inline bool System::Runtime::Serialization::ClassDataContract::IsNonAttributedTypeValidForSerialization(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "IsNonAttributedTypeValidForSerialization",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> System::Runtime::Serialization::ClassDataContract::CreateChildElementNamespaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                                                             "CreateChildElementNamespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                             ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::ClassDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                         ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, context);
}
inline bool
System::Runtime::Serialization::ClassDataContract::Equals(::System::Object* other,
                                                          ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other, checkedContracts);
}
inline bool System::Runtime::Serialization::ClassDataContract::IsEveryDataMemberOptional(::System::Collections::Generic::IEnumerable_1<::System::Runtime::Serialization::DataMember*>* dataMembers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), "IsEveryDataMemberOptional", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Runtime::Serialization::DataMember*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dataMembers);
}
inline int32_t System::Runtime::Serialization::ClassDataContract::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ClassDataContract*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract* System::Runtime::Serialization::ClassDataContract::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ClassDataContract*>(type));
}
inline ::System::Runtime::Serialization::ClassDataContract* System::Runtime::Serialization::ClassDataContract::New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns,
                                                                                                                        ::ArrayW<::StringW, ::Array<::StringW>*> memberNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ClassDataContract*>(type, ns, memberNames));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ClassDataContract::ClassDataContract() {}

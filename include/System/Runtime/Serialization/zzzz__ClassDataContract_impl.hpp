#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ClassDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member::*)(
    ::System::Runtime::Serialization::DataMember*, ::StringW, int32_t)>(&::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61333b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataMember*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member::_ctor(::System::Runtime::Serialization::DataMember* member, ::StringW ns, int32_t baseTypeIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataMember*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, member, ns, baseTypeIndex);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::*)(
    ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member, ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member)>(
    &::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::Compare)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x61340d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>(),
                                                             { "Compare",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::*)()>(
    &::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x613414c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::setStaticF_Singleton(
    ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*, "Singleton",
                                    ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>(
      std::forward<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>(value));
}
inline ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*
System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::getStaticF_Singleton() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*, "Singleton",
                                           ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>();
}
inline int32_t System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::Compare(
    ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member x, ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>(),
                                                           { "Compare",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_Member>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*
System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ClassDataContractCriticalHelper_ClassDataContract_DataMemberConflictComparer*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x612e770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Type*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::StringW>)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x612f298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.EnsureIsReferenceImported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::EnsureIsReferenceImported)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x613297c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                           { "EnsureIsReferenceImported", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.ImportDataMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::ImportDataMembers)> {
  constexpr static std::size_t size = 0x10dc;
  constexpr static std::size_t addrs = 0x61318a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "ImportDataMembers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.SetIfGetOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::DataMember*, bool)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIfGetOnlyCollection)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6132d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                             { "SetIfGetOnlyCollection", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataMember*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.SetIfMembersHaveConflict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*)>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIfMembersHaveConflict)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x6132db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                { "SetIfMembersHaveConflict", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.GetStableNameAndSetHasDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetStableNameAndSetHasDataContract)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61312e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                           { "GetStableNameAndSetHasDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.SetIsNonAttributedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIsNonAttributedType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x613167c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                           { "SetIsNonAttributedType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.IsMethodOverriding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodInfo*)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsMethodOverriding)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6132cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                           { "IsMethodOverriding", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.EnsureMethodsImported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::EnsureMethodsImported)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x61312fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "EnsureMethodsImported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.IsValidExtensionDataSetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>)>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsValidExtensionDataSetMethod)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x61333bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                            { "IsValidExtensionDataSetMethod", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.IsValidCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>, ::System::Type*, ::System::Reflection::MethodInfo*,
                                                                ::by_ref<::System::Type*>)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsValidCallback)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x6133804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                { "IsValidCallback",
                                                  {},
                                                  { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                                                    ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_BaseContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ClassDataContract* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_BaseContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6133e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_BaseContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.set_BaseContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_BaseContract)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x61316f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                           { "set_BaseContract", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* (
    ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6133e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_Members", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_OnSerializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnSerializing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612f914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_OnSerializing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_OnSerialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnSerialized)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612f950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_OnSerialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_OnDeserializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnDeserializing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612f98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_OnDeserializing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnDeserialized)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612f9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_OnDeserialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_ExtensionDataSetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_ExtensionDataSetMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612fa04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_ExtensionDataSetMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6133e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                            { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_SerializationExceptionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_SerializationExceptionMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6133f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_SerializationExceptionMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_DeserializationExceptionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_DeserializationExceptionMessage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x612fab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_DeserializationExceptionMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_IsISerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_IsISerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6133f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                            { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_HasDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_HasDataContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6133f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_HasDataContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_HasExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_HasExtensionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6133f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_HasExtensionData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_IsNonAttributedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_IsNonAttributedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6133f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_IsNonAttributedType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.GetISerializableConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetISerializableConstructor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x612fbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "GetISerializableConstructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.GetNonAttributedTypeConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetNonAttributedTypeConstructor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x612fd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "GetNonAttributedTypeConstructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_XmlFormatWriterDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlFormatClassWriterDelegate* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_XmlFormatWriterDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61340a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_XmlFormatWriterDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.set_XmlFormatWriterDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::XmlFormatClassWriterDelegate*)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_XmlFormatWriterDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61340b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                             { "set_XmlFormatWriterDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_XmlFormatReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlFormatClassReaderDelegate* (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_XmlFormatReaderDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61340b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_XmlFormatReaderDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.set_XmlFormatReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::XmlFormatClassReaderDelegate*)>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_XmlFormatReaderDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61340c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                             { "set_XmlFormatReaderDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_ChildElementNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::XmlDictionaryString*> (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_ChildElementNamespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61340c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_ChildElementNamespaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.set_ChildElementNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::*)(::ArrayW<::System::Xml::XmlDictionaryString*>)>(
    &::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_ChildElementNamespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61340d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                           { "set_ChildElementNamespaces", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper.get_SerInfoCtorArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)()>(&::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_SerInfoCtorArgs)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6133f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_SerInfoCtorArgs", {}, {} })));
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
  this->___baseContract = value;
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
  this->___members = value;
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
  this->___onSerializing = value;
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
  this->___onSerialized = value;
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
  this->___onDeserializing = value;
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
  this->___onDeserialized = value;
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
  this->___extensionDataSetMethod = value;
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
  this->___knownDataContracts = value;
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
  this->___serializationExceptionMessage = value;
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
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_childElementNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_childElementNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespaces;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_childElementNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childElementNamespaces = value;
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
  this->___xmlFormatReaderDelegate = value;
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
  this->___xmlFormatWriterDelegate = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_ContractNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_ContractNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractNamespaces;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_ContractNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ContractNamespaces = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_MemberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNames;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_MemberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNames;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_MemberNames(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MemberNames = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_MemberNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_get_MemberNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNamespaces;
}
constexpr void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::__cordl_internal_set_MemberNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MemberNamespaces = value;
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::setStaticF_serInfoCtorArgs(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "serInfoCtorArgs", ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(
      std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::getStaticF_serInfoCtorArgs() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "serInfoCtorArgs", ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::ArrayW<::StringW> memberNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, ns, memberNames);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::EnsureIsReferenceImported(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                         { "EnsureIsReferenceImported", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::ImportDataMembers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "ImportDataMembers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIfGetOnlyCollection(::System::Runtime::Serialization::DataMember* memberContract,
                                                                                                                      bool skipIfReadOnlyContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                           { "SetIfGetOnlyCollection", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataMember*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, memberContract, skipIfReadOnlyContract);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIfMembersHaveConflict(
    ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* members) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                              { "SetIfMembersHaveConflict", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, members);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetStableNameAndSetHasDataContract(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                         { "GetStableNameAndSetHasDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::SetIsNonAttributedType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                         { "SetIsNonAttributedType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsMethodOverriding(::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                         { "IsMethodOverriding", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::EnsureMethodsImported() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "EnsureMethodsImported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsValidExtensionDataSetMethod(::System::Reflection::MethodInfo* method,
                                                                                                                             ::ArrayW<::System::Reflection::ParameterInfo*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                          { "IsValidExtensionDataSetMethod", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, method, parameters);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::IsValidCallback(::System::Reflection::MethodInfo* method,
                                                                                                               ::ArrayW<::System::Reflection::ParameterInfo*> parameters, ::System::Type* attributeType,
                                                                                                               ::System::Reflection::MethodInfo* currentCallback,
                                                                                                               ::by_ref<::System::Type*> prevAttributeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                              { "IsValidCallback",
                                                {},
                                                { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                                                  ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, method, parameters, attributeType, currentCallback, prevAttributeType);
}
inline ::System::Runtime::Serialization::ClassDataContract* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_BaseContract() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_BaseContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ClassDataContract*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_BaseContract(::System::Runtime::Serialization::ClassDataContract* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                         { "set_BaseContract", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_Members() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_Members", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnSerializing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_OnSerializing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnSerialized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_OnSerialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnDeserializing() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_OnDeserializing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_OnDeserialized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_OnDeserialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_ExtensionDataSetMethod() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_ExtensionDataSetMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_KnownDataContracts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_SerializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_SerializationExceptionMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_DeserializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_DeserializationExceptionMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_IsISerializable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_HasDataContract() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_HasDataContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_HasExtensionData() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_HasExtensionData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_IsNonAttributedType() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_IsNonAttributedType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetISerializableConstructor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "GetISerializableConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::GetNonAttributedTypeConstructor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "GetNonAttributedTypeConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_XmlFormatWriterDelegate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_XmlFormatWriterDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_XmlFormatWriterDelegate(::System::Runtime::Serialization::XmlFormatClassWriterDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                           { "set_XmlFormatWriterDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_XmlFormatReaderDelegate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_XmlFormatReaderDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_XmlFormatReaderDelegate(::System::Runtime::Serialization::XmlFormatClassReaderDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                           { "set_XmlFormatReaderDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Xml::XmlDictionaryString*> System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_ChildElementNamespaces() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_ChildElementNamespaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlDictionaryString*>>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::set_ChildElementNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(),
                                                                                         { "set_ChildElementNamespaces", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Type*> System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::get_SerInfoCtorArgs() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(), { "get_SerInfoCtorArgs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(type));
}
inline ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*
System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::ArrayW<::StringW> memberNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper*>(type, ns, memberNames));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ClassDataContract_ClassDataContractCriticalHelper::ClassDataContract_ClassDataContractCriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ClassDataContract_DataMemberComparer::*)(
    ::System::Runtime::Serialization::DataMember*, ::System::Runtime::Serialization::DataMember*)>(&::System::Runtime::Serialization::ClassDataContract_DataMemberComparer::Compare)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61341a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>(),
                                         { "Compare", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataMember*>(), ::i2c::type_of<::System::Runtime::Serialization::DataMember*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract_DataMemberComparer::*)()>(
    &::System::Runtime::Serialization::ClassDataContract_DataMemberComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61341f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ClassDataContract_DataMemberComparer::setStaticF_Singleton(::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*, "Singleton", ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>(
      std::forward<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>(value));
}
inline ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* System::Runtime::Serialization::ClassDataContract_DataMemberComparer::getStaticF_Singleton() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*, "Singleton",
                                           ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>();
}
inline int32_t System::Runtime::Serialization::ClassDataContract_DataMemberComparer::Compare(::System::Runtime::Serialization::DataMember* x, ::System::Runtime::Serialization::DataMember* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>(),
                                       { "Compare", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataMember*>(), ::i2c::type_of<::System::Runtime::Serialization::DataMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void System::Runtime::Serialization::ClassDataContract_DataMemberComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract_DataMemberComparer* System::Runtime::Serialization::ClassDataContract_DataMemberComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ClassDataContract_DataMemberComparer*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract::*)(::System::Type*)>(&::System::Runtime::Serialization::ClassDataContract::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x612e6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract::*)(::System::Type*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::StringW>)>(
    &::System::Runtime::Serialization::ClassDataContract::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x612f204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.InitClassDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::InitClassDataContract)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x612f170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "InitClassDataContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_BaseContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ClassDataContract* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_BaseContract)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612f5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_BaseContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* (
    ::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::get_Members)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612f5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_Members", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_ChildElementNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::XmlDictionaryString*> (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_ChildElementNamespaces)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x612f5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_ChildElementNamespaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_OnSerializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_OnSerializing)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x612f8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_OnSerializing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_OnSerialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_OnSerialized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x612f92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_OnSerialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_OnDeserializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_OnDeserializing)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x612f968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_OnDeserializing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_OnDeserialized)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x612f9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_OnDeserialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_ExtensionDataSetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_ExtensionDataSetMethod)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x612f9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_ExtensionDataSetMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x612fa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_IsISerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::get_IsISerializable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x612fa38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_IsNonAttributedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_IsNonAttributedType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612fa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_IsNonAttributedType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_HasExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::get_HasExtensionData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612fa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_HasExtensionData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_SerializationExceptionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_SerializationExceptionMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612fa84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_SerializationExceptionMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_DeserializationExceptionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_DeserializationExceptionMessage)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x612fa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_DeserializationExceptionMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_IsReadOnlyContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::get_IsReadOnlyContract)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x612fb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_IsReadOnlyContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.GetISerializableConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::GetISerializableConstructor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x612fba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "GetISerializableConstructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.GetNonAttributedTypeConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::GetNonAttributedTypeConstructor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x612fcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "GetNonAttributedTypeConstructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_XmlFormatWriterDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::XmlFormatClassWriterDelegate* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_XmlFormatWriterDelegate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x612fe84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_XmlFormatWriterDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.get_XmlFormatReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::XmlFormatClassReaderDelegate* (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::get_XmlFormatReaderDelegate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x612ffec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_XmlFormatReaderDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.CreateClassDataContractForKeyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ClassDataContract* (*)(::System::Type*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::StringW>)>(
    &::System::Runtime::Serialization::ClassDataContract::CreateClassDataContractForKeyValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6130188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
            { "CreateClassDataContractForKeyValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.CheckAndAddMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*, ::System::Runtime::Serialization::DataMember*,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataMember*>*)>(
    &::System::Runtime::Serialization::ClassDataContract::CheckAndAddMember)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x61301fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                             { "CheckAndAddMember",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::DataMember*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataMember*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.GetChildNamespaceToDeclare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (*)(::System::Runtime::Serialization::DataContract*, ::System::Type*, ::System::Xml::XmlDictionary*)>(
    &::System::Runtime::Serialization::ClassDataContract::GetChildNamespaceToDeclare)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6130520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                            { "GetChildNamespaceToDeclare",
                              {},
                              { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.IsNonAttributedTypeValidForSerialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Serialization::ClassDataContract::IsNonAttributedTypeValidForSerialization)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x61306a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                                                           { "IsNonAttributedTypeValidForSerialization", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.CreateChildElementNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::XmlDictionaryString*> (::System::Runtime::Serialization::ClassDataContract::*)()>(
    &::System::Runtime::Serialization::ClassDataContract::CreateChildElementNamespaces)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x612f6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "CreateChildElementNamespaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                     ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::ClassDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6130a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::ClassDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                                  ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::ClassDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6130ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)(
    ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::ClassDataContract::Equals)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x6130b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.IsEveryDataMemberOptional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ClassDataContract::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Runtime::Serialization::DataMember*>*)>(&::System::Runtime::Serialization::ClassDataContract::IsEveryDataMemberOptional)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6131008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                         { "IsEveryDataMemberOptional", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Runtime::Serialization::DataMember*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataContract.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ClassDataContract::*)()>(&::System::Runtime::Serialization::ClassDataContract::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61312d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_ContractNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_ContractNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractNamespaces;
}
constexpr void System::Runtime::Serialization::ClassDataContract::__cordl_internal_set_ContractNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ContractNamespaces = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_MemberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNames;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_MemberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNames;
}
constexpr void System::Runtime::Serialization::ClassDataContract::__cordl_internal_set_MemberNames(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MemberNames = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_MemberNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_MemberNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberNamespaces;
}
constexpr void System::Runtime::Serialization::ClassDataContract::__cordl_internal_set_MemberNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MemberNamespaces = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_childElementNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::ClassDataContract::__cordl_internal_get_childElementNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespaces;
}
constexpr void System::Runtime::Serialization::ClassDataContract::__cordl_internal_set_childElementNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childElementNamespaces = value;
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
  this->___helper = value;
}
inline void System::Runtime::Serialization::ClassDataContract::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::ClassDataContract::_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::ArrayW<::StringW> memberNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, ns, memberNames);
}
inline void System::Runtime::Serialization::ClassDataContract::InitClassDataContract() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "InitClassDataContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract* System::Runtime::Serialization::ClassDataContract::get_BaseContract() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_BaseContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ClassDataContract*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* System::Runtime::Serialization::ClassDataContract::get_Members() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_Members", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>(this, ___internal_method);
}
inline ::ArrayW<::System::Xml::XmlDictionaryString*> System::Runtime::Serialization::ClassDataContract::get_ChildElementNamespaces() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_ChildElementNamespaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlDictionaryString*>>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_OnSerializing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_OnSerializing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_OnSerialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_OnSerialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_OnDeserializing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_OnDeserializing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_OnDeserialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_OnDeserialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::ClassDataContract::get_ExtensionDataSetMethod() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_ExtensionDataSetMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::ClassDataContract::get_KnownDataContracts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract::get_IsISerializable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract::get_IsNonAttributedType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_IsNonAttributedType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract::get_HasExtensionData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_HasExtensionData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ClassDataContract::get_SerializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_SerializationExceptionMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ClassDataContract::get_DeserializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_DeserializationExceptionMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ClassDataContract::get_IsReadOnlyContract() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_IsReadOnlyContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::ClassDataContract::GetISerializableConstructor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "GetISerializableConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::ClassDataContract::GetNonAttributedTypeConstructor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "GetNonAttributedTypeConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatClassWriterDelegate* System::Runtime::Serialization::ClassDataContract::get_XmlFormatWriterDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_XmlFormatWriterDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassWriterDelegate*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatClassReaderDelegate* System::Runtime::Serialization::ClassDataContract::get_XmlFormatReaderDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "get_XmlFormatReaderDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatClassReaderDelegate*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract*
System::Runtime::Serialization::ClassDataContract::CreateClassDataContractForKeyValue(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::ArrayW<::StringW> memberNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
          { "CreateClassDataContractForKeyValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ClassDataContract*>(nullptr, ___internal_method, type, ns, memberNames);
}
inline void
System::Runtime::Serialization::ClassDataContract::CheckAndAddMember(::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* members,
                                                                     ::System::Runtime::Serialization::DataMember* memberContract,
                                                                     ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataMember*>* memberNamesTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                          { "CheckAndAddMember",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>(), ::i2c::type_of<::System::Runtime::Serialization::DataMember*>(),
                              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataMember*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, members, memberContract, memberNamesTable);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::ClassDataContract::GetChildNamespaceToDeclare(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                                         ::System::Type* childType, ::System::Xml::XmlDictionary* dictionary) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                       { "GetChildNamespaceToDeclare",
                                         {},
                                         { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Xml::XmlDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(nullptr, ___internal_method, dataContract, childType, dictionary);
}
inline bool System::Runtime::Serialization::ClassDataContract::IsNonAttributedTypeValidForSerialization(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                                                                         { "IsNonAttributedTypeValidForSerialization", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Xml::XmlDictionaryString*> System::Runtime::Serialization::ClassDataContract::CreateChildElementNamespaces() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), { "CreateChildElementNamespaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlDictionaryString*>>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                             ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::ClassDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                         ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, context);
}
inline bool
System::Runtime::Serialization::ClassDataContract::Equals(::System::Object* other,
                                                          ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, checkedContracts);
}
inline bool System::Runtime::Serialization::ClassDataContract::IsEveryDataMemberOptional(::System::Collections::Generic::IEnumerable_1<::System::Runtime::Serialization::DataMember*>* dataMembers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(),
                                       { "IsEveryDataMemberOptional", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Runtime::Serialization::DataMember*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dataMembers);
}
inline int32_t System::Runtime::Serialization::ClassDataContract::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ClassDataContract*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataContract* System::Runtime::Serialization::ClassDataContract::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ClassDataContract*>(type));
}
inline ::System::Runtime::Serialization::ClassDataContract* System::Runtime::Serialization::ClassDataContract::New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* ns,
                                                                                                                        ::ArrayW<::StringW> memberNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ClassDataContract*>(type, ns, memberNames));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ClassDataContract::ClassDataContract() {}

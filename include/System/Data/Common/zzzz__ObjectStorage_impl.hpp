#pragma once
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/Common/zzzz__ObjectStorage_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/Common/zzzz__ObjectStorage_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializerFactory_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializer_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::Common::__ObjectStorage__Families::__ObjectStorage__Families(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::Common::__ObjectStorage__Families::__ObjectStorage__Families() {}
constexpr ::System::Data::Common::__ObjectStorage__Families System::Data::Common::__ObjectStorage__Families::DATETIME{ static_cast<int32_t>(0x0) };
constexpr ::System::Data::Common::__ObjectStorage__Families System::Data::Common::__ObjectStorage__Families::NUMBER{ static_cast<int32_t>(0x1) };
constexpr ::System::Data::Common::__ObjectStorage__Families System::Data::Common::__ObjectStorage__Families::STRING{ static_cast<int32_t>(0x2) };
constexpr ::System::Data::Common::__ObjectStorage__Families System::Data::Common::__ObjectStorage__Families::BOOLEAN{ static_cast<int32_t>(0x3) };
constexpr ::System::Data::Common::__ObjectStorage__Families System::Data::Common::__ObjectStorage__Families::ARRAY{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::Data::Common::__ObjectStorage__TempAssemblyComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::__ObjectStorage__TempAssemblyComparer::*)()>(
    &::System::Data::Common::__ObjectStorage__TempAssemblyComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c43c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__ObjectStorage__TempAssemblyComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::__ObjectStorage__TempAssemblyComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Common::__ObjectStorage__TempAssemblyComparer::*)(
    ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
    ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>)>(&::System::Data::Common::__ObjectStorage__TempAssemblyComparer::Equals)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2c43c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__ObjectStorage__TempAssemblyComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::__ObjectStorage__TempAssemblyComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::__ObjectStorage__TempAssemblyComparer::*)(
    ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>)>(&::System::Data::Common::__ObjectStorage__TempAssemblyComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c43d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__ObjectStorage__TempAssemblyComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>"
constexpr System::Data::Common::__ObjectStorage__TempAssemblyComparer::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*
System::Data::Common::__ObjectStorage__TempAssemblyComparer::
    i___System__Collections__Generic__IEqualityComparer_1___System__Collections__Generic__KeyValuePair_2___System__Type____System__Xml__Serialization__XmlRootAttribute___() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*>(
      static_cast<void*>(this));
}
inline void System::Data::Common::__ObjectStorage__TempAssemblyComparer::setStaticF_s_default(
    ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*, "s_default",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__ObjectStorage__TempAssemblyComparer*>::get>(
      std::forward<::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*
System::Data::Common::__ObjectStorage__TempAssemblyComparer::getStaticF_s_default() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*, "s_default",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__ObjectStorage__TempAssemblyComparer*>::get>();
}
inline ::System::Data::Common::__ObjectStorage__TempAssemblyComparer* System::Data::Common::__ObjectStorage__TempAssemblyComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Common::__ObjectStorage__TempAssemblyComparer*>());
}
inline void System::Data::Common::__ObjectStorage__TempAssemblyComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__ObjectStorage__TempAssemblyComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::Common::__ObjectStorage__TempAssemblyComparer::Equals(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> x,
                                                                                ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__ObjectStorage__TempAssemblyComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t
System::Data::Common::__ObjectStorage__TempAssemblyComparer::GetHashCode(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__ObjectStorage__TempAssemblyComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Data::Common::__ObjectStorage__TempAssemblyComparer::__ObjectStorage__TempAssemblyComparer() {}
//  Writing Method size for method: ::System::Data::Common::ObjectStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::ObjectStorage::*)(::System::Data::DataColumn*, ::System::Type*)>(
    &::System::Data::Common::ObjectStorage::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2c348f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Aggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Data::Common::ObjectStorage::*)(::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Data::AggregateType)>(&::System::Data::Common::ObjectStorage::Aggregate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c3ead8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::ObjectStorage::*)(int32_t, int32_t)>(
    &::System::Data::Common::ObjectStorage::Compare)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2c3eb08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::ObjectStorage::*)(int32_t, ::System::Object*)>(
    &::System::Data::Common::ObjectStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2c3f174;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::ObjectStorage::*)(::System::Object*, ::System::Object*)>(
    &::System::Data::Common::ObjectStorage::CompareTo)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2c3f358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.CompareWithFamilies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::ObjectStorage::*)(::System::Object*, ::System::Object*)>(
    &::System::Data::Common::ObjectStorage::CompareWithFamilies)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x2c3ecbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                               "CompareWithFamilies", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::ObjectStorage::*)(int32_t, int32_t)>(&::System::Data::Common::ObjectStorage::Copy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c3f624;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::ObjectStorage::*)(int32_t)>(&::System::Data::Common::ObjectStorage::Get)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c3f698;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.GetFamily
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Common::__ObjectStorage__Families (::System::Data::Common::ObjectStorage::*)(::System::Type*)>(
    &::System::Data::Common::ObjectStorage::GetFamily)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c3f530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "GetFamily", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Common::ObjectStorage::*)(int32_t)>(&::System::Data::Common::ObjectStorage::IsNull)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c3f6d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::ObjectStorage::*)(int32_t, ::System::Object*)>(
    &::System::Data::Common::ObjectStorage::Set)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x2c3f70c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::ObjectStorage::*)(int32_t)>(&::System::Data::Common::ObjectStorage::SetCapacity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2c4005c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::ObjectStorage::*)(::StringW)>(
    &::System::Data::Common::ObjectStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2c40114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Data::Common::ObjectStorage::*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*)>(&::System::Data::Common::ObjectStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x2c406d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::Common::ObjectStorage::*)(::System::Object*)>(
    &::System::Data::Common::ObjectStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x2c42fe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::ObjectStorage::*)(
    ::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*)>(&::System::Data::Common::ObjectStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2c43634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::ObjectStorage::*)(int32_t)>(
    &::System::Data::Common::ObjectStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c43798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.CopyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::Common::ObjectStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(&::System::Data::Common::ObjectStorage::CopyValue)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2c437e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.SetStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::ObjectStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::ObjectStorage::SetStorage)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2c439d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.VerifyIDynamicMetaObjectProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::Data::Common::ObjectStorage::VerifyIDynamicMetaObjectProvider)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2c36228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "VerifyIDynamicMetaObjectProvider",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.GetXmlSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (*)(::System::Type*)>(
    &::System::Data::Common::ObjectStorage::GetXmlSerializer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c40664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "GetXmlSerializer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::ObjectStorage.GetXmlSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializer* (*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*)>(
    &::System::Data::Common::ObjectStorage::GetXmlSerializer)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x2c42a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "GetXmlSerializer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Data::Common::ObjectStorage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Data::Common::ObjectStorage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::ObjectStorage::__cordl_internal_set__values(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::Common::ObjectStorage::__cordl_internal_get__implementsIXmlSerializable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXmlSerializable;
}
constexpr bool const& System::Data::Common::ObjectStorage::__cordl_internal_get__implementsIXmlSerializable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXmlSerializable;
}
constexpr void System::Data::Common::ObjectStorage::__cordl_internal_set__implementsIXmlSerializable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsIXmlSerializable = value;
}
inline void System::Data::Common::ObjectStorage::setStaticF_s_defaultValue(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_defaultValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Data::Common::ObjectStorage::getStaticF_s_defaultValue() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_defaultValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get>();
}
inline void System::Data::Common::ObjectStorage::setStaticF_s_tempAssemblyCacheLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_tempAssemblyCacheLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Data::Common::ObjectStorage::getStaticF_s_tempAssemblyCacheLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_tempAssemblyCacheLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get>();
}
inline void System::Data::Common::ObjectStorage::setStaticF_s_tempAssemblyCache(
    ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                 ::System::Xml::Serialization::XmlSerializer*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                                                 ::System::Xml::Serialization::XmlSerializer*>*,
                                    "s_tempAssemblyCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                                ::System::Xml::Serialization::XmlSerializer*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                    ::System::Xml::Serialization::XmlSerializer*>*
System::Data::Common::ObjectStorage::getStaticF_s_tempAssemblyCache() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                   ::System::Xml::Serialization::XmlSerializer*>*,
      "s_tempAssemblyCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get>();
}
inline void System::Data::Common::ObjectStorage::setStaticF_s_serializerFactory(::System::Xml::Serialization::XmlSerializerFactory* value) {
  ::cordl_internals::setStaticField<::System::Xml::Serialization::XmlSerializerFactory*, "s_serializerFactory",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get>(
      std::forward<::System::Xml::Serialization::XmlSerializerFactory*>(value));
}
inline ::System::Xml::Serialization::XmlSerializerFactory* System::Data::Common::ObjectStorage::getStaticF_s_serializerFactory() {
  return ::cordl_internals::getStaticField<::System::Xml::Serialization::XmlSerializerFactory*, "s_serializerFactory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get>();
}
inline ::System::Data::Common::ObjectStorage* System::Data::Common::ObjectStorage::New_ctor(::System::Data::DataColumn* column, ::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Common::ObjectStorage*>(column, type));
}
inline void System::Data::Common::ObjectStorage::_ctor(::System::Data::DataColumn* column, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, type);
}
inline ::System::Object* System::Data::Common::ObjectStorage::Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::ObjectStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::ObjectStorage::CompareValueTo(int32_t recordNo1, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordNo1, value);
}
inline int32_t System::Data::Common::ObjectStorage::CompareTo(::System::Object* valueNo1, ::System::Object* valueNo2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, valueNo1, valueNo2);
}
inline int32_t System::Data::Common::ObjectStorage::CompareWithFamilies(::System::Object* valueNo1, ::System::Object* valueNo2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(),
                                                                             "CompareWithFamilies", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, valueNo1, valueNo2);
}
inline void System::Data::Common::ObjectStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::ObjectStorage::Get(int32_t recordNo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordNo);
}
inline ::System::Data::Common::__ObjectStorage__Families System::Data::Common::ObjectStorage::GetFamily(::System::Type* dataType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "GetFamily", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::__ObjectStorage__Families, false>(this, ___internal_method, dataType);
}
inline bool System::Data::Common::ObjectStorage::IsNull(int32_t record) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, record);
}
inline void System::Data::Common::ObjectStorage::Set(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordNo, value);
}
inline void System::Data::Common::ObjectStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::ObjectStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, s);
}
inline ::System::Object* System::Data::Common::ObjectStorage::ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, xmlAttrib);
}
inline ::StringW System::Data::Common::ObjectStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline void System::Data::Common::ObjectStorage::ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, xmlWriter, xmlAttrib);
}
inline ::System::Object* System::Data::Common::ObjectStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::ObjectStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::ObjectStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, store, nullbits);
}
inline void System::Data::Common::ObjectStorage::VerifyIDynamicMetaObjectProvider(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "VerifyIDynamicMetaObjectProvider",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Data::Common::ObjectStorage::GetXmlSerializer(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "GetXmlSerializer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*, false>(nullptr, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlSerializer* System::Data::Common::ObjectStorage::GetXmlSerializer(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::ObjectStorage*>::get(), "GetXmlSerializer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlSerializer*, false>(nullptr, ___internal_method, type, attribute);
}
// Ctor Parameters []
constexpr ::System::Data::Common::ObjectStorage::ObjectStorage() {}

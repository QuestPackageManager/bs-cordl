#pragma once
// IWYU pragma private; include "System/Data/Common/SqlUdtStorage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/Common/zzzz__SqlUdtStorage_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/Common/zzzz__SqlUdtStorage_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::*)()>(
    &::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7c04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0._GetStaticNullForUdtType_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::*)(::System::Type*)>(
    &::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::_GetStaticNullForUdtType_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2d7d42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0*>::get(), "<GetStaticNullForUdtType>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0* System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0*>());
}
inline void System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::_GetStaticNullForUdtType_b__0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0*>::get(), "<GetStaticNullForUdtType>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::System::Data::Common::__SqlUdtStorage____c__DisplayClass6_0::__SqlUdtStorage____c__DisplayClass6_0() {}
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(::System::Data::DataColumn*, ::System::Type*)>(
    &::System::Data::Common::SqlUdtStorage::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d7bd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(::System::Data::DataColumn*, ::System::Type*, ::System::Object*)>(
    &::System::Data::Common::SqlUdtStorage::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2d7bec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.GetStaticNullForUdtType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Data::Common::SqlUdtStorage::GetStaticNullForUdtType)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d7bdb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), "GetStaticNullForUdtType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Common::SqlUdtStorage::*)(int32_t)>(&::System::Data::Common::SqlUdtStorage::IsNull)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2d7c054;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Aggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage::*)(::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Data::AggregateType)>(&::System::Data::Common::SqlUdtStorage::Aggregate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d7c158;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::SqlUdtStorage::*)(int32_t, int32_t)>(
    &::System::Data::Common::SqlUdtStorage::Compare)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d7c188;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::SqlUdtStorage::*)(int32_t, ::System::Object*)>(
    &::System::Data::Common::SqlUdtStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2d7c1c0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlUdtStorage::Copy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d7c44c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage::*)(int32_t)>(&::System::Data::Common::SqlUdtStorage::Get)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d7c4d0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(int32_t, ::System::Object*)>(
    &::System::Data::Common::SqlUdtStorage::Set)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2d7c500;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(int32_t)>(&::System::Data::Common::SqlUdtStorage::SetCapacity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2d7c660;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage::*)(::StringW)>(
    &::System::Data::Common::SqlUdtStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2d7c724;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Data::Common::SqlUdtStorage::*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*)>(&::System::Data::Common::SqlUdtStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2d7ca6c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::Common::SqlUdtStorage::*)(::System::Object*)>(
    &::System::Data::Common::SqlUdtStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2d7cd08;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(
    ::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*)>(&::System::Data::Common::SqlUdtStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2d7d030;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::SqlUdtStorage::*)(int32_t)>(
    &::System::Data::Common::SqlUdtStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d7d188;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.CopyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::Common::SqlUdtStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(&::System::Data::Common::SqlUdtStorage::CopyValue)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2d7d1d0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlUdtStorage.SetStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::SqlUdtStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::SqlUdtStorage::SetStorage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d7d308;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 20));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Data::Common::SqlUdtStorage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Data::Common::SqlUdtStorage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::SqlUdtStorage::__cordl_internal_set__values(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::Common::SqlUdtStorage::__cordl_internal_get__implementsIXmlSerializable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXmlSerializable;
}
constexpr bool const& System::Data::Common::SqlUdtStorage::__cordl_internal_get__implementsIXmlSerializable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIXmlSerializable;
}
constexpr void System::Data::Common::SqlUdtStorage::__cordl_internal_set__implementsIXmlSerializable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsIXmlSerializable = value;
}
constexpr bool& System::Data::Common::SqlUdtStorage::__cordl_internal_get__implementsIComparable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIComparable;
}
constexpr bool const& System::Data::Common::SqlUdtStorage::__cordl_internal_get__implementsIComparable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementsIComparable;
}
constexpr void System::Data::Common::SqlUdtStorage::__cordl_internal_set__implementsIComparable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____implementsIComparable = value;
}
inline void System::Data::Common::SqlUdtStorage::setStaticF_s_typeToNull(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>*, "s_typeToNull",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>* System::Data::Common::SqlUdtStorage::getStaticF_s_typeToNull() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>*, "s_typeToNull",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get>();
}
inline ::System::Data::Common::SqlUdtStorage* System::Data::Common::SqlUdtStorage::New_ctor(::System::Data::DataColumn* column, ::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Common::SqlUdtStorage*>(column, type));
}
inline void System::Data::Common::SqlUdtStorage::_ctor(::System::Data::DataColumn* column, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, type);
}
inline ::System::Data::Common::SqlUdtStorage* System::Data::Common::SqlUdtStorage::New_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* nullValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Common::SqlUdtStorage*>(column, type, nullValue));
}
inline void System::Data::Common::SqlUdtStorage::_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* nullValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, type, nullValue);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::GetStaticNullForUdtType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), "GetStaticNullForUdtType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type);
}
inline bool System::Data::Common::SqlUdtStorage::IsNull(int32_t record) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, record);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::SqlUdtStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::SqlUdtStorage::CompareValueTo(int32_t recordNo1, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordNo1, value);
}
inline void System::Data::Common::SqlUdtStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::Get(int32_t recordNo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordNo);
}
inline void System::Data::Common::SqlUdtStorage::Set(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordNo, value);
}
inline void System::Data::Common::SqlUdtStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, s);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, xmlAttrib);
}
inline ::StringW System::Data::Common::SqlUdtStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline void System::Data::Common::SqlUdtStorage::ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, xmlWriter, xmlAttrib);
}
inline ::System::Object* System::Data::Common::SqlUdtStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::SqlUdtStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::SqlUdtStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::SqlUdtStorage*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, store, nullbits);
}
// Ctor Parameters []
constexpr ::System::Data::Common::SqlUdtStorage::SqlUdtStorage() {}

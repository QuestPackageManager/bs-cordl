#pragma once
// IWYU pragma private; include "System/Data/Common/BigIntegerStorage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/Data/Common/zzzz__BigIntegerStorage_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::BigIntegerStorage::*)(::System::Data::DataColumn*)>(
    &::System::Data::Common::BigIntegerStorage::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x41e8ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.Aggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Data::Common::BigIntegerStorage::*)(::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Data::AggregateType)>(&::System::Data::Common::BigIntegerStorage::Aggregate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x41e9074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::BigIntegerStorage::*)(int32_t, int32_t)>(
    &::System::Data::Common::BigIntegerStorage::Compare)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x41e90a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::BigIntegerStorage::*)(int32_t, ::System::Object*)>(
    &::System::Data::Common::BigIntegerStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x41e922c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.ConvertToBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::System::Object*, ::System::IFormatProvider*)>(
    &::System::Data::Common::BigIntegerStorage::ConvertToBigInteger)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x41e937c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), "ConvertToBigInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.ConvertFromBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Numerics::BigInteger, ::System::Type*, ::System::IFormatProvider*)>(
    &::System::Data::Common::BigIntegerStorage::ConvertFromBigInteger)> {
  constexpr static std::size_t size = 0x794;
  constexpr static std::size_t addrs = 0x41e9b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), "ConvertFromBigInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.ConvertValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::BigIntegerStorage::*)(::System::Object*)>(
    &::System::Data::Common::BigIntegerStorage::ConvertValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x41ea2e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::BigIntegerStorage::*)(int32_t, int32_t)>(
    &::System::Data::Common::BigIntegerStorage::Copy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x41ea3a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::BigIntegerStorage::*)(int32_t)>(
    &::System::Data::Common::BigIntegerStorage::Get)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x41ea434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::BigIntegerStorage::*)(int32_t, ::System::Object*)>(
    &::System::Data::Common::BigIntegerStorage::Set)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x41ea528;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::BigIntegerStorage::*)(int32_t)>(
    &::System::Data::Common::BigIntegerStorage::SetCapacity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x41ea674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::BigIntegerStorage::*)(::StringW)>(
    &::System::Data::Common::BigIntegerStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x41ea7b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::Common::BigIntegerStorage::*)(::System::Object*)>(
    &::System::Data::Common::BigIntegerStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x41ea860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::BigIntegerStorage::*)(int32_t)>(
    &::System::Data::Common::BigIntegerStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x41ea950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.CopyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::Common::BigIntegerStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(&::System::Data::Common::BigIntegerStorage::CopyValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x41ea998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::BigIntegerStorage.SetStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::BigIntegerStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::BigIntegerStorage::SetStorage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x41eaa9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 20));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Numerics::BigInteger, ::Array<::System::Numerics::BigInteger>*>& System::Data::Common::BigIntegerStorage::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<::System::Numerics::BigInteger, ::Array<::System::Numerics::BigInteger>*> const& System::Data::Common::BigIntegerStorage::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::Common::BigIntegerStorage::__cordl_internal_set__values(::ArrayW<::System::Numerics::BigInteger, ::Array<::System::Numerics::BigInteger>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::Common::BigIntegerStorage::_ctor(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline ::System::Object* System::Data::Common::BigIntegerStorage::Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::BigIntegerStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::BigIntegerStorage::CompareValueTo(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordNo, value);
}
inline ::System::Numerics::BigInteger System::Data::Common::BigIntegerStorage::ConvertToBigInteger(::System::Object* value, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), "ConvertToBigInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value, formatProvider);
}
inline ::System::Object* System::Data::Common::BigIntegerStorage::ConvertFromBigInteger(::System::Numerics::BigInteger value, ::System::Type* type, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), "ConvertFromBigInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, value, type, formatProvider);
}
inline ::System::Object* System::Data::Common::BigIntegerStorage::ConvertValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value);
}
inline void System::Data::Common::BigIntegerStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::BigIntegerStorage::Get(int32_t record) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, record);
}
inline void System::Data::Common::BigIntegerStorage::Set(int32_t record, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, value);
}
inline void System::Data::Common::BigIntegerStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::BigIntegerStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, s);
}
inline ::StringW System::Data::Common::BigIntegerStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::Common::BigIntegerStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::BigIntegerStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::BigIntegerStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::BigIntegerStorage*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, store, nullbits);
}
inline ::System::Data::Common::BigIntegerStorage* System::Data::Common::BigIntegerStorage::New_ctor(::System::Data::DataColumn* column) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Common::BigIntegerStorage*>(column));
}
// Ctor Parameters []
constexpr ::System::Data::Common::BigIntegerStorage::BigIntegerStorage() {}

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SupplementalDataEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SupplementalDataEntry_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24221a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry.get_DataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::get_DataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24221d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry.get_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24221d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>::get(), 5));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_get_mDataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDataType;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_get_mDataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDataType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_set_mDataType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDataType = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_get_mData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_get_mData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mData;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::__cordl_internal_set_mData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::_ctor(int32_t dataType, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataType, data);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::get_DataType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::get_Data() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry* Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::New_ctor(int32_t dataType, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*>(dataType, data));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry::SupplementalDataEntry() {}

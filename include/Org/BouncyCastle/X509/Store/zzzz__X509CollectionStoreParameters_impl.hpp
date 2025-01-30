#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CollectionStoreParameters.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509StoreParameters_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CollectionStoreParameters_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x25ea8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters.GetCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::GetCollection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25ea9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>::get(), "GetCollection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x25eaa0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::__cordl_internal_get_collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::__cordl_internal_get_collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr void Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::__cordl_internal_set_collection(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::_ctor(::System::Collections::ICollection* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::GetCollection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>::get(), "GetCollection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters* Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::New_ctor(::System::Collections::ICollection* collection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*>(collection));
}
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509StoreParameters"
constexpr Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::operator ::Org::BouncyCastle::X509::Store::IX509StoreParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509StoreParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509StoreParameters"
constexpr ::Org::BouncyCastle::X509::Store::IX509StoreParameters* Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::i___Org__BouncyCastle__X509__Store__IX509StoreParameters() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509StoreParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::X509CollectionStoreParameters() {}

#pragma once
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)()>(
    &::Mono::Security::X509::X509ExtensionCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)(::Mono::Security::ASN1*)>(
    &::Mono::Security::X509::X509ExtensionCollection::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23f912c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(
    &::Mono::Security::X509::X509ExtensionCollection::IndexOf)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23fd408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(), "IndexOf",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Mono::Security::X509::X509ExtensionCollection::*)()>(
    &::Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23fd544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Extension* (::Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(
    &::Mono::Security::X509::X509ExtensionCollection::get_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23fca8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(), "get_Item",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Mono::Security::X509::X509ExtensionCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr bool& Mono::Security::X509::X509ExtensionCollection::__get_readOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readOnly;
}
constexpr bool const& Mono::Security::X509::X509ExtensionCollection::__get_readOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readOnly;
}
constexpr void Mono::Security::X509::X509ExtensionCollection::__set_readOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readOnly = value;
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509ExtensionCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::X509ExtensionCollection*>());
}
inline void Mono::Security::X509::X509ExtensionCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509ExtensionCollection::New_ctor(::Mono::Security::ASN1* asn1) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::X509ExtensionCollection*>(asn1));
}
inline void Mono::Security::X509::X509ExtensionCollection::_ctor(::Mono::Security::ASN1* asn1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asn1);
}
inline int32_t Mono::Security::X509::X509ExtensionCollection::IndexOf(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, oid);
}
inline ::System::Collections::IEnumerator* Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Extension* Mono::Security::X509::X509ExtensionCollection::get_Item(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509ExtensionCollection*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Extension*, false>(this, ___internal_method, oid);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509ExtensionCollection::X509ExtensionCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

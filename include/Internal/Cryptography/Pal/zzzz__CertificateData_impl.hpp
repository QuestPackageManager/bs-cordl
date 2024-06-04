#pragma once
// IWYU pragma private; include "Internal/Cryptography/Pal/CertificateData.hpp"
#include "Internal/Cryptography/Pal/zzzz__CertificateData_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Cryptography/Pal/zzzz__CertificateData_def.hpp"
#include "Internal/Cryptography/Pal/zzzz__CertificateData_def.hpp"
#include "Internal/Cryptography/Pal/zzzz__GeneralNameType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedName_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509NameType_def.hpp"
#include "System/Security/Cryptography/zzzz__DerSequenceReader_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "AlgorithmId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Parameters", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers:
// "", def_value: Some("nullptr") }]
constexpr ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier::__CertificateData__AlgorithmIdentifier(::StringW AlgorithmId,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> Parameters) noexcept {
  this->AlgorithmId = AlgorithmId;
  this->Parameters = Parameters;
}
// Ctor Parameters []
constexpr ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier::__CertificateData__AlgorithmIdentifier() {}
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)(int32_t)>(
    &::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c91198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(
    &::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c911cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(
    &::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2c911d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(
        &::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::
            System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c91464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(
    &::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c91470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(
    &::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c914b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* (
    ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(
    &::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c9150c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                                 "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(
    &::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c915b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
constexpr Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::
    i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___StringW__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
constexpr Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::
    i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___StringW__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr int32_t& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> const&
Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> const&
Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_set_name(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get___3__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__name;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> const&
Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get___3__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__name;
}
constexpr void
Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_set___3__name(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*&
Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get__rdnReaders_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rdnReaders_5__2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*> const&
Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get__rdnReaders_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rdnReaders_5__2;
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_set__rdnReaders_5__2(
    ::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rdnReaders_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::DerSequenceReader*& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get__rdnReader_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rdnReader_5__3;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DerSequenceReader*> const&
Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_get__rdnReader_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rdnReader_5__3;
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__cordl_internal_set__rdnReader_5__3(::System::Security::Cryptography::DerSequenceReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rdnReader_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>(__1__state));
}
inline void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>
Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, false>(this, ___internal_method);
}
inline void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                               "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__CertificateData___ReadReverseRdns_d__21() {}
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Cryptography::Pal::CertificateData::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Internal::Cryptography::Pal::CertificateData::_ctor)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x2c8fda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData.GetNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Internal::Cryptography::Pal::CertificateData::*)(
    ::System::Security::Cryptography::X509Certificates::X509NameType, bool)>(&::Internal::Cryptography::Pal::CertificateData::GetNameInfo)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x2c904c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), "GetNameInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509NameType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData.GetSimpleNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*)>(
    &::Internal::Cryptography::Pal::CertificateData::GetSimpleNameInfo)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x2c90b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), "GetSimpleNameInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData.FindAltNameMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Internal::Cryptography::Pal::GeneralNameType, ::StringW)>(
    &::Internal::Cryptography::Pal::CertificateData::FindAltNameMatch)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2c90f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), "FindAltNameMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Internal::Cryptography::Pal::GeneralNameType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData.ReadReverseRdns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<
    ::StringW, ::StringW>>* (*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*)>(&::Internal::Cryptography::Pal::CertificateData::ReadReverseRdns)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c91120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), "ReadReverseRdns", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>::get() })));
    return ___internal_method;
  }
};
inline void Internal::Cryptography::Pal::CertificateData::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawData);
}
inline ::StringW Internal::Cryptography::Pal::CertificateData::GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), "GetNameInfo", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509NameType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, nameType, forIssuer);
}
inline ::StringW Internal::Cryptography::Pal::CertificateData::GetSimpleNameInfo(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), "GetSimpleNameInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name);
}
inline ::StringW Internal::Cryptography::Pal::CertificateData::FindAltNameMatch(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionBytes, ::Internal::Cryptography::Pal::GeneralNameType matchType,
                                                                                ::StringW otherOid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), "FindAltNameMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Internal::Cryptography::Pal::GeneralNameType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, extensionBytes, matchType, otherOid);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
Internal::Cryptography::Pal::CertificateData::ReadReverseRdns(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(), "ReadReverseRdns", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*, false>(nullptr, ___internal_method,
                                                                                                                                                                          name);
}
// Ctor Parameters [CppParam { name: "RawData", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SubjectPublicKeyInfo", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "SerialNumber", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "TbsSignature", ty:
// "::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "Issuer", ty:
// "::System::Security::Cryptography::X509Certificates::X500DistinguishedName*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "NotBefore", ty: "::System::DateTime", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "NotAfter", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "Subject", ty:
// "::System::Security::Cryptography::X509Certificates::X500DistinguishedName*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "PublicKeyAlgorithm", ty:
// "::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "PublicKey", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "IssuerUniqueId", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SubjectUniqueId", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Extensions", ty:
// "::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SignatureAlgorithm",
// ty: "::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "SignatureValue", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::Internal::Cryptography::Pal::CertificateData::CertificateData(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> RawData, ::ArrayW<uint8_t, ::Array<uint8_t>*> SubjectPublicKeyInfo, int32_t Version, ::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber,
    ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier TbsSignature, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Issuer, ::System::DateTime NotBefore,
    ::System::DateTime NotAfter, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Subject,
    ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier PublicKeyAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> PublicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> IssuerUniqueId,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> SubjectUniqueId, ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* Extensions,
    ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier SignatureAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> SignatureValue) noexcept {
  this->RawData = RawData;
  this->SubjectPublicKeyInfo = SubjectPublicKeyInfo;
  this->Version = Version;
  this->SerialNumber = SerialNumber;
  this->TbsSignature = TbsSignature;
  this->Issuer = Issuer;
  this->NotBefore = NotBefore;
  this->NotAfter = NotAfter;
  this->Subject = Subject;
  this->PublicKeyAlgorithm = PublicKeyAlgorithm;
  this->PublicKey = PublicKey;
  this->IssuerUniqueId = IssuerUniqueId;
  this->SubjectUniqueId = SubjectUniqueId;
  this->Extensions = Extensions;
  this->SignatureAlgorithm = SignatureAlgorithm;
  this->SignatureValue = SignatureValue;
}
// Ctor Parameters []
constexpr ::Internal::Cryptography::Pal::CertificateData::CertificateData() {}

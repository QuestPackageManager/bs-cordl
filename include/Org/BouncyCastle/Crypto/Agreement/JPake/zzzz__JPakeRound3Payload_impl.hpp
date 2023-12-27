#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakeRound3Payload_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::*)(
    ::StringW, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x121508c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload.get_ParticipantId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::get_ParticipantId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215c18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload.get_MacTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::get_MacTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215c20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__get_participantId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___participantId;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__get_participantId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___participantId;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__set_participantId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___participantId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__get_macTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macTag;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__get_macTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macTag;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::__set_macTag(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___macTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::New_ctor(::StringW participantId,
                                                                                                                                                    ::Org::BouncyCastle::Math::BigInteger* magTag) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>(participantId, magTag));
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* magTag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, participantId, magTag);
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::get_ParticipantId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>::get(), "get_ParticipantId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::get_MacTag() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*>::get(), "get_MacTag",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload::JPakeRound3Payload() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

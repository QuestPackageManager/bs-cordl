#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakeRound2Payload_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)(
    ::StringW, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>)>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1214498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload.get_ParticipantId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_ParticipantId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215b8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload.get_A
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_A)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215b94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload.get_KnowledgeProofForX2s
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> (
    ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)()>(&::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_KnowledgeProofForX2s)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1215b9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__get_participantId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___participantId;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__get_participantId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___participantId;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__set_participantId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___participantId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__set_a(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___a)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>&
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__get_knowledgeProofForX2s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knowledgeProofForX2s;
}
constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> const&
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__get_knowledgeProofForX2s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knowledgeProofForX2s;
}
constexpr void
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__set_knowledgeProofForX2s(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___knowledgeProofForX2s)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::New_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                          ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2s) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>(participantId, a, knowledgeProofForX2s));
}
inline void
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                       ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, participantId, a, knowledgeProofForX2s);
}
inline ::StringW Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_ParticipantId() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_A() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_KnowledgeProofForX2s() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::JPakeRound2Payload() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

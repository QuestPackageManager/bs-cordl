#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__ChallengeResponse2_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type2Message_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_LM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_LM)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2553da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_LM", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_NTLM_Password
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM_Password)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x255452c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_NTLM_Password",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_NTLM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2554630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_NTLM", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_NTLMv2_Session
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(
        &::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2_Session)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x255469c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_NTLMv2_Session", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_NTLMv2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::Mono::Security::Protocol::Ntlm::Type2Message*, ::StringW, ::StringW, ::StringW)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2554868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_NTLMv2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::Type2Message*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, ::StringW, ::StringW, ::StringW, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>,
                         ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2554d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::Type2Message*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.GetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse2::GetResponse)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x2554238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "GetResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.PrepareDESKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse2::PrepareDESKey)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2554f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "PrepareDESKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.PasswordToKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW, int32_t)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse2::PasswordToKey)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x25540d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "PasswordToKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse2::setStaticF_magic(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "magic", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::ChallengeResponse2::getStaticF_magic() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "magic",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get>();
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse2::setStaticF_nullEncMagic(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "nullEncMagic",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::ChallengeResponse2::getStaticF_nullEncMagic() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "nullEncMagic",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get>();
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_LM(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> challenge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_LM", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, password, challenge);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM_Password(::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_NTLM_Password",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, password);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> challenge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_NTLM", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, password, challenge);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2_Session(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> challenge,
                                                                                       ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> lm, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> ntlm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_NTLMv2_Session", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, password, challenge, lm, ntlm);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::StringW username,
                                                                                                               ::StringW password, ::StringW domain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute_NTLMv2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::Type2Message*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, type2, username, password, domain);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel level,
                                                                        ::StringW username, ::StringW password, ::StringW domain, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> lm,
                                                                        ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> ntlm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "Compute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::Type2Message*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type2, level, username, password, domain, lm, ntlm);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::ChallengeResponse2::GetResponse(::ArrayW<uint8_t, ::Array<uint8_t>*> challenge, ::ArrayW<uint8_t, ::Array<uint8_t>*> pwd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "GetResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, challenge, pwd);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::ChallengeResponse2::PrepareDESKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key56bits, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "PrepareDESKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, key56bits, position);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::ChallengeResponse2::PasswordToKey(::StringW password, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>::get(), "PasswordToKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, password, position);
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::ChallengeResponse2::ChallengeResponse2() {}

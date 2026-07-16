#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/ChallengeResponse2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__ChallengeResponse2_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type2Message_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_LM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_LM)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5a98c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                                                                                           { "Compute_LM", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_NTLM_Password
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM_Password)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a9941c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(), { "Compute_NTLM_Password", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_NTLM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a99524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                                                                                           { "Compute_NTLM", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_NTLMv2_Session
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<::ArrayW<uint8_t>>)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2_Session)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5a99594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                            { "Compute_NTLMv2_Session",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute_NTLMv2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::StringW, ::StringW, ::StringW)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x5a99760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
            { "Compute_NTLMv2", {}, { ::i2c::type_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.Compute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Security::Protocol::Ntlm::Type2Message*, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, ::StringW, ::StringW, ::StringW,
                                                                ::by_ref<::ArrayW<uint8_t>>, ::by_ref<::ArrayW<uint8_t>>)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5a99c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                            { "Compute",
                              {},
                              { ::i2c::type_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), ::i2c::type_of<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.GetResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse2::GetResponse)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5a99118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                                                                                           { "GetResponse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.PrepareDESKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse2::PrepareDESKey)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5a99e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                                                                                           { "PrepareDESKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse2.PasswordToKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, int32_t)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse2::PasswordToKey)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5a98fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                                                                                           { "PasswordToKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse2::setStaticF_magic(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "magic", ::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse2::getStaticF_magic() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "magic", ::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>();
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse2::setStaticF_nullEncMagic(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "nullEncMagic", ::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse2::getStaticF_nullEncMagic() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "nullEncMagic", ::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>();
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_LM(::StringW password, ::ArrayW<uint8_t> challenge) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                                                                                         { "Compute_LM", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, password, challenge);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM_Password(::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(), { "Compute_NTLM_Password", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, password);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLM(::StringW password, ::ArrayW<uint8_t> challenge) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                                                                                         { "Compute_NTLM", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, password, challenge);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2_Session(::StringW password, ::ArrayW<uint8_t> challenge, ::by_ref<::ArrayW<uint8_t>> lm,
                                                                                       ::by_ref<::ArrayW<uint8_t>> ntlm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                          { "Compute_NTLMv2_Session",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, password, challenge, lm, ntlm);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute_NTLMv2(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::StringW username, ::StringW password,
                                                                                            ::StringW domain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
          { "Compute_NTLMv2", {}, { ::i2c::type_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, type2, username, password, domain);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse2::Compute(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel level,
                                                                        ::StringW username, ::StringW password, ::StringW domain, ::by_ref<::ArrayW<uint8_t>> lm, ::by_ref<::ArrayW<uint8_t>> ntlm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                          { "Compute",
                            {},
                            { ::i2c::type_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), ::i2c::type_of<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type2, level, username, password, domain, lm, ntlm);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse2::GetResponse(::ArrayW<uint8_t> challenge, ::ArrayW<uint8_t> pwd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                                                                                         { "GetResponse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, challenge, pwd);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse2::PrepareDESKey(::ArrayW<uint8_t> key56bits, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(),
                                                                                         { "PrepareDESKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, key56bits, position);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse2::PasswordToKey(::StringW password, int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse2*>(), { "PasswordToKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, password, position);
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::ChallengeResponse2::ChallengeResponse2() {}

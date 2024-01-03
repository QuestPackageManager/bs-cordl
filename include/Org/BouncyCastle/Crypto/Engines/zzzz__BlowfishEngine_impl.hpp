#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__BlowfishEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xebc7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Init)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xebc8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xebcd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                               "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xebcd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                               "get_IsPartialBlockOkay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xebcd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "ProcessBlock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xebd1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.GetBlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xebd1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                               "GetBlockSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.F
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(uint32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::F)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xebd1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "F", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.ProcessTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(
    uint32_t, uint32_t, ::ArrayW<uint32_t, ::Array<uint32_t>*>)>(&::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessTable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xebd28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "ProcessTable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.SetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::SetKey)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xebca24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "SetKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.EncryptBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xebceac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "EncryptBlock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.DecryptBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xebd050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "DecryptBlock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::BlowfishEngine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::BlowfishEngine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_S0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S0;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_S0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S0;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__set_S0(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___S0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_S1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S1;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_S1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S1;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__set_S1(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___S1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_S2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S2;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_S2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S2;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__set_S2(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___S2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_S3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S3;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_S3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S3;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__set_S3(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___S3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_P() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_P() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__set_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___P)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_encrypting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypting;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_encrypting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypting;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__set_encrypting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encrypting = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___workingKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KP(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KP() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KP",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KS0(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KS0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KS0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KS0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KS1(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KS1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KS1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KS1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KS2(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KS2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KS2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KS2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KS3(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KS3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KS3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "KS3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_ROUNDS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ROUNDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_ROUNDS() {
  return ::cordl_internals::getStaticField<int32_t, "ROUNDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_SBOX_SK(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SBOX_SK", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_SBOX_SK() {
  return ::cordl_internals::getStaticField<int32_t, "SBOX_SK", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_P_SZ(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "P_SZ", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_P_SZ() {
  return ::cordl_internals::getStaticField<int32_t, "P_SZ", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine* Org::BouncyCastle::Crypto::Engines::BlowfishEngine::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>());
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                             "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_IsPartialBlockOkay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                             "get_IsPartialBlockOkay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output,
                                                                                int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "ProcessBlock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::GetBlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(),
                                                                             "GetBlockSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::F(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "F", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, x);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessTable(uint32_t xl, uint32_t xr, ::ArrayW<uint32_t, ::Array<uint32_t>*> table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "ProcessTable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xl, xr, table);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "SetKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "EncryptBlock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, srcIndex, dst, dstIndex);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>::get(), "DecryptBlock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, srcIndex, dst, dstIndex);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::BlowfishEngine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

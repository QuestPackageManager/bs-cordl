#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__NaccacheSternEngine_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyParameters_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xed6118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), "get_AlgorithmName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(
    bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::Init)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0xed6158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.set_Debug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::set_Debug)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xed66e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.GetInputBlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::GetInputBlockSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xed66e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.GetOutputBlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::GetOutputBlockSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xed673c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0xed6790;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.Encrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(
    ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::Encrypt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xed7470;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.AddCryptedBlocks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::AddCryptedBlocks)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xed7548;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.ProcessData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::ProcessData)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xed774c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.chineseRemainder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::System::Collections::IList*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::chineseRemainder)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0xed708c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), "chineseRemainder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xed7964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*> const& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__set_key(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> const& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__set_lookup(::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                                             "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forEncryption, parameters);
}
inline void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::set_Debug(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), "set_Debug",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::GetInputBlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                                             "GetInputBlockSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::GetOutputBlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                                             "GetOutputBlockSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), "ProcessBlock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, inBytes, inOff, length);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::Encrypt(::Org::BouncyCastle::Math::BigInteger* plain) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), "Encrypt", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, plain);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::AddCryptedBlocks(::ArrayW<uint8_t, ::Array<uint8_t>*> block1,
                                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> block2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), "AddCryptedBlocks", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, block1, block2);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::ProcessData(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), "ProcessData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::chineseRemainder(::System::Collections::IList* congruences,
                                                                                                                        ::System::Collections::IList* primes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(), "chineseRemainder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, congruences, primes);
}
inline ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine* Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>());
}
inline void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::NaccacheSternEngine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

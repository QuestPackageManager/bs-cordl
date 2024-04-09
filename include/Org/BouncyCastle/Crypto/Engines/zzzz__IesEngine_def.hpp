#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IesEngine)
namespace Org::BouncyCastle::Crypto::Parameters {
class IesParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KdfParameters;
}
namespace Org::BouncyCastle::Crypto {
class BufferedBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class IesEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::IesEngine);
// Type: Org.BouncyCastle.Crypto.Engines::IesEngine
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::IesEngine*
class CORDL_TYPE IesEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field agree, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_agree, put = __cordl_internal_set_agree))::Org::BouncyCastle::Crypto::IBasicAgreement* agree;

  /// @brief Field cipher, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher))::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher;

  /// @brief Field forEncryption, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field kdf, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_kdf, put = __cordl_internal_set_kdf))::Org::BouncyCastle::Crypto::IDerivationFunction* kdf;

  /// @brief Field mac, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac))::Org::BouncyCastle::Crypto::IMac* mac;

  /// @brief Field macBuf, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_macBuf, put = __cordl_internal_set_macBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> macBuf;

  /// @brief Field param, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_param, put = __cordl_internal_set_param))::Org::BouncyCastle::Crypto::Parameters::IesParameters* param;

  /// @brief Field privParam, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_privParam, put = __cordl_internal_set_privParam))::Org::BouncyCastle::Crypto::ICipherParameters* privParam;

  /// @brief Field pubParam, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_pubParam, put = __cordl_internal_set_pubParam))::Org::BouncyCastle::Crypto::ICipherParameters* pubParam;

  /// @brief Method DecryptBlock, addr 0x103f688, size 0x6ac, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> in_enc, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method EncryptBlock, addr 0x103fe8c, size 0x5ec, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method GenerateKdfBytes, addr 0x103fd34, size 0x158, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateKdfBytes(::Org::BouncyCastle::Crypto::Parameters::KdfParameters* kParam, int32_t length);

  /// @brief Method Init, addr 0x103f5c0, size 0xc8, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* privParameters, ::Org::BouncyCastle::Crypto::ICipherParameters* pubParameters,
                   ::Org::BouncyCastle::Crypto::ICipherParameters* iesParameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::IesEngine* New_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                          ::Org::BouncyCastle::Crypto::IMac* mac);

  static inline ::Org::BouncyCastle::Crypto::Engines::IesEngine* New_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                          ::Org::BouncyCastle::Crypto::IMac* mac, ::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher);

  /// @brief Method ProcessBlock, addr 0x1040478, size 0x284, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement*& __cordl_internal_get_agree();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBasicAgreement*> const& __cordl_internal_get_agree() const;

  constexpr ::Org::BouncyCastle::Crypto::BufferedBlockCipher*& __cordl_internal_get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::BufferedBlockCipher*> const& __cordl_internal_get_cipher() const;

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*& __cordl_internal_get_kdf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDerivationFunction*> const& __cordl_internal_get_kdf() const;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __cordl_internal_get_mac() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_macBuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_macBuf();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::IesParameters*& __cordl_internal_get_param();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::IesParameters*> const& __cordl_internal_get_param() const;

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __cordl_internal_get_privParam();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& __cordl_internal_get_privParam() const;

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __cordl_internal_get_pubParam();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& __cordl_internal_get_pubParam() const;

  constexpr void __cordl_internal_set_agree(::Org::BouncyCastle::Crypto::IBasicAgreement* value);

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::BufferedBlockCipher* value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction* value);

  constexpr void __cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr void __cordl_internal_set_macBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::IesParameters* value);

  constexpr void __cordl_internal_set_privParam(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  constexpr void __cordl_internal_set_pubParam(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  /// @brief Method .ctor, addr 0x103f3cc, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf, ::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Method .ctor, addr 0x103f4c0, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf, ::Org::BouncyCastle::Crypto::IMac* mac,
                    ::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IesEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IesEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IesEngine(IesEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IesEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IesEngine(IesEngine const&) = delete;

  /// @brief Field agree, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBasicAgreement* ___agree;

  /// @brief Field kdf, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDerivationFunction* ___kdf;

  /// @brief Field mac, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mac;

  /// @brief Field cipher, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::BufferedBlockCipher* ___cipher;

  /// @brief Field macBuf, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___macBuf;

  /// @brief Field forEncryption, offset: 0x38, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field privParam, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ICipherParameters* ___privParam;

  /// @brief Field pubParam, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ICipherParameters* ___pubParam;

  /// @brief Field param, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::IesParameters* ___param;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::IesEngine, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IesEngine, ___agree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IesEngine, ___kdf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IesEngine, ___mac) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IesEngine, ___cipher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IesEngine, ___macBuf) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IesEngine, ___forEncryption) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IesEngine, ___privParam) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IesEngine, ___pubParam) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IesEngine, ___param) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::IesEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::IesEngine*, "Org.BouncyCastle.Crypto.Engines", "IesEngine");

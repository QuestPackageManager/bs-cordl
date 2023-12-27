#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IesEngine)
namespace Org::BouncyCastle::Crypto {
class BufferedBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class IesParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KdfParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(849))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::IesEngine*
class CORDL_TYPE IesEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field agree, offset 0x10, size 0x8
  __declspec(property(get = __get_agree, put = __set_agree))::Org::BouncyCastle::Crypto::IBasicAgreement* agree;

  /// @brief Field kdf, offset 0x18, size 0x8
  __declspec(property(get = __get_kdf, put = __set_kdf))::Org::BouncyCastle::Crypto::IDerivationFunction* kdf;

  /// @brief Field mac, offset 0x20, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::Org::BouncyCastle::Crypto::IMac* mac;

  /// @brief Field cipher, offset 0x28, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher;

  /// @brief Field macBuf, offset 0x30, size 0x8
  __declspec(property(get = __get_macBuf, put = __set_macBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> macBuf;

  /// @brief Field forEncryption, offset 0x38, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field privParam, offset 0x40, size 0x8
  __declspec(property(get = __get_privParam, put = __set_privParam))::Org::BouncyCastle::Crypto::ICipherParameters* privParam;

  /// @brief Field pubParam, offset 0x48, size 0x8
  __declspec(property(get = __get_pubParam, put = __set_pubParam))::Org::BouncyCastle::Crypto::ICipherParameters* pubParam;

  /// @brief Field param, offset 0x50, size 0x8
  __declspec(property(get = __get_param, put = __set_param))::Org::BouncyCastle::Crypto::Parameters::IesParameters* param;

  constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement*& __get_agree();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBasicAgreement*> const& __get_agree() const;

  constexpr void __set_agree(::Org::BouncyCastle::Crypto::IBasicAgreement* value);

  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*& __get_kdf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDerivationFunction*> const& __get_kdf() const;

  constexpr void __set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction* value);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_mac() const;

  constexpr void __set_mac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr ::Org::BouncyCastle::Crypto::BufferedBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::BufferedBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::BufferedBlockCipher* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_macBuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_macBuf() const;

  constexpr void __set_macBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __get_privParam();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& __get_privParam() const;

  constexpr void __set_privParam(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __get_pubParam();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& __get_pubParam() const;

  constexpr void __set_pubParam(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::IesParameters*& __get_param();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::IesParameters*> const& __get_param() const;

  constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::IesParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Engines::IesEngine* New_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                          ::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Method .ctor addr 0xed42e4 size 0xf4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf, ::Org::BouncyCastle::Crypto::IMac* mac);

  static inline ::Org::BouncyCastle::Crypto::Engines::IesEngine* New_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                          ::Org::BouncyCastle::Crypto::IMac* mac, ::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher);

  /// @brief Method .ctor addr 0xed43d8 size 0x100 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf, ::Org::BouncyCastle::Crypto::IMac* mac,
                    ::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher);

  /// @brief Method Init addr 0xed44d8 size 0xc8 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* privParameters, ::Org::BouncyCastle::Crypto::ICipherParameters* pubParameters,
                   ::Org::BouncyCastle::Crypto::ICipherParameters* iesParameters);

  /// @brief Method DecryptBlock addr 0xed45a0 size 0x6ac virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> in_enc, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method EncryptBlock addr 0xed4da4 size 0x5ec virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method GenerateKdfBytes addr 0xed4c4c size 0x158 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateKdfBytes(::Org::BouncyCastle::Crypto::Parameters::KdfParameters* kParam, int32_t length);

  /// @brief Method ProcessBlock addr 0xed5390 size 0x284 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  // Ctor Parameters [CppParam { name: "", ty: "IesEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IesEngine(IesEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IesEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IesEngine(IesEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IesEngine();

public:
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

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::IesEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::IesEngine*, "Org.BouncyCastle.Crypto.Engines", "IesEngine");

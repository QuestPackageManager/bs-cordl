#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaOaepWrapper)
namespace Org::BouncyCastle::Crypto {
class IKeyUnwrapper;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class RsaOaepWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper);
// Type: Org.BouncyCastle.Crypto.Operators::RsaOaepWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(988))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::RsaOaepWrapper*
class CORDL_TYPE RsaOaepWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field algId, offset 0x10, size 0x8
  __declspec(property(get = __get_algId, put = __set_algId))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId;

  /// @brief Field engine, offset 0x18, size 0x8
  __declspec(property(get = __get_engine, put = __set_engine))::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;

  __declspec(property(get = get_AlgorithmDetails))::System::Object* AlgorithmDetails;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IKeyWrapper*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyUnwrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IKeyUnwrapper*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algId() const;

  constexpr void __set_algId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __get_engine() const;

  constexpr void __set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  static inline ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper* New_ctor(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters,
                                                                                 ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method .ctor addr 0xf292dc size 0x2a0 virtual false final false
  inline void _ctor(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method get_AlgorithmDetails addr 0xf2957c size 0x8 virtual true final true
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Method Unwrap addr 0xf29584 size 0x104 virtual true final true
  inline ::Org::BouncyCastle::Crypto::IBlockResult* Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> cipherText, int32_t offset, int32_t length);

  /// @brief Method Wrap addr 0xf29688 size 0x104 virtual true final true
  inline ::Org::BouncyCastle::Crypto::IBlockResult* Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> keyData);

  // Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaOaepWrapper(RsaOaepWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaOaepWrapper(RsaOaepWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaOaepWrapper();

public:
  /// @brief Field algId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algId;

  /// @brief Field engine, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___engine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*, "Org.BouncyCastle.Crypto.Operators", "RsaOaepWrapper");

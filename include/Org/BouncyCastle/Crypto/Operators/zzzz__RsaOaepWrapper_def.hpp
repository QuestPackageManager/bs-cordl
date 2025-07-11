#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/RsaOaepWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IKeyUnwrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaOaepWrapper)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class RsaOaepWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper);
// Dependencies Org.BouncyCastle.Crypto.IKeyUnwrapper, Org.BouncyCastle.Crypto.IKeyWrapper, System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.RsaOaepWrapper
class CORDL_TYPE RsaOaepWrapper : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails)) ::System::Object* AlgorithmDetails;

  /// @brief Field algId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algId, put = __cordl_internal_set_algId)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId;

  /// @brief Field engine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyUnwrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IKeyUnwrapper*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IKeyWrapper*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper* New_ctor(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters,
                                                                                 ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method Unwrap, addr 0x23b24f4, size 0x100, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IBlockResult* Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> cipherText, int32_t offset, int32_t length);

  /// @brief Method Wrap, addr 0x23b25f4, size 0x100, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IBlockResult* Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> keyData);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_algId() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algId();

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& __cordl_internal_get_engine() const;

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __cordl_internal_get_engine();

  constexpr void __cordl_internal_set_algId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  /// @brief Method .ctor, addr 0x23b224c, size 0x2a0, virtual false, abstract: false, final false
  inline void _ctor(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method get_AlgorithmDetails, addr 0x23b24ec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IKeyUnwrapper"
  constexpr ::Org::BouncyCastle::Crypto::IKeyUnwrapper* i___Org__BouncyCastle__Crypto__IKeyUnwrapper() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IKeyWrapper"
  constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* i___Org__BouncyCastle__Crypto__IKeyWrapper() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaOaepWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaOaepWrapper(RsaOaepWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaOaepWrapper(RsaOaepWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 988 };

  /// @brief Field algId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algId;

  /// @brief Field engine, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___engine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper, ___algId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper, ___engine) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*, "Org.BouncyCastle.Crypto.Operators", "RsaOaepWrapper");

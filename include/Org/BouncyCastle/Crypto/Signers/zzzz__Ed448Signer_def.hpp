#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/Ed448Signer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ed448Signer)
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed448PrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed448PublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Signers {
class Ed448Signer_Buffer;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Ed448Signer;
}
namespace Org::BouncyCastle::Crypto::Signers {
class Ed448Signer_Buffer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::Ed448Signer);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer);
// Dependencies System.IO.MemoryStream
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed448Signer/Buffer
class CORDL_TYPE Ed448Signer_Buffer : public ::System::IO::MemoryStream {
public:
  // Declarations
  /// @brief Method GenerateSignature, addr 0x23d3770, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature(::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx);

  static inline ::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer* New_ctor();

  /// @brief Method Reset, addr 0x23d3b5c, size 0xf4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method VerifySignature, addr 0x23d3980, size 0x1c4, virtual false, abstract: false, final false
  inline bool VerifySignature(::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method .ctor, addr 0x23d3588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ed448Signer_Buffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ed448Signer_Buffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ed448Signer_Buffer(Ed448Signer_Buffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ed448Signer_Buffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ed448Signer_Buffer(Ed448Signer_Buffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1137 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
// Dependencies Org.BouncyCastle.Crypto.ISigner, System.Object
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed448Signer
class CORDL_TYPE Ed448Signer : public ::System::Object {
public:
  // Declarations
  using Buffer = ::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer;

  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer* buffer;

  /// @brief Field context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::ArrayW<uint8_t, ::Array<uint8_t>*> context;

  /// @brief Field forSigning, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forSigning, put = __cordl_internal_set_forSigning)) bool forSigning;

  /// @brief Field privateKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKey, put = __cordl_internal_set_privateKey)) ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* privateKey;

  /// @brief Field publicKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey)) ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* publicKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Method BlockUpdate, addr 0x23d36d4, size 0x24, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method GenerateSignature, addr 0x23d36f8, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method Init, addr 0x23d35d0, size 0xe0, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Signers::Ed448Signer* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> context);

  /// @brief Method Reset, addr 0x23d3b44, size 0x18, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x23d36b0, size 0x24, virtual true, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method VerifySignature, addr 0x23d3904, size 0x7c, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer* const& __cordl_internal_get_buffer() const;

  constexpr ::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer*& __cordl_internal_get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_context() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_context();

  constexpr bool const& __cordl_internal_get_forSigning() const;

  constexpr bool& __cordl_internal_get_forSigning();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* const& __cordl_internal_get_privateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*& __cordl_internal_get_privateKey();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* const& __cordl_internal_get_publicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*& __cordl_internal_get_publicKey();

  constexpr void __cordl_internal_set_buffer(::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer* value);

  constexpr void __cordl_internal_set_context(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_forSigning(bool value);

  constexpr void __cordl_internal_set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* value);

  constexpr void __cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* value);

  /// @brief Method .ctor, addr 0x23d34e4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> context);

  /// @brief Method get_AlgorithmName, addr 0x23d3590, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ed448Signer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ed448Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ed448Signer(Ed448Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ed448Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ed448Signer(Ed448Signer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1138 };

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer* ___buffer;

  /// @brief Field context, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___context;

  /// @brief Field forSigning, offset: 0x20, size: 0x1, def value: None
  bool ___forSigning;

  /// @brief Field privateKey, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* ___privateKey;

  /// @brief Field publicKey, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* ___publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed448Signer, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed448Signer, ___context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed448Signer, ___forSigning) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed448Signer, ___privateKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed448Signer, ___publicKey) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::Ed448Signer, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Ed448Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Ed448Signer*, "Org.BouncyCastle.Crypto.Signers", "Ed448Signer");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Ed448Signer_Buffer*, "Org.BouncyCastle.Crypto.Signers", "Ed448Signer/Buffer");

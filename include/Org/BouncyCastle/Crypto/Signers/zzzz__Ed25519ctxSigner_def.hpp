#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/Ed25519ctxSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ed25519ctxSigner)
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Signers {
class __Ed25519ctxSigner__Buffer;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Ed25519ctxSigner;
}
namespace Org::BouncyCastle::Crypto::Signers {
class __Ed25519ctxSigner__Buffer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer);
// Type: ::Buffer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: ::Ed25519ctxSigner::Buffer*
class CORDL_TYPE __Ed25519ctxSigner__Buffer : public ::System::IO::MemoryStream {
public:
  // Declarations
  /// @brief Method GenerateSignature, addr 0x11a78b0, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx);

  static inline ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer* New_ctor();

  /// @brief Method Reset, addr 0x11a7ca0, size 0xf4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method VerifySignature, addr 0x11a7ac4, size 0x1c4, virtual false, abstract: false, final false
  inline bool VerifySignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method .ctor, addr 0x11a76c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ed25519ctxSigner__Buffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519ctxSigner__Buffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Ed25519ctxSigner__Buffer(__Ed25519ctxSigner__Buffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519ctxSigner__Buffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Ed25519ctxSigner__Buffer(__Ed25519ctxSigner__Buffer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
// Type: Org.BouncyCastle.Crypto.Signers::Ed25519ctxSigner
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Signers::Ed25519ctxSigner*
class CORDL_TYPE Ed25519ctxSigner : public ::System::Object {
public:
  // Declarations
  using Buffer = ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer))::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer* buffer;

  /// @brief Field context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::ArrayW<uint8_t, ::Array<uint8_t>*> context;

  /// @brief Field forSigning, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forSigning, put = __cordl_internal_set_forSigning)) bool forSigning;

  /// @brief Field privateKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKey, put = __cordl_internal_set_privateKey))::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey;

  /// @brief Field publicKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey))::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Method BlockUpdate, addr 0x11a7810, size 0x24, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method GenerateSignature, addr 0x11a7834, size 0x7c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method Init, addr 0x11a770c, size 0xe0, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> context);

  /// @brief Method Reset, addr 0x11a7c88, size 0x18, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x11a77ec, size 0x24, virtual true, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method VerifySignature, addr 0x11a7a44, size 0x80, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*& __cordl_internal_get_buffer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_context() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_context();

  constexpr bool const& __cordl_internal_get_forSigning() const;

  constexpr bool& __cordl_internal_get_forSigning();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*& __cordl_internal_get_privateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*> const& __cordl_internal_get_privateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*& __cordl_internal_get_publicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*> const& __cordl_internal_get_publicKey() const;

  constexpr void __cordl_internal_set_buffer(::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer* value);

  constexpr void __cordl_internal_set_context(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_forSigning(bool value);

  constexpr void __cordl_internal_set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* value);

  constexpr void __cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* value);

  /// @brief Method .ctor, addr 0x11a7618, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> context);

  /// @brief Method get_AlgorithmName, addr 0x11a76cc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ed25519ctxSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ed25519ctxSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ed25519ctxSigner(Ed25519ctxSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ed25519ctxSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ed25519ctxSigner(Ed25519ctxSigner const&) = delete;

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer* ___buffer;

  /// @brief Field context, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___context;

  /// @brief Field forSigning, offset: 0x20, size: 0x1, def value: None
  bool ___forSigning;

  /// @brief Field privateKey, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* ___privateKey;

  /// @brief Field publicKey, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* ___publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner, ___context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner, ___forSigning) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner, ___privateKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner, ___publicKey) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*, "Org.BouncyCastle.Crypto.Signers", "Ed25519ctxSigner");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*, "Org.BouncyCastle.Crypto.Signers", "Ed25519ctxSigner/Buffer");

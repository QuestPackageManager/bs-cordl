#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ed25519ctxSigner)
namespace Org::BouncyCastle::Crypto {
class ISigner;
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
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PrivateKeyParameters;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1131))
// CS Name: ::Ed25519ctxSigner::Buffer*
class CORDL_TYPE __Ed25519ctxSigner__Buffer : public ::System::IO::MemoryStream {
public:
  // Declarations
  /// @brief Method GenerateSignature, addr 0xf4a0a4, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx);

  /// @brief Method VerifySignature, addr 0xf4a2b8, size 0x1c4, virtual false, abstract: false, final false
  inline bool VerifySignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Reset, addr 0xf4a494, size 0xf4, virtual false, abstract: false, final false
  inline void Reset();

  static inline ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer* New_ctor();

  /// @brief Method .ctor, addr 0xf49eb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519ctxSigner__Buffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Ed25519ctxSigner__Buffer(__Ed25519ctxSigner__Buffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519ctxSigner__Buffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Ed25519ctxSigner__Buffer(__Ed25519ctxSigner__Buffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ed25519ctxSigner__Buffer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
// Type: Org.BouncyCastle.Crypto.Signers::Ed25519ctxSigner
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1132))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::Ed25519ctxSigner*
class CORDL_TYPE Ed25519ctxSigner : public ::System::Object {
public:
  // Declarations
  using Buffer = ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer* buffer;

  /// @brief Field context, offset 0x18, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::ArrayW<uint8_t, ::Array<uint8_t>*> context;

  /// @brief Field forSigning, offset 0x20, size 0x1
  __declspec(property(get = __get_forSigning, put = __set_forSigning)) bool forSigning;

  /// @brief Field privateKey, offset 0x28, size 0x8
  __declspec(property(get = __get_privateKey, put = __set_privateKey))::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey;

  /// @brief Field publicKey, offset 0x30, size 0x8
  __declspec(property(get = __get_publicKey, put = __set_publicKey))::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*& __get_buffer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*> const& __get_buffer() const;

  constexpr void __set_buffer(::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_context();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_context() const;

  constexpr void __set_context(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_forSigning();

  constexpr bool const& __get_forSigning() const;

  constexpr void __set_forSigning(bool value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*& __get_privateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*> const& __get_privateKey() const;

  constexpr void __set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*& __get_publicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*> const& __get_publicKey() const;

  constexpr void __set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> context);

  /// @brief Method .ctor, addr 0xf49e0c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> context);

  /// @brief Method get_AlgorithmName, addr 0xf49ec0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xf49f00, size 0xe0, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Update, addr 0xf49fe0, size 0x24, virtual true, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method BlockUpdate, addr 0xf4a004, size 0x24, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method GenerateSignature, addr 0xf4a028, size 0x7c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method VerifySignature, addr 0xf4a238, size 0x80, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Reset, addr 0xf4a47c, size 0x18, virtual true, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "Ed25519ctxSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ed25519ctxSigner(Ed25519ctxSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ed25519ctxSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ed25519ctxSigner(Ed25519ctxSigner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ed25519ctxSigner();

public:
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

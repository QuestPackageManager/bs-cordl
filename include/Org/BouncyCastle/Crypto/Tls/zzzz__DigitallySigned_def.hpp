#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DigitallySigned.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigitallySigned)
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DigitallySigned);
// Type: Org.BouncyCastle.Crypto.Tls::DigitallySigned
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DigitallySigned*
class CORDL_TYPE DigitallySigned : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Algorithm;

  __declspec(property(get = get_Signature)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Signature;

  /// @brief Field mAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mAlgorithm, put = __cordl_internal_set_mAlgorithm)) ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* mAlgorithm;

  /// @brief Field mSignature, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mSignature, put = __cordl_internal_set_mSignature)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mSignature;

  /// @brief Method Encode, addr 0x23b95ac, size 0x7c, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* New_ctor(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Parse, addr 0x23ac608, size 0xd4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* input);

  constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*& __cordl_internal_get_mAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*> const& __cordl_internal_get_mAlgorithm() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSignature() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSignature();

  constexpr void __cordl_internal_set_mAlgorithm(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* value);

  constexpr void __cordl_internal_set_mSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23b9524, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method get_Algorithm, addr 0x23b959c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* get_Algorithm();

  /// @brief Method get_Signature, addr 0x23b95a4, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Signature();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigitallySigned();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigitallySigned", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigitallySigned(DigitallySigned&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigitallySigned", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigitallySigned(DigitallySigned const&) = delete;

  /// @brief Field mAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* ___mAlgorithm;

  /// @brief Field mSignature, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSignature;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DigitallySigned, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DigitallySigned, ___mAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DigitallySigned, ___mSignature) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DigitallySigned);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DigitallySigned*, "Org.BouncyCastle.Crypto.Tls", "DigitallySigned");

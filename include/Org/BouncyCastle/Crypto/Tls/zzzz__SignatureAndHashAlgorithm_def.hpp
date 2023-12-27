#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureAndHashAlgorithm)
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm);
// Type: Org.BouncyCastle.Crypto.Tls::SignatureAndHashAlgorithm
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1275))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SignatureAndHashAlgorithm*
class CORDL_TYPE SignatureAndHashAlgorithm : public ::System::Object {
public:
  // Declarations
  /// @brief Field mHash, offset 0x10, size 0x1
  __declspec(property(get = __get_mHash, put = __set_mHash)) uint8_t mHash;

  /// @brief Field mSignature, offset 0x11, size 0x1
  __declspec(property(get = __get_mSignature, put = __set_mSignature)) uint8_t mSignature;

  __declspec(property(get = get_Hash)) uint8_t Hash;

  __declspec(property(get = get_Signature)) uint8_t Signature;

  constexpr uint8_t& __get_mHash();

  constexpr uint8_t const& __get_mHash() const;

  constexpr void __set_mHash(uint8_t value);

  constexpr uint8_t& __get_mSignature();

  constexpr uint8_t const& __get_mSignature() const;

  constexpr void __set_mSignature(uint8_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* New_ctor(uint8_t hash, uint8_t signature);

  /// @brief Method .ctor addr 0xf9664c size 0x164 virtual false final false
  inline void _ctor(uint8_t hash, uint8_t signature);

  /// @brief Method get_Hash addr 0xf967b0 size 0x8 virtual true final false
  inline uint8_t get_Hash();

  /// @brief Method get_Signature addr 0xf967b8 size 0x8 virtual true final false
  inline uint8_t get_Signature();

  /// @brief Method Equals addr 0xf967c0 size 0xd0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0xf96890 size 0x44 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Encode addr 0xf968d4 size 0x9c virtual true final false
  inline void Encode(::System::IO::Stream* output);

  /// @brief Method Parse addr 0xf96970 size 0xac virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Parse(::System::IO::Stream* input);

  // Ctor Parameters [CppParam { name: "", ty: "SignatureAndHashAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureAndHashAlgorithm(SignatureAndHashAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureAndHashAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureAndHashAlgorithm(SignatureAndHashAlgorithm const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureAndHashAlgorithm();

public:
  /// @brief Field mHash, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mHash;

  /// @brief Field mSignature, offset: 0x11, size: 0x1, def value: None
  uint8_t ___mSignature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "SignatureAndHashAlgorithm");

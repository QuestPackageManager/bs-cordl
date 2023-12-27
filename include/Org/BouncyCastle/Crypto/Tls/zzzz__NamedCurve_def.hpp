#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedCurve)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class NamedCurve;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::NamedCurve);
// Type: Org.BouncyCastle.Crypto.Tls::NamedCurve
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1255))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::NamedCurve*
class CORDL_TYPE NamedCurve : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid addr 0xf91ed0 size 0x28 virtual false final false
  static inline bool IsValid(int32_t namedCurve);

  /// @brief Method RefersToASpecificNamedCurve addr 0xf91ef8 size 0x14 virtual false final false
  static inline bool RefersToASpecificNamedCurve(int32_t namedCurve);

  static inline ::Org::BouncyCastle::Crypto::Tls::NamedCurve* New_ctor();

  /// @brief Method .ctor addr 0xf91f0c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NamedCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedCurve(NamedCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedCurve(NamedCurve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedCurve();

public:
  /// @brief Field sect163k1 offset 0xffffffff size 0x4
  static constexpr int32_t sect163k1{ static_cast<int32_t>(0x1) };

  /// @brief Field sect163r1 offset 0xffffffff size 0x4
  static constexpr int32_t sect163r1{ static_cast<int32_t>(0x2) };

  /// @brief Field sect163r2 offset 0xffffffff size 0x4
  static constexpr int32_t sect163r2{ static_cast<int32_t>(0x3) };

  /// @brief Field sect193r1 offset 0xffffffff size 0x4
  static constexpr int32_t sect193r1{ static_cast<int32_t>(0x4) };

  /// @brief Field sect193r2 offset 0xffffffff size 0x4
  static constexpr int32_t sect193r2{ static_cast<int32_t>(0x5) };

  /// @brief Field sect233k1 offset 0xffffffff size 0x4
  static constexpr int32_t sect233k1{ static_cast<int32_t>(0x6) };

  /// @brief Field sect233r1 offset 0xffffffff size 0x4
  static constexpr int32_t sect233r1{ static_cast<int32_t>(0x7) };

  /// @brief Field sect239k1 offset 0xffffffff size 0x4
  static constexpr int32_t sect239k1{ static_cast<int32_t>(0x8) };

  /// @brief Field sect283k1 offset 0xffffffff size 0x4
  static constexpr int32_t sect283k1{ static_cast<int32_t>(0x9) };

  /// @brief Field sect283r1 offset 0xffffffff size 0x4
  static constexpr int32_t sect283r1{ static_cast<int32_t>(0xa) };

  /// @brief Field sect409k1 offset 0xffffffff size 0x4
  static constexpr int32_t sect409k1{ static_cast<int32_t>(0xb) };

  /// @brief Field sect409r1 offset 0xffffffff size 0x4
  static constexpr int32_t sect409r1{ static_cast<int32_t>(0xc) };

  /// @brief Field sect571k1 offset 0xffffffff size 0x4
  static constexpr int32_t sect571k1{ static_cast<int32_t>(0xd) };

  /// @brief Field sect571r1 offset 0xffffffff size 0x4
  static constexpr int32_t sect571r1{ static_cast<int32_t>(0xe) };

  /// @brief Field secp160k1 offset 0xffffffff size 0x4
  static constexpr int32_t secp160k1{ static_cast<int32_t>(0xf) };

  /// @brief Field secp160r1 offset 0xffffffff size 0x4
  static constexpr int32_t secp160r1{ static_cast<int32_t>(0x10) };

  /// @brief Field secp160r2 offset 0xffffffff size 0x4
  static constexpr int32_t secp160r2{ static_cast<int32_t>(0x11) };

  /// @brief Field secp192k1 offset 0xffffffff size 0x4
  static constexpr int32_t secp192k1{ static_cast<int32_t>(0x12) };

  /// @brief Field secp192r1 offset 0xffffffff size 0x4
  static constexpr int32_t secp192r1{ static_cast<int32_t>(0x13) };

  /// @brief Field secp224k1 offset 0xffffffff size 0x4
  static constexpr int32_t secp224k1{ static_cast<int32_t>(0x14) };

  /// @brief Field secp224r1 offset 0xffffffff size 0x4
  static constexpr int32_t secp224r1{ static_cast<int32_t>(0x15) };

  /// @brief Field secp256k1 offset 0xffffffff size 0x4
  static constexpr int32_t secp256k1{ static_cast<int32_t>(0x16) };

  /// @brief Field secp256r1 offset 0xffffffff size 0x4
  static constexpr int32_t secp256r1{ static_cast<int32_t>(0x17) };

  /// @brief Field secp384r1 offset 0xffffffff size 0x4
  static constexpr int32_t secp384r1{ static_cast<int32_t>(0x18) };

  /// @brief Field secp521r1 offset 0xffffffff size 0x4
  static constexpr int32_t secp521r1{ static_cast<int32_t>(0x19) };

  /// @brief Field brainpoolP256r1 offset 0xffffffff size 0x4
  static constexpr int32_t brainpoolP256r1{ static_cast<int32_t>(0x1a) };

  /// @brief Field brainpoolP384r1 offset 0xffffffff size 0x4
  static constexpr int32_t brainpoolP384r1{ static_cast<int32_t>(0x1b) };

  /// @brief Field brainpoolP512r1 offset 0xffffffff size 0x4
  static constexpr int32_t brainpoolP512r1{ static_cast<int32_t>(0x1c) };

  /// @brief Field arbitrary_explicit_prime_curves offset 0xffffffff size 0x4
  static constexpr int32_t arbitrary_explicit_prime_curves{ static_cast<int32_t>(0xff01) };

  /// @brief Field arbitrary_explicit_char2_curves offset 0xffffffff size 0x4
  static constexpr int32_t arbitrary_explicit_char2_curves{ static_cast<int32_t>(0xff02) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::NamedCurve, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::NamedCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::NamedCurve*, "Org.BouncyCastle.Crypto.Tls", "NamedCurve");

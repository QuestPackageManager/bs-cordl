#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\DesParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DesParameters;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Parameters::DesParameters*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Parameters::DesParameters*, "Org.BouncyCastle.Crypto.Parameters", "DesParameters");
// Dependencies Org.BouncyCastle.Crypto.Parameters.KeyParameter
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.DesParameters
class CORDL_TYPE DesParameters : public ::Org::BouncyCastle::Crypto::Parameters::KeyParameter {
public:
  // Declarations
  /// @brief Field DES_weak_keys, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DES_weak_keys, put = setStaticF_DES_weak_keys)) ::ArrayW<uint8_t> DES_weak_keys;

  /// @brief Method IsWeakKey, addr 0x340ccb8, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t> key);

  /// @brief Method IsWeakKey, addr 0x340cdf0, size 0x178, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t> key, int32_t offset);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DesParameters* New_ctor(::ArrayW<uint8_t> key);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DesParameters* New_ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen);

  /// @brief Method SetOddParity, addr 0x340cf68, size 0x20, virtual false, abstract: false, final false
  static inline uint8_t SetOddParity(uint8_t b);

  /// @brief Method SetOddParity, addr 0x340cf88, size 0xcc, virtual false, abstract: false, final false
  static inline void SetOddParity(::ArrayW<uint8_t> bytes);

  /// @brief Method SetOddParity, addr 0x340d054, size 0xe4, virtual false, abstract: false, final false
  static inline void SetOddParity(::ArrayW<uint8_t> bytes, int32_t off, int32_t len);

  /// @brief Method .ctor, addr 0x340cbf8, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> key);

  /// @brief Method .ctor, addr 0x340cd14, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen);

  static inline ::ArrayW<uint8_t> getStaticF_DES_weak_keys();

  static inline void setStaticF_DES_weak_keys(::ArrayW<uint8_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesParameters(DesParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesParameters(DesParameters const&) = delete;

  /// @brief Field DesKeyLength offset 0xffffffff size 0x4
  static constexpr int32_t DesKeyLength{ static_cast<int32_t>(0x8) };

  /// @brief Field N_DES_WEAK_KEYS offset 0xffffffff size 0x4
  static constexpr int32_t N_DES_WEAK_KEYS{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1016 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::DesParameters) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters

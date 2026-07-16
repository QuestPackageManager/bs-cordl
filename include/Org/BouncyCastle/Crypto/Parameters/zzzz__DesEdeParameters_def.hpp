#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/DesEdeParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DesParameters_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesEdeParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DesEdeParameters;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters*, "Org.BouncyCastle.Crypto.Parameters", "DesEdeParameters");
// Dependencies Org.BouncyCastle.Crypto.Parameters.DesParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.DesEdeParameters
class CORDL_TYPE DesEdeParameters : public ::Org::BouncyCastle::Crypto::Parameters::DesParameters {
public:
  // Declarations
  /// @brief Method FixKey, addr 0x340ae48, size 0x1a4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FixKey(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen);

  /// @brief Method IsReal2Key, addr 0x340b2d0, size 0x94, virtual false, abstract: false, final false
  static inline bool IsReal2Key(::ArrayW<uint8_t> key, int32_t offset);

  /// @brief Method IsReal3Key, addr 0x340b1e8, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsReal3Key(::ArrayW<uint8_t> key, int32_t offset);

  /// @brief Method IsRealEdeKey, addr 0x340b1c8, size 0x20, virtual false, abstract: false, final false
  static inline bool IsRealEdeKey(::ArrayW<uint8_t> key, int32_t offset);

  /// @brief Method IsWeakKey, addr 0x340afec, size 0x18, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t> key);

  /// @brief Method IsWeakKey, addr 0x340b1b0, size 0x18, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t> key, int32_t offset);

  /// @brief Method IsWeakKey, addr 0x340b11c, size 0x94, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t> key, int32_t offset, int32_t length);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters* New_ctor(::ArrayW<uint8_t> key);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters* New_ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen);

  /// @brief Method .ctor, addr 0x340b004, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> key);

  /// @brief Method .ctor, addr 0x340b08c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesEdeParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesEdeParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesEdeParameters(DesEdeParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesEdeParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesEdeParameters(DesEdeParameters const&) = delete;

  /// @brief Field DesEdeKeyLength offset 0xffffffff size 0x4
  static constexpr int32_t DesEdeKeyLength{ static_cast<int32_t>(0x18) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1017 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters

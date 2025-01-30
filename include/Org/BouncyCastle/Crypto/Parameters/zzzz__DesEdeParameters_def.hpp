#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/DesEdeParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DesParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesEdeParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DesEdeParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters);
// Dependencies Org.BouncyCastle.Crypto.Parameters.DesParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.DesEdeParameters
class CORDL_TYPE DesEdeParameters : public ::Org::BouncyCastle::Crypto::Parameters::DesParameters {
public:
  // Declarations
  /// @brief Method FixKey, addr 0x23b7884, size 0x1a4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FixKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t keyOff, int32_t keyLen);

  /// @brief Method IsReal2Key, addr 0x23b7cc8, size 0x64, virtual false, abstract: false, final false
  static inline bool IsReal2Key(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t offset);

  /// @brief Method IsReal3Key, addr 0x23b7c20, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsReal3Key(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t offset);

  /// @brief Method IsRealEdeKey, addr 0x23b7bf8, size 0x28, virtual false, abstract: false, final false
  static inline bool IsRealEdeKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t offset);

  /// @brief Method IsWeakKey, addr 0x23b7a28, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method IsWeakKey, addr 0x23b7bdc, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t offset);

  /// @brief Method IsWeakKey, addr 0x23b7b4c, size 0x90, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t offset, int32_t length);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t keyOff, int32_t keyLen);

  /// @brief Method .ctor, addr 0x23b7a44, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method .ctor, addr 0x23b7ac0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t keyOff, int32_t keyLen);

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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DesEdeParameters*, "Org.BouncyCastle.Crypto.Parameters", "DesEdeParameters");

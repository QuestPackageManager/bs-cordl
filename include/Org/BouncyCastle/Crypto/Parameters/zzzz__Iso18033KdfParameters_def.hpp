#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Iso18033KdfParameters)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Iso18033KdfParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Iso18033KdfParameters
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1060))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Iso18033KdfParameters*
class CORDL_TYPE Iso18033KdfParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field seed, offset 0x10, size 0x8
  __declspec(property(get = __get_seed, put = __set_seed))::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_seed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_seed() const;

  constexpr void __set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method .ctor addr 0xec1b3c size 0x28 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method GetSeed addr 0xec1b64 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed();

  // Ctor Parameters [CppParam { name: "", ty: "Iso18033KdfParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Iso18033KdfParameters(Iso18033KdfParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Iso18033KdfParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Iso18033KdfParameters(Iso18033KdfParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Iso18033KdfParameters();

public:
  /// @brief Field seed, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters, ___seed) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*, "Org.BouncyCastle.Crypto.Parameters", "Iso18033KdfParameters");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/MgfParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MgfParameters)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class MgfParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::MgfParameters);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.MgfParameters
class CORDL_TYPE MgfParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field seed, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed)) ::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

  /// @brief Method GetSeed, addr 0x3318f08, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed();

  static inline ::Org::BouncyCastle::Crypto::Parameters::MgfParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  static inline ::Org::BouncyCastle::Crypto::Parameters::MgfParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t off, int32_t len);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_seed() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_seed();

  constexpr void __cordl_internal_set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3318e68, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method .ctor, addr 0x3318e80, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t off, int32_t len);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MgfParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MgfParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MgfParameters(MgfParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MgfParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MgfParameters(MgfParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1065 };

  /// @brief Field seed, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::MgfParameters, ___seed) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::MgfParameters, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::MgfParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::MgfParameters*, "Org.BouncyCastle.Crypto.Parameters", "MgfParameters");

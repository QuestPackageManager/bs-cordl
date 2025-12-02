#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/RC5Parameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC5Parameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RC5Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::RC5Parameters);
// Dependencies Org.BouncyCastle.Crypto.Parameters.KeyParameter
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.RC5Parameters
class CORDL_TYPE RC5Parameters : public ::Org::BouncyCastle::Crypto::Parameters::KeyParameter {
public:
  // Declarations
  __declspec(property(get = get_Rounds)) int32_t Rounds;

  /// @brief Field rounds, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rounds, put = __cordl_internal_set_rounds)) int32_t rounds;

  static inline ::Org::BouncyCastle::Crypto::Parameters::RC5Parameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t rounds);

  constexpr int32_t const& __cordl_internal_get_rounds() const;

  constexpr int32_t& __cordl_internal_get_rounds();

  constexpr void __cordl_internal_set_rounds(int32_t value);

  /// @brief Method .ctor, addr 0x32ef0f4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t rounds);

  /// @brief Method get_Rounds, addr 0x32ef17c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Rounds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC5Parameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC5Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC5Parameters(RC5Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC5Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC5Parameters(RC5Parameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1077 };

  /// @brief Field rounds, offset: 0x18, size: 0x4, def value: None
  int32_t ___rounds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RC5Parameters, ___rounds) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RC5Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*, "Org.BouncyCastle.Crypto.Parameters", "RC5Parameters");

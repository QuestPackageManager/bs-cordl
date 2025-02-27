#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/ParametersWithSBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParametersWithSBox)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithSBox;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox);
// Dependencies Org.BouncyCastle.Crypto.ICipherParameters, System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
class CORDL_TYPE ParametersWithSBox : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Parameters)) ::Org::BouncyCastle::Crypto::ICipherParameters* Parameters;

  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::Org::BouncyCastle::Crypto::ICipherParameters* parameters;

  /// @brief Field sBox, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sBox, put = __cordl_internal_set_sBox)) ::ArrayW<uint8_t, ::Array<uint8_t>*> sBox;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Method GetSBox, addr 0x23c534c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSBox();

  static inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox* New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> sBox);

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* const& __cordl_internal_get_parameters() const;

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __cordl_internal_get_parameters();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_sBox() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_sBox();

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  constexpr void __cordl_internal_set_sBox(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23c5320, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> sBox);

  /// @brief Method get_Parameters, addr 0x23c5354, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParametersWithSBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParametersWithSBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParametersWithSBox(ParametersWithSBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParametersWithSBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParametersWithSBox(ParametersWithSBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1075 };

  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ICipherParameters* ___parameters;

  /// @brief Field sBox, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sBox;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox, ___parameters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox, ___sBox) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithSBox");

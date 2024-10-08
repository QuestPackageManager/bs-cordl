#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/ElGamalKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalKeyParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalKeyParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ElGamalKeyParameters*
class CORDL_TYPE ElGamalKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  __declspec(property(get = get_Parameters)) ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* Parameters;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters;

  /// @brief Method Equals, addr 0x237dc44, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x237dce0, size 0x50, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* other);

  /// @brief Method GetHashCode, addr 0x237dd30, size 0x38, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* New_ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*> const& __cordl_internal_get_parameters() const;

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* value);

  /// @brief Method .ctor, addr 0x237dc0c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters);

  /// @brief Method get_Parameters, addr 0x237dc3c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* get_Parameters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalKeyParameters(ElGamalKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalKeyParameters(ElGamalKeyParameters const&) = delete;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* ___parameters;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1047 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters, ___parameters) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalKeyParameters");

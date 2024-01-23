#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPolynomial)
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::IPolynomial);
// Type: Org.BouncyCastle.Math.Field::IPolynomial
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1585))
// CS Name: ::Org.BouncyCastle.Math.Field::IPolynomial*
class CORDL_TYPE IPolynomial {
public:
  // Declarations
  __declspec(property(get = get_Degree)) int32_t Degree;

  /// @brief Method get_Degree, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Degree();

  /// @brief Method GetExponentsPresent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetExponentsPresent();

  // Ctor Parameters [CppParam { name: "", ty: "IPolynomial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPolynomial(IPolynomial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPolynomial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPolynomial(IPolynomial const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IPolynomial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IPolynomial*, "Org.BouncyCastle.Math.Field", "IPolynomial");

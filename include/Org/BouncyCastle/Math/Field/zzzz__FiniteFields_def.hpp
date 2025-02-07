#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/FiniteFields.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FiniteFields)
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomialExtensionField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class FiniteFields;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::FiniteFields);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Field.FiniteFields
class CORDL_TYPE FiniteFields : public ::System::Object {
public:
  // Declarations
  /// @brief Field GF_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GF_2, put = setStaticF_GF_2)) ::Org::BouncyCastle::Math::Field::IFiniteField* GF_2;

  /// @brief Field GF_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GF_3, put = setStaticF_GF_3)) ::Org::BouncyCastle::Math::Field::IFiniteField* GF_3;

  /// @brief Method GetBinaryExtensionField, addr 0x24dd3b0, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField* GetBinaryExtensionField(::ArrayW<int32_t, ::Array<int32_t>*> exponents);

  /// @brief Method GetPrimeField, addr 0x24dd5d8, size 0x180, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::Field::IFiniteField* GetPrimeField(::Org::BouncyCastle::Math::BigInteger* characteristic);

  static inline ::Org::BouncyCastle::Math::Field::FiniteFields* New_ctor();

  /// @brief Method .ctor, addr 0x24dd86c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Math::Field::IFiniteField* getStaticF_GF_2();

  static inline ::Org::BouncyCastle::Math::Field::IFiniteField* getStaticF_GF_3();

  static inline void setStaticF_GF_2(::Org::BouncyCastle::Math::Field::IFiniteField* value);

  static inline void setStaticF_GF_3(::Org::BouncyCastle::Math::Field::IFiniteField* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FiniteFields();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FiniteFields", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FiniteFields(FiniteFields&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FiniteFields", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FiniteFields(FiniteFields const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1580 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Field::FiniteFields, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::FiniteFields);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::FiniteFields*, "Org.BouncyCastle.Math.Field", "FiniteFields");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/GenericPolynomialExtensionField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/Field/zzzz__IExtensionField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IPolynomialExtensionField_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericPolynomialExtensionField)
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class GenericPolynomialExtensionField;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField);
// Dependencies Org.BouncyCastle.Math.Field.IExtensionField, Org.BouncyCastle.Math.Field.IFiniteField, Org.BouncyCastle.Math.Field.IPolynomialExtensionField, System.Object
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
class CORDL_TYPE GenericPolynomialExtensionField : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Characteristic)) ::Org::BouncyCastle::Math::BigInteger* Characteristic;

  __declspec(property(get = get_Degree)) int32_t Degree;

  __declspec(property(get = get_Dimension)) int32_t Dimension;

  __declspec(property(get = get_MinimalPolynomial)) ::Org::BouncyCastle::Math::Field::IPolynomial* MinimalPolynomial;

  __declspec(property(get = get_Subfield)) ::Org::BouncyCastle::Math::Field::IFiniteField* Subfield;

  /// @brief Field minimalPolynomial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_minimalPolynomial, put = __cordl_internal_set_minimalPolynomial)) ::Org::BouncyCastle::Math::Field::IPolynomial* minimalPolynomial;

  /// @brief Field subfield, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subfield, put = __cordl_internal_set_subfield)) ::Org::BouncyCastle::Math::Field::IFiniteField* subfield;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IExtensionField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IExtensionField*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IPolynomialExtensionField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField*() noexcept;

  /// @brief Method Equals, addr 0x24dd460, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x24dd530, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField* New_ctor(::Org::BouncyCastle::Math::Field::IFiniteField* subfield,
                                                                                            ::Org::BouncyCastle::Math::Field::IPolynomial* polynomial);

  constexpr ::Org::BouncyCastle::Math::Field::IPolynomial* const& __cordl_internal_get_minimalPolynomial() const;

  constexpr ::Org::BouncyCastle::Math::Field::IPolynomial*& __cordl_internal_get_minimalPolynomial();

  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* const& __cordl_internal_get_subfield() const;

  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField*& __cordl_internal_get_subfield();

  constexpr void __cordl_internal_set_minimalPolynomial(::Org::BouncyCastle::Math::Field::IPolynomial* value);

  constexpr void __cordl_internal_set_subfield(::Org::BouncyCastle::Math::Field::IFiniteField* value);

  /// @brief Method .ctor, addr 0x24dcf24, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::Field::IFiniteField* subfield, ::Org::BouncyCastle::Math::Field::IPolynomial* polynomial);

  /// @brief Method get_Characteristic, addr 0x24dd1ec, size 0xa0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Characteristic();

  /// @brief Method get_Degree, addr 0x24dd3b8, size 0xa0, virtual true, abstract: false, final false
  inline int32_t get_Degree();

  /// @brief Method get_Dimension, addr 0x24dd28c, size 0x124, virtual true, abstract: false, final false
  inline int32_t get_Dimension();

  /// @brief Method get_MinimalPolynomial, addr 0x24dd458, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial();

  /// @brief Method get_Subfield, addr 0x24dd3b0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::Field::IFiniteField* get_Subfield();

  /// @brief Convert to "::Org::BouncyCastle::Math::Field::IExtensionField"
  constexpr ::Org::BouncyCastle::Math::Field::IExtensionField* i___Org__BouncyCastle__Math__Field__IExtensionField() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* i___Org__BouncyCastle__Math__Field__IFiniteField() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Math::Field::IPolynomialExtensionField"
  constexpr ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField* i___Org__BouncyCastle__Math__Field__IPolynomialExtensionField() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPolynomialExtensionField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericPolynomialExtensionField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPolynomialExtensionField(GenericPolynomialExtensionField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPolynomialExtensionField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPolynomialExtensionField(GenericPolynomialExtensionField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1584 };

  /// @brief Field subfield, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::Field::IFiniteField* ___subfield;

  /// @brief Field minimalPolynomial, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::Field::IPolynomial* ___minimalPolynomial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField, ___subfield) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField, ___minimalPolynomial) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*, "Org.BouncyCastle.Math.Field", "GenericPolynomialExtensionField");

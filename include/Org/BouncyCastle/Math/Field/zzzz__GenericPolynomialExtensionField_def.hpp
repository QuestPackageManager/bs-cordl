#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericPolynomialExtensionField)
namespace Org::BouncyCastle::Math::Field {
class IExtensionField;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomialExtensionField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
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
// Type: Org.BouncyCastle.Math.Field::GenericPolynomialExtensionField
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1584))
// CS Name: ::Org.BouncyCastle.Math.Field::GenericPolynomialExtensionField*
class CORDL_TYPE GenericPolynomialExtensionField : public ::System::Object {
public:
  // Declarations
  /// @brief Field subfield, offset 0x10, size 0x8
  __declspec(property(get = __get_subfield, put = __set_subfield))::Org::BouncyCastle::Math::Field::IFiniteField* subfield;

  /// @brief Field minimalPolynomial, offset 0x18, size 0x8
  __declspec(property(get = __get_minimalPolynomial, put = __set_minimalPolynomial))::Org::BouncyCastle::Math::Field::IPolynomial* minimalPolynomial;

  __declspec(property(get = get_Characteristic))::Org::BouncyCastle::Math::BigInteger* Characteristic;

  __declspec(property(get = get_Dimension)) int32_t Dimension;

  __declspec(property(get = get_Subfield))::Org::BouncyCastle::Math::Field::IFiniteField* Subfield;

  __declspec(property(get = get_Degree)) int32_t Degree;

  __declspec(property(get = get_MinimalPolynomial))::Org::BouncyCastle::Math::Field::IPolynomial* MinimalPolynomial;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IPolynomialExtensionField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IExtensionField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IExtensionField*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept;

  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField*& __get_subfield();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::Field::IFiniteField*> const& __get_subfield() const;

  constexpr void __set_subfield(::Org::BouncyCastle::Math::Field::IFiniteField* value);

  constexpr ::Org::BouncyCastle::Math::Field::IPolynomial*& __get_minimalPolynomial();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::Field::IPolynomial*> const& __get_minimalPolynomial() const;

  constexpr void __set_minimalPolynomial(::Org::BouncyCastle::Math::Field::IPolynomial* value);

  static inline ::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField* New_ctor(::Org::BouncyCastle::Math::Field::IFiniteField* subfield,
                                                                                            ::Org::BouncyCastle::Math::Field::IPolynomial* polynomial);

  /// @brief Method .ctor addr 0xfea084 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::Field::IFiniteField* subfield, ::Org::BouncyCastle::Math::Field::IPolynomial* polynomial);

  /// @brief Method get_Characteristic addr 0xfea358 size 0xa0 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Characteristic();

  /// @brief Method get_Dimension addr 0xfea3f8 size 0x124 virtual true final false
  inline int32_t get_Dimension();

  /// @brief Method get_Subfield addr 0xfea51c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::Field::IFiniteField* get_Subfield();

  /// @brief Method get_Degree addr 0xfea524 size 0xa0 virtual true final false
  inline int32_t get_Degree();

  /// @brief Method get_MinimalPolynomial addr 0xfea5c4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial();

  /// @brief Method Equals addr 0xfea5cc size 0xd0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0xfea69c size 0x54 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "GenericPolynomialExtensionField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPolynomialExtensionField(GenericPolynomialExtensionField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPolynomialExtensionField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPolynomialExtensionField(GenericPolynomialExtensionField const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPolynomialExtensionField();

public:
  /// @brief Field subfield, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::Field::IFiniteField* ___subfield;

  /// @brief Field minimalPolynomial, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::Field::IPolynomial* ___minimalPolynomial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField, ___subfield) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField, ___minimalPolynomial) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField*, "Org.BouncyCastle.Math.Field", "GenericPolynomialExtensionField");

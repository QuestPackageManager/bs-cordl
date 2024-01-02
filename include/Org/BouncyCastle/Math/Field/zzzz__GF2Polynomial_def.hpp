#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GF2Polynomial)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class GF2Polynomial;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::GF2Polynomial);
// Type: Org.BouncyCastle.Math.Field::GF2Polynomial
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1586))
// CS Name: ::Org.BouncyCastle.Math.Field::GF2Polynomial*
class CORDL_TYPE GF2Polynomial : public ::System::Object {
public:
  // Declarations
  /// @brief Field exponents, offset 0x10, size 0x8
  __declspec(property(get = __get_exponents, put = __set_exponents))::ArrayW<int32_t, ::Array<int32_t>*> exponents;

  __declspec(property(get = get_Degree)) int32_t Degree;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IPolynomial"
  constexpr operator ::Org::BouncyCastle::Math::Field::IPolynomial*() noexcept;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_exponents();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_exponents() const;

  constexpr void __set_exponents(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::Org::BouncyCastle::Math::Field::GF2Polynomial* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> exponents);

  /// @brief Method .ctor, addr 0x105b258, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> exponents);

  /// @brief Method get_Degree, addr 0x105b93c, size 0x34, virtual true, abstract: false, final false
  inline int32_t get_Degree();

  /// @brief Method GetExponentsPresent, addr 0x105b970, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetExponentsPresent();

  /// @brief Method Equals, addr 0x105b9cc, size 0xd8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x105baa4, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "GF2Polynomial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GF2Polynomial(GF2Polynomial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GF2Polynomial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GF2Polynomial(GF2Polynomial const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GF2Polynomial();

public:
  /// @brief Field exponents, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___exponents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Field::GF2Polynomial, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::Field::GF2Polynomial, ___exponents) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::GF2Polynomial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::GF2Polynomial*, "Org.BouncyCastle.Math.Field", "GF2Polynomial");

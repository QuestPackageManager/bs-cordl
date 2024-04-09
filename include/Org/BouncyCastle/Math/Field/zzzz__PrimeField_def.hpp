#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimeField)
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class PrimeField;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::PrimeField);
// Type: Org.BouncyCastle.Math.Field::PrimeField
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.Field::PrimeField*
class CORDL_TYPE PrimeField : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Characteristic))::Org::BouncyCastle::Math::BigInteger* Characteristic;

  __declspec(property(get = get_Dimension)) int32_t Dimension;

  /// @brief Field characteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic))::Org::BouncyCastle::Math::BigInteger* characteristic;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept;

  /// @brief Method Equals, addr 0x11cbbf8, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x11cbcac, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Math::Field::PrimeField* New_ctor(::Org::BouncyCastle::Math::BigInteger* characteristic);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_characteristic();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_characteristic() const;

  constexpr void __cordl_internal_set_characteristic(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x11cb564, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* characteristic);

  /// @brief Method get_Characteristic, addr 0x11cbbe8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Characteristic();

  /// @brief Method get_Dimension, addr 0x11cbbf0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Dimension();

  /// @brief Convert to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* i___Org__BouncyCastle__Math__Field__IFiniteField() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimeField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimeField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimeField(PrimeField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimeField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimeField(PrimeField const&) = delete;

  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___characteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Field::PrimeField, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::Field::PrimeField, ___characteristic) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::PrimeField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::PrimeField*, "Org.BouncyCastle.Math.Field", "PrimeField");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/X9IntegerConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X9IntegerConverter)
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9IntegerConverter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9IntegerConverter);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X9.X9IntegerConverter
class CORDL_TYPE X9IntegerConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetByteLength, addr 0x26276f4, size 0x34, virtual false, abstract: false, final false
  static inline int32_t GetByteLength(::Org::BouncyCastle::Math::EC::ECCurve* c);

  /// @brief Method GetByteLength, addr 0x26273bc, size 0x34, virtual false, abstract: false, final false
  static inline int32_t GetByteLength(::Org::BouncyCastle::Math::EC::ECFieldElement* fe);

  /// @brief Method IntegerToBytes, addr 0x26273f0, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntegerToBytes(::Org::BouncyCastle::Math::BigInteger* s, int32_t qLength);

  static inline ::Org::BouncyCastle::Asn1::X9::X9IntegerConverter* New_ctor();

  /// @brief Method .ctor, addr 0x2627728, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X9IntegerConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X9IntegerConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X9IntegerConverter(X9IntegerConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X9IntegerConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X9IntegerConverter(X9IntegerConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9IntegerConverter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*, "Org.BouncyCastle.Asn1.X9", "X9IntegerConverter");

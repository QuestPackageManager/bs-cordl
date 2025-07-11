#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerSetGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerSetGenerator)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerSetGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerSetGenerator);
// Dependencies Org.BouncyCastle.Asn1.BerGenerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerSetGenerator
class CORDL_TYPE BerSetGenerator : public ::Org::BouncyCastle::Asn1::BerGenerator {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::BerSetGenerator* New_ctor(::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Asn1::BerSetGenerator* New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method .ctor, addr 0x263628c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor, addr 0x26362c0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerSetGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerSetGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerSetGenerator(BerSetGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerSetGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerSetGenerator(BerSetGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 493 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerSetGenerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerSetGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerSetGenerator*, "Org.BouncyCastle.Asn1", "BerSetGenerator");

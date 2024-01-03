#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PgpKeyRing)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyRing;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyRing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1647))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyRing*
class CORDL_TYPE PgpKeyRing : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing* New_ctor();

  /// @brief Method .ctor, addr 0x10adef4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method ReadOptionalTrustPacket, addr 0x10adefc, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::TrustPacket* ReadOptionalTrustPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method ReadSignaturesAndTrust, addr 0x10adf9c, size 0x2c8, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ReadSignaturesAndTrust(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method ReadUserIDs, addr 0x10ae264, size 0x340, virtual false, abstract: false, final false
  static inline void ReadUserIDs(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput, ByRef<::System::Collections::IList*> ids, ByRef<::System::Collections::IList*> idTrusts,
                                 ByRef<::System::Collections::IList*> idSigs);

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpKeyRing(PgpKeyRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpKeyRing(PgpKeyRing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpKeyRing();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyRing");

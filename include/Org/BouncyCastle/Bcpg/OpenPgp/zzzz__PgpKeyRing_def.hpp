#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpKeyRing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
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
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpObject
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyRing
class CORDL_TYPE PgpKeyRing : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing* New_ctor();

  /// @brief Method ReadOptionalTrustPacket, addr 0x252dad0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::TrustPacket* ReadOptionalTrustPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method ReadSignaturesAndTrust, addr 0x252db70, size 0x2b4, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ReadSignaturesAndTrust(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method ReadUserIDs, addr 0x252de24, size 0x33c, virtual false, abstract: false, final false
  static inline void ReadUserIDs(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput, ::ByRef<::System::Collections::IList*> ids, ::ByRef<::System::Collections::IList*> idTrusts,
                                 ::ByRef<::System::Collections::IList*> idSigs);

  /// @brief Method .ctor, addr 0x252dac8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpKeyRing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpKeyRing(PgpKeyRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpKeyRing(PgpKeyRing const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1647 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyRing");

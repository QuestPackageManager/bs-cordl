#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpExperimental.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
CORDL_MODULE_EXPORT(PgpExperimental)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class ExperimentalPacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpExperimental;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental);
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpObject
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpExperimental
class CORDL_TYPE PgpExperimental : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) ::Org::BouncyCastle::Bcpg::ExperimentalPacket* p;

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  constexpr ::Org::BouncyCastle::Bcpg::ExperimentalPacket* const& __cordl_internal_get_p() const;

  constexpr ::Org::BouncyCastle::Bcpg::ExperimentalPacket*& __cordl_internal_get_p();

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Bcpg::ExperimentalPacket* value);

  /// @brief Method .ctor, addr 0x252d348, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpExperimental();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpExperimental", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpExperimental(PgpExperimental&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpExperimental", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpExperimental(PgpExperimental const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1644 };

  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::ExperimentalPacket* ___p;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental, ___p) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpExperimental");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
CORDL_MODULE_EXPORT(PgpExperimental)
namespace Org::BouncyCastle::Bcpg {
class ExperimentalPacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpExperimental;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpExperimental
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1644))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpExperimental*
class CORDL_TYPE PgpExperimental : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Bcpg::ExperimentalPacket* p;

  constexpr ::Org::BouncyCastle::Bcpg::ExperimentalPacket*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::ExperimentalPacket*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Bcpg::ExperimentalPacket* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x103c4f4 size 0xc0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  // Ctor Parameters [CppParam { name: "", ty: "PgpExperimental", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpExperimental(PgpExperimental&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpExperimental", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpExperimental(PgpExperimental const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpExperimental();

public:
  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::ExperimentalPacket* ___p;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental, ___p) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpExperimental");

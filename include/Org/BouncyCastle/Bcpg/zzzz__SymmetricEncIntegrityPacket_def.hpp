#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SymmetricEncIntegrityPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SymmetricEncIntegrityPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SymmetricEncIntegrityPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket);
// Dependencies Org.BouncyCastle.Bcpg.InputStreamPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.SymmetricEncIntegrityPacket
class CORDL_TYPE SymmetricEncIntegrityPacket : public ::Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
  // Declarations
  /// @brief Field version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  static inline ::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x26425b0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymmetricEncIntegrityPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SymmetricEncIntegrityPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymmetricEncIntegrityPacket(SymmetricEncIntegrityPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricEncIntegrityPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymmetricEncIntegrityPacket(SymmetricEncIntegrityPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 593 };

  /// @brief Field version, offset: 0x18, size: 0x4, def value: None
  int32_t ___version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket, ___version) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket*, "Org.BouncyCastle.Bcpg", "SymmetricEncIntegrityPacket");

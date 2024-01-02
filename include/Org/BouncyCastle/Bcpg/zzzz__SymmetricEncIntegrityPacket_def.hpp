#pragma once
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
// Type: Org.BouncyCastle.Bcpg::SymmetricEncIntegrityPacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(593))
// CS Name: ::Org.BouncyCastle.Bcpg::SymmetricEncIntegrityPacket*
class CORDL_TYPE SymmetricEncIntegrityPacket : public ::Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
  // Declarations
  /// @brief Field version, offset 0x18, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  static inline ::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x11cf198, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricEncIntegrityPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymmetricEncIntegrityPacket(SymmetricEncIntegrityPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymmetricEncIntegrityPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymmetricEncIntegrityPacket(SymmetricEncIntegrityPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymmetricEncIntegrityPacket();

public:
  /// @brief Field version, offset: 0x18, size: 0x4, def value: None
  int32_t ___version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket, ___version) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket*, "Org.BouncyCastle.Bcpg", "SymmetricEncIntegrityPacket");

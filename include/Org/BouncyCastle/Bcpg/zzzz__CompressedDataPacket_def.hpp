#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/CompressedDataPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
CORDL_MODULE_EXPORT(CompressedDataPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class CompressedDataPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::CompressedDataPacket);
// Dependencies Org.BouncyCastle.Bcpg.CompressionAlgorithmTag, Org.BouncyCastle.Bcpg.InputStreamPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.CompressedDataPacket
class CORDL_TYPE CompressedDataPacket : public ::Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Algorithm;

  /// @brief Field algorithm, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm;

  static inline ::Org::BouncyCastle::Bcpg::CompressedDataPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const& __cordl_internal_get_algorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag& __cordl_internal_get_algorithm();

  constexpr void __cordl_internal_set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value);

  /// @brief Method .ctor, addr 0x26459a4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method get_Algorithm, addr 0x264730c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag get_Algorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompressedDataPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompressedDataPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompressedDataPacket(CompressedDataPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompressedDataPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompressedDataPacket(CompressedDataPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 558 };

  /// @brief Field algorithm, offset: 0x18, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag ___algorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::CompressedDataPacket, ___algorithm) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::CompressedDataPacket, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::CompressedDataPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::CompressedDataPacket*, "Org.BouncyCastle.Bcpg", "CompressedDataPacket");

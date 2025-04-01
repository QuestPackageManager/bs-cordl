#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpCompressedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
CORDL_MODULE_EXPORT(PgpCompressedData)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class CompressedDataPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpCompressedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData);
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpObject
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpCompressedData
class CORDL_TYPE PgpCompressedData : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Algorithm;

  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::Org::BouncyCastle::Bcpg::CompressedDataPacket* data;

  /// @brief Method GetDataStream, addr 0x2521724, size 0x16c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStream();

  /// @brief Method GetInputStream, addr 0x2521708, size 0x1c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetInputStream();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  constexpr ::Org::BouncyCastle::Bcpg::CompressedDataPacket* const& __cordl_internal_get_data() const;

  constexpr ::Org::BouncyCastle::Bcpg::CompressedDataPacket*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::Org::BouncyCastle::Bcpg::CompressedDataPacket* value);

  /// @brief Method .ctor, addr 0x25215d4, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method get_Algorithm, addr 0x25216ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag get_Algorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpCompressedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpCompressedData(PgpCompressedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpCompressedData(PgpCompressedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1629 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::CompressedDataPacket* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedData");

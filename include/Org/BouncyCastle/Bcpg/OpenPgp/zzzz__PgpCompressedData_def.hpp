#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
CORDL_MODULE_EXPORT(PgpCompressedData)
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class CompressedDataPacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
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
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpCompressedData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1629))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpCompressedData*
class CORDL_TYPE PgpCompressedData : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::Org::BouncyCastle::Bcpg::CompressedDataPacket* data;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Algorithm;

  constexpr ::Org::BouncyCastle::Bcpg::CompressedDataPacket*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::CompressedDataPacket*> const& __get_data() const;

  constexpr void __set_data(::Org::BouncyCastle::Bcpg::CompressedDataPacket* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method .ctor addr 0x10a52ac size 0x120 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method get_Algorithm addr 0x10a53cc size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag get_Algorithm();

  /// @brief Method GetInputStream addr 0x10a53e8 size 0x1c virtual false final false
  inline ::System::IO::Stream* GetInputStream();

  /// @brief Method GetDataStream addr 0x10a5404 size 0x178 virtual false final false
  inline ::System::IO::Stream* GetDataStream();

  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpCompressedData(PgpCompressedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpCompressedData(PgpCompressedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpCompressedData();

public:
  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::CompressedDataPacket* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedData*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedData");

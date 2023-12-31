#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpLiteralData)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class LiteralDataPacket;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpLiteralData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralData);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpLiteralData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1650))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpLiteralData*
class CORDL_TYPE PgpLiteralData : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::Org::BouncyCastle::Bcpg::LiteralDataPacket* data;

  __declspec(property(get = get_Format)) int32_t Format;

  __declspec(property(get = get_FileName))::StringW FileName;

  __declspec(property(get = get_ModificationTime))::System::DateTime ModificationTime;

  constexpr ::Org::BouncyCastle::Bcpg::LiteralDataPacket*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::LiteralDataPacket*> const& __get_data() const;

  constexpr void __set_data(::Org::BouncyCastle::Bcpg::LiteralDataPacket* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralData* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method .ctor, addr 0x10aff28, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method get_Format, addr 0x10b0048, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Format();

  /// @brief Method get_FileName, addr 0x10b0064, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_FileName();

  /// @brief Method GetRawFileName, addr 0x10b0080, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawFileName();

  /// @brief Method get_ModificationTime, addr 0x10b009c, size 0x68, virtual false, abstract: false, final false
  inline ::System::DateTime get_ModificationTime();

  /// @brief Method GetInputStream, addr 0x10b0104, size 0x1c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetInputStream();

  /// @brief Method GetDataStream, addr 0x10b0120, size 0x1c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetDataStream();

  // Ctor Parameters [CppParam { name: "", ty: "PgpLiteralData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpLiteralData(PgpLiteralData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpLiteralData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpLiteralData(PgpLiteralData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpLiteralData();

public:
  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::LiteralDataPacket* ___data;

  /// @brief Field Binary offset 0xffffffff size 0x2
  static constexpr char16_t Binary{ u'b' };

  /// @brief Field Text offset 0xffffffff size 0x2
  static constexpr char16_t Text{ u't' };

  /// @brief Field Utf8 offset 0xffffffff size 0x2
  static constexpr char16_t Utf8{ u'u' };

  /// @brief Field Console offset 0xffffffff size 0x8
  static constexpr ::ConstString Console{ u"_CONSOLE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralData, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralData, ___data) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralData*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpLiteralData");

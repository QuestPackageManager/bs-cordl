#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpLiteralDataGenerator)
namespace System {
struct DateTime;
}
namespace System::IO {
class FileInfo;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpLiteralDataGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpLiteralDataGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1651))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpLiteralDataGenerator*
class CORDL_TYPE PgpLiteralDataGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field pkOut, offset 0x10, size 0x8
  __declspec(property(get = __get_pkOut, put = __set_pkOut))::Org::BouncyCastle::Bcpg::BcpgOutputStream* pkOut;

  /// @brief Field oldFormat, offset 0x18, size 0x1
  __declspec(property(get = __get_oldFormat, put = __set_oldFormat)) bool oldFormat;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
  constexpr operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& __get_pkOut();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgOutputStream*> const& __get_pkOut() const;

  constexpr void __set_pkOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value);

  constexpr bool& __get_oldFormat();

  constexpr bool const& __get_oldFormat() const;

  constexpr void __set_oldFormat(bool value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x10b013c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator* New_ctor(bool oldFormat);

  /// @brief Method .ctor, addr 0x10b0144, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool oldFormat);

  /// @brief Method WriteHeader, addr 0x10b016c, size 0x144, virtual false, abstract: false, final false
  inline void WriteHeader(::Org::BouncyCastle::Bcpg::BcpgOutputStream* outStr, char16_t format, ::ArrayW<uint8_t, ::Array<uint8_t>*> encName, int64_t modificationTime);

  /// @brief Method Open, addr 0x10b02b0, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, char16_t format, ::StringW name, int64_t length, ::System::DateTime modificationTime);

  /// @brief Method Open, addr 0x10b0484, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, char16_t format, ::StringW name, ::System::DateTime modificationTime, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method Open, addr 0x10b0644, size 0x84, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, char16_t format, ::System::IO::FileInfo* file);

  /// @brief Method Close, addr 0x10b06c8, size 0x40, virtual true, abstract: false, final true
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "PgpLiteralDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpLiteralDataGenerator(PgpLiteralDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpLiteralDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpLiteralDataGenerator(PgpLiteralDataGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpLiteralDataGenerator();

public:
  /// @brief Field pkOut, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgOutputStream* ___pkOut;

  /// @brief Field oldFormat, offset: 0x18, size: 0x1, def value: None
  bool ___oldFormat;

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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator, ___pkOut) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator, ___oldFormat) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpLiteralDataGenerator");

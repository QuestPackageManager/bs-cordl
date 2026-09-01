#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpLiteralDataGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpLiteralDataGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace System::IO {
class FileInfo;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpLiteralDataGenerator;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpLiteralDataGenerator");
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpLiteralDataGenerator
class CORDL_TYPE PgpLiteralDataGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field oldFormat, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_oldFormat, put = __cordl_internal_set_oldFormat)) bool oldFormat;

  /// @brief Field pkOut, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pkOut, put = __cordl_internal_set_pkOut)) ::Org::BouncyCastle::Bcpg::BcpgOutputStream* pkOut;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
  constexpr operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept;

  /// @brief Method Close, addr 0x3586480, size 0x40, virtual true, abstract: false, final true
  inline void Close();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator* New_ctor(bool oldFormat);

  /// @brief Method Open, addr 0x35863fc, size 0x84, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, char16_t format, ::System::IO::FileInfo* file);

  /// @brief Method Open, addr 0x3586078, size 0x1cc, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, char16_t format, ::StringW name, int64_t length, ::System::DateTime modificationTime);

  /// @brief Method Open, addr 0x3586244, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, char16_t format, ::StringW name, ::System::DateTime modificationTime, ::ArrayW<uint8_t> buffer);

  /// @brief Method WriteHeader, addr 0x3585f30, size 0x148, virtual false, abstract: false, final false
  inline void WriteHeader(::Org::BouncyCastle::Bcpg::BcpgOutputStream* outStr, char16_t format, ::ArrayW<uint8_t> encName, int64_t modificationTime);

  constexpr bool const& __cordl_internal_get_oldFormat() const;

  constexpr bool& __cordl_internal_get_oldFormat();

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream* const& __cordl_internal_get_pkOut() const;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& __cordl_internal_get_pkOut();

  constexpr void __cordl_internal_set_oldFormat(bool value);

  constexpr void __cordl_internal_set_pkOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value);

  /// @brief Method .ctor, addr 0x3585f24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3585f28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool oldFormat);

  /// @brief Convert to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* i___Org__BouncyCastle__Bcpg__OpenPgp__IStreamGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpLiteralDataGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpLiteralDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpLiteralDataGenerator(PgpLiteralDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpLiteralDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpLiteralDataGenerator(PgpLiteralDataGenerator const&) = delete;

  /// @brief Field Binary offset 0xffffffff size 0x2
  static constexpr char16_t Binary{ u'b' };

  /// @brief Field Console offset 0xffffffff size 0x8
  static constexpr ::ConstString Console{ u"_CONSOLE" };

  /// @brief Field Text offset 0xffffffff size 0x2
  static constexpr char16_t Text{ u't' };

  /// @brief Field Utf8 offset 0xffffffff size 0x2
  static constexpr char16_t Utf8{ u'u' };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1651 };

  /// @brief Field pkOut, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgOutputStream* ___pkOut;

  /// @brief Field oldFormat, offset: 0x18, size: 0x1, def value: None
  bool ___oldFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator, ___pkOut) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator, ___oldFormat) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp

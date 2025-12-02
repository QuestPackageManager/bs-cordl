#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpCompressedDataGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__CBZip2OutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpCompressedDataGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpCompressedDataGenerator_SafeCBZip2OutputStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpCompressedDataGenerator_SafeZOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpCompressedDataGenerator;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpCompressedDataGenerator_SafeCBZip2OutputStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpCompressedDataGenerator_SafeZOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream);
// Dependencies Org.BouncyCastle.Apache.Bzip2.CBZip2OutputStream
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpCompressedDataGenerator/SafeCBZip2OutputStream
class CORDL_TYPE PgpCompressedDataGenerator_SafeCBZip2OutputStream : public ::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream {
public:
  // Declarations
  /// @brief Method Close, addr 0x3455764, size 0x4, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream* New_ctor(::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x3455698, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpCompressedDataGenerator_SafeCBZip2OutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator_SafeCBZip2OutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpCompressedDataGenerator_SafeCBZip2OutputStream(PgpCompressedDataGenerator_SafeCBZip2OutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator_SafeCBZip2OutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpCompressedDataGenerator_SafeCBZip2OutputStream(PgpCompressedDataGenerator_SafeCBZip2OutputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream, 0xf8>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Dependencies Org.BouncyCastle.Utilities.Zlib.ZOutputStream
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpCompressedDataGenerator/SafeZOutputStream
class CORDL_TYPE PgpCompressedDataGenerator_SafeZOutputStream : public ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream {
public:
  // Declarations
  /// @brief Method Close, addr 0x34557c8, size 0x30, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream* New_ctor(::System::IO::Stream* output, int32_t level, bool nowrap);

  /// @brief Method .ctor, addr 0x3455690, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, int32_t level, bool nowrap);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpCompressedDataGenerator_SafeZOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator_SafeZOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpCompressedDataGenerator_SafeZOutputStream(PgpCompressedDataGenerator_SafeZOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator_SafeZOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpCompressedDataGenerator_SafeZOutputStream(PgpCompressedDataGenerator_SafeZOutputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Dependencies Org.BouncyCastle.Bcpg.CompressionAlgorithmTag, System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpCompressedDataGenerator
class CORDL_TYPE PgpCompressedDataGenerator : public ::System::Object {
public:
  // Declarations
  using SafeCBZip2OutputStream = ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream;

  using SafeZOutputStream = ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream;

  /// @brief Field algorithm, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm;

  /// @brief Field compression, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_compression, put = __cordl_internal_set_compression)) int32_t compression;

  /// @brief Field dOut, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dOut, put = __cordl_internal_set_dOut)) ::System::IO::Stream* dOut;

  /// @brief Field pkOut, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pkOut, put = __cordl_internal_set_pkOut)) ::Org::BouncyCastle::Bcpg::BcpgOutputStream* pkOut;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
  constexpr operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept;

  /// @brief Method Close, addr 0x34556a0, size 0xbc, virtual true, abstract: false, final true
  inline void Close();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression);

  /// @brief Method Open, addr 0x345527c, size 0x150, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr);

  /// @brief Method Open, addr 0x3455528, size 0x168, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const& __cordl_internal_get_algorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag& __cordl_internal_get_algorithm();

  constexpr int32_t const& __cordl_internal_get_compression() const;

  constexpr int32_t& __cordl_internal_get_compression();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_dOut() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_dOut();

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream* const& __cordl_internal_get_pkOut() const;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& __cordl_internal_get_pkOut();

  constexpr void __cordl_internal_set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value);

  constexpr void __cordl_internal_set_compression(int32_t value);

  constexpr void __cordl_internal_set_dOut(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_pkOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value);

  /// @brief Method .ctor, addr 0x3455180, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm);

  /// @brief Method .ctor, addr 0x3455188, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression);

  /// @brief Method doOpen, addr 0x34553cc, size 0x15c, virtual false, abstract: false, final false
  inline void doOpen();

  /// @brief Convert to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* i___Org__BouncyCastle__Bcpg__OpenPgp__IStreamGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpCompressedDataGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpCompressedDataGenerator(PgpCompressedDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpCompressedDataGenerator(PgpCompressedDataGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1632 };

  /// @brief Field algorithm, offset: 0x10, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag ___algorithm;

  /// @brief Field compression, offset: 0x14, size: 0x4, def value: None
  int32_t ___compression;

  /// @brief Field dOut, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___dOut;

  /// @brief Field pkOut, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgOutputStream* ___pkOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, ___algorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, ___compression) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, ___dOut) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, ___pkOut) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedDataGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedDataGenerator/SafeCBZip2OutputStream");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedDataGenerator/SafeZOutputStream");

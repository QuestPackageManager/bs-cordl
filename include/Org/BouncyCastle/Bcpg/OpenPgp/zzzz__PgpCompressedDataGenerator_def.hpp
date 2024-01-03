#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__CBZip2OutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpCompressedDataGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpCompressedDataGenerator__SafeCBZip2OutputStream;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpCompressedDataGenerator__SafeZOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpCompressedDataGenerator;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpCompressedDataGenerator__SafeCBZip2OutputStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpCompressedDataGenerator__SafeZOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream);
// Type: ::SafeCBZip2OutputStream
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1634))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1630))
// CS Name: ::PgpCompressedDataGenerator::SafeCBZip2OutputStream*
class CORDL_TYPE __PgpCompressedDataGenerator__SafeCBZip2OutputStream : public ::Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream* New_ctor(::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x10a5b44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output);

  /// @brief Method Close, addr 0x10a5bf8, size 0x4, virtual true, abstract: false, final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "__PgpCompressedDataGenerator__SafeCBZip2OutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PgpCompressedDataGenerator__SafeCBZip2OutputStream(__PgpCompressedDataGenerator__SafeCBZip2OutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PgpCompressedDataGenerator__SafeCBZip2OutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PgpCompressedDataGenerator__SafeCBZip2OutputStream(__PgpCompressedDataGenerator__SafeCBZip2OutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PgpCompressedDataGenerator__SafeCBZip2OutputStream();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream, 0xf8>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Type: ::SafeZOutputStream
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1631))
// CS Name: ::PgpCompressedDataGenerator::SafeZOutputStream*
class CORDL_TYPE __PgpCompressedDataGenerator__SafeZOutputStream : public ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream* New_ctor(::System::IO::Stream* output, int32_t level, bool nowrap);

  /// @brief Method .ctor, addr 0x10a5b38, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, int32_t level, bool nowrap);

  /// @brief Method Close, addr 0x10a5c60, size 0x30, virtual true, abstract: false, final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "__PgpCompressedDataGenerator__SafeZOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PgpCompressedDataGenerator__SafeZOutputStream(__PgpCompressedDataGenerator__SafeZOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PgpCompressedDataGenerator__SafeZOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PgpCompressedDataGenerator__SafeZOutputStream(__PgpCompressedDataGenerator__SafeZOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PgpCompressedDataGenerator__SafeZOutputStream();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpCompressedDataGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1632))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpCompressedDataGenerator*
class CORDL_TYPE PgpCompressedDataGenerator : public ::System::Object {
public:
  // Declarations
  using SafeZOutputStream = ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream;

  using SafeCBZip2OutputStream = ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream;

  /// @brief Field algorithm, offset 0x10, size 0x4
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm;

  /// @brief Field compression, offset 0x14, size 0x4
  __declspec(property(get = __get_compression, put = __set_compression)) int32_t compression;

  /// @brief Field dOut, offset 0x18, size 0x8
  __declspec(property(get = __get_dOut, put = __set_dOut))::System::IO::Stream* dOut;

  /// @brief Field pkOut, offset 0x20, size 0x8
  __declspec(property(get = __get_pkOut, put = __set_pkOut))::Org::BouncyCastle::Bcpg::BcpgOutputStream* pkOut;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
  constexpr operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept;

  constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag& __get_algorithm();

  constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value);

  constexpr int32_t& __get_compression();

  constexpr int32_t const& __get_compression() const;

  constexpr void __set_compression(int32_t value);

  constexpr ::System::IO::Stream*& __get_dOut();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_dOut() const;

  constexpr void __set_dOut(::System::IO::Stream* value);

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& __get_pkOut();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgOutputStream*> const& __get_pkOut() const;

  constexpr void __set_pkOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm);

  /// @brief Method .ctor, addr 0x10a55e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression);

  /// @brief Method .ctor, addr 0x10a55ec, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression);

  /// @brief Method Open, addr 0x10a5710, size 0x148, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr);

  /// @brief Method Open, addr 0x10a59c0, size 0x178, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method doOpen, addr 0x10a5858, size 0x168, virtual false, abstract: false, final false
  inline void doOpen();

  /// @brief Method Close, addr 0x10a5b4c, size 0xa4, virtual true, abstract: false, final true
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpCompressedDataGenerator(PgpCompressedDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpCompressedDataGenerator(PgpCompressedDataGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpCompressedDataGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, ___algorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, ___compression) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, ___dOut) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, ___pkOut) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedDataGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeCBZip2OutputStream*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedDataGenerator/SafeCBZip2OutputStream");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpCompressedDataGenerator__SafeZOutputStream*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedDataGenerator/SafeZOutputStream");

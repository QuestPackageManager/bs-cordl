#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDeflateCompression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsDeflateCompression)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDeflateCompression_DeflateOutputStream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDeflateCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDeflateCompression_DeflateOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream);
// Dependencies Org.BouncyCastle.Utilities.Zlib.ZOutputStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression/DeflateOutputStream
class CORDL_TYPE TlsDeflateCompression_DeflateOutputStream : public ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream {
public:
  // Declarations
  /// @brief Method Flush, addr 0x2428634, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream* New_ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, bool compress);

  /// @brief Method .ctor, addr 0x2428460, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, bool compress);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDeflateCompression_DeflateOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsDeflateCompression_DeflateOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDeflateCompression_DeflateOutputStream(TlsDeflateCompression_DeflateOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDeflateCompression_DeflateOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDeflateCompression_DeflateOutputStream(TlsDeflateCompression_DeflateOutputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1295 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsCompression, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDeflateCompression
class CORDL_TYPE TlsDeflateCompression : public ::System::Object {
public:
  // Declarations
  using DeflateOutputStream = ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream;

  /// @brief Field zIn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_zIn, put = __cordl_internal_set_zIn)) ::Org::BouncyCastle::Utilities::Zlib::ZStream* zIn;

  /// @brief Field zOut, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_zOut, put = __cordl_internal_set_zOut)) ::Org::BouncyCastle::Utilities::Zlib::ZStream* zOut;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCompression*() noexcept;

  /// @brief Method Compress, addr 0x24283d4, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IO::Stream* Compress(::System::IO::Stream* output);

  /// @brief Method Decompress, addr 0x2428498, size 0x88, virtual true, abstract: false, final false
  inline ::System::IO::Stream* Decompress(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression* New_ctor(int32_t level);

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& __cordl_internal_get_zIn() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __cordl_internal_get_zIn();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& __cordl_internal_get_zOut() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __cordl_internal_get_zOut();

  constexpr void __cordl_internal_set_zIn(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  constexpr void __cordl_internal_set_zOut(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  /// @brief Method .ctor, addr 0x2428320, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2428328, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(int32_t level);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* i___Org__BouncyCastle__Crypto__Tls__TlsCompression() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDeflateCompression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsDeflateCompression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDeflateCompression(TlsDeflateCompression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDeflateCompression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDeflateCompression(TlsDeflateCompression const&) = delete;

  /// @brief Field LEVEL_DEFAULT offset 0xffffffff size 0x4
  static constexpr int32_t LEVEL_DEFAULT{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field LEVEL_FASTEST offset 0xffffffff size 0x4
  static constexpr int32_t LEVEL_FASTEST{ static_cast<int32_t>(0x1) };

  /// @brief Field LEVEL_NONE offset 0xffffffff size 0x4
  static constexpr int32_t LEVEL_NONE{ static_cast<int32_t>(0x0) };

  /// @brief Field LEVEL_SMALLEST offset 0xffffffff size 0x4
  static constexpr int32_t LEVEL_SMALLEST{ static_cast<int32_t>(0x9) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1296 };

  /// @brief Field zIn, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZStream* ___zIn;

  /// @brief Field zOut, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZStream* ___zOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression, ___zIn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression, ___zOut) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*, "Org.BouncyCastle.Crypto.Tls", "TlsDeflateCompression");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression_DeflateOutputStream*, "Org.BouncyCastle.Crypto.Tls", "TlsDeflateCompression/DeflateOutputStream");

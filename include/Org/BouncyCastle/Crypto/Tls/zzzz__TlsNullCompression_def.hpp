#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsNullCompression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TlsNullCompression)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNullCompression;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsNullCompression);
// Type: Org.BouncyCastle.Crypto.Tls::TlsNullCompression
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsNullCompression*
class CORDL_TYPE TlsNullCompression : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCompression*() noexcept;

  /// @brief Method Compress, addr 0x23fed94, size 0x8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* Compress(::System::IO::Stream* output);

  /// @brief Method Decompress, addr 0x23fed9c, size 0x8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* Decompress(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCompression* New_ctor();

  /// @brief Method .ctor, addr 0x23feda4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* i___Org__BouncyCastle__Crypto__Tls__TlsCompression() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsNullCompression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsNullCompression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsNullCompression(TlsNullCompression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsNullCompression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsNullCompression(TlsNullCompression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1314 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsNullCompression, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsNullCompression);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsNullCompression*, "Org.BouncyCastle.Crypto.Tls", "TlsNullCompression");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/MaxBytesExceededException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__CryptoException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MaxBytesExceededException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class MaxBytesExceededException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::MaxBytesExceededException);
// Type: Org.BouncyCastle.Crypto::MaxBytesExceededException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::MaxBytesExceededException*
class CORDL_TYPE MaxBytesExceededException : public ::Org::BouncyCastle::Crypto::CryptoException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::MaxBytesExceededException* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::MaxBytesExceededException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::Crypto::MaxBytesExceededException* New_ctor(::StringW message, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x122ca18, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x122ca1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x122ca20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaxBytesExceededException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaxBytesExceededException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaxBytesExceededException(MaxBytesExceededException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaxBytesExceededException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaxBytesExceededException(MaxBytesExceededException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::MaxBytesExceededException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::MaxBytesExceededException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::MaxBytesExceededException*, "Org.BouncyCastle.Crypto", "MaxBytesExceededException");

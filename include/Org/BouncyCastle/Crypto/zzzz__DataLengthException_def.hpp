#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__CryptoException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DataLengthException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class DataLengthException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::DataLengthException);
// Type: Org.BouncyCastle.Crypto::DataLengthException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1347))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1348))
// CS Name: ::Org.BouncyCastle.Crypto::DataLengthException*
class CORDL_TYPE DataLengthException : public ::Org::BouncyCastle::Crypto::CryptoException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::DataLengthException* New_ctor();

  /// @brief Method .ctor, addr 0xfc5988, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::DataLengthException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0xfc481c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Crypto::DataLengthException* New_ctor(::StringW message, ::System::Exception* exception);

  /// @brief Method .ctor, addr 0xfc598c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* exception);

  // Ctor Parameters [CppParam { name: "", ty: "DataLengthException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataLengthException(DataLengthException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataLengthException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataLengthException(DataLengthException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataLengthException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::DataLengthException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::DataLengthException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::DataLengthException*, "Org.BouncyCastle.Crypto", "DataLengthException");

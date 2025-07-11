#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Utilities/CipherFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CipherFactory)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class BufferedBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class CipherFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Utilities::CipherFactory);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Utilities.CipherFactory
class CORDL_TYPE CipherFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field rc2Ekb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rc2Ekb, put = setStaticF_rc2Ekb)) ::ArrayW<int16_t, ::Array<int16_t>*> rc2Ekb;

  /// @brief Method CreateCipher, addr 0x24458fc, size 0x38c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::BufferedBlockCipher* CreateCipher(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm);

  /// @brief Method CreateContentCipher, addr 0x24451b0, size 0x74c, virtual false, abstract: false, final false
  static inline ::System::Object* CreateContentCipher(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* encKey,
                                                      ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encryptionAlgID);

  static inline ::Org::BouncyCastle::Crypto::Utilities::CipherFactory* New_ctor();

  /// @brief Method .ctor, addr 0x24451a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_rc2Ekb();

  static inline void setStaticF_rc2Ekb(::ArrayW<int16_t, ::Array<int16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CipherFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CipherFactory(CipherFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CipherFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CipherFactory(CipherFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1337 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Utilities::CipherFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::CipherFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::CipherFactory*, "Org.BouncyCastle.Crypto.Utilities", "CipherFactory");

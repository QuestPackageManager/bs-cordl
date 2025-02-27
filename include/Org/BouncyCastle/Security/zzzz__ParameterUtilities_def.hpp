#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/ParameterUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterUtilities)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class ParameterUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::ParameterUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.ParameterUtilities
class CORDL_TYPE ParameterUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::IDictionary* algorithms;

  /// @brief Field basicIVSizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_basicIVSizes, put = setStaticF_basicIVSizes)) ::System::Collections::IDictionary* basicIVSizes;

  /// @brief Method AddAlgorithm, addr 0x25b3294, size 0x1c4, virtual false, abstract: false, final false
  static inline void AddAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> aliases);

  /// @brief Method AddBasicIVSizeEntries, addr 0x25b3458, size 0x164, virtual false, abstract: false, final false
  static inline void AddBasicIVSizeEntries(int32_t size, ::ArrayW<::StringW, ::Array<::StringW>*> algorithms);

  /// @brief Method CreateIV, addr 0x25b451c, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateIV(::Org::BouncyCastle::Security::SecureRandom* random, int32_t ivLength);

  /// @brief Method CreateIVOctetString, addr 0x25b447c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1OctetString* CreateIVOctetString(::Org::BouncyCastle::Security::SecureRandom* random, int32_t ivLength);

  /// @brief Method CreateKeyParameter, addr 0x25b36f4, size 0x74, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes);

  /// @brief Method CreateKeyParameter, addr 0x25b3a7c, size 0x80, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes,
                                                                                          int32_t offset, int32_t length);

  /// @brief Method CreateKeyParameter, addr 0x25b3a10, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes);

  /// @brief Method CreateKeyParameter, addr 0x25b3768, size 0x2a8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, int32_t offset, int32_t length);

  /// @brief Method FindBasicIVSize, addr 0x25b3f88, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t FindBasicIVSize(::StringW canonicalName);

  /// @brief Method GenerateParameters, addr 0x25b412c, size 0x68, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algID, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GenerateParameters, addr 0x25b4194, size 0x2e8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateParameters(::StringW algorithm, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GetCanonicalAlgorithmName, addr 0x25b35bc, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW GetCanonicalAlgorithmName(::StringW algorithm);

  /// @brief Method GetCipherParameters, addr 0x25b3afc, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid, ::Org::BouncyCastle::Crypto::ICipherParameters* key,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1Object* asn1Params);

  /// @brief Method GetCipherParameters, addr 0x25b3b74, size 0x414, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* key,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1Object* asn1Params);

  static inline ::Org::BouncyCastle::Security::ParameterUtilities* New_ctor();

  /// @brief Method WithRandom, addr 0x25b4584, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::ICipherParameters* WithRandom(::Org::BouncyCastle::Crypto::ICipherParameters* cp, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0x25b1bf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline ::System::Collections::IDictionary* getStaticF_basicIVSizes();

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_basicIVSizes(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterUtilities(ParameterUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterUtilities(ParameterUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::ParameterUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::ParameterUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::ParameterUtilities*, "Org.BouncyCastle.Security", "ParameterUtilities");

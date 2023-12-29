#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterUtilities)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class ParameterUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::ParameterUtilities);
// Type: Org.BouncyCastle.Security::ParameterUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1753))
// CS Name: ::Org.BouncyCastle.Security::ParameterUtilities*
class CORDL_TYPE ParameterUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms))::System::Collections::IDictionary* algorithms;

  /// @brief Field basicIVSizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_basicIVSizes, put = setStaticF_basicIVSizes))::System::Collections::IDictionary* basicIVSizes;

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline void setStaticF_basicIVSizes(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_basicIVSizes();

  static inline ::Org::BouncyCastle::Security::ParameterUtilities* New_ctor();

  /// @brief Method .ctor addr 0x10c0904 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method AddAlgorithm addr 0x10c21b4 size 0x1c4 virtual false final false
  static inline void AddAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> aliases);

  /// @brief Method AddBasicIVSizeEntries addr 0x10c2378 size 0x164 virtual false final false
  static inline void AddBasicIVSizeEntries(int32_t size, ::ArrayW<::StringW, ::Array<::StringW>*> algorithms);

  /// @brief Method GetCanonicalAlgorithmName addr 0x10c24dc size 0x138 virtual false final false
  static inline ::StringW GetCanonicalAlgorithmName(::StringW algorithm);

  /// @brief Method CreateKeyParameter addr 0x10c2614 size 0x74 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes);

  /// @brief Method CreateKeyParameter addr 0x10c2950 size 0x6c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes);

  /// @brief Method CreateKeyParameter addr 0x10c29bc size 0x80 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes,
                                                                                          int32_t offset, int32_t length);

  /// @brief Method CreateKeyParameter addr 0x10c2688 size 0x2c8 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, int32_t offset, int32_t length);

  /// @brief Method GetCipherParameters addr 0x10c2a3c size 0x78 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid, ::Org::BouncyCastle::Crypto::ICipherParameters* key,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1Object* asn1Params);

  /// @brief Method GetCipherParameters addr 0x10c2ab4 size 0x45c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* key,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1Object* asn1Params);

  /// @brief Method GenerateParameters addr 0x10c30b4 size 0x68 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algID, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GenerateParameters addr 0x10c311c size 0x304 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateParameters(::StringW algorithm, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method WithRandom addr 0x10c3530 size 0x74 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::ICipherParameters* WithRandom(::Org::BouncyCastle::Crypto::ICipherParameters* cp, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method CreateIVOctetString addr 0x10c3420 size 0xa8 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1OctetString* CreateIVOctetString(::Org::BouncyCastle::Security::SecureRandom* random, int32_t ivLength);

  /// @brief Method CreateIV addr 0x10c34c8 size 0x68 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateIV(::Org::BouncyCastle::Security::SecureRandom* random, int32_t ivLength);

  /// @brief Method FindBasicIVSize addr 0x10c2f10 size 0x1a4 virtual false final false
  static inline int32_t FindBasicIVSize(::StringW canonicalName);

  // Ctor Parameters [CppParam { name: "", ty: "ParameterUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterUtilities(ParameterUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterUtilities(ParameterUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::ParameterUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::ParameterUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::ParameterUtilities*, "Org.BouncyCastle.Security", "ParameterUtilities");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeneratorUtilities)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class GeneratorUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::GeneratorUtilities);
// Type: Org.BouncyCastle.Security::GeneratorUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1747))
// CS Name: ::Org.BouncyCastle.Security::GeneratorUtilities*
class CORDL_TYPE GeneratorUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field kgAlgorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kgAlgorithms, put = setStaticF_kgAlgorithms))::System::Collections::IDictionary* kgAlgorithms;

  /// @brief Field kpgAlgorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kpgAlgorithms, put = setStaticF_kpgAlgorithms))::System::Collections::IDictionary* kpgAlgorithms;

  /// @brief Field defaultKeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultKeySizes, put = setStaticF_defaultKeySizes))::System::Collections::IDictionary* defaultKeySizes;

  static inline void setStaticF_kgAlgorithms(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_kgAlgorithms();

  static inline void setStaticF_kpgAlgorithms(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_kpgAlgorithms();

  static inline void setStaticF_defaultKeySizes(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_defaultKeySizes();

  static inline ::Org::BouncyCastle::Security::GeneratorUtilities* New_ctor();

  /// @brief Method .ctor addr 0x10b8f68 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method AddDefaultKeySizeEntries addr 0x10bca7c size 0x164 virtual false final false
  static inline void AddDefaultKeySizeEntries(int32_t size, ::ArrayW<::StringW, ::Array<::StringW>*> algorithms);

  /// @brief Method AddKgAlgorithm addr 0x10bc2c4 size 0x228 virtual false final false
  static inline void AddKgAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> aliases);

  /// @brief Method AddKpgAlgorithm addr 0x10bc854 size 0x228 virtual false final false
  static inline void AddKpgAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> aliases);

  /// @brief Method AddHMacKeyGenerator addr 0x10bc4ec size 0x368 virtual false final false
  static inline void AddHMacKeyGenerator(::StringW algorithm, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> aliases);

  /// @brief Method GetCanonicalKeyGeneratorAlgorithm addr 0x10bcbe0 size 0x138 virtual false final false
  static inline ::StringW GetCanonicalKeyGeneratorAlgorithm(::StringW algorithm);

  /// @brief Method GetCanonicalKeyPairGeneratorAlgorithm addr 0x10bcd18 size 0x138 virtual false final false
  static inline ::StringW GetCanonicalKeyPairGeneratorAlgorithm(::StringW algorithm);

  /// @brief Method GetKeyGenerator addr 0x10bce50 size 0x60 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* GetKeyGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetKeyGenerator addr 0x10bceb0 size 0x338 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* GetKeyGenerator(::StringW algorithm);

  /// @brief Method GetKeyPairGenerator addr 0x10bd38c size 0x60 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* GetKeyPairGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetKeyPairGenerator addr 0x10bd3ec size 0x5bc virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* GetKeyPairGenerator(::StringW algorithm);

  /// @brief Method GetDefaultKeySize addr 0x10bd9a8 size 0x60 virtual false final false
  static inline int32_t GetDefaultKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetDefaultKeySize addr 0x10bda08 size 0x21c virtual false final false
  static inline int32_t GetDefaultKeySize(::StringW algorithm);

  /// @brief Method FindDefaultKeySize addr 0x10bd1e8 size 0x1a4 virtual false final false
  static inline int32_t FindDefaultKeySize(::StringW canonicalName);

  // Ctor Parameters [CppParam { name: "", ty: "GeneratorUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneratorUtilities(GeneratorUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneratorUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneratorUtilities(GeneratorUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratorUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::GeneratorUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::GeneratorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::GeneratorUtilities*, "Org.BouncyCastle.Security", "GeneratorUtilities");

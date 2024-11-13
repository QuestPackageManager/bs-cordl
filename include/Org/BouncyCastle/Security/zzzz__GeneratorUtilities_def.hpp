#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/GeneratorUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeneratorUtilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class GeneratorUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::GeneratorUtilities);
// Type: Org.BouncyCastle.Security::GeneratorUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security::GeneratorUtilities*
class CORDL_TYPE GeneratorUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultKeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultKeySizes, put = setStaticF_defaultKeySizes)) ::System::Collections::IDictionary* defaultKeySizes;

  /// @brief Field kgAlgorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kgAlgorithms, put = setStaticF_kgAlgorithms)) ::System::Collections::IDictionary* kgAlgorithms;

  /// @brief Field kpgAlgorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kpgAlgorithms, put = setStaticF_kpgAlgorithms)) ::System::Collections::IDictionary* kpgAlgorithms;

  /// @brief Method AddDefaultKeySizeEntries, addr 0x25744d4, size 0x164, virtual false, abstract: false, final false
  static inline void AddDefaultKeySizeEntries(int32_t size, ::ArrayW<::StringW, ::Array<::StringW>*> algorithms);

  /// @brief Method AddHMacKeyGenerator, addr 0x2573f44, size 0x368, virtual false, abstract: false, final false
  static inline void AddHMacKeyGenerator(::StringW algorithm, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> aliases);

  /// @brief Method AddKgAlgorithm, addr 0x2573d1c, size 0x228, virtual false, abstract: false, final false
  static inline void AddKgAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> aliases);

  /// @brief Method AddKpgAlgorithm, addr 0x25742ac, size 0x228, virtual false, abstract: false, final false
  static inline void AddKpgAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> aliases);

  /// @brief Method FindDefaultKeySize, addr 0x2574bc0, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t FindDefaultKeySize(::StringW canonicalName);

  /// @brief Method GetCanonicalKeyGeneratorAlgorithm, addr 0x2574638, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW GetCanonicalKeyGeneratorAlgorithm(::StringW algorithm);

  /// @brief Method GetCanonicalKeyPairGeneratorAlgorithm, addr 0x2574770, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW GetCanonicalKeyPairGeneratorAlgorithm(::StringW algorithm);

  /// @brief Method GetDefaultKeySize, addr 0x2575344, size 0x1ac, virtual false, abstract: false, final false
  static inline int32_t GetDefaultKeySize(::StringW algorithm);

  /// @brief Method GetDefaultKeySize, addr 0x25752e4, size 0x60, virtual false, abstract: false, final false
  static inline int32_t GetDefaultKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetKeyGenerator, addr 0x2574908, size 0x2b8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* GetKeyGenerator(::StringW algorithm);

  /// @brief Method GetKeyGenerator, addr 0x25748a8, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* GetKeyGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetKeyPairGenerator, addr 0x2574dc4, size 0x520, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* GetKeyPairGenerator(::StringW algorithm);

  /// @brief Method GetKeyPairGenerator, addr 0x2574d64, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* GetKeyPairGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  static inline ::Org::BouncyCastle::Security::GeneratorUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x25710fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_defaultKeySizes();

  static inline ::System::Collections::IDictionary* getStaticF_kgAlgorithms();

  static inline ::System::Collections::IDictionary* getStaticF_kpgAlgorithms();

  static inline void setStaticF_defaultKeySizes(::System::Collections::IDictionary* value);

  static inline void setStaticF_kgAlgorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_kpgAlgorithms(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratorUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeneratorUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneratorUtilities(GeneratorUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneratorUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneratorUtilities(GeneratorUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1747 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::GeneratorUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::GeneratorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::GeneratorUtilities*, "Org.BouncyCastle.Security", "GeneratorUtilities");

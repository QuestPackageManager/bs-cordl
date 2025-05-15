#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/MacUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacUtilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class MacUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::MacUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.MacUtilities
class CORDL_TYPE MacUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::IDictionary* algorithms;

  /// @brief Method CalculateMac, addr 0x25ad4a4, size 0x158, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMac(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* cp, ::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method DoFinal, addr 0x25ad5fc, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal(::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Method DoFinal, addr 0x25ad730, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DoFinal(::Org::BouncyCastle::Crypto::IMac* mac, ::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method GetAlgorithmName, addr 0x25ad39c, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetMac, addr 0x25ac82c, size 0xb70, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IMac* GetMac(::StringW algorithm);

  /// @brief Method GetMac, addr 0x25ac7cc, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IMac* GetMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id);

  static inline ::Org::BouncyCastle::Security::MacUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x25aabb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MacUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacUtilities(MacUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacUtilities(MacUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1751 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::MacUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::MacUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::MacUtilities*, "Org.BouncyCastle.Security", "MacUtilities");

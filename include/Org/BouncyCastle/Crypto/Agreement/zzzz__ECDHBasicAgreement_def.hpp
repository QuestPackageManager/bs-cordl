#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDHBasicAgreement)
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement);
// Type: Org.BouncyCastle.Crypto.Agreement::ECDHBasicAgreement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(736))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::ECDHBasicAgreement*
class CORDL_TYPE ECDHBasicAgreement : public ::System::Object {
public:
  // Declarations
  /// @brief Field privKey, offset 0x10, size 0x8
  __declspec(property(get = __get_privKey, put = __set_privKey))::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
  constexpr operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& __get_privKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& __get_privKey() const;

  constexpr void __set_privKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value);

  /// @brief Method Init addr 0x11a9218 size 0xec virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetFieldSize addr 0x11a9304 size 0x48 virtual true final false
  inline int32_t GetFieldSize();

  /// @brief Method CalculateAgreement addr 0x11a934c size 0x268 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey);

  static inline ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* New_ctor();

  /// @brief Method .ctor addr 0x11a95b4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ECDHBasicAgreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDHBasicAgreement(ECDHBasicAgreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDHBasicAgreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDHBasicAgreement(ECDHBasicAgreement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDHBasicAgreement();

public:
  /// @brief Field privKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* ___privKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement, ___privKey) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECDHBasicAgreement");

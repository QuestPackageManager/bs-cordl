#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X25519Agreement)
namespace Org::BouncyCastle::Crypto::Parameters {
class X25519PrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IRawAgreement;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class X25519Agreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::X25519Agreement);
// Type: Org.BouncyCastle.Crypto.Agreement::X25519Agreement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(743))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::X25519Agreement*
class CORDL_TYPE X25519Agreement : public ::System::Object {
public:
  // Declarations
  /// @brief Field privateKey, offset 0x10, size 0x8
  __declspec(property(get = __get_privateKey, put = __set_privateKey))::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters* privateKey;

  __declspec(property(get = get_AgreementSize)) int32_t AgreementSize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IRawAgreement"
  constexpr operator ::Org::BouncyCastle::Crypto::IRawAgreement*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters*& __get_privateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters*> const& __get_privateKey() const;

  constexpr void __set_privateKey(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters* value);

  /// @brief Method Init, addr 0x121d1f0, size 0x74, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AgreementSize, addr 0x121d264, size 0x58, virtual true, abstract: false, final true
  inline int32_t get_AgreementSize();

  /// @brief Method CalculateAgreement, addr 0x121d2bc, size 0x8c, virtual true, abstract: false, final true
  inline void CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  static inline ::Org::BouncyCastle::Crypto::Agreement::X25519Agreement* New_ctor();

  /// @brief Method .ctor, addr 0x121d348, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X25519Agreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X25519Agreement(X25519Agreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X25519Agreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X25519Agreement(X25519Agreement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X25519Agreement();

public:
  /// @brief Field privateKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters* ___privateKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::X25519Agreement, ___privateKey) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::X25519Agreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*, "Org.BouncyCastle.Crypto.Agreement", "X25519Agreement");

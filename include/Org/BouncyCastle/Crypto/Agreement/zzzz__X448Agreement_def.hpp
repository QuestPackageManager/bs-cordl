#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/X448Agreement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IRawAgreement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X448Agreement)
namespace Org::BouncyCastle::Crypto::Parameters {
class X448PrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class X448Agreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::X448Agreement);
// Dependencies Org.BouncyCastle.Crypto.IRawAgreement, System.Object
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.X448Agreement
class CORDL_TYPE X448Agreement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AgreementSize)) int32_t AgreementSize;

  /// @brief Field privateKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKey, put = __cordl_internal_set_privateKey)) ::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters* privateKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IRawAgreement"
  constexpr operator ::Org::BouncyCastle::Crypto::IRawAgreement*() noexcept;

  /// @brief Method CalculateAgreement, addr 0x2691560, size 0x8c, virtual true, abstract: false, final true
  inline void CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method Init, addr 0x2691494, size 0x74, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Agreement::X448Agreement* New_ctor();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters* const& __cordl_internal_get_privateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters*& __cordl_internal_get_privateKey();

  constexpr void __cordl_internal_set_privateKey(::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters* value);

  /// @brief Method .ctor, addr 0x26915ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AgreementSize, addr 0x2691508, size 0x58, virtual true, abstract: false, final true
  inline int32_t get_AgreementSize();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IRawAgreement"
  constexpr ::Org::BouncyCastle::Crypto::IRawAgreement* i___Org__BouncyCastle__Crypto__IRawAgreement() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X448Agreement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X448Agreement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X448Agreement(X448Agreement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X448Agreement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X448Agreement(X448Agreement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 744 };

  /// @brief Field privateKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters* ___privateKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::X448Agreement, ___privateKey) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::X448Agreement, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::X448Agreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::X448Agreement*, "Org.BouncyCastle.Crypto.Agreement", "X448Agreement");

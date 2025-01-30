#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsSrpGroupVerifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpGroupVerifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultTlsSrpGroupVerifier)
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsSrpGroupVerifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsSrpGroupVerifier, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsSrpGroupVerifier
class CORDL_TYPE DefaultTlsSrpGroupVerifier : public ::System::Object {
public:
  // Declarations
  /// @brief Field DefaultGroups, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultGroups, put = setStaticF_DefaultGroups)) ::System::Collections::IList* DefaultGroups;

  /// @brief Field mGroups, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mGroups, put = __cordl_internal_set_mGroups)) ::System::Collections::IList* mGroups;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*() noexcept;

  /// @brief Method Accept, addr 0x23eb4cc, size 0x340, virtual true, abstract: false, final false
  inline bool Accept(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group);

  /// @brief Method AreGroupsEqual, addr 0x23eb80c, size 0x78, virtual true, abstract: false, final false
  inline bool AreGroupsEqual(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* a, ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* b);

  /// @brief Method AreParametersEqual, addr 0x23eb884, size 0x3c, virtual true, abstract: false, final false
  inline bool AreParametersEqual(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier* New_ctor(::System::Collections::IList* groups);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_mGroups() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_mGroups();

  constexpr void __cordl_internal_set_mGroups(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x23eb438, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23eb4a4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* groups);

  static inline ::System::Collections::IList* getStaticF_DefaultGroups();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* i___Org__BouncyCastle__Crypto__Tls__TlsSrpGroupVerifier() noexcept;

  static inline void setStaticF_DefaultGroups(::System::Collections::IList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsSrpGroupVerifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSrpGroupVerifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsSrpGroupVerifier(DefaultTlsSrpGroupVerifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSrpGroupVerifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsSrpGroupVerifier(DefaultTlsSrpGroupVerifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1217 };

  /// @brief Field mGroups, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___mGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier, ___mGroups) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsSrpGroupVerifier");

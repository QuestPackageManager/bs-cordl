#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultTlsSrpGroupVerifier)
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
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
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsSrpGroupVerifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsSrpGroupVerifier*
class CORDL_TYPE DefaultTlsSrpGroupVerifier : public ::System::Object {
public:
  // Declarations
  /// @brief Field DefaultGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultGroups, put = setStaticF_DefaultGroups))::System::Collections::IList* DefaultGroups;

  /// @brief Field mGroups, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mGroups, put = __cordl_internal_set_mGroups))::System::Collections::IList* mGroups;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*() noexcept;

  /// @brief Method Accept, addr 0x10d0650, size 0x358, virtual true, abstract: false, final false
  inline bool Accept(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group);

  /// @brief Method AreGroupsEqual, addr 0x10d09a8, size 0x78, virtual true, abstract: false, final false
  inline bool AreGroupsEqual(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* a, ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* b);

  /// @brief Method AreParametersEqual, addr 0x10d0a20, size 0x3c, virtual true, abstract: false, final false
  inline bool AreParametersEqual(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier* New_ctor(::System::Collections::IList* groups);

  constexpr ::System::Collections::IList*& __cordl_internal_get_mGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mGroups() const;

  constexpr void __cordl_internal_set_mGroups(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x10d05bc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x10d0628, size 0x28, virtual false, abstract: false, final false
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

  /// @brief Field mGroups, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___mGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier, ___mGroups) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsSrpGroupVerifier");

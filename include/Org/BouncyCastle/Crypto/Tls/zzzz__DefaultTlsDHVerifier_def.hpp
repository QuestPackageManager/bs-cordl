#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsDHVerifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsDHVerifier)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsDHVerifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsDHVerifier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsDHVerifier*
class CORDL_TYPE DefaultTlsDHVerifier : public ::System::Object {
public:
  // Declarations
  /// @brief Field DefaultGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultGroups, put = setStaticF_DefaultGroups)) ::System::Collections::IList* DefaultGroups;

  /// @brief Field DefaultMinimumPrimeBits, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DefaultMinimumPrimeBits, put = setStaticF_DefaultMinimumPrimeBits)) int32_t DefaultMinimumPrimeBits;

  __declspec(property(get = get_MinimumPrimeBits)) int32_t MinimumPrimeBits;

  /// @brief Field mGroups, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mGroups, put = __cordl_internal_set_mGroups)) ::System::Collections::IList* mGroups;

  /// @brief Field mMinimumPrimeBits, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mMinimumPrimeBits, put = __cordl_internal_set_mMinimumPrimeBits)) int32_t mMinimumPrimeBits;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*() noexcept;

  /// @brief Method Accept, addr 0x23b5894, size 0x4c, virtual true, abstract: false, final false
  inline bool Accept(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method AddDefaultGroup, addr 0x23b55c0, size 0xd4, virtual false, abstract: false, final false
  static inline void AddDefaultGroup(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method AreGroupsEqual, addr 0x23b58e8, size 0x78, virtual true, abstract: false, final false
  inline bool AreGroupsEqual(::Org::BouncyCastle::Crypto::Parameters::DHParameters* a, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* b);

  /// @brief Method AreParametersEqual, addr 0x23b5960, size 0x3c, virtual true, abstract: false, final false
  inline bool AreParametersEqual(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method CheckGroup, addr 0x23b599c, size 0x35c, virtual true, abstract: false, final false
  inline bool CheckGroup(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method CheckMinimumPrimeBits, addr 0x23b5cf8, size 0x4c, virtual true, abstract: false, final false
  inline bool CheckMinimumPrimeBits(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier* New_ctor(::System::Collections::IList* groups, int32_t minimumPrimeBits);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier* New_ctor(int32_t minimumPrimeBits);

  constexpr ::System::Collections::IList*& __cordl_internal_get_mGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mGroups() const;

  constexpr int32_t const& __cordl_internal_get_mMinimumPrimeBits() const;

  constexpr int32_t& __cordl_internal_get_mMinimumPrimeBits();

  constexpr void __cordl_internal_set_mGroups(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_mMinimumPrimeBits(int32_t value);

  /// @brief Method .ctor, addr 0x23b513c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23b5864, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* groups, int32_t minimumPrimeBits);

  /// @brief Method .ctor, addr 0x23b57e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t minimumPrimeBits);

  static inline ::System::Collections::IList* getStaticF_DefaultGroups();

  static inline int32_t getStaticF_DefaultMinimumPrimeBits();

  /// @brief Method get_MinimumPrimeBits, addr 0x23b58e0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MinimumPrimeBits();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* i___Org__BouncyCastle__Crypto__Tls__TlsDHVerifier() noexcept;

  static inline void setStaticF_DefaultGroups(::System::Collections::IList* value);

  static inline void setStaticF_DefaultMinimumPrimeBits(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsDHVerifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsDHVerifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsDHVerifier(DefaultTlsDHVerifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsDHVerifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsDHVerifier(DefaultTlsDHVerifier const&) = delete;

  /// @brief Field mGroups, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___mGroups;

  /// @brief Field mMinimumPrimeBits, offset: 0x18, size: 0x4, def value: None
  int32_t ___mMinimumPrimeBits;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1212 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier, ___mGroups) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier, ___mMinimumPrimeBits) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsDHVerifier");

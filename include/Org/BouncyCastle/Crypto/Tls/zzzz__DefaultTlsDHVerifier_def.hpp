#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsDHVerifier)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsDHVerifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsDHVerifier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1212))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsDHVerifier*
class CORDL_TYPE DefaultTlsDHVerifier : public ::System::Object {
public:
  // Declarations
  /// @brief Field mGroups, offset 0x10, size 0x8
  __declspec(property(get = __get_mGroups, put = __set_mGroups))::System::Collections::IList* mGroups;

  /// @brief Field mMinimumPrimeBits, offset 0x18, size 0x4
  __declspec(property(get = __get_mMinimumPrimeBits, put = __set_mMinimumPrimeBits)) int32_t mMinimumPrimeBits;

  /// @brief Field DefaultMinimumPrimeBits, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DefaultMinimumPrimeBits, put = setStaticF_DefaultMinimumPrimeBits)) int32_t DefaultMinimumPrimeBits;

  /// @brief Field DefaultGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultGroups, put = setStaticF_DefaultGroups))::System::Collections::IList* DefaultGroups;

  __declspec(property(get = get_MinimumPrimeBits)) int32_t MinimumPrimeBits;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*() noexcept;

  constexpr ::System::Collections::IList*& __get_mGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_mGroups() const;

  constexpr void __set_mGroups(::System::Collections::IList* value);

  constexpr int32_t& __get_mMinimumPrimeBits();

  constexpr int32_t const& __get_mMinimumPrimeBits() const;

  constexpr void __set_mMinimumPrimeBits(int32_t value);

  static inline void setStaticF_DefaultMinimumPrimeBits(int32_t value);

  static inline int32_t getStaticF_DefaultMinimumPrimeBits();

  static inline void setStaticF_DefaultGroups(::System::Collections::IList* value);

  static inline ::System::Collections::IList* getStaticF_DefaultGroups();

  /// @brief Method AddDefaultGroup addr 0xf648c0 size 0xd4 virtual false final false
  static inline void AddDefaultGroup(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier* New_ctor();

  /// @brief Method .ctor addr 0xf6440c size 0x60 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier* New_ctor(int32_t minimumPrimeBits);

  /// @brief Method .ctor addr 0xf64ae8 size 0x7c virtual false final false
  inline void _ctor(int32_t minimumPrimeBits);

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier* New_ctor(::System::Collections::IList* groups, int32_t minimumPrimeBits);

  /// @brief Method .ctor addr 0xf64b64 size 0x30 virtual false final false
  inline void _ctor(::System::Collections::IList* groups, int32_t minimumPrimeBits);

  /// @brief Method Accept addr 0xf64b94 size 0x4c virtual true final false
  inline bool Accept(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method get_MinimumPrimeBits addr 0xf64be0 size 0x8 virtual true final false
  inline int32_t get_MinimumPrimeBits();

  /// @brief Method AreGroupsEqual addr 0xf64be8 size 0x78 virtual true final false
  inline bool AreGroupsEqual(::Org::BouncyCastle::Crypto::Parameters::DHParameters* a, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* b);

  /// @brief Method AreParametersEqual addr 0xf64c60 size 0x3c virtual true final false
  inline bool AreParametersEqual(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method CheckGroup addr 0xf64c9c size 0x374 virtual true final false
  inline bool CheckGroup(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  /// @brief Method CheckMinimumPrimeBits addr 0xf65010 size 0x4c virtual true final false
  inline bool CheckMinimumPrimeBits(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsDHVerifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsDHVerifier(DefaultTlsDHVerifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsDHVerifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsDHVerifier(DefaultTlsDHVerifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsDHVerifier();

public:
  /// @brief Field mGroups, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___mGroups;

  /// @brief Field mMinimumPrimeBits, offset: 0x18, size: 0x4, def value: None
  int32_t ___mMinimumPrimeBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsDHVerifier");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicTlsPskIdentity)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class BasicTlsPskIdentity;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity);
// Type: Org.BouncyCastle.Crypto.Tls::BasicTlsPskIdentity
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::BasicTlsPskIdentity*
class CORDL_TYPE BasicTlsPskIdentity : public ::System::Object {
public:
  // Declarations
  /// @brief Field mIdentity, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mIdentity, put = __cordl_internal_set_mIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> mIdentity;

  /// @brief Field mPsk, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mPsk, put = __cordl_internal_set_mPsk))::ArrayW<uint8_t, ::Array<uint8_t>*> mPsk;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*() noexcept;

  /// @brief Method GetPsk, addr 0x10c73e4, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPsk();

  /// @brief Method GetPskIdentity, addr 0x10c73dc, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPskIdentity();

  static inline ::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> psk);

  static inline ::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity* New_ctor(::StringW identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> psk);

  /// @brief Method NotifyIdentityHint, addr 0x10c73d8, size 0x4, virtual true, abstract: false, final false
  inline void NotifyIdentityHint(::ArrayW<uint8_t, ::Array<uint8_t>*> psk_identity_hint);

  /// @brief Method SkipIdentityHint, addr 0x10c73d4, size 0x4, virtual true, abstract: false, final false
  inline void SkipIdentityHint();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPsk() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPsk();

  constexpr void __cordl_internal_set_mIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPsk(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x10c72bc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> psk);

  /// @brief Method .ctor, addr 0x10c7348, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> psk);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* i___Org__BouncyCastle__Crypto__Tls__TlsPskIdentity() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicTlsPskIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicTlsPskIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicTlsPskIdentity(BasicTlsPskIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicTlsPskIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicTlsPskIdentity(BasicTlsPskIdentity const&) = delete;

  /// @brief Field mIdentity, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mIdentity;

  /// @brief Field mPsk, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPsk;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity, ___mIdentity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity, ___mPsk) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity*, "Org.BouncyCastle.Crypto.Tls", "BasicTlsPskIdentity");

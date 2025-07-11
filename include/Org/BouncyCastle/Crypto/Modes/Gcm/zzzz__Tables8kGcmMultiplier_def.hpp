#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/Gcm/Tables8kGcmMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmMultiplier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tables8kGcmMultiplier)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class Tables8kGcmMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier);
// Dependencies Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier, System.Object
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier
class CORDL_TYPE Tables8kGcmMultiplier : public ::System::Object {
public:
  // Declarations
  /// @brief Field H, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_H, put = __cordl_internal_set_H)) ::ArrayW<uint8_t, ::Array<uint8_t>*> H;

  /// @brief Field M, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_M,
                      put = __cordl_internal_set_M)) ::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                                                              ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*>
      M;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*() noexcept;

  /// @brief Method Init, addr 0x239e5e0, size 0x6ec, virtual true, abstract: false, final true
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> H);

  /// @brief Method MultiplyH, addr 0x239eccc, size 0x1e4, virtual true, abstract: false, final true
  inline void MultiplyH(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_H() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_H();

  constexpr ::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                     ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*> const&
  __cordl_internal_get_M() const;

  constexpr ::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                     ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*>&
  __cordl_internal_get_M();

  constexpr void __cordl_internal_set_H(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_M(::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                                                 ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*>
                                            value);

  /// @brief Method .ctor, addr 0x239eeb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
  constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* i___Org__BouncyCastle__Crypto__Modes__Gcm__IGcmMultiplier() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tables8kGcmMultiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tables8kGcmMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tables8kGcmMultiplier(Tables8kGcmMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tables8kGcmMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tables8kGcmMultiplier(Tables8kGcmMultiplier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 956 };

  /// @brief Field H, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___H;

  /// @brief Field M, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
           ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*>
      ___M;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier, ___H) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier, ___M) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*, "Org.BouncyCastle.Crypto.Modes.Gcm", "Tables8kGcmMultiplier");

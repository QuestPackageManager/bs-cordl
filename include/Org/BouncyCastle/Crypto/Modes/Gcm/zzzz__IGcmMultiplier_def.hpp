#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IGcmMultiplier)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier);
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::IGcmMultiplier
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Modes.Gcm::IGcmMultiplier*
class CORDL_TYPE IGcmMultiplier {
public:
  // Declarations
  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> H);

  /// @brief Method MultiplyH, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MultiplyH(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  // Ctor Parameters [CppParam { name: "", ty: "IGcmMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGcmMultiplier(IGcmMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGcmMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGcmMultiplier(IGcmMultiplier const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*, "Org.BouncyCastle.Crypto.Modes.Gcm", "IGcmMultiplier");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/Gcm/BasicGcmMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmMultiplier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicGcmMultiplier)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class BasicGcmMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier);
// Dependencies Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier, System.Object
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier
class CORDL_TYPE BasicGcmMultiplier : public ::System::Object {
public:
  // Declarations
  /// @brief Field H, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_H, put = __cordl_internal_set_H)) ::ArrayW<uint32_t, ::Array<uint32_t>*> H;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*() noexcept;

  /// @brief Method Init, addr 0x239c7b4, size 0x68, virtual true, abstract: false, final true
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> H);

  /// @brief Method MultiplyH, addr 0x239c81c, size 0x80, virtual true, abstract: false, final true
  inline void MultiplyH(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier* New_ctor();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_H() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_H();

  constexpr void __cordl_internal_set_H(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x239c89c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
  constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* i___Org__BouncyCastle__Crypto__Modes__Gcm__IGcmMultiplier() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicGcmMultiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicGcmMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicGcmMultiplier(BasicGcmMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicGcmMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicGcmMultiplier(BasicGcmMultiplier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 952 };

  /// @brief Field H, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___H;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier, ___H) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier*, "Org.BouncyCastle.Crypto.Modes.Gcm", "BasicGcmMultiplier");

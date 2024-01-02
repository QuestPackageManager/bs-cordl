#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicGcmMultiplier)
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmMultiplier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class BasicGcmMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier);
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::BasicGcmMultiplier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(952))
// CS Name: ::Org.BouncyCastle.Crypto.Modes.Gcm::BasicGcmMultiplier*
class CORDL_TYPE BasicGcmMultiplier : public ::System::Object {
public:
  // Declarations
  /// @brief Field H, offset 0x10, size 0x8
  __declspec(property(get = __get_H, put = __set_H))::ArrayW<uint32_t, ::Array<uint32_t>*> H;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*() noexcept;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_H();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_H() const;

  constexpr void __set_H(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method Init, addr 0xf123c0, size 0x68, virtual true, abstract: false, final true
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> H);

  /// @brief Method MultiplyH, addr 0xf12428, size 0x80, virtual true, abstract: false, final true
  inline void MultiplyH(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0xf124a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicGcmMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicGcmMultiplier(BasicGcmMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicGcmMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicGcmMultiplier(BasicGcmMultiplier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicGcmMultiplier();

public:
  /// @brief Field H, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___H;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier, ___H) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier*, "Org.BouncyCastle.Crypto.Modes.Gcm", "BasicGcmMultiplier");

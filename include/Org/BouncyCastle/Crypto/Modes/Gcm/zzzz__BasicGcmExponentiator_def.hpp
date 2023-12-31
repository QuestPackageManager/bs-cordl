#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicGcmExponentiator)
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmExponentiator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class BasicGcmExponentiator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator);
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::BasicGcmExponentiator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(950))
// CS Name: ::Org.BouncyCastle.Crypto.Modes.Gcm::BasicGcmExponentiator*
class CORDL_TYPE BasicGcmExponentiator : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<uint32_t, ::Array<uint32_t>*> x;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
  constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* i___Org__BouncyCastle__Crypto__Modes__Gcm__IGcmExponentiator() noexcept;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_x();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method Init, addr 0xf1209c, size 0x68, virtual true, abstract: false, final true
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  /// @brief Method ExponentiateX, addr 0xf1216c, size 0x110, virtual true, abstract: false, final true
  inline void ExponentiateX(int64_t pow, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator* New_ctor();

  /// @brief Method .ctor, addr 0xf123b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicGcmExponentiator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicGcmExponentiator(BasicGcmExponentiator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicGcmExponentiator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicGcmExponentiator(BasicGcmExponentiator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicGcmExponentiator();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator, ___x) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*, "Org.BouncyCastle.Crypto.Modes.Gcm", "BasicGcmExponentiator");

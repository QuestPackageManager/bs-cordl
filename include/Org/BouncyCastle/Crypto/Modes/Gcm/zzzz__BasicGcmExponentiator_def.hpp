#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/Gcm/BasicGcmExponentiator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*, "Org.BouncyCastle.Crypto.Modes.Gcm", "BasicGcmExponentiator");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator
class CORDL_TYPE BasicGcmExponentiator : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::ArrayW<uint32_t> x;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*() noexcept;

  /// @brief Method ExponentiateX, addr 0x33ee2a8, size 0x11c, virtual true, abstract: false, final true
  inline void ExponentiateX(int64_t pow, ::ArrayW<uint8_t> output);

  /// @brief Method Init, addr 0x33ee1d0, size 0x6c, virtual true, abstract: false, final true
  inline void Init(::ArrayW<uint8_t> x);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator* New_ctor();

  constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_x() const;

  constexpr ::ArrayW<uint32_t>& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_x(::ArrayW<uint32_t> value);

  /// @brief Method .ctor, addr 0x33ee504, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
  constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* i___Org__BouncyCastle__Crypto__Modes__Gcm__IGcmExponentiator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicGcmExponentiator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicGcmExponentiator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicGcmExponentiator(BasicGcmExponentiator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicGcmExponentiator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicGcmExponentiator(BasicGcmExponentiator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 950 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t> ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator, ___x) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes::Gcm

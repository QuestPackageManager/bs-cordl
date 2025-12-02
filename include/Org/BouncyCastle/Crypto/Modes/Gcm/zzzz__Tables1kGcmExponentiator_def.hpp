#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/Gcm/Tables1kGcmExponentiator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tables1kGcmExponentiator)
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmExponentiator;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class Tables1kGcmExponentiator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator
class CORDL_TYPE Tables1kGcmExponentiator : public ::System::Object {
public:
  // Declarations
  /// @brief Field lookupPowX2, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lookupPowX2, put = __cordl_internal_set_lookupPowX2)) ::System::Collections::IList* lookupPowX2;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*() noexcept;

  /// @brief Method EnsureAvailable, addr 0x32cba80, size 0x27c, virtual false, abstract: false, final false
  inline void EnsureAvailable(int32_t bit);

  /// @brief Method ExponentiateX, addr 0x32cb8c0, size 0x1c0, virtual true, abstract: false, final true
  inline void ExponentiateX(int64_t pow, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method Init, addr 0x32cb6a0, size 0x220, virtual true, abstract: false, final true
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator* New_ctor();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_lookupPowX2() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_lookupPowX2();

  constexpr void __cordl_internal_set_lookupPowX2(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x32cbcfc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
  constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* i___Org__BouncyCastle__Crypto__Modes__Gcm__IGcmExponentiator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tables1kGcmExponentiator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tables1kGcmExponentiator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tables1kGcmExponentiator(Tables1kGcmExponentiator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tables1kGcmExponentiator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tables1kGcmExponentiator(Tables1kGcmExponentiator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 954 };

  /// @brief Field lookupPowX2, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___lookupPowX2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator, ___lookupPowX2) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator*, "Org.BouncyCastle.Crypto.Modes.Gcm", "Tables1kGcmExponentiator");

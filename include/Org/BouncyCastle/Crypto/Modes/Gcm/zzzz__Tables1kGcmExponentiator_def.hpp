#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::Tables1kGcmExponentiator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(954))
// CS Name: ::Org.BouncyCastle.Crypto.Modes.Gcm::Tables1kGcmExponentiator*
class CORDL_TYPE Tables1kGcmExponentiator : public ::System::Object {
public:
  // Declarations
  /// @brief Field lookupPowX2, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lookupPowX2, put = __cordl_internal_set_lookupPowX2))::System::Collections::IList* lookupPowX2;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
  constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* i___Org__BouncyCastle__Crypto__Modes__Gcm__IGcmExponentiator() noexcept;

  constexpr ::System::Collections::IList*& __cordl_internal_get_lookupPowX2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_lookupPowX2() const;

  constexpr void __cordl_internal_set_lookupPowX2(::System::Collections::IList* value);

  /// @brief Method Init, addr 0xf1352c, size 0x20c, virtual true, abstract: false, final true
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  /// @brief Method ExponentiateX, addr 0xf13738, size 0x1b0, virtual true, abstract: false, final true
  inline void ExponentiateX(int64_t pow, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method EnsureAvailable, addr 0xf138e8, size 0x268, virtual false, abstract: false, final false
  inline void EnsureAvailable(int32_t bit);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator* New_ctor();

  /// @brief Method .ctor, addr 0xf13b50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Tables1kGcmExponentiator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tables1kGcmExponentiator(Tables1kGcmExponentiator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tables1kGcmExponentiator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tables1kGcmExponentiator(Tables1kGcmExponentiator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tables1kGcmExponentiator();

public:
  /// @brief Field lookupPowX2, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___lookupPowX2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator, ___lookupPowX2) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator*, "Org.BouncyCastle.Crypto.Modes.Gcm", "Tables1kGcmExponentiator");

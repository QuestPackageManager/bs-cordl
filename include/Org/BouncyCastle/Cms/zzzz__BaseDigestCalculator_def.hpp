#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/BaseDigestCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__IDigestCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDigestCalculator)
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class BaseDigestCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::BaseDigestCalculator);
// Dependencies Org.BouncyCastle.Cms.IDigestCalculator, System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.BaseDigestCalculator
class CORDL_TYPE BaseDigestCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::ArrayW<uint8_t, ::Array<uint8_t>*> digest;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::IDigestCalculator"
  constexpr operator ::Org::BouncyCastle::Cms::IDigestCalculator*() noexcept;

  /// @brief Method GetDigest, addr 0x264eec4, size 0x5c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDigest();

  static inline ::Org::BouncyCastle::Cms::BaseDigestCalculator* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_digest() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_digest();

  constexpr void __cordl_internal_set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x264ee9c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  /// @brief Convert to "::Org::BouncyCastle::Cms::IDigestCalculator"
  constexpr ::Org::BouncyCastle::Cms::IDigestCalculator* i___Org__BouncyCastle__Cms__IDigestCalculator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseDigestCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseDigestCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseDigestCalculator(BaseDigestCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseDigestCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseDigestCalculator(BaseDigestCalculator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 611 };

  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___digest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::BaseDigestCalculator, ___digest) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::BaseDigestCalculator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::BaseDigestCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::BaseDigestCalculator*, "Org.BouncyCastle.Cms", "BaseDigestCalculator");

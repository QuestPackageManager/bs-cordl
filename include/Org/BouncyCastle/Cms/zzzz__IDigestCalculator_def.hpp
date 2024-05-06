#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/IDigestCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDigestCalculator)
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class IDigestCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::IDigestCalculator);
// Type: Org.BouncyCastle.Cms::IDigestCalculator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::IDigestCalculator*
class CORDL_TYPE IDigestCalculator {
public:
  // Declarations
  /// @brief Method GetDigest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDigest();

  // Ctor Parameters [CppParam { name: "", ty: "IDigestCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDigestCalculator(IDigestCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDigestCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDigestCalculator(IDigestCalculator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::IDigestCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::IDigestCalculator*, "Org.BouncyCastle.Cms", "IDigestCalculator");

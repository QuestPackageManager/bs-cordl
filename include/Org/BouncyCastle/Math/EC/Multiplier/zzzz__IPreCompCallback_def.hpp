#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPreCompCallback)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback);
// Type: Org.BouncyCastle.Math.EC.Multiplier::IPreCompCallback
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::IPreCompCallback*
class CORDL_TYPE IPreCompCallback {
public:
  // Declarations
  /// @brief Method Precompute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  // Ctor Parameters [CppParam { name: "", ty: "IPreCompCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPreCompCallback(IPreCompCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPreCompCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPreCompCallback(IPreCompCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "IPreCompCallback");

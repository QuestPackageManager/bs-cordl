#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/PreCompInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(PreCompInfo)
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo);
// Type: Org.BouncyCastle.Math.EC.Multiplier::PreCompInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::PreCompInfo*
class CORDL_TYPE PreCompInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "PreCompInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreCompInfo(PreCompInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreCompInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreCompInfo(PreCompInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "PreCompInfo");

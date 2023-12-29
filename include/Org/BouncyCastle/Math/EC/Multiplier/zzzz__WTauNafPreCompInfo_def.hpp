#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(WTauNafPreCompInfo)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WTauNafPreCompInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo);
// Type: Org.BouncyCastle.Math.EC.Multiplier::WTauNafPreCompInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1549))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::WTauNafPreCompInfo*
class CORDL_TYPE WTauNafPreCompInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_preComp, offset 0x10, size 0x8
  __declspec(property(get = __get_m_preComp, put = __set_m_preComp))::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> m_preComp;

  __declspec(property(get = get_PreComp, put = set_PreComp))::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> PreComp;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept;

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*>& __get_m_preComp();

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> const& __get_m_preComp() const;

  constexpr void __set_m_preComp(::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> value);

  /// @brief Method get_PreComp addr 0xfc8b9c size 0x8 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> get_PreComp();

  /// @brief Method set_PreComp addr 0xfc8ba4 size 0x8 virtual true final false
  inline void set_PreComp(::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> value);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo* New_ctor();

  /// @brief Method .ctor addr 0xfc8b94 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WTauNafPreCompInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WTauNafPreCompInfo(WTauNafPreCompInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WTauNafPreCompInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WTauNafPreCompInfo(WTauNafPreCompInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WTauNafPreCompInfo();

public:
  /// @brief Field m_preComp, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> ___m_preComp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo, ___m_preComp) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafPreCompInfo");

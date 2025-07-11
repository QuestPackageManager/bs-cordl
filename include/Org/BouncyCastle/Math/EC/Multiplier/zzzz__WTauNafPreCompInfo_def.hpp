#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/WTauNafPreCompInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WTauNafPreCompInfo)
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WTauNafPreCompInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo);
// Dependencies Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo, System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WTauNafPreCompInfo
class CORDL_TYPE WTauNafPreCompInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PreComp, put = set_PreComp)) ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> PreComp;

  /// @brief Field m_preComp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_preComp,
                      put = __cordl_internal_set_m_preComp)) ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*>
      m_preComp;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept;

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo* New_ctor();

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> const& __cordl_internal_get_m_preComp() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*>& __cordl_internal_get_m_preComp();

  constexpr void __cordl_internal_set_m_preComp(::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> value);

  /// @brief Method .ctor, addr 0x24bcf1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PreComp, addr 0x24bcf24, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> get_PreComp();

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* i___Org__BouncyCastle__Math__EC__Multiplier__PreCompInfo() noexcept;

  /// @brief Method set_PreComp, addr 0x24bcf2c, size 0x8, virtual true, abstract: false, final false
  inline void set_PreComp(::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WTauNafPreCompInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WTauNafPreCompInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WTauNafPreCompInfo(WTauNafPreCompInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WTauNafPreCompInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WTauNafPreCompInfo(WTauNafPreCompInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1549 };

  /// @brief Field m_preComp, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> ___m_preComp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo, ___m_preComp) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafPreCompInfo");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/WTauNafMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WTauNafMultiplier)
namespace Org::BouncyCastle::Math::EC::Abc {
class ZTauElement;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WTauNafMultiplier_WTauNafCallback;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WTauNafMultiplier;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WTauNafMultiplier_WTauNafCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback);
// Dependencies Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback, System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier/WTauNafCallback
class CORDL_TYPE WTauNafMultiplier_WTauNafCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_a, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_a, put = __cordl_internal_set_m_a)) int8_t m_a;

  /// @brief Field m_p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_p, put = __cordl_internal_set_m_p)) ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* m_p;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback* New_ctor(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a);

  /// @brief Method Precompute, addr 0x24bce34, size 0xe8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr int8_t const& __cordl_internal_get_m_a() const;

  constexpr int8_t& __cordl_internal_get_m_a();

  constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* const& __cordl_internal_get_m_p() const;

  constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mPoint*& __cordl_internal_get_m_p();

  constexpr void __cordl_internal_set_m_a(int8_t value);

  constexpr void __cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* value);

  /// @brief Method .ctor, addr 0x24bcd9c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WTauNafMultiplier_WTauNafCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WTauNafMultiplier_WTauNafCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WTauNafMultiplier_WTauNafCallback(WTauNafMultiplier_WTauNafCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WTauNafMultiplier_WTauNafCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WTauNafMultiplier_WTauNafCallback(WTauNafMultiplier_WTauNafCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1547 };

  /// @brief Field m_p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* ___m_p;

  /// @brief Field m_a, offset: 0x18, size: 0x1, def value: None
  int8_t ___m_a;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback, ___m_p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback, ___m_a) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Dependencies Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
class CORDL_TYPE WTauNafMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  using WTauNafCallback = ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback;

  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME)) ::StringW PRECOMP_NAME;

  /// @brief Method MultiplyFromWTnaf, addr 0x24bc95c, size 0x440, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::ArrayW<int8_t, ::Array<int8_t>*> u);

  /// @brief Method MultiplyPositive, addr 0x24bc620, size 0x1f0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* point, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method MultiplyWTnaf, addr 0x24bc810, size 0x14c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t a,
                                                                        int8_t mu);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0x24bce2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_PRECOMP_NAME();

  static inline void setStaticF_PRECOMP_NAME(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WTauNafMultiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WTauNafMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WTauNafMultiplier(WTauNafMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WTauNafMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WTauNafMultiplier(WTauNafMultiplier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1548 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier/WTauNafCallback");

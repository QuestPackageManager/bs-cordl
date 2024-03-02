#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WTauNafMultiplier)
namespace Org::BouncyCastle::Math::EC::Abc {
class ZTauElement;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WTauNafMultiplier__WTauNafCallback;
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
class __WTauNafMultiplier__WTauNafCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback);
// Type: ::WTauNafCallback
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::WTauNafMultiplier::WTauNafCallback*
class CORDL_TYPE __WTauNafMultiplier__WTauNafCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_a, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_a, put = __cordl_internal_set_m_a)) int8_t m_a;

  /// @brief Field m_p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_p, put = __cordl_internal_set_m_p))::Org::BouncyCastle::Math::EC::AbstractF2mPoint* m_p;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback* New_ctor(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a);

  /// @brief Method Precompute, addr 0x10acb58, size 0xe8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr int8_t const& __cordl_internal_get_m_a() const;

  constexpr int8_t& __cordl_internal_get_m_a();

  constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mPoint*& __cordl_internal_get_m_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> const& __cordl_internal_get_m_p() const;

  constexpr void __cordl_internal_set_m_a(int8_t value);

  constexpr void __cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* value);

  /// @brief Method .ctor, addr 0x10acac0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WTauNafMultiplier__WTauNafCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WTauNafMultiplier__WTauNafCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WTauNafMultiplier__WTauNafCallback(__WTauNafMultiplier__WTauNafCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WTauNafMultiplier__WTauNafCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WTauNafMultiplier__WTauNafCallback(__WTauNafMultiplier__WTauNafCallback const&) = delete;

  /// @brief Field m_p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* ___m_p;

  /// @brief Field m_a, offset: 0x18, size: 0x1, def value: None
  int8_t ___m_a;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback, ___m_p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback, ___m_a) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: Org.BouncyCastle.Math.EC.Multiplier::WTauNafMultiplier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::WTauNafMultiplier*
class CORDL_TYPE WTauNafMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
  // Declarations
  using WTauNafCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback;

  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME))::StringW PRECOMP_NAME;

  /// @brief Method MultiplyFromWTnaf, addr 0x10ac66c, size 0x454, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::ArrayW<int8_t, ::Array<int8_t>*> u);

  /// @brief Method MultiplyPositive, addr 0x10ac32c, size 0x1f4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* point, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method MultiplyWTnaf, addr 0x10ac520, size 0x14c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t a,
                                                                        int8_t mu);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier* New_ctor();

  /// @brief Method .ctor, addr 0x10acb50, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier/WTauNafCallback");

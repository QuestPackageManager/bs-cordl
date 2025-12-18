#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/WNafUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WNafUtilities)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities_ConfigureBasepointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities_MapPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities_PrecomputeCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities_PrecomputeWithPointMapCallback;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities_ConfigureBasepointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities_MapPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities_PrecomputeCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafUtilities_PrecomputeWithPointMapCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/ConfigureBasepointCallback
class CORDL_TYPE WNafUtilities_ConfigureBasepointCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_confWidth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_confWidth, put = __cordl_internal_set_m_confWidth)) int32_t m_confWidth;

  /// @brief Field m_curve, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_curve, put = __cordl_internal_set_m_curve)) ::Org::BouncyCastle::Math::EC::ECCurve* m_curve;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth);

  /// @brief Method Precompute, addr 0x3414bf0, size 0x19c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr int32_t const& __cordl_internal_get_m_confWidth() const;

  constexpr int32_t& __cordl_internal_get_m_confWidth();

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& __cordl_internal_get_m_curve() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_m_curve();

  constexpr void __cordl_internal_set_m_confWidth(int32_t value);

  constexpr void __cordl_internal_set_m_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  /// @brief Method .ctor, addr 0x3413c30, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WNafUtilities_ConfigureBasepointCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities_ConfigureBasepointCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WNafUtilities_ConfigureBasepointCallback(WNafUtilities_ConfigureBasepointCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities_ConfigureBasepointCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WNafUtilities_ConfigureBasepointCallback(WNafUtilities_ConfigureBasepointCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1542 };

  /// @brief Field m_curve, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___m_curve;

  /// @brief Field m_confWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_confWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback, ___m_curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback, ___m_confWidth) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/MapPointCallback
class CORDL_TYPE WNafUtilities_MapPointCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_includeNegated, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_includeNegated, put = __cordl_internal_set_m_includeNegated)) bool m_includeNegated;

  /// @brief Field m_infoP, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_infoP, put = __cordl_internal_set_m_infoP)) ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* m_infoP;

  /// @brief Field m_pointMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pointMap, put = __cordl_internal_set_m_pointMap)) ::Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback* New_ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated,
                                                                                                    ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap);

  /// @brief Method Precompute, addr 0x3414d8c, size 0x370, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr bool const& __cordl_internal_get_m_includeNegated() const;

  constexpr bool& __cordl_internal_get_m_includeNegated();

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* const& __cordl_internal_get_m_infoP() const;

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& __cordl_internal_get_m_infoP();

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap* const& __cordl_internal_get_m_pointMap() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& __cordl_internal_get_m_pointMap();

  constexpr void __cordl_internal_set_m_includeNegated(bool value);

  constexpr void __cordl_internal_set_m_infoP(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value);

  constexpr void __cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value);

  /// @brief Method .ctor, addr 0x3414900, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WNafUtilities_MapPointCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities_MapPointCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WNafUtilities_MapPointCallback(WNafUtilities_MapPointCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities_MapPointCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WNafUtilities_MapPointCallback(WNafUtilities_MapPointCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1543 };

  /// @brief Field m_infoP, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* ___m_infoP;

  /// @brief Field m_includeNegated, offset: 0x18, size: 0x1, def value: None
  bool ___m_includeNegated;

  /// @brief Field m_pointMap, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPointMap* ___m_pointMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback, ___m_infoP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback, ___m_includeNegated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback, ___m_pointMap) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/PrecomputeCallback
class CORDL_TYPE WNafUtilities_PrecomputeCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_includeNegated, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_includeNegated, put = __cordl_internal_set_m_includeNegated)) bool m_includeNegated;

  /// @brief Field m_minWidth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_minWidth, put = __cordl_internal_set_m_minWidth)) int32_t m_minWidth;

  /// @brief Field m_p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_p, put = __cordl_internal_set_m_p)) ::Org::BouncyCastle::Math::EC::ECPoint* m_p;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  /// @brief Method CheckExisting, addr 0x34158a8, size 0x104, virtual false, abstract: false, final false
  inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated);

  /// @brief Method CheckTable, addr 0x34159ac, size 0x1c, virtual false, abstract: false, final false
  inline bool CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> table, int32_t reqLen);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated);

  /// @brief Method Precompute, addr 0x34150fc, size 0x7ac, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr bool const& __cordl_internal_get_m_includeNegated() const;

  constexpr bool& __cordl_internal_get_m_includeNegated();

  constexpr int32_t const& __cordl_internal_get_m_minWidth() const;

  constexpr int32_t& __cordl_internal_get_m_minWidth();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_m_p() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_p();

  constexpr void __cordl_internal_set_m_includeNegated(bool value);

  constexpr void __cordl_internal_set_m_minWidth(int32_t value);

  constexpr void __cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method .ctor, addr 0x3414910, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WNafUtilities_PrecomputeCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities_PrecomputeCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WNafUtilities_PrecomputeCallback(WNafUtilities_PrecomputeCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities_PrecomputeCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WNafUtilities_PrecomputeCallback(WNafUtilities_PrecomputeCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1544 };

  /// @brief Field m_p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_p;

  /// @brief Field m_minWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_minWidth;

  /// @brief Field m_includeNegated, offset: 0x1c, size: 0x1, def value: None
  bool ___m_includeNegated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback, ___m_p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback, ___m_minWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback, ___m_includeNegated) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/PrecomputeWithPointMapCallback
class CORDL_TYPE WNafUtilities_PrecomputeWithPointMapCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_fromWNaf, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fromWNaf, put = __cordl_internal_set_m_fromWNaf)) ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* m_fromWNaf;

  /// @brief Field m_includeNegated, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_includeNegated, put = __cordl_internal_set_m_includeNegated)) bool m_includeNegated;

  /// @brief Field m_point, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_point, put = __cordl_internal_set_m_point)) ::Org::BouncyCastle::Math::EC::ECPoint* m_point;

  /// @brief Field m_pointMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pointMap, put = __cordl_internal_set_m_pointMap)) ::Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  /// @brief Method CheckExisting, addr 0x3415dc0, size 0xa4, virtual false, abstract: false, final false
  inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated);

  /// @brief Method CheckTable, addr 0x3415e64, size 0x1c, virtual false, abstract: false, final false
  inline bool CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> table, int32_t reqLen);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                                                                  ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                                  ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf,
                                                                                                                  bool includeNegated);

  /// @brief Method Precompute, addr 0x34159c8, size 0x3f8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* const& __cordl_internal_get_m_fromWNaf() const;

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& __cordl_internal_get_m_fromWNaf();

  constexpr bool const& __cordl_internal_get_m_includeNegated() const;

  constexpr bool& __cordl_internal_get_m_includeNegated();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_m_point() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_point();

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap* const& __cordl_internal_get_m_pointMap() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& __cordl_internal_get_m_pointMap();

  constexpr void __cordl_internal_set_m_fromWNaf(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value);

  constexpr void __cordl_internal_set_m_includeNegated(bool value);

  constexpr void __cordl_internal_set_m_point(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr void __cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value);

  /// @brief Method .ctor, addr 0x3414a5c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* point, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf,
                    bool includeNegated);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WNafUtilities_PrecomputeWithPointMapCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities_PrecomputeWithPointMapCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WNafUtilities_PrecomputeWithPointMapCallback(WNafUtilities_PrecomputeWithPointMapCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities_PrecomputeWithPointMapCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WNafUtilities_PrecomputeWithPointMapCallback(WNafUtilities_PrecomputeWithPointMapCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1545 };

  /// @brief Field m_point, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_point;

  /// @brief Field m_pointMap, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPointMap* ___m_pointMap;

  /// @brief Field m_fromWNaf, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* ___m_fromWNaf;

  /// @brief Field m_includeNegated, offset: 0x28, size: 0x1, def value: None
  bool ___m_includeNegated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback, ___m_point) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback, ___m_pointMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback, ___m_fromWNaf) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback, ___m_includeNegated) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities
class CORDL_TYPE WNafUtilities : public ::System::Object {
public:
  // Declarations
  using ConfigureBasepointCallback = ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback;

  using MapPointCallback = ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback;

  using PrecomputeCallback = ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback;

  using PrecomputeWithPointMapCallback = ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback;

  /// @brief Field DEFAULT_WINDOW_SIZE_CUTOFFS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS, put = setStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS)) ::ArrayW<int32_t, ::Array<int32_t>*> DEFAULT_WINDOW_SIZE_CUTOFFS;

  /// @brief Field EMPTY_POINTS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EMPTY_POINTS, put = setStaticF_EMPTY_POINTS)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> EMPTY_POINTS;

  /// @brief Field MAX_WIDTH, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MAX_WIDTH, put = setStaticF_MAX_WIDTH)) int32_t MAX_WIDTH;

  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME)) ::StringW PRECOMP_NAME;

  /// @brief Method ConfigureBasepoint, addr 0x3413acc, size 0x164, virtual false, abstract: false, final false
  static inline void ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method GenerateCompactNaf, addr 0x3412970, size 0x278, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateCompactNaf(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GenerateCompactWindowNaf, addr 0x34136f8, size 0x30c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateCompactWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GenerateJsf, addr 0x3413cc4, size 0x298, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateJsf(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method GenerateNaf, addr 0x3413fe4, size 0x18c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateNaf(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GenerateWindowNaf, addr 0x3414170, size 0x2dc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GetNafWeight, addr 0x341444c, size 0x64, virtual false, abstract: false, final false
  static inline int32_t GetNafWeight(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GetWNafPreCompInfo, addr 0x34144b0, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method GetWNafPreCompInfo, addr 0x341454c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* preCompInfo);

  /// @brief Method GetWindowSize, addr 0x3413560, size 0x68, virtual false, abstract: false, final false
  static inline int32_t GetWindowSize(int32_t bits);

  /// @brief Method GetWindowSize, addr 0x3414690, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetWindowSize(int32_t bits, int32_t maxWidth);

  /// @brief Method GetWindowSize, addr 0x3414704, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetWindowSize(int32_t bits, ::ArrayW<int32_t, ::Array<int32_t>*> windowSizeCutoffs);

  /// @brief Method GetWindowSize, addr 0x34145c8, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t GetWindowSize(int32_t bits, ::ArrayW<int32_t, ::Array<int32_t>*> windowSizeCutoffs, int32_t maxWidth);

  /// @brief Method MapPointWithPrecomp, addr 0x3414778, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* MapPointWithPrecomp(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated,
                                                                            ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities* New_ctor();

  /// @brief Method Precompute, addr 0x34135c8, size 0x130, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated);

  /// @brief Method PrecomputeWithPointMap, addr 0x3414920, size 0x13c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* PrecomputeWithPointMap(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                   ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated);

  /// @brief Method ResizeTable, addr 0x3414a6c, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>
  ResizeTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> a, int32_t length);

  /// @brief Method Trim, addr 0x3413c3c, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Trim(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t length);

  /// @brief Method Trim, addr 0x3413f5c, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Trim(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t length);

  /// @brief Method .ctor, addr 0x3414bec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS();

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> getStaticF_EMPTY_POINTS();

  static inline int32_t getStaticF_MAX_WIDTH();

  static inline ::StringW getStaticF_PRECOMP_NAME();

  static inline void setStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_EMPTY_POINTS(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> value);

  static inline void setStaticF_MAX_WIDTH(int32_t value);

  static inline void setStaticF_PRECOMP_NAME(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WNafUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WNafUtilities(WNafUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WNafUtilities(WNafUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1546 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/ConfigureBasepointCallback");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/MapPointCallback");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/PrecomputeCallback");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/PrecomputeWithPointMapCallback");

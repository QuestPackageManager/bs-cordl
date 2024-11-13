#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/WNafUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __WNafUtilities__ConfigureBasepointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__MapPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__PrecomputeCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__PrecomputeWithPointMapCallback;
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
class __WNafUtilities__ConfigureBasepointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__MapPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__PrecomputeCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__PrecomputeWithPointMapCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback);
// Type: ::ConfigureBasepointCallback
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::WNafUtilities::ConfigureBasepointCallback*
class CORDL_TYPE __WNafUtilities__ConfigureBasepointCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_confWidth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_confWidth, put = __cordl_internal_set_m_confWidth)) int32_t m_confWidth;

  /// @brief Field m_curve, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_curve, put = __cordl_internal_set_m_curve)) ::Org::BouncyCastle::Math::EC::ECCurve* m_curve;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth);

  /// @brief Method Precompute, addr 0x2485c84, size 0x1b0, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr int32_t const& __cordl_internal_get_m_confWidth() const;

  constexpr int32_t& __cordl_internal_get_m_confWidth();

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_m_curve();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __cordl_internal_get_m_curve() const;

  constexpr void __cordl_internal_set_m_confWidth(int32_t value);

  constexpr void __cordl_internal_set_m_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  /// @brief Method .ctor, addr 0x2484c3c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WNafUtilities__ConfigureBasepointCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__ConfigureBasepointCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WNafUtilities__ConfigureBasepointCallback(__WNafUtilities__ConfigureBasepointCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__ConfigureBasepointCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WNafUtilities__ConfigureBasepointCallback(__WNafUtilities__ConfigureBasepointCallback const&) = delete;

  /// @brief Field m_curve, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___m_curve;

  /// @brief Field m_confWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_confWidth;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback, ___m_curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback, ___m_confWidth) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: ::MapPointCallback
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::WNafUtilities::MapPointCallback*
class CORDL_TYPE __WNafUtilities__MapPointCallback : public ::System::Object {
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

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback* New_ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated,
                                                                                                       ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap);

  /// @brief Method Precompute, addr 0x2485e34, size 0x374, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr bool const& __cordl_internal_get_m_includeNegated() const;

  constexpr bool& __cordl_internal_get_m_includeNegated();

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& __cordl_internal_get_m_infoP();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*> const& __cordl_internal_get_m_infoP() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& __cordl_internal_get_m_pointMap();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> const& __cordl_internal_get_m_pointMap() const;

  constexpr void __cordl_internal_set_m_includeNegated(bool value);

  constexpr void __cordl_internal_set_m_infoP(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value);

  constexpr void __cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value);

  /// @brief Method .ctor, addr 0x2485904, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WNafUtilities__MapPointCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__MapPointCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WNafUtilities__MapPointCallback(__WNafUtilities__MapPointCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__MapPointCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WNafUtilities__MapPointCallback(__WNafUtilities__MapPointCallback const&) = delete;

  /// @brief Field m_infoP, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* ___m_infoP;

  /// @brief Field m_includeNegated, offset: 0x18, size: 0x1, def value: None
  bool ___m_includeNegated;

  /// @brief Field m_pointMap, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPointMap* ___m_pointMap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback, ___m_infoP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback, ___m_includeNegated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback, ___m_pointMap) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: ::PrecomputeCallback
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::WNafUtilities::PrecomputeCallback*
class CORDL_TYPE __WNafUtilities__PrecomputeCallback : public ::System::Object {
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

  /// @brief Method CheckExisting, addr 0x248696c, size 0x108, virtual false, abstract: false, final false
  inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated);

  /// @brief Method CheckTable, addr 0x2486a74, size 0x1c, virtual false, abstract: false, final false
  inline bool CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> table, int32_t reqLen);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated);

  /// @brief Method Precompute, addr 0x24861a8, size 0x7c4, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr bool const& __cordl_internal_get_m_includeNegated() const;

  constexpr bool& __cordl_internal_get_m_includeNegated();

  constexpr int32_t const& __cordl_internal_get_m_minWidth() const;

  constexpr int32_t& __cordl_internal_get_m_minWidth();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_m_p() const;

  constexpr void __cordl_internal_set_m_includeNegated(bool value);

  constexpr void __cordl_internal_set_m_minWidth(int32_t value);

  constexpr void __cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method .ctor, addr 0x2485944, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WNafUtilities__PrecomputeCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__PrecomputeCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WNafUtilities__PrecomputeCallback(__WNafUtilities__PrecomputeCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__PrecomputeCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WNafUtilities__PrecomputeCallback(__WNafUtilities__PrecomputeCallback const&) = delete;

  /// @brief Field m_p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_p;

  /// @brief Field m_minWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_minWidth;

  /// @brief Field m_includeNegated, offset: 0x1c, size: 0x1, def value: None
  bool ___m_includeNegated;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1544 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback, ___m_p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback, ___m_minWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback, ___m_includeNegated) == 0x1c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: ::PrecomputeWithPointMapCallback
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::WNafUtilities::PrecomputeWithPointMapCallback*
class CORDL_TYPE __WNafUtilities__PrecomputeWithPointMapCallback : public ::System::Object {
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

  /// @brief Method CheckExisting, addr 0x2486e9c, size 0x9c, virtual false, abstract: false, final false
  inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated);

  /// @brief Method CheckTable, addr 0x2486f38, size 0x1c, virtual false, abstract: false, final false
  inline bool CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> table, int32_t reqLen);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                                                                     ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                                     ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf,
                                                                                                                     bool includeNegated);

  /// @brief Method Precompute, addr 0x2486a90, size 0x40c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& __cordl_internal_get_m_fromWNaf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*> const& __cordl_internal_get_m_fromWNaf() const;

  constexpr bool const& __cordl_internal_get_m_includeNegated() const;

  constexpr bool& __cordl_internal_get_m_includeNegated();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_point();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_m_point() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& __cordl_internal_get_m_pointMap();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> const& __cordl_internal_get_m_pointMap() const;

  constexpr void __cordl_internal_set_m_fromWNaf(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value);

  constexpr void __cordl_internal_set_m_includeNegated(bool value);

  constexpr void __cordl_internal_set_m_point(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr void __cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value);

  /// @brief Method .ctor, addr 0x2485ac0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* point, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf,
                    bool includeNegated);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WNafUtilities__PrecomputeWithPointMapCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__PrecomputeWithPointMapCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WNafUtilities__PrecomputeWithPointMapCallback(__WNafUtilities__PrecomputeWithPointMapCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__PrecomputeWithPointMapCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WNafUtilities__PrecomputeWithPointMapCallback(__WNafUtilities__PrecomputeWithPointMapCallback const&) = delete;

  /// @brief Field m_point, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_point;

  /// @brief Field m_pointMap, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPointMap* ___m_pointMap;

  /// @brief Field m_fromWNaf, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* ___m_fromWNaf;

  /// @brief Field m_includeNegated, offset: 0x28, size: 0x1, def value: None
  bool ___m_includeNegated;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1545 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback, ___m_point) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback, ___m_pointMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback, ___m_fromWNaf) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback, ___m_includeNegated) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: Org.BouncyCastle.Math.EC.Multiplier::WNafUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::WNafUtilities*
class CORDL_TYPE WNafUtilities : public ::System::Object {
public:
  // Declarations
  using ConfigureBasepointCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback;

  using MapPointCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback;

  using PrecomputeCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback;

  using PrecomputeWithPointMapCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback;

  /// @brief Field DEFAULT_WINDOW_SIZE_CUTOFFS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS, put = setStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS)) ::ArrayW<int32_t, ::Array<int32_t>*> DEFAULT_WINDOW_SIZE_CUTOFFS;

  /// @brief Field EMPTY_POINTS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EMPTY_POINTS, put = setStaticF_EMPTY_POINTS)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>
      EMPTY_POINTS;

  /// @brief Field MAX_WIDTH, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAX_WIDTH, put = setStaticF_MAX_WIDTH)) int32_t MAX_WIDTH;

  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME)) ::StringW PRECOMP_NAME;

  /// @brief Method ConfigureBasepoint, addr 0x2484ac0, size 0x17c, virtual false, abstract: false, final false
  static inline void ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method GenerateCompactNaf, addr 0x2483904, size 0x270, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateCompactNaf(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GenerateCompactWindowNaf, addr 0x2484698, size 0x308, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateCompactWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GenerateJsf, addr 0x2484cf0, size 0x298, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateJsf(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method GenerateNaf, addr 0x248500c, size 0x188, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateNaf(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GenerateWindowNaf, addr 0x2485194, size 0x2cc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GetNafWeight, addr 0x2485460, size 0x64, virtual false, abstract: false, final false
  static inline int32_t GetNafWeight(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GetWNafPreCompInfo, addr 0x24854c4, size 0x98, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method GetWNafPreCompInfo, addr 0x248555c, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* preCompInfo);

  /// @brief Method GetWindowSize, addr 0x24844fc, size 0x64, virtual false, abstract: false, final false
  static inline int32_t GetWindowSize(int32_t bits);

  /// @brief Method GetWindowSize, addr 0x248569c, size 0x70, virtual false, abstract: false, final false
  static inline int32_t GetWindowSize(int32_t bits, int32_t maxWidth);

  /// @brief Method GetWindowSize, addr 0x248570c, size 0x70, virtual false, abstract: false, final false
  static inline int32_t GetWindowSize(int32_t bits, ::ArrayW<int32_t, ::Array<int32_t>*> windowSizeCutoffs);

  /// @brief Method GetWindowSize, addr 0x24855d4, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t GetWindowSize(int32_t bits, ::ArrayW<int32_t, ::Array<int32_t>*> windowSizeCutoffs, int32_t maxWidth);

  /// @brief Method MapPointWithPrecomp, addr 0x248577c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* MapPointWithPrecomp(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated,
                                                                            ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities* New_ctor();

  /// @brief Method Precompute, addr 0x2484560, size 0x138, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated);

  /// @brief Method PrecomputeWithPointMap, addr 0x2485984, size 0x13c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* PrecomputeWithPointMap(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                   ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated);

  /// @brief Method ResizeTable, addr 0x2485b04, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>
  ResizeTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> a, int32_t length);

  /// @brief Method Trim, addr 0x2484c6c, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Trim(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t length);

  /// @brief Method Trim, addr 0x2484f88, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Trim(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t length);

  /// @brief Method .ctor, addr 0x2485c7c, size 0x8, virtual false, abstract: false, final false
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
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/ConfigureBasepointCallback");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/MapPointCallback");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/PrecomputeCallback");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*, "Org.BouncyCastle.Math.EC.Multiplier",
                       "WNafUtilities/PrecomputeWithPointMapCallback");

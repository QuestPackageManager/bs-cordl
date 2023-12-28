#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WNafUtilities)
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__MapPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__PrecomputeCallback;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__PrecomputeWithPointMapCallback;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __WNafUtilities__ConfigureBasepointCallback;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1542))
// CS Name: ::WNafUtilities::ConfigureBasepointCallback*
class CORDL_TYPE __WNafUtilities__ConfigureBasepointCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_curve, offset 0x10, size 0x8
  __declspec(property(get = __get_m_curve, put = __set_m_curve))::Org::BouncyCastle::Math::EC::ECCurve* m_curve;

  /// @brief Field m_confWidth, offset 0x18, size 0x4
  __declspec(property(get = __get_m_confWidth, put = __set_m_confWidth)) int32_t m_confWidth;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __get_m_curve();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __get_m_curve() const;

  constexpr void __set_m_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr int32_t& __get_m_confWidth();

  constexpr int32_t const& __get_m_confWidth() const;

  constexpr void __set_m_confWidth(int32_t value);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth);

  /// @brief Method .ctor addr 0x1038188 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth);

  /// @brief Method Precompute addr 0x10391d4 size 0x1b8 virtual true final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__ConfigureBasepointCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WNafUtilities__ConfigureBasepointCallback(__WNafUtilities__ConfigureBasepointCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__ConfigureBasepointCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WNafUtilities__ConfigureBasepointCallback(__WNafUtilities__ConfigureBasepointCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WNafUtilities__ConfigureBasepointCallback();

public:
  /// @brief Field m_curve, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___m_curve;

  /// @brief Field m_confWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_confWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: ::MapPointCallback
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1543))
// CS Name: ::WNafUtilities::MapPointCallback*
class CORDL_TYPE __WNafUtilities__MapPointCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_infoP, offset 0x10, size 0x8
  __declspec(property(get = __get_m_infoP, put = __set_m_infoP))::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* m_infoP;

  /// @brief Field m_includeNegated, offset 0x18, size 0x1
  __declspec(property(get = __get_m_includeNegated, put = __set_m_includeNegated)) bool m_includeNegated;

  /// @brief Field m_pointMap, offset 0x20, size 0x8
  __declspec(property(get = __get_m_pointMap, put = __set_m_pointMap))::Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& __get_m_infoP();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*> const& __get_m_infoP() const;

  constexpr void __set_m_infoP(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value);

  constexpr bool& __get_m_includeNegated();

  constexpr bool const& __get_m_includeNegated() const;

  constexpr void __set_m_includeNegated(bool value);

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& __get_m_pointMap();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> const& __get_m_pointMap() const;

  constexpr void __set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback* New_ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated,
                                                                                                       ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap);

  /// @brief Method .ctor addr 0x1038e50 size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap);

  /// @brief Method Precompute addr 0x103938c size 0x378 virtual true final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__MapPointCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WNafUtilities__MapPointCallback(__WNafUtilities__MapPointCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__MapPointCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WNafUtilities__MapPointCallback(__WNafUtilities__MapPointCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WNafUtilities__MapPointCallback();

public:
  /// @brief Field m_infoP, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* ___m_infoP;

  /// @brief Field m_includeNegated, offset: 0x18, size: 0x1, def value: None
  bool ___m_includeNegated;

  /// @brief Field m_pointMap, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPointMap* ___m_pointMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: ::PrecomputeCallback
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1544))
// CS Name: ::WNafUtilities::PrecomputeCallback*
class CORDL_TYPE __WNafUtilities__PrecomputeCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_p, offset 0x10, size 0x8
  __declspec(property(get = __get_m_p, put = __set_m_p))::Org::BouncyCastle::Math::EC::ECPoint* m_p;

  /// @brief Field m_minWidth, offset 0x18, size 0x4
  __declspec(property(get = __get_m_minWidth, put = __set_m_minWidth)) int32_t m_minWidth;

  /// @brief Field m_includeNegated, offset 0x1c, size 0x1
  __declspec(property(get = __get_m_includeNegated, put = __set_m_includeNegated)) bool m_includeNegated;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __get_m_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __get_m_p() const;

  constexpr void __set_m_p(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr int32_t& __get_m_minWidth();

  constexpr int32_t const& __get_m_minWidth() const;

  constexpr void __set_m_minWidth(int32_t value);

  constexpr bool& __get_m_includeNegated();

  constexpr bool const& __get_m_includeNegated() const;

  constexpr void __set_m_includeNegated(bool value);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated);

  /// @brief Method .ctor addr 0x1038e90 size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated);

  /// @brief Method Precompute addr 0x1039704 size 0x7e4 virtual true final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  /// @brief Method CheckExisting addr 0x1039ee8 size 0x108 virtual false final false
  inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated);

  /// @brief Method CheckTable addr 0x1039ff0 size 0x1c virtual false final false
  inline bool CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> table, int32_t reqLen);

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__PrecomputeCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WNafUtilities__PrecomputeCallback(__WNafUtilities__PrecomputeCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__PrecomputeCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WNafUtilities__PrecomputeCallback(__WNafUtilities__PrecomputeCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WNafUtilities__PrecomputeCallback();

public:
  /// @brief Field m_p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_p;

  /// @brief Field m_minWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_minWidth;

  /// @brief Field m_includeNegated, offset: 0x1c, size: 0x1, def value: None
  bool ___m_includeNegated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: ::PrecomputeWithPointMapCallback
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1545))
// CS Name: ::WNafUtilities::PrecomputeWithPointMapCallback*
class CORDL_TYPE __WNafUtilities__PrecomputeWithPointMapCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_point, offset 0x10, size 0x8
  __declspec(property(get = __get_m_point, put = __set_m_point))::Org::BouncyCastle::Math::EC::ECPoint* m_point;

  /// @brief Field m_pointMap, offset 0x18, size 0x8
  __declspec(property(get = __get_m_pointMap, put = __set_m_pointMap))::Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap;

  /// @brief Field m_fromWNaf, offset 0x20, size 0x8
  __declspec(property(get = __get_m_fromWNaf, put = __set_m_fromWNaf))::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* m_fromWNaf;

  /// @brief Field m_includeNegated, offset 0x28, size 0x1
  __declspec(property(get = __get_m_includeNegated, put = __set_m_includeNegated)) bool m_includeNegated;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __get_m_point();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __get_m_point() const;

  constexpr void __set_m_point(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& __get_m_pointMap();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> const& __get_m_pointMap() const;

  constexpr void __set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value);

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& __get_m_fromWNaf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*> const& __get_m_fromWNaf() const;

  constexpr void __set_m_fromWNaf(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value);

  constexpr bool& __get_m_includeNegated();

  constexpr bool const& __get_m_includeNegated() const;

  constexpr void __set_m_includeNegated(bool value);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                                                                     ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                                     ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf,
                                                                                                                     bool includeNegated);

  /// @brief Method .ctor addr 0x1039010 size 0x44 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* point, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf,
                    bool includeNegated);

  /// @brief Method Precompute addr 0x103a00c size 0x408 virtual true final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  /// @brief Method CheckExisting addr 0x103a414 size 0x9c virtual false final false
  inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated);

  /// @brief Method CheckTable addr 0x103a4b0 size 0x1c virtual false final false
  inline bool CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> table, int32_t reqLen);

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__PrecomputeWithPointMapCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WNafUtilities__PrecomputeWithPointMapCallback(__WNafUtilities__PrecomputeWithPointMapCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WNafUtilities__PrecomputeWithPointMapCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WNafUtilities__PrecomputeWithPointMapCallback(__WNafUtilities__PrecomputeWithPointMapCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WNafUtilities__PrecomputeWithPointMapCallback();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: Org.BouncyCastle.Math.EC.Multiplier::WNafUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1546))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::WNafUtilities*
class CORDL_TYPE WNafUtilities : public ::System::Object {
public:
  // Declarations
  using PrecomputeWithPointMapCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback;

  using PrecomputeCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback;

  using MapPointCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback;

  using ConfigureBasepointCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback;

  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME))::StringW PRECOMP_NAME;

  /// @brief Field DEFAULT_WINDOW_SIZE_CUTOFFS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS, put = setStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS))::ArrayW<int32_t, ::Array<int32_t>*> DEFAULT_WINDOW_SIZE_CUTOFFS;

  /// @brief Field MAX_WIDTH, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAX_WIDTH, put = setStaticF_MAX_WIDTH)) int32_t MAX_WIDTH;

  /// @brief Field EMPTY_POINTS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EMPTY_POINTS,
                             put = setStaticF_EMPTY_POINTS))::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> EMPTY_POINTS;

  static inline void setStaticF_PRECOMP_NAME(::StringW value);

  static inline ::StringW getStaticF_PRECOMP_NAME();

  static inline void setStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS();

  static inline void setStaticF_MAX_WIDTH(int32_t value);

  static inline int32_t getStaticF_MAX_WIDTH();

  static inline void setStaticF_EMPTY_POINTS(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> getStaticF_EMPTY_POINTS();

  /// @brief Method ConfigureBasepoint addr 0x1038008 size 0x180 virtual false final false
  static inline void ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method GenerateCompactNaf addr 0x1036e24 size 0x274 virtual false final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateCompactNaf(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GenerateCompactWindowNaf addr 0x1037bdc size 0x30c virtual false final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateCompactWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GenerateJsf addr 0x103823c size 0x298 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateJsf(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method GenerateNaf addr 0x1038558 size 0x188 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateNaf(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GenerateWindowNaf addr 0x10386e0 size 0x2d8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GetNafWeight addr 0x10389b8 size 0x64 virtual false final false
  static inline int32_t GetNafWeight(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method GetWNafPreCompInfo addr 0x1038a1c size 0x98 virtual false final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method GetWNafPreCompInfo addr 0x1038ab4 size 0x78 virtual false final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* preCompInfo);

  /// @brief Method GetWindowSize addr 0x1037a3c size 0x64 virtual false final false
  static inline int32_t GetWindowSize(int32_t bits);

  /// @brief Method GetWindowSize addr 0x1038be4 size 0x70 virtual false final false
  static inline int32_t GetWindowSize(int32_t bits, int32_t maxWidth);

  /// @brief Method GetWindowSize addr 0x1038c54 size 0x70 virtual false final false
  static inline int32_t GetWindowSize(int32_t bits, ::ArrayW<int32_t, ::Array<int32_t>*> windowSizeCutoffs);

  /// @brief Method GetWindowSize addr 0x1038b2c size 0xb8 virtual false final false
  static inline int32_t GetWindowSize(int32_t bits, ::ArrayW<int32_t, ::Array<int32_t>*> windowSizeCutoffs, int32_t maxWidth);

  /// @brief Method MapPointWithPrecomp addr 0x1038cc4 size 0x18c virtual false final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* MapPointWithPrecomp(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated,
                                                                            ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap);

  /// @brief Method Precompute addr 0x1037aa0 size 0x13c virtual false final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated);

  /// @brief Method PrecomputeWithPointMap addr 0x1038ed0 size 0x140 virtual false final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* PrecomputeWithPointMap(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                   ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated);

  /// @brief Method Trim addr 0x10384d4 size 0x84 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Trim(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t length);

  /// @brief Method Trim addr 0x10381b8 size 0x84 virtual false final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Trim(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t length);

  /// @brief Method ResizeTable addr 0x1039054 size 0x84 virtual false final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>
  ResizeTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> a, int32_t length);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities* New_ctor();

  /// @brief Method .ctor addr 0x10391cc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WNafUtilities(WNafUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WNafUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WNafUtilities(WNafUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WNafUtilities();

public:
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

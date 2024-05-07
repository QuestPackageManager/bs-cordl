#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/FixedPointUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedPointUtilities)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __FixedPointUtilities__FixedPointCallback;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointUtilities;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __FixedPointUtilities__FixedPointCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback);
// Type: ::FixedPointCallback
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::FixedPointUtilities::FixedPointCallback*
class CORDL_TYPE __FixedPointUtilities__FixedPointCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_p, put = __cordl_internal_set_m_p))::Org::BouncyCastle::Math::EC::ECPoint* m_p;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  /// @brief Method CheckExisting, addr 0x1296ffc, size 0x38, virtual false, abstract: false, final false
  inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* existingFP, int32_t n);

  /// @brief Method CheckTable, addr 0x1297034, size 0xb0, virtual false, abstract: false, final false
  inline bool CheckTable(::Org::BouncyCastle::Math::EC::ECLookupTable* table, int32_t n);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method Precompute, addr 0x1296bc8, size 0x434, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_m_p() const;

  constexpr void __cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method .ctor, addr 0x1296b38, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FixedPointUtilities__FixedPointCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FixedPointUtilities__FixedPointCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FixedPointUtilities__FixedPointCallback(__FixedPointUtilities__FixedPointCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FixedPointUtilities__FixedPointCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FixedPointUtilities__FixedPointCallback(__FixedPointUtilities__FixedPointCallback const&) = delete;

  /// @brief Field m_p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_p;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback, ___m_p) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Type: Org.BouncyCastle.Math.EC.Multiplier::FixedPointUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::FixedPointUtilities*
class CORDL_TYPE FixedPointUtilities : public ::System::Object {
public:
  // Declarations
  using FixedPointCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback;

  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME))::StringW PRECOMP_NAME;

  /// @brief Method GetCombSize, addr 0x1296908, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t GetCombSize(::Org::BouncyCastle::Math::EC::ECCurve* c);

  /// @brief Method GetFixedPointPreCompInfo, addr 0x1296ac0, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* GetFixedPointPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* preCompInfo);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities* New_ctor();

  /// @brief Method Precompute, addr 0x1296954, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method .ctor, addr 0x1296bc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_PRECOMP_NAME();

  static inline void setStaticF_PRECOMP_NAME(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedPointUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedPointUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedPointUtilities(FixedPointUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedPointUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedPointUtilities(FixedPointUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities/FixedPointCallback");

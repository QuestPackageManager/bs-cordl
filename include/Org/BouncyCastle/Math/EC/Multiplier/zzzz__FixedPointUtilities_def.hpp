#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/FixedPointUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedPointUtilities)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointUtilities_FixedPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
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
class FixedPointUtilities_FixedPointCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback);
// Dependencies Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback, System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities/FixedPointCallback
class CORDL_TYPE FixedPointUtilities_FixedPointCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_p, put = __cordl_internal_set_m_p)) ::Org::BouncyCastle::Math::EC::ECPoint* m_p;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  /// @brief Method CheckExisting, addr 0x24b8918, size 0x38, virtual false, abstract: false, final false
  inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* existingFP, int32_t n);

  /// @brief Method CheckTable, addr 0x24b8950, size 0xb0, virtual false, abstract: false, final false
  inline bool CheckTable(::Org::BouncyCastle::Math::EC::ECLookupTable* table, int32_t n);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method Precompute, addr 0x24b84e0, size 0x438, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_m_p() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_p();

  constexpr void __cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method .ctor, addr 0x24b8450, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedPointUtilities_FixedPointCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedPointUtilities_FixedPointCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedPointUtilities_FixedPointCallback(FixedPointUtilities_FixedPointCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedPointUtilities_FixedPointCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedPointUtilities_FixedPointCallback(FixedPointUtilities_FixedPointCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1531 };

  /// @brief Field m_p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_p;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback, ___m_p) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities
class CORDL_TYPE FixedPointUtilities : public ::System::Object {
public:
  // Declarations
  using FixedPointCallback = ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback;

  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME)) ::StringW PRECOMP_NAME;

  /// @brief Method GetCombSize, addr 0x24b8224, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t GetCombSize(::Org::BouncyCastle::Math::EC::ECCurve* c);

  /// @brief Method GetFixedPointPreCompInfo, addr 0x24b83d8, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* GetFixedPointPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* preCompInfo);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities* New_ctor();

  /// @brief Method Precompute, addr 0x24b8270, size 0x11c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method .ctor, addr 0x24b84d8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities/FixedPointCallback");

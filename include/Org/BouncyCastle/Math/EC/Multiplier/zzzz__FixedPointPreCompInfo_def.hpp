#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/FixedPointPreCompInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedPointPreCompInfo)
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointPreCompInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo);
// Dependencies Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo, System.Object
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo
class CORDL_TYPE FixedPointPreCompInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LookupTable, put = set_LookupTable)) ::Org::BouncyCastle::Math::EC::ECLookupTable* LookupTable;

  __declspec(property(get = get_Offset, put = set_Offset)) ::Org::BouncyCastle::Math::EC::ECPoint* Offset;

  __declspec(property(get = get_Width, put = set_Width)) int32_t Width;

  /// @brief Field m_lookupTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_lookupTable, put = __cordl_internal_set_m_lookupTable)) ::Org::BouncyCastle::Math::EC::ECLookupTable* m_lookupTable;

  /// @brief Field m_offset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_offset, put = __cordl_internal_set_m_offset)) ::Org::BouncyCastle::Math::EC::ECPoint* m_offset;

  /// @brief Field m_width, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_width, put = __cordl_internal_set_m_width)) int32_t m_width;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept;

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* New_ctor();

  constexpr ::Org::BouncyCastle::Math::EC::ECLookupTable* const& __cordl_internal_get_m_lookupTable() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECLookupTable*& __cordl_internal_get_m_lookupTable();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_m_offset() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_offset();

  constexpr int32_t const& __cordl_internal_get_m_width() const;

  constexpr int32_t& __cordl_internal_get_m_width();

  constexpr void __cordl_internal_set_m_lookupTable(::Org::BouncyCastle::Math::EC::ECLookupTable* value);

  constexpr void __cordl_internal_set_m_offset(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr void __cordl_internal_set_m_width(int32_t value);

  /// @brief Method .ctor, addr 0x24b8a8c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LookupTable, addr 0x24b8a5c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* get_LookupTable();

  /// @brief Method get_Offset, addr 0x24b8a6c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Offset();

  /// @brief Method get_Width, addr 0x24b8a7c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Width();

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* i___Org__BouncyCastle__Math__EC__Multiplier__PreCompInfo() noexcept;

  /// @brief Method set_LookupTable, addr 0x24b8a64, size 0x8, virtual true, abstract: false, final false
  inline void set_LookupTable(::Org::BouncyCastle::Math::EC::ECLookupTable* value);

  /// @brief Method set_Offset, addr 0x24b8a74, size 0x8, virtual true, abstract: false, final false
  inline void set_Offset(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method set_Width, addr 0x24b8a84, size 0x8, virtual true, abstract: false, final false
  inline void set_Width(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedPointPreCompInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedPointPreCompInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedPointPreCompInfo(FixedPointPreCompInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedPointPreCompInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedPointPreCompInfo(FixedPointPreCompInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1530 };

  /// @brief Field m_offset, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_offset;

  /// @brief Field m_lookupTable, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECLookupTable* ___m_lookupTable;

  /// @brief Field m_width, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_width;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo, ___m_offset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo, ___m_lookupTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo, ___m_width) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointPreCompInfo");

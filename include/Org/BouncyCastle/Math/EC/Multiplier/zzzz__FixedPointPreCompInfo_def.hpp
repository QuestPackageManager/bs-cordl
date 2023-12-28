#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedPointPreCompInfo)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointPreCompInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo);
// Type: Org.BouncyCastle.Math.EC.Multiplier::FixedPointPreCompInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1530))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::FixedPointPreCompInfo*
class CORDL_TYPE FixedPointPreCompInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_offset, offset 0x10, size 0x8
  __declspec(property(get = __get_m_offset, put = __set_m_offset))::Org::BouncyCastle::Math::EC::ECPoint* m_offset;

  /// @brief Field m_lookupTable, offset 0x18, size 0x8
  __declspec(property(get = __get_m_lookupTable, put = __set_m_lookupTable))::Org::BouncyCastle::Math::EC::ECLookupTable* m_lookupTable;

  /// @brief Field m_width, offset 0x20, size 0x4
  __declspec(property(get = __get_m_width, put = __set_m_width)) int32_t m_width;

  __declspec(property(get = get_LookupTable, put = set_LookupTable))::Org::BouncyCastle::Math::EC::ECLookupTable* LookupTable;

  __declspec(property(get = get_Offset, put = set_Offset))::Org::BouncyCastle::Math::EC::ECPoint* Offset;

  __declspec(property(get = get_Width, put = set_Width)) int32_t Width;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __get_m_offset();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __get_m_offset() const;

  constexpr void __set_m_offset(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECLookupTable*& __get_m_lookupTable();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECLookupTable*> const& __get_m_lookupTable() const;

  constexpr void __set_m_lookupTable(::Org::BouncyCastle::Math::EC::ECLookupTable* value);

  constexpr int32_t& __get_m_width();

  constexpr int32_t const& __get_m_width() const;

  constexpr void __set_m_width(int32_t value);

  /// @brief Method get_LookupTable addr 0x1036270 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* get_LookupTable();

  /// @brief Method set_LookupTable addr 0x1036278 size 0x8 virtual true final false
  inline void set_LookupTable(::Org::BouncyCastle::Math::EC::ECLookupTable* value);

  /// @brief Method get_Offset addr 0x1036280 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Offset();

  /// @brief Method set_Offset addr 0x1036288 size 0x8 virtual true final false
  inline void set_Offset(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method get_Width addr 0x1036290 size 0x8 virtual true final false
  inline int32_t get_Width();

  /// @brief Method set_Width addr 0x1036298 size 0x8 virtual true final false
  inline void set_Width(int32_t value);

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* New_ctor();

  /// @brief Method .ctor addr 0x10362a0 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FixedPointPreCompInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedPointPreCompInfo(FixedPointPreCompInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedPointPreCompInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedPointPreCompInfo(FixedPointPreCompInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedPointPreCompInfo();

public:
  /// @brief Field m_offset, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_offset;

  /// @brief Field m_lookupTable, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECLookupTable* ___m_lookupTable;

  /// @brief Field m_width, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_width;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointPreCompInfo");

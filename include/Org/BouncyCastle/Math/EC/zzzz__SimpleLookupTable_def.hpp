#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\SimpleLookupTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleLookupTable)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class SimpleLookupTable;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::EC::SimpleLookupTable*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::EC::SimpleLookupTable*, "Org.BouncyCastle.Math.EC", "SimpleLookupTable");
// Dependencies Org.BouncyCastle.Math.EC.AbstractECLookupTable, Org.BouncyCastle.Math.EC.ECPoint
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.SimpleLookupTable
class CORDL_TYPE SimpleLookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field points, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_points, put = __cordl_internal_set_points)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points;

  /// @brief Method Copy, addr 0x35326c0, size 0x104, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> Copy(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points, int32_t off, int32_t len);

  /// @brief Method Lookup, addr 0x3532800, size 0x4c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar, addr 0x353284c, size 0x30, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  static inline ::Org::BouncyCastle::Math::EC::SimpleLookupTable* New_ctor(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points, int32_t off, int32_t len);

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_points() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>& __cordl_internal_get_points();

  constexpr void __cordl_internal_set_points(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> value);

  /// @brief Method .ctor, addr 0x35327c4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points, int32_t off, int32_t len);

  /// @brief Method get_Size, addr 0x35327e8, size 0x18, virtual true, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleLookupTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleLookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleLookupTable(SimpleLookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleLookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleLookupTable(SimpleLookupTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1579 };

  /// @brief Field points, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> ___points;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::SimpleLookupTable, ___points) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Math::EC::SimpleLookupTable) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC

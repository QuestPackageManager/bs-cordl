#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/AbstractECLookupTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__ECLookupTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractECLookupTable)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractECLookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::AbstractECLookupTable);
// Dependencies Org.BouncyCastle.Math.EC.ECLookupTable, System.Object
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.AbstractECLookupTable
class CORDL_TYPE AbstractECLookupTable : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::ECLookupTable"
  constexpr operator ::Org::BouncyCastle::Math::EC::ECLookupTable*() noexcept;

  /// @brief Method Lookup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar, addr 0x2450438, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  static inline ::Org::BouncyCastle::Math::EC::AbstractECLookupTable* New_ctor();

  /// @brief Method .ctor, addr 0x2450064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Size, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Size();

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::ECLookupTable"
  constexpr ::Org::BouncyCastle::Math::EC::ECLookupTable* i___Org__BouncyCastle__Math__EC__ECLookupTable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractECLookupTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractECLookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractECLookupTable(AbstractECLookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractECLookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractECLookupTable(AbstractECLookupTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1363 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::AbstractECLookupTable, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractECLookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractECLookupTable*, "Org.BouncyCastle.Math.EC", "AbstractECLookupTable");

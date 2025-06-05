#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/ECNamedCurveTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ECNamedCurveTable)
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class ECNamedCurveTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X9.ECNamedCurveTable
class CORDL_TYPE ECNamedCurveTable : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetByName, addr 0x26212e8, size 0x19c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::StringW name);

  /// @brief Method GetByOid, addr 0x26217bc, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetName, addr 0x2621484, size 0x19c, virtual false, abstract: false, final false
  static inline ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetOid, addr 0x2621620, size 0x19c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW name);

  static inline ::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable* New_ctor();

  /// @brief Method .ctor, addr 0x2621b28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Names, addr 0x2621924, size 0x204, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerable* get_Names();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECNamedCurveTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECNamedCurveTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECNamedCurveTable(ECNamedCurveTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECNamedCurveTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECNamedCurveTable(ECNamedCurveTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 414 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable*, "Org.BouncyCastle.Asn1.X9", "ECNamedCurveTable");

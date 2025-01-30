#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Nist/NistNamedCurves.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NistNamedCurves)
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Nist {
class NistNamedCurves;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Nist::NistNamedCurves);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Nist {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Nist.NistNamedCurves
class CORDL_TYPE NistNamedCurves : public ::System::Object {
public:
  // Declarations
  /// @brief Field names, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_names, put = setStaticF_names)) ::System::Collections::IDictionary* names;

  /// @brief Field objIds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_objIds, put = setStaticF_objIds)) ::System::Collections::IDictionary* objIds;

  /// @brief Method DefineCurveAlias, addr 0x24021ec, size 0x198, virtual false, abstract: false, final false
  static inline void DefineCurveAlias(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetByName, addr 0x24026a4, size 0x80, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::StringW name);

  /// @brief Method GetByOid, addr 0x2402878, size 0x58, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetName, addr 0x24028d0, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetOid, addr 0x2402724, size 0x154, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW name);

  static inline ::Org::BouncyCastle::Asn1::Nist::NistNamedCurves* New_ctor();

  /// @brief Method .ctor, addr 0x24021e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_names();

  static inline ::System::Collections::IDictionary* getStaticF_objIds();

  /// @brief Method get_Names, addr 0x24029d0, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerable* get_Names();

  static inline void setStaticF_names(::System::Collections::IDictionary* value);

  static inline void setStaticF_objIds(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NistNamedCurves();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NistNamedCurves", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NistNamedCurves(NistNamedCurves&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NistNamedCurves", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NistNamedCurves(NistNamedCurves const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 203 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Nist::NistNamedCurves, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Nist
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Nist::NistNamedCurves);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Nist::NistNamedCurves*, "Org.BouncyCastle.Asn1.Nist", "NistNamedCurves");

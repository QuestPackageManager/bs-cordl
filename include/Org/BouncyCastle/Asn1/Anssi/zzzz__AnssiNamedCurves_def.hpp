#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Anssi/AnssiNamedCurves.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnssiNamedCurves)
namespace Org::BouncyCastle::Asn1::Anssi {
class AnssiNamedCurves_Frp256v1Holder;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParametersHolder;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Anssi {
class AnssiNamedCurves;
}
namespace Org::BouncyCastle::Asn1::Anssi {
class AnssiNamedCurves_Frp256v1Holder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves_Frp256v1Holder);
// Dependencies Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
namespace Org::BouncyCastle::Asn1::Anssi {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves/Frp256v1Holder
class CORDL_TYPE AnssiNamedCurves_Frp256v1Holder : public ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance;

  /// @brief Method CreateParameters, addr 0x22f1f40, size 0x1c8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();

  static inline ::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves_Frp256v1Holder* New_ctor();

  /// @brief Method .ctor, addr 0x22f1f30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* getStaticF_Instance();

  static inline void setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnssiNamedCurves_Frp256v1Holder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnssiNamedCurves_Frp256v1Holder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnssiNamedCurves_Frp256v1Holder(AnssiNamedCurves_Frp256v1Holder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnssiNamedCurves_Frp256v1Holder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnssiNamedCurves_Frp256v1Holder(AnssiNamedCurves_Frp256v1Holder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves_Frp256v1Holder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Anssi
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Anssi {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves
class CORDL_TYPE AnssiNamedCurves : public ::System::Object {
public:
  // Declarations
  using Frp256v1Holder = ::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves_Frp256v1Holder;

  /// @brief Field curves, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_curves, put = setStaticF_curves)) ::System::Collections::IDictionary* curves;

  /// @brief Field names, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_names, put = setStaticF_names)) ::System::Collections::IDictionary* names;

  /// @brief Field objIds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_objIds, put = setStaticF_objIds)) ::System::Collections::IDictionary* objIds;

  /// @brief Method ConfigureBasepoint, addr 0x22f14b4, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::StringW encoding);

  /// @brief Method ConfigureCurve, addr 0x22f15a4, size 0x4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve);

  /// @brief Method DefineCurve, addr 0x22f1640, size 0x210, virtual false, abstract: false, final false
  static inline void DefineCurve(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);

  /// @brief Method FromHex, addr 0x22f15a8, size 0x98, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* FromHex(::StringW hex);

  /// @brief Method GetByName, addr 0x22f196c, size 0x80, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::StringW name);

  /// @brief Method GetByOid, addr 0x22f1b40, size 0x128, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetName, addr 0x22f1d20, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetOid, addr 0x22f19ec, size 0x154, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW name);

  static inline ::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves* New_ctor();

  /// @brief Method .ctor, addr 0x22f1f28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_curves();

  static inline ::System::Collections::IDictionary* getStaticF_names();

  static inline ::System::Collections::IDictionary* getStaticF_objIds();

  /// @brief Method get_Names, addr 0x22f1e20, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerable* get_Names();

  static inline void setStaticF_curves(::System::Collections::IDictionary* value);

  static inline void setStaticF_names(::System::Collections::IDictionary* value);

  static inline void setStaticF_objIds(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnssiNamedCurves();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnssiNamedCurves", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnssiNamedCurves(AnssiNamedCurves&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnssiNamedCurves", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnssiNamedCurves(AnssiNamedCurves const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Anssi
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves*, "Org.BouncyCastle.Asn1.Anssi", "AnssiNamedCurves");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves_Frp256v1Holder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves_Frp256v1Holder*, "Org.BouncyCastle.Asn1.Anssi", "AnssiNamedCurves/Frp256v1Holder");

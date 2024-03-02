#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnssiNamedCurves)
namespace Org::BouncyCastle::Asn1::Anssi {
class __AnssiNamedCurves__Frp256v1Holder;
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
class __AnssiNamedCurves__Frp256v1Holder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Anssi::__AnssiNamedCurves__Frp256v1Holder);
// Type: ::Frp256v1Holder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Anssi {
// Is value type: false
// CS Name: ::AnssiNamedCurves::Frp256v1Holder*
class CORDL_TYPE __AnssiNamedCurves__Frp256v1Holder : public ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance;

  /// @brief Method CreateParameters, addr 0xed4694, size 0x1d4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();

  static inline ::Org::BouncyCastle::Asn1::Anssi::__AnssiNamedCurves__Frp256v1Holder* New_ctor();

  /// @brief Method .ctor, addr 0xed4684, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* getStaticF_Instance();

  static inline void setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnssiNamedCurves__Frp256v1Holder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AnssiNamedCurves__Frp256v1Holder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AnssiNamedCurves__Frp256v1Holder(__AnssiNamedCurves__Frp256v1Holder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AnssiNamedCurves__Frp256v1Holder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AnssiNamedCurves__Frp256v1Holder(__AnssiNamedCurves__Frp256v1Holder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Anssi::__AnssiNamedCurves__Frp256v1Holder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Anssi
// Type: Org.BouncyCastle.Asn1.Anssi::AnssiNamedCurves
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Anssi {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Anssi::AnssiNamedCurves*
class CORDL_TYPE AnssiNamedCurves : public ::System::Object {
public:
  // Declarations
  using Frp256v1Holder = ::Org::BouncyCastle::Asn1::Anssi::__AnssiNamedCurves__Frp256v1Holder;

  /// @brief Field curves, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_curves, put = setStaticF_curves))::System::Collections::IDictionary* curves;

  /// @brief Field names, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_names, put = setStaticF_names))::System::Collections::IDictionary* names;

  /// @brief Field objIds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_objIds, put = setStaticF_objIds))::System::Collections::IDictionary* objIds;

  /// @brief Method ConfigureBasepoint, addr 0xed3bfc, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::StringW encoding);

  /// @brief Method ConfigureCurve, addr 0xed3cec, size 0x4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve);

  /// @brief Method DefineCurve, addr 0xed3d90, size 0x210, virtual false, abstract: false, final false
  static inline void DefineCurve(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);

  /// @brief Method FromHex, addr 0xed3cf0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* FromHex(::StringW hex);

  /// @brief Method GetByName, addr 0xed40bc, size 0x80, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::StringW name);

  /// @brief Method GetByOid, addr 0xed4290, size 0x128, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetName, addr 0xed4470, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetOid, addr 0xed413c, size 0x154, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW name);

  static inline ::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves* New_ctor();

  /// @brief Method .ctor, addr 0xed467c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_curves();

  static inline ::System::Collections::IDictionary* getStaticF_names();

  static inline ::System::Collections::IDictionary* getStaticF_objIds();

  /// @brief Method get_Names, addr 0xed4570, size 0x10c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Anssi
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves*, "Org.BouncyCastle.Asn1.Anssi", "AnssiNamedCurves");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Anssi::__AnssiNamedCurves__Frp256v1Holder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Anssi::__AnssiNamedCurves__Frp256v1Holder*, "Org.BouncyCastle.Asn1.Anssi", "AnssiNamedCurves/Frp256v1Holder");

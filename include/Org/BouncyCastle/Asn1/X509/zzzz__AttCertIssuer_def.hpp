#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(AttCertIssuer)
namespace Org::BouncyCastle::Asn1::X509 {
class V2Form;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertIssuer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AttCertIssuer);
// Type: Org.BouncyCastle.Asn1.X509::AttCertIssuer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(339))
// CS Name: ::Org.BouncyCastle.Asn1.X509::AttCertIssuer*
class CORDL_TYPE AttCertIssuer : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::Org::BouncyCastle::Asn1::Asn1Encodable* obj;

  /// @brief Field choiceObj, offset 0x18, size 0x8
  __declspec(property(get = __get_choiceObj, put = __set_choiceObj))::Org::BouncyCastle::Asn1::Asn1Object* choiceObj;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::Asn1::Asn1Encodable* Issuer;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_obj() const;

  constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get_choiceObj();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get_choiceObj() const;

  constexpr void __set_choiceObj(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method GetInstance addr 0x101297c size 0x2a4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0x1012cec size 0x1c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* names);

  /// @brief Method .ctor addr 0x1012ca8 size 0x44 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* names);

  static inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* New_ctor(::Org::BouncyCastle::Asn1::X509::V2Form* v2Form);

  /// @brief Method .ctor addr 0x1012c20 size 0x88 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::V2Form* v2Form);

  /// @brief Method get_Issuer addr 0x1012d08 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Issuer();

  /// @brief Method ToAsn1Object addr 0x1012d10 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "AttCertIssuer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttCertIssuer(AttCertIssuer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttCertIssuer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttCertIssuer(AttCertIssuer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttCertIssuer();

public:
  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___obj;

  /// @brief Field choiceObj, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___choiceObj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AttCertIssuer, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttCertIssuer, ___obj) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttCertIssuer, ___choiceObj) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AttCertIssuer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AttCertIssuer*, "Org.BouncyCastle.Asn1.X509", "AttCertIssuer");

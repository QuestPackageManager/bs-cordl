#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ServiceLocator)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class ServiceLocator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator);
// Type: Org.BouncyCastle.Asn1.Ocsp::ServiceLocator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(220))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::ServiceLocator*
class CORDL_TYPE ServiceLocator : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field issuer, offset 0x10, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Org::BouncyCastle::Asn1::X509::X509Name* issuer;

  /// @brief Field locator, offset 0x18, size 0x8
  __declspec(property(get = __get_locator, put = __set_locator))::Org::BouncyCastle::Asn1::Asn1Object* locator;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_Locator))::Org::BouncyCastle::Asn1::Asn1Object* Locator;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_issuer() const;

  constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get_locator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get_locator() const;

  constexpr void __set_locator(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method GetInstance addr 0xf0d83c size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xf0d854 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method .ctor addr 0xf0dab4 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* issuer, ::Org::BouncyCastle::Asn1::Asn1Object* locator);

  /// @brief Method .ctor addr 0xf0dabc size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* issuer, ::Org::BouncyCastle::Asn1::Asn1Object* locator);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf0d9dc size 0xd8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Issuer addr 0xf0db38 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_Locator addr 0xf0db40 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Locator();

  /// @brief Method ToAsn1Object addr 0xf0db48 size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ServiceLocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServiceLocator(ServiceLocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServiceLocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServiceLocator(ServiceLocator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServiceLocator();

public:
  /// @brief Field issuer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___issuer;

  /// @brief Field locator, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___locator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator, ___issuer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator, ___locator) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator*, "Org.BouncyCastle.Asn1.Ocsp", "ServiceLocator");

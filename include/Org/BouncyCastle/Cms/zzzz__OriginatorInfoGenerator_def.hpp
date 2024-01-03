#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OriginatorInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class OriginatorInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::OriginatorInfoGenerator);
// Type: Org.BouncyCastle.Cms::OriginatorInfoGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(680))
// CS Name: ::Org.BouncyCastle.Cms::OriginatorInfoGenerator*
class CORDL_TYPE OriginatorInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field origCerts, offset 0x10, size 0x8
  __declspec(property(get = __get_origCerts, put = __set_origCerts))::System::Collections::IList* origCerts;

  /// @brief Field origCrls, offset 0x18, size 0x8
  __declspec(property(get = __get_origCrls, put = __set_origCrls))::System::Collections::IList* origCrls;

  constexpr ::System::Collections::IList*& __get_origCerts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_origCerts() const;

  constexpr void __set_origCerts(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_origCrls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_origCrls() const;

  constexpr void __set_origCrls(::System::Collections::IList* value);

  static inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* New_ctor(::Org::BouncyCastle::X509::X509Certificate* origCert);

  /// @brief Method .ctor, addr 0x1206928, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* origCert);

  static inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* New_ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts);

  /// @brief Method .ctor, addr 0x1206a38, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts);

  static inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* New_ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts, ::Org::BouncyCastle::X509::Store::IX509Store* origCrls);

  /// @brief Method .ctor, addr 0x1206a68, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts, ::Org::BouncyCastle::X509::Store::IX509Store* origCrls);

  /// @brief Method Generate, addr 0x1206ab4, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Generate();

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OriginatorInfoGenerator(OriginatorInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OriginatorInfoGenerator(OriginatorInfoGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OriginatorInfoGenerator();

public:
  /// @brief Field origCerts, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___origCerts;

  /// @brief Field origCrls, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___origCrls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::OriginatorInfoGenerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::OriginatorInfoGenerator, ___origCerts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::OriginatorInfoGenerator, ___origCrls) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::OriginatorInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::OriginatorInfoGenerator*, "Org.BouncyCastle.Cms", "OriginatorInfoGenerator");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/OriginatorInfoGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OriginatorInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class OriginatorInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::OriginatorInfoGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.OriginatorInfoGenerator
class CORDL_TYPE OriginatorInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field origCerts, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_origCerts, put = __cordl_internal_set_origCerts)) ::System::Collections::IList* origCerts;

  /// @brief Field origCrls, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_origCrls, put = __cordl_internal_set_origCrls)) ::System::Collections::IList* origCrls;

  /// @brief Method Generate, addr 0x267c7cc, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Generate();

  static inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* New_ctor(::Org::BouncyCastle::X509::X509Certificate* origCert);

  static inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* New_ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts);

  static inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* New_ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts, ::Org::BouncyCastle::X509::Store::IX509Store* origCrls);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_origCerts() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_origCerts();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_origCrls() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_origCrls();

  constexpr void __cordl_internal_set_origCerts(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_origCrls(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x267c640, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* origCert);

  /// @brief Method .ctor, addr 0x267c750, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts);

  /// @brief Method .ctor, addr 0x267c780, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::IX509Store* origCerts, ::Org::BouncyCastle::X509::Store::IX509Store* origCrls);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OriginatorInfoGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OriginatorInfoGenerator(OriginatorInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OriginatorInfoGenerator(OriginatorInfoGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 680 };

  /// @brief Field origCerts, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___origCerts;

  /// @brief Field origCrls, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___origCrls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::OriginatorInfoGenerator, ___origCerts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::OriginatorInfoGenerator, ___origCrls) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::OriginatorInfoGenerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::OriginatorInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::OriginatorInfoGenerator*, "Org.BouncyCastle.Cms", "OriginatorInfoGenerator");

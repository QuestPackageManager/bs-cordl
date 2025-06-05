#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/DefaultDigestAlgorithmIdentifierFinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultDigestAlgorithmIdentifierFinder)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.DefaultDigestAlgorithmIdentifierFinder
class CORDL_TYPE DefaultDigestAlgorithmIdentifierFinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field digestNameToOids, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_digestNameToOids, put = setStaticF_digestNameToOids)) ::System::Collections::IDictionary* digestNameToOids;

  /// @brief Field digestOids, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_digestOids, put = setStaticF_digestOids)) ::System::Collections::IDictionary* digestOids;

  static inline ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* New_ctor();

  /// @brief Method .ctor, addr 0x2662ca0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method find, addr 0x2672b54, size 0x198, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* find(::StringW digAlgName);

  /// @brief Method find, addr 0x2662ca8, size 0x258, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* find(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId);

  static inline ::System::Collections::IDictionary* getStaticF_digestNameToOids();

  static inline ::System::Collections::IDictionary* getStaticF_digestOids();

  static inline void setStaticF_digestNameToOids(::System::Collections::IDictionary* value);

  static inline void setStaticF_digestOids(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultDigestAlgorithmIdentifierFinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultDigestAlgorithmIdentifierFinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultDigestAlgorithmIdentifierFinder(DefaultDigestAlgorithmIdentifierFinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDigestAlgorithmIdentifierFinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultDigestAlgorithmIdentifierFinder(DefaultDigestAlgorithmIdentifierFinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*, "Org.BouncyCastle.Cms", "DefaultDigestAlgorithmIdentifierFinder");

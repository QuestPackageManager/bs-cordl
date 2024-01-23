#pragma once
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
// Type: Org.BouncyCastle.Cms::DefaultDigestAlgorithmIdentifierFinder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(659))
// CS Name: ::Org.BouncyCastle.Cms::DefaultDigestAlgorithmIdentifierFinder*
class CORDL_TYPE DefaultDigestAlgorithmIdentifierFinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field digestOids, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_digestOids, put = setStaticF_digestOids))::System::Collections::IDictionary* digestOids;

  /// @brief Field digestNameToOids, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_digestNameToOids, put = setStaticF_digestNameToOids))::System::Collections::IDictionary* digestNameToOids;

  static inline void setStaticF_digestOids(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_digestOids();

  static inline void setStaticF_digestNameToOids(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_digestNameToOids();

  /// @brief Method find, addr 0x11ed328, size 0x264, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* find(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId);

  /// @brief Method find, addr 0x11fd360, size 0x19c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* find(::StringW digAlgName);

  static inline ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* New_ctor();

  /// @brief Method .ctor, addr 0x11ed320, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDigestAlgorithmIdentifierFinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultDigestAlgorithmIdentifierFinder(DefaultDigestAlgorithmIdentifierFinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDigestAlgorithmIdentifierFinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultDigestAlgorithmIdentifierFinder(DefaultDigestAlgorithmIdentifierFinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultDigestAlgorithmIdentifierFinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*, "Org.BouncyCastle.Cms", "DefaultDigestAlgorithmIdentifierFinder");

#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509ExtensionCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ExtensionCollection)
namespace Mono::Security::X509 {
class X509Extension;
}
namespace Mono::Security {
class ASN1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509ExtensionCollection);
// Dependencies System.Collections.CollectionBase, System.Collections.IEnumerable
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509ExtensionCollection
class CORDL_TYPE X509ExtensionCollection : public ::System::Collections::CollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Mono::Security::X509::X509Extension* Item[];

  /// @brief Field readOnly, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_readOnly, put = __cordl_internal_set_readOnly)) bool readOnly;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method IndexOf, addr 0x3c425dc, size 0x138, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW oid);

  static inline ::Mono::Security::X509::X509ExtensionCollection* New_ctor();

  static inline ::Mono::Security::X509::X509ExtensionCollection* New_ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3c42714, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr bool const& __cordl_internal_get_readOnly() const;

  constexpr bool& __cordl_internal_get_readOnly();

  constexpr void __cordl_internal_set_readOnly(bool value);

  /// @brief Method .ctor, addr 0x3c425d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c3e388, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method get_Item, addr 0x3c41c74, size 0xb0, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Extension* get_Item(::StringW oid);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ExtensionCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ExtensionCollection(X509ExtensionCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ExtensionCollection(X509ExtensionCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15931 };

  /// @brief Field readOnly, offset: 0x18, size: 0x1, def value: None
  bool ___readOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509ExtensionCollection, ___readOnly) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509ExtensionCollection, 0x20>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509ExtensionCollection);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509ExtensionCollection*, "Mono.Security.X509", "X509ExtensionCollection");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ExtensionCollection)
namespace Mono::Security {
class ASN1;
}
namespace System::Collections {
class IEnumerator;
}
namespace Mono::Security::X509 {
class X509Extension;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509ExtensionCollection);
// Type: Mono.Security.X509::X509ExtensionCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3773))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13757))
// CS Name: ::Mono.Security.X509::X509ExtensionCollection*
class CORDL_TYPE X509ExtensionCollection : public ::System::Collections::CollectionBase {
public:
  // Declarations
  /// @brief Field readOnly, offset 0x18, size 0x1
  __declspec(property(get = __get_readOnly, put = __set_readOnly)) bool readOnly;

  __declspec(property(get = get_Item))::Mono::Security::X509::X509Extension* Item[];

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr bool& __get_readOnly();

  constexpr bool const& __get_readOnly() const;

  constexpr void __set_readOnly(bool value);

  static inline ::Mono::Security::X509::X509ExtensionCollection* New_ctor();

  /// @brief Method .ctor addr 0x23fd400 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Mono::Security::X509::X509ExtensionCollection* New_ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method .ctor addr 0x23f912c size 0x13c virtual false final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method IndexOf addr 0x23fd408 size 0x13c virtual false final false
  inline int32_t IndexOf(::StringW oid);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x23fd544 size 0x24 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method get_Item addr 0x23fca8c size 0xb0 virtual false final false
  inline ::Mono::Security::X509::X509Extension* get_Item(::StringW oid);

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ExtensionCollection(X509ExtensionCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ExtensionCollection(X509ExtensionCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ExtensionCollection();

public:
  /// @brief Field readOnly, offset: 0x18, size: 0x1, def value: None
  bool ___readOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509ExtensionCollection, 0x20>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509ExtensionCollection);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509ExtensionCollection*, "Mono.Security.X509", "X509ExtensionCollection");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/X509ExtensionsGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ExtensionsGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.X509ExtensionsGenerator
class CORDL_TYPE X509ExtensionsGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Field extOrdering, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_extOrdering, put = __cordl_internal_set_extOrdering)) ::System::Collections::IList* extOrdering;

  /// @brief Field extensions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::System::Collections::IDictionary* extensions;

  /// @brief Method AddExtension, addr 0x261a150, size 0x284, virtual false, abstract: false, final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extValue);

  /// @brief Method AddExtension, addr 0x261a044, size 0x10c, virtual false, abstract: false, final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extValue);

  /// @brief Method Generate, addr 0x261a484, size 0x60, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Generate();

  static inline ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* New_ctor();

  /// @brief Method Reset, addr 0x2619fdc, size 0x68, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_extOrdering() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_extOrdering();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_extensions() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_extensions();

  constexpr void __cordl_internal_set_extOrdering(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_extensions(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x261a4e4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsEmpty, addr 0x261a3d4, size 0xb0, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ExtensionsGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionsGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ExtensionsGenerator(X509ExtensionsGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ExtensionsGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ExtensionsGenerator(X509ExtensionsGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 407 };

  /// @brief Field extensions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___extensions;

  /// @brief Field extOrdering, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___extOrdering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, ___extensions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, ___extOrdering) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*, "Org.BouncyCastle.Asn1.X509", "X509ExtensionsGenerator");

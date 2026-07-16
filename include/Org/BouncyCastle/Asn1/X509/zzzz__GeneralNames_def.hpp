#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/GeneralNames.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GeneralNames)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::X509::GeneralNames*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::X509::GeneralNames*, "Org.BouncyCastle.Asn1.X509", "GeneralNames");
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.X509.GeneralName
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.GeneralNames
class CORDL_TYPE GeneralNames : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field names, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_names, put = __cordl_internal_set_names)) ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> names;

  /// @brief Method Copy, addr 0x365bcf8, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> names);

  /// @brief Method FromExtensions, addr 0x365bf2c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* extOid);

  /// @brief Method GetInstance, addr 0x3658dc4, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x365bd70, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* GetInstance(::System::Object* obj);

  /// @brief Method GetNames, addr 0x365c064, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> GetNames();

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> names);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x365c06c, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x365c0cc, size 0x178, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __cordl_internal_get_names() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>& __cordl_internal_get_names();

  constexpr void __cordl_internal_set_names(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> value);

  /// @brief Method .ctor, addr 0x365bfa8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method .ctor, addr 0x365c048, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> names);

  /// @brief Method .ctor, addr 0x365be10, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeneralNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralNames(GeneralNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralNames(GeneralNames const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 362 };

  /// @brief Field names, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> ___names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralNames, ___names) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::GeneralNames) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509

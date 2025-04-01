#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/GeneralNames.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::GeneralNames);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.GeneralNames
class CORDL_TYPE GeneralNames : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field names, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_names,
                      put = __cordl_internal_set_names)) ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*>
      names;

  /// @brief Method Copy, addr 0x26042ec, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*>
  Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> names);

  /// @brief Method FromExtensions, addr 0x260452c, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* extOid);

  /// @brief Method GetInstance, addr 0x2601298, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2604364, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* GetInstance(::System::Object* obj);

  /// @brief Method GetNames, addr 0x260467c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> GetNames();

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> names);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2604684, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x26046e4, size 0x15c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> const& __cordl_internal_get_names() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*>& __cordl_internal_get_names();

  constexpr void __cordl_internal_set_names(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> value);

  /// @brief Method .ctor, addr 0x26045a4, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method .ctor, addr 0x260464c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> names);

  /// @brief Method .ctor, addr 0x2604408, size 0x124, virtual false, abstract: false, final false
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
  ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> ___names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralNames, ___names) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::GeneralNames, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralNames);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralNames*, "Org.BouncyCastle.Asn1.X509", "GeneralNames");

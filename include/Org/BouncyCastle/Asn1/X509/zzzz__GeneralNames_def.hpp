#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GeneralNames)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::GeneralNames);
// Type: Org.BouncyCastle.Asn1.X509::GeneralNames
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(362))
// CS Name: ::Org.BouncyCastle.Asn1.X509::GeneralNames*
class CORDL_TYPE GeneralNames : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field names, offset 0x10, size 0x8
  __declspec(property(get = __get_names, put = __set_names))::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> names;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*>& __get_names();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> const& __get_names() const;

  constexpr void __set_names(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> value);

  /// @brief Method Copy, addr 0x118f114, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*>
  Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> names);

  /// @brief Method GetInstance, addr 0x118f18c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0x118c048, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method FromExtensions, addr 0x118f354, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* extOid);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method .ctor, addr 0x118f3cc, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> names);

  /// @brief Method .ctor, addr 0x118f474, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> names);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x118f230, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetNames, addr 0x118f4a4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> GetNames();

  /// @brief Method ToAsn1Object, addr 0x118f4ac, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x118f514, size 0x15c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "GeneralNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralNames(GeneralNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralNames(GeneralNames const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralNames();

public:
  /// @brief Field names, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> ___names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::GeneralNames, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralNames, ___names) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralNames);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralNames*, "Org.BouncyCastle.Asn1.X509", "GeneralNames");

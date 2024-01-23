#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SubjectDirectoryAttributes)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectDirectoryAttributes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes);
// Type: Org.BouncyCastle.Asn1.X509::SubjectDirectoryAttributes
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(382))
// CS Name: ::Org.BouncyCastle.Asn1.X509::SubjectDirectoryAttributes*
class CORDL_TYPE SubjectDirectoryAttributes : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::System::Collections::IList* attributes;

  __declspec(property(get = get_Attributes))::System::Collections::IEnumerable* Attributes;

  constexpr ::System::Collections::IList*& __cordl_internal_get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_attributes() const;

  constexpr void __cordl_internal_set_attributes(::System::Collections::IList* value);

  /// @brief Method GetInstance, addr 0x1196688, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1196810, size 0x360, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* New_ctor(::System::Collections::ArrayList* attributes);

  /// @brief Method .ctor, addr 0x1196b70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* attributes);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* New_ctor(::System::Collections::IList* attributes);

  /// @brief Method .ctor, addr 0x1196b74, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* attributes);

  /// @brief Method ToAsn1Object, addr 0x1196bec, size 0x2c8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method get_Attributes, addr 0x1196eb4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_Attributes();

  // Ctor Parameters [CppParam { name: "", ty: "SubjectDirectoryAttributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubjectDirectoryAttributes(SubjectDirectoryAttributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubjectDirectoryAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubjectDirectoryAttributes(SubjectDirectoryAttributes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubjectDirectoryAttributes();

public:
  /// @brief Field attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes, ___attributes) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*, "Org.BouncyCastle.Asn1.X509", "SubjectDirectoryAttributes");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(NameConstraints)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class ArrayList;
}
namespace Org::BouncyCastle::Asn1 {
class DerSequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class NameConstraints;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::NameConstraints);
// Type: Org.BouncyCastle.Asn1.X509::NameConstraints
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(370))
// CS Name: ::Org.BouncyCastle.Asn1.X509::NameConstraints*
class CORDL_TYPE NameConstraints : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field permitted, offset 0x10, size 0x8
  __declspec(property(get = __get_permitted, put = __set_permitted))::Org::BouncyCastle::Asn1::Asn1Sequence* permitted;

  /// @brief Field excluded, offset 0x18, size 0x8
  __declspec(property(get = __get_excluded, put = __set_excluded))::Org::BouncyCastle::Asn1::Asn1Sequence* excluded;

  __declspec(property(get = get_PermittedSubtrees))::Org::BouncyCastle::Asn1::Asn1Sequence* PermittedSubtrees;

  __declspec(property(get = get_ExcludedSubtrees))::Org::BouncyCastle::Asn1::Asn1Sequence* ExcludedSubtrees;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_permitted();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_permitted() const;

  constexpr void __set_permitted(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_excluded();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_excluded() const;

  constexpr void __set_excluded(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance, addr 0x1192600, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1192788, size 0x338, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* New_ctor(::System::Collections::ArrayList* permitted, ::System::Collections::ArrayList* excluded);

  /// @brief Method .ctor, addr 0x1192ac0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* permitted, ::System::Collections::ArrayList* excluded);

  static inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* New_ctor(::System::Collections::IList* permitted, ::System::Collections::IList* excluded);

  /// @brief Method .ctor, addr 0x1192ac4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* permitted, ::System::Collections::IList* excluded);

  /// @brief Method CreateSequence, addr 0x1192b0c, size 0x2b0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSequence* CreateSequence(::System::Collections::IList* subtrees);

  /// @brief Method get_PermittedSubtrees, addr 0x1192dbc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_PermittedSubtrees();

  /// @brief Method get_ExcludedSubtrees, addr 0x1192dc4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_ExcludedSubtrees();

  /// @brief Method ToAsn1Object, addr 0x1192dcc, size 0xc0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "NameConstraints", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameConstraints(NameConstraints&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameConstraints", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameConstraints(NameConstraints const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameConstraints();

public:
  /// @brief Field permitted, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___permitted;

  /// @brief Field excluded, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___excluded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::NameConstraints, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::NameConstraints, ___permitted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::NameConstraints, ___excluded) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::NameConstraints);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::NameConstraints*, "Org.BouncyCastle.Asn1.X509", "NameConstraints");

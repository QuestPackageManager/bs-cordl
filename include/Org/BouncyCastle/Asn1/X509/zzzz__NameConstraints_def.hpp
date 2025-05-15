#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/NameConstraints.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(NameConstraints)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerSequence;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class NameConstraints;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::NameConstraints);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.NameConstraints
class CORDL_TYPE NameConstraints : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_ExcludedSubtrees)) ::Org::BouncyCastle::Asn1::Asn1Sequence* ExcludedSubtrees;

  __declspec(property(get = get_PermittedSubtrees)) ::Org::BouncyCastle::Asn1::Asn1Sequence* PermittedSubtrees;

  /// @brief Field excluded, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_excluded, put = __cordl_internal_set_excluded)) ::Org::BouncyCastle::Asn1::Asn1Sequence* excluded;

  /// @brief Field permitted, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_permitted, put = __cordl_internal_set_permitted)) ::Org::BouncyCastle::Asn1::Asn1Sequence* permitted;

  /// @brief Method CreateSequence, addr 0x260b760, size 0x2ac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSequence* CreateSequence(::System::Collections::IList* subtrees);

  /// @brief Method GetInstance, addr 0x260b25c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* New_ctor(::System::Collections::ArrayList* permitted, ::System::Collections::ArrayList* excluded);

  static inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* New_ctor(::System::Collections::IList* permitted, ::System::Collections::IList* excluded);

  static inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x260ba1c, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_excluded() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_excluded();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_permitted() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_permitted();

  constexpr void __cordl_internal_set_excluded(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_permitted(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x260b714, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* permitted, ::System::Collections::ArrayList* excluded);

  /// @brief Method .ctor, addr 0x260b718, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* permitted, ::System::Collections::IList* excluded);

  /// @brief Method .ctor, addr 0x260b3d8, size 0x33c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_ExcludedSubtrees, addr 0x260ba14, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_ExcludedSubtrees();

  /// @brief Method get_PermittedSubtrees, addr 0x260ba0c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_PermittedSubtrees();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameConstraints();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameConstraints", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameConstraints(NameConstraints&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameConstraints", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameConstraints(NameConstraints const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 370 };

  /// @brief Field permitted, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___permitted;

  /// @brief Field excluded, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___excluded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::NameConstraints, ___permitted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::NameConstraints, ___excluded) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::NameConstraints, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::NameConstraints);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::NameConstraints*, "Org.BouncyCastle.Asn1.X509", "NameConstraints");

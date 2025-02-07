#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Targets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Targets)
namespace Org::BouncyCastle::Asn1::X509 {
class Target;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class Targets;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Targets);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.Targets
class CORDL_TYPE Targets : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field targets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_targets, put = __cordl_internal_set_targets)) ::Org::BouncyCastle::Asn1::Asn1Sequence* targets;

  /// @brief Method GetInstance, addr 0x2611294, size 0x180, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Targets* GetInstance(::System::Object* obj);

  /// @brief Method GetTargets, addr 0x2611594, size 0x110, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::Target*, ::Array<::Org::BouncyCastle::Asn1::X509::Target*>*> GetTargets();

  static inline ::Org::BouncyCastle::Asn1::X509::Targets* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target*, ::Array<::Org::BouncyCastle::Asn1::X509::Target*>*> targets);

  static inline ::Org::BouncyCastle::Asn1::X509::Targets* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* targets);

  /// @brief Method ToAsn1Object, addr 0x26116a4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_targets() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_targets();

  constexpr void __cordl_internal_set_targets(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x26114f0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target*, ::Array<::Org::BouncyCastle::Asn1::X509::Target*>*> targets);

  /// @brief Method .ctor, addr 0x261156c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* targets);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Targets();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Targets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Targets(Targets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Targets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Targets(Targets const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 388 };

  /// @brief Field targets, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___targets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Targets, ___targets) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Targets, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Targets);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Targets*, "Org.BouncyCastle.Asn1.X509", "Targets");

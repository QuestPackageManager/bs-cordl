#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Targets)
namespace Org::BouncyCastle::Asn1::X509 {
class Target;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class Targets;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Targets);
// Type: Org.BouncyCastle.Asn1.X509::Targets
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(388))
// CS Name: ::Org.BouncyCastle.Asn1.X509::Targets*
class CORDL_TYPE Targets : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field targets, offset 0x10, size 0x8
  __declspec(property(get = __get_targets, put = __set_targets))::Org::BouncyCastle::Asn1::Asn1Sequence* targets;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_targets();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_targets() const;

  constexpr void __set_targets(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance, addr 0x1198150, size 0x18c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Targets* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Targets* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* targets);

  /// @brief Method .ctor, addr 0x119844c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* targets);

  static inline ::Org::BouncyCastle::Asn1::X509::Targets* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target*, ::Array<::Org::BouncyCastle::Asn1::X509::Target*>*> targets);

  /// @brief Method .ctor, addr 0x11983c8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target*, ::Array<::Org::BouncyCastle::Asn1::X509::Target*>*> targets);

  /// @brief Method GetTargets, addr 0x1198474, size 0x110, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::Target*, ::Array<::Org::BouncyCastle::Asn1::X509::Target*>*> GetTargets();

  /// @brief Method ToAsn1Object, addr 0x1198584, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Targets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Targets(Targets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Targets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Targets(Targets const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Targets();

public:
  /// @brief Field targets, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___targets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Targets, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Targets, ___targets) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Targets);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Targets*, "Org.BouncyCastle.Asn1.X509", "Targets");

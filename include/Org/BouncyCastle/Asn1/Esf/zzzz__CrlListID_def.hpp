#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CrlListID)
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::Esf {
class CrlValidatedID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CrlListID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CrlListID);
// Type: Org.BouncyCastle.Asn1.Esf::CrlListID
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(141))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CrlListID*
class CORDL_TYPE CrlListID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field crls, offset 0x10, size 0x8
  __declspec(property(get = __get_crls, put = __set_crls))::Org::BouncyCastle::Asn1::Asn1Sequence* crls;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_crls();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_crls() const;

  constexpr void __set_crls(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance, addr 0xe91a00, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CrlListID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlListID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe91b88, size 0x480, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlListID* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>*> crls);

  /// @brief Method .ctor, addr 0xe92190, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>*> crls);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlListID* New_ctor(::System::Collections::IEnumerable* crls);

  /// @brief Method .ctor, addr 0xe92254, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* crls);

  /// @brief Method GetCrls, addr 0xe923f8, size 0x120, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*>*> GetCrls();

  /// @brief Method ToAsn1Object, addr 0xe92518, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CrlListID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlListID(CrlListID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlListID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlListID(CrlListID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlListID();

public:
  /// @brief Field crls, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___crls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CrlListID, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlListID, ___crls) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CrlListID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CrlListID*, "Org.BouncyCastle.Asn1.Esf", "CrlListID");

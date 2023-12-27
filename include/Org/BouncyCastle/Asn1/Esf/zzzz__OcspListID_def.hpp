#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(OcspListID)
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OcspResponsesID;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OcspListID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OcspListID);
// Type: Org.BouncyCastle.Asn1.Esf::OcspListID
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(146))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OcspListID*
class CORDL_TYPE OcspListID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field ocspResponses, offset 0x10, size 0x8
  __declspec(property(get = __get_ocspResponses, put = __set_ocspResponses))::Org::BouncyCastle::Asn1::Asn1Sequence* ocspResponses;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_ocspResponses();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_ocspResponses() const;

  constexpr void __set_ocspResponses(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xe92964 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe939a8 size 0x480 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>*> ocspResponses);

  /// @brief Method .ctor addr 0xe93fb0 size 0xc4 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>*> ocspResponses);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* New_ctor(::System::Collections::IEnumerable* ocspResponses);

  /// @brief Method .ctor addr 0xe94074 size 0x1a4 virtual false final false
  inline void _ctor(::System::Collections::IEnumerable* ocspResponses);

  /// @brief Method GetOcspResponses addr 0xe94218 size 0x120 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>*> GetOcspResponses();

  /// @brief Method ToAsn1Object addr 0xe94338 size 0x68 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OcspListID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspListID(OcspListID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspListID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspListID(OcspListID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspListID();

public:
  /// @brief Field ocspResponses, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___ocspResponses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OcspListID, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OcspListID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OcspListID*, "Org.BouncyCastle.Asn1.Esf", "OcspListID");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CompleteRevocationRefs)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Esf {
class CrlOcspRef;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CompleteRevocationRefs;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs);
// Type: Org.BouncyCastle.Asn1.Esf::CompleteRevocationRefs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(139))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CompleteRevocationRefs*
class CORDL_TYPE CompleteRevocationRefs : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field crlOcspRefs, offset 0x10, size 0x8
  __declspec(property(get = __get_crlOcspRefs, put = __set_crlOcspRefs))::Org::BouncyCastle::Asn1::Asn1Sequence* crlOcspRefs;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_crlOcspRefs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_crlOcspRefs() const;

  constexpr void __set_crlOcspRefs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xe909a0 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe90b28 size 0x34c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>*> crlOcspRefs);

  /// @brief Method .ctor addr 0xe90ffc size 0xc4 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>*> crlOcspRefs);

  static inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* New_ctor(::System::Collections::IEnumerable* crlOcspRefs);

  /// @brief Method .ctor addr 0xe910c0 size 0x1a4 virtual false final false
  inline void _ctor(::System::Collections::IEnumerable* crlOcspRefs);

  /// @brief Method GetCrlOcspRefs addr 0xe91264 size 0x120 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*, ::Array<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>*> GetCrlOcspRefs();

  /// @brief Method ToAsn1Object addr 0xe91384 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CompleteRevocationRefs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompleteRevocationRefs(CompleteRevocationRefs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompleteRevocationRefs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompleteRevocationRefs(CompleteRevocationRefs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompleteRevocationRefs();

public:
  /// @brief Field crlOcspRefs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___crlOcspRefs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*, "Org.BouncyCastle.Asn1.Esf", "CompleteRevocationRefs");

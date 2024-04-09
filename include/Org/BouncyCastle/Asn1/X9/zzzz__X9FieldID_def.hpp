#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X9FieldID)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9FieldID);
// Type: Org.BouncyCastle.Asn1.X9::X9FieldID
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X9::X9FieldID*
class CORDL_TYPE X9FieldID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Identifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Identifier;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Asn1::Asn1Object* Parameters;

  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::Org::BouncyCastle::Asn1::DerObjectIdentifier* id;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters))::Org::BouncyCastle::Asn1::Asn1Object* parameters;

  /// @brief Method GetInstance, addr 0x1320600, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* New_ctor(int32_t m, int32_t k1);

  static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3);

  static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* New_ctor(::Org::BouncyCastle::Math::BigInteger* primeP);

  static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x13215d8, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_id();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_id() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __cordl_internal_get_parameters() const;

  constexpr void __cordl_internal_set_id(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method .ctor, addr 0x1320850, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k1);

  /// @brief Method .ctor, addr 0x132085c, size 0x3e4, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3);

  /// @brief Method .ctor, addr 0x13207a0, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* primeP);

  /// @brief Method .ctor, addr 0x132150c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Identifier, addr 0x13215c8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Identifier();

  /// @brief Method get_Parameters, addr 0x13215d0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Parameters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X9FieldID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X9FieldID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X9FieldID(X9FieldID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X9FieldID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X9FieldID(X9FieldID const&) = delete;

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___id;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9FieldID, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9FieldID, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9FieldID, ___parameters) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9FieldID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9FieldID*, "Org.BouncyCastle.Asn1.X9", "X9FieldID");

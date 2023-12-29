#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cast5CbcParameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
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
namespace Org::BouncyCastle::Asn1::Misc {
class Cast5CbcParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters);
// Type: Org.BouncyCastle.Asn1.Misc::Cast5CbcParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(195))
// CS Name: ::Org.BouncyCastle.Asn1.Misc::Cast5CbcParameters*
class CORDL_TYPE Cast5CbcParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field keyLength, offset 0x10, size 0x8
  __declspec(property(get = __get_keyLength, put = __set_keyLength))::Org::BouncyCastle::Asn1::DerInteger* keyLength;

  /// @brief Field iv, offset 0x18, size 0x8
  __declspec(property(get = __get_iv, put = __set_iv))::Org::BouncyCastle::Asn1::Asn1OctetString* iv;

  __declspec(property(get = get_KeyLength)) int32_t KeyLength;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_keyLength();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_keyLength() const;

  constexpr void __set_keyLength(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_iv();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_iv() const;

  constexpr void __set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method GetInstance addr 0xf05af4 size 0x148 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv, int32_t keyLength);

  /// @brief Method .ctor addr 0xf05e04 size 0xb4 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv, int32_t keyLength);

  static inline ::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf05c3c size 0x1c8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetIV addr 0xf05eb8 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetIV();

  /// @brief Method get_KeyLength addr 0xf05f30 size 0x1c virtual false final false
  inline int32_t get_KeyLength();

  /// @brief Method ToAsn1Object addr 0xf05f4c size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Cast5CbcParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cast5CbcParameters(Cast5CbcParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cast5CbcParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cast5CbcParameters(Cast5CbcParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cast5CbcParameters();

public:
  /// @brief Field keyLength, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___keyLength;

  /// @brief Field iv, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___iv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters, ___keyLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters, ___iv) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters*, "Org.BouncyCastle.Asn1.Misc", "Cast5CbcParameters");

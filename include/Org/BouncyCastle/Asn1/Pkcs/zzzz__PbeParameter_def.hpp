#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PbeParameter)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PbeParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter);
// Type: Org.BouncyCastle.Asn1.Pkcs::PbeParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(240))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::PbeParameter*
class CORDL_TYPE PbeParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field salt, offset 0x10, size 0x8
  __declspec(property(get = __get_salt, put = __set_salt))::Org::BouncyCastle::Asn1::Asn1OctetString* salt;

  /// @brief Field iterationCount, offset 0x18, size 0x8
  __declspec(property(get = __get_iterationCount, put = __set_iterationCount))::Org::BouncyCastle::Asn1::DerInteger* iterationCount;

  __declspec(property(get = get_IterationCount))::Org::BouncyCastle::Math::BigInteger* IterationCount;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_salt();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_salt() const;

  constexpr void __set_salt(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_iterationCount();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_iterationCount() const;

  constexpr void __set_iterationCount(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method GetInstance, addr 0xf8956c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xf896f4, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method .ctor, addr 0xf897dc, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  /// @brief Method GetSalt, addr 0xf89890, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSalt();

  /// @brief Method get_IterationCount, addr 0xf898b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_IterationCount();

  /// @brief Method ToAsn1Object, addr 0xf898cc, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PbeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PbeParameter(PbeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PbeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PbeParameter(PbeParameter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PbeParameter();

public:
  /// @brief Field salt, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___salt;

  /// @brief Field iterationCount, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___iterationCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter, ___salt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter, ___iterationCount) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*, "Org.BouncyCastle.Asn1.Pkcs", "PbeParameter");

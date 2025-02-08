#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Null_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerNull)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerNull;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerNull);
// Dependencies Org.BouncyCastle.Asn1.Asn1Null
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerNull
class CORDL_TYPE DerNull : public ::Org::BouncyCastle::Asn1::Asn1Null {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::Org::BouncyCastle::Asn1::DerNull* Instance;

  /// @brief Field zeroBytes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_zeroBytes, put = __cordl_internal_set_zeroBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> zeroBytes;

  /// @brief Method Asn1Equals, addr 0x2633abc, size 0x78, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x2633b34, size 0x8, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Encode, addr 0x2633a98, size 0x24, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  static inline ::Org::BouncyCastle::Asn1::DerNull* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::DerNull* New_ctor(int32_t dummy);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_zeroBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_zeroBytes();

  constexpr void __cordl_internal_set_zeroBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x26339e8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2633a40, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t dummy);

  static inline ::Org::BouncyCastle::Asn1::DerNull* getStaticF_Instance();

  static inline void setStaticF_Instance(::Org::BouncyCastle::Asn1::DerNull* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerNull();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerNull(DerNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerNull(DerNull const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 477 };

  /// @brief Field zeroBytes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___zeroBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerNull, ___zeroBytes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerNull, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerNull);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerNull*, "Org.BouncyCastle.Asn1", "DerNull");

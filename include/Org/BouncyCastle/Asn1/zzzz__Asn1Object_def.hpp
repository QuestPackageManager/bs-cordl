#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Object)
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Object);
// Type: Org.BouncyCastle.Asn1::Asn1Object
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::Asn1Object*
class CORDL_TYPE Asn1Object : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Method Asn1Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method CallAsn1Equals, addr 0x22bd5a0, size 0xc, virtual false, abstract: false, final false
  inline bool CallAsn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* obj);

  /// @brief Method CallAsn1GetHashCode, addr 0x22bd48c, size 0xc, virtual false, abstract: false, final false
  inline int32_t CallAsn1GetHashCode();

  /// @brief Method Encode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromByteArray, addr 0x22c4060, size 0x204, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* FromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method FromStream, addr 0x22c4264, size 0x124, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* FromStream(::System::IO::Stream* inStr);

  static inline ::Org::BouncyCastle::Asn1::Asn1Object* New_ctor();

  /// @brief Method ToAsn1Object, addr 0x22c4388, size 0x4, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method .ctor, addr 0x22c438c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Object();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Object", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Object(Asn1Object&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Object", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Object(Asn1Object const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 31 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Object, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Object);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Object*, "Org.BouncyCastle.Asn1", "Asn1Object");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerOutputStream)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerOutputStream);
// Type: Org.BouncyCastle.Asn1::DerOutputStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(457))
// CS Name: ::Org.BouncyCastle.Asn1::DerOutputStream*
class CORDL_TYPE DerOutputStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::DerOutputStream* New_ctor(::System::IO::Stream* os);

  /// @brief Method .ctor, addr 0x11b7a3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* os);

  /// @brief Method WriteLength, addr 0x11b7a40, size 0xa0, virtual false, abstract: false, final false
  inline void WriteLength(int32_t length);

  /// @brief Method WriteEncoded, addr 0x11b7ae0, size 0x5c, virtual false, abstract: false, final false
  inline void WriteEncoded(int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteEncoded, addr 0x11b7b3c, size 0x7c, virtual false, abstract: false, final false
  inline void WriteEncoded(int32_t tag, uint8_t first, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteEncoded, addr 0x11b7bb8, size 0x64, virtual false, abstract: false, final false
  inline void WriteEncoded(int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method WriteTag, addr 0x11b7c1c, size 0x124, virtual false, abstract: false, final false
  inline void WriteTag(int32_t flags, int32_t tagNo);

  /// @brief Method WriteEncoded, addr 0x11b7d40, size 0x50, virtual false, abstract: false, final false
  inline void WriteEncoded(int32_t flags, int32_t tagNo, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteNull, addr 0x11b7d90, size 0x38, virtual false, abstract: false, final false
  inline void WriteNull();

  /// @brief Method WriteObject, addr 0x11b7dc8, size 0x15c, virtual true, abstract: false, final false
  inline void WriteObject(::System::Object* obj);

  /// @brief Method WriteObject, addr 0x11b7f24, size 0x70, virtual true, abstract: false, final false
  inline void WriteObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method WriteObject, addr 0x11b7f94, size 0x58, virtual true, abstract: false, final false
  inline void WriteObject(::Org::BouncyCastle::Asn1::Asn1Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "DerOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerOutputStream(DerOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerOutputStream(DerOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerOutputStream();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerOutputStream, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerOutputStream*, "Org.BouncyCastle.Asn1", "DerOutputStream");

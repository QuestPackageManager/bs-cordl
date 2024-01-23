#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__LimitedInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndefiniteLengthInputStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IndefiniteLengthInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream);
// Type: Org.BouncyCastle.Asn1::IndefiniteLengthInputStream
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(500))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(523))
// CS Name: ::Org.BouncyCastle.Asn1::IndefiniteLengthInputStream*
class CORDL_TYPE IndefiniteLengthInputStream : public ::Org::BouncyCastle::Asn1::LimitedInputStream {
public:
  // Declarations
  /// @brief Field _lookAhead, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__lookAhead, put = __cordl_internal_set__lookAhead)) int32_t _lookAhead;

  /// @brief Field _eofOn00, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__eofOn00, put = __cordl_internal_set__eofOn00)) bool _eofOn00;

  constexpr int32_t& __cordl_internal_get__lookAhead();

  constexpr int32_t const& __cordl_internal_get__lookAhead() const;

  constexpr void __cordl_internal_set__lookAhead(int32_t value);

  constexpr bool& __cordl_internal_get__eofOn00();

  constexpr bool const& __cordl_internal_get__eofOn00() const;

  constexpr void __cordl_internal_set__eofOn00(bool value);

  static inline ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream* New_ctor(::System::IO::Stream* inStream, int32_t limit);

  /// @brief Method .ctor, addr 0x11b62e8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream, int32_t limit);

  /// @brief Method SetEofOn00, addr 0x11bac48, size 0x14, virtual false, abstract: false, final false
  inline void SetEofOn00(bool eofOn00);

  /// @brief Method CheckForEof, addr 0x11c61a4, size 0xa4, virtual false, abstract: false, final false
  inline bool CheckForEof();

  /// @brief Method Read, addr 0x11c6248, size 0x104, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x11c634c, size 0x48, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method RequireByte, addr 0x11c613c, size 0x68, virtual false, abstract: false, final false
  inline int32_t RequireByte();

  // Ctor Parameters [CppParam { name: "", ty: "IndefiniteLengthInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndefiniteLengthInputStream(IndefiniteLengthInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndefiniteLengthInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndefiniteLengthInputStream(IndefiniteLengthInputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndefiniteLengthInputStream();

public:
  /// @brief Field _lookAhead, offset: 0x3c, size: 0x4, def value: None
  int32_t ____lookAhead;

  /// @brief Field _eofOn00, offset: 0x40, size: 0x1, def value: None
  bool ____eofOn00;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream, ____lookAhead) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream, ____eofOn00) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*, "Org.BouncyCastle.Asn1", "IndefiniteLengthInputStream");

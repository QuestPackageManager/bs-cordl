#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IndefiniteLengthInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__LimitedInputStream_def.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.LimitedInputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.IndefiniteLengthInputStream
class CORDL_TYPE IndefiniteLengthInputStream : public ::Org::BouncyCastle::Asn1::LimitedInputStream {
public:
  // Declarations
  /// @brief Field _eofOn00, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__eofOn00, put = __cordl_internal_set__eofOn00)) bool _eofOn00;

  /// @brief Field _lookAhead, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__lookAhead, put = __cordl_internal_set__lookAhead)) int32_t _lookAhead;

  /// @brief Method CheckForEof, addr 0x263be08, size 0xa0, virtual false, abstract: false, final false
  inline bool CheckForEof();

  static inline ::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream* New_ctor(::System::IO::Stream* inStream, int32_t limit);

  /// @brief Method Read, addr 0x263bea8, size 0xfc, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x263bfa4, size 0x48, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method RequireByte, addr 0x263bda8, size 0x60, virtual false, abstract: false, final false
  inline int32_t RequireByte();

  /// @brief Method SetEofOn00, addr 0x2630bbc, size 0x14, virtual false, abstract: false, final false
  inline void SetEofOn00(bool eofOn00);

  constexpr bool const& __cordl_internal_get__eofOn00() const;

  constexpr bool& __cordl_internal_get__eofOn00();

  constexpr int32_t const& __cordl_internal_get__lookAhead() const;

  constexpr int32_t& __cordl_internal_get__lookAhead();

  constexpr void __cordl_internal_set__eofOn00(bool value);

  constexpr void __cordl_internal_set__lookAhead(int32_t value);

  /// @brief Method .ctor, addr 0x262c364, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream, int32_t limit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndefiniteLengthInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndefiniteLengthInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndefiniteLengthInputStream(IndefiniteLengthInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndefiniteLengthInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndefiniteLengthInputStream(IndefiniteLengthInputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 523 };

  /// @brief Field _lookAhead, offset: 0x3c, size: 0x4, def value: None
  int32_t ____lookAhead;

  /// @brief Field _eofOn00, offset: 0x40, size: 0x1, def value: None
  bool ____eofOn00;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream, ____lookAhead) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream, ____eofOn00) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream*, "Org.BouncyCastle.Asn1", "IndefiniteLengthInputStream");

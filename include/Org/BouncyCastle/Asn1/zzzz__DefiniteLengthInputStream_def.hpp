#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DefiniteLengthInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__LimitedInputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefiniteLengthInputStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DefiniteLengthInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream);
// Dependencies Org.BouncyCastle.Asn1.LimitedInputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DefiniteLengthInputStream
class CORDL_TYPE DefiniteLengthInputStream : public ::Org::BouncyCastle::Asn1::LimitedInputStream {
public:
  // Declarations
  /// @brief Field EmptyBytes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyBytes, put = setStaticF_EmptyBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> EmptyBytes;

  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Field _originalLength, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__originalLength, put = __cordl_internal_set__originalLength)) int32_t _originalLength;

  /// @brief Field _remaining, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__remaining, put = __cordl_internal_set__remaining)) int32_t _remaining;

  static inline ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* New_ctor(::System::IO::Stream* inStream, int32_t length, int32_t limit);

  /// @brief Method Read, addr 0x263755c, size 0x24c, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method ReadAllIntoByteArray, addr 0x262dd48, size 0x390, virtual false, abstract: false, final false
  inline void ReadAllIntoByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method ReadByte, addr 0x2637380, size 0x1dc, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method ToArray, addr 0x262bc24, size 0x398, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToArray();

  constexpr int32_t const& __cordl_internal_get__originalLength() const;

  constexpr int32_t& __cordl_internal_get__originalLength();

  constexpr int32_t const& __cordl_internal_get__remaining() const;

  constexpr int32_t& __cordl_internal_get__remaining();

  constexpr void __cordl_internal_set__originalLength(int32_t value);

  constexpr void __cordl_internal_set__remaining(int32_t value);

  /// @brief Method .ctor, addr 0x262bb60, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream, int32_t length, int32_t limit);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_EmptyBytes();

  /// @brief Method get_Remaining, addr 0x2637378, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Remaining();

  static inline void setStaticF_EmptyBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefiniteLengthInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefiniteLengthInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefiniteLengthInputStream(DefiniteLengthInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefiniteLengthInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefiniteLengthInputStream(DefiniteLengthInputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 501 };

  /// @brief Field _originalLength, offset: 0x3c, size: 0x4, def value: None
  int32_t ____originalLength;

  /// @brief Field _remaining, offset: 0x40, size: 0x4, def value: None
  int32_t ____remaining;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream, ____originalLength) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream, ____remaining) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, "Org.BouncyCastle.Asn1", "DefiniteLengthInputStream");

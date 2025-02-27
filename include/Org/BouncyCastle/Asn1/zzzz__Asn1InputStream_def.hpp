#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1InputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1InputStream)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DefiniteLengthInputStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerSequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerSet;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1InputStream);
// Dependencies Org.BouncyCastle.Utilities.IO.FilterStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1InputStream
class CORDL_TYPE Asn1InputStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
  // Declarations
  __declspec(property(get = get_Limit)) int32_t Limit;

  /// @brief Field limit, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_limit, put = __cordl_internal_set_limit)) int32_t limit;

  /// @brief Field tmpBuffers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_tmpBuffers, put = __cordl_internal_set_tmpBuffers)) ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>
      tmpBuffers;

  /// @brief Method BuildObject, addr 0x262faf0, size 0x470, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* BuildObject(int32_t tag, int32_t tagNo, int32_t length);

  /// @brief Method CreateDerSequence, addr 0x2631478, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSequence* CreateDerSequence(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  /// @brief Method CreateDerSet, addr 0x2631580, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSet* CreateDerSet(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  /// @brief Method CreatePrimitiveDerObject, addr 0x26309c0, size 0x584, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* CreatePrimitiveDerObject(int32_t tagNo, ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn,
                                                                                ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> tmpBuffers);

  /// @brief Method FindLimit, addr 0x262f8a0, size 0x134, virtual false, abstract: false, final false
  static inline int32_t FindLimit(::System::IO::Stream* input);

  /// @brief Method GetBmpCharBuffer, addr 0x26324d8, size 0x308, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> GetBmpCharBuffer(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn);

  /// @brief Method GetBuffer, addr 0x2632084, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn,
                                                               ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> tmpBuffers);

  static inline ::Org::BouncyCastle::Asn1::Asn1InputStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  static inline ::Org::BouncyCastle::Asn1::Asn1InputStream* New_ctor(::System::IO::Stream* inputStream);

  static inline ::Org::BouncyCastle::Asn1::Asn1InputStream* New_ctor(::System::IO::Stream* inputStream, int32_t limit);

  /// @brief Method ReadLength, addr 0x26317bc, size 0x2dc, virtual false, abstract: false, final false
  static inline int32_t ReadLength(::System::IO::Stream* s, int32_t limit, bool isParsing);

  /// @brief Method ReadObject, addr 0x2631034, size 0x444, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadObject();

  /// @brief Method ReadTagNumber, addr 0x263169c, size 0x120, virtual false, abstract: false, final false
  static inline int32_t ReadTagNumber(::System::IO::Stream* s, int32_t tag);

  /// @brief Method ReadVector, addr 0x2630f44, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  constexpr int32_t const& __cordl_internal_get_limit() const;

  constexpr int32_t& __cordl_internal_get_limit();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __cordl_internal_get_tmpBuffers() const;

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __cordl_internal_get_tmpBuffers();

  constexpr void __cordl_internal_set_limit(int32_t value);

  constexpr void __cordl_internal_set_tmpBuffers(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  /// @brief Method .ctor, addr 0x262fa74, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method .ctor, addr 0x262f9d4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x262fa04, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream, int32_t limit);

  /// @brief Method get_Limit, addr 0x263207c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Limit();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1InputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1InputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1InputStream(Asn1InputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1InputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1InputStream(Asn1InputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 453 };

  /// @brief Field limit, offset: 0x30, size: 0x4, def value: None
  int32_t ___limit;

  /// @brief Field tmpBuffers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___tmpBuffers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1InputStream, ___limit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1InputStream, ___tmpBuffers) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1InputStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1InputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1InputStream*, "Org.BouncyCastle.Asn1", "Asn1InputStream");

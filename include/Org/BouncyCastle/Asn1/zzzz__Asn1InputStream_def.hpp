#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1InputStream)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerSequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerSet;
}
namespace Org::BouncyCastle::Asn1 {
class DefiniteLengthInputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1InputStream);
// Type: Org.BouncyCastle.Asn1::Asn1InputStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(453))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1InputStream*
class CORDL_TYPE Asn1InputStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
  // Declarations
  /// @brief Field limit, offset 0x30, size 0x4
  __declspec(property(get = __get_limit, put = __set_limit)) int32_t limit;

  /// @brief Field tmpBuffers, offset 0x38, size 0x8
  __declspec(property(get = __get_tmpBuffers, put = __set_tmpBuffers))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> tmpBuffers;

  __declspec(property(get = get_Limit)) int32_t Limit;

  constexpr int32_t& __get_limit();

  constexpr int32_t const& __get_limit() const;

  constexpr void __set_limit(int32_t value);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __get_tmpBuffers();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get_tmpBuffers() const;

  constexpr void __set_tmpBuffers(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  /// @brief Method FindLimit, addr 0x11b403c, size 0x134, virtual false, abstract: false, final false
  static inline int32_t FindLimit(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::Asn1::Asn1InputStream* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x11b4170, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  static inline ::Org::BouncyCastle::Asn1::Asn1InputStream* New_ctor(::System::IO::Stream* inputStream, int32_t limit);

  /// @brief Method .ctor, addr 0x11b41a0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream, int32_t limit);

  static inline ::Org::BouncyCastle::Asn1::Asn1InputStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method .ctor, addr 0x11b4210, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method BuildObject, addr 0x11b4290, size 0x490, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* BuildObject(int32_t tag, int32_t tagNo, int32_t length);

  /// @brief Method ReadVector, addr 0x11b5764, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  /// @brief Method CreateDerSequence, addr 0x11b5ccc, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSequence* CreateDerSequence(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  /// @brief Method CreateDerSet, addr 0x11b5dd8, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSet* CreateDerSet(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  /// @brief Method ReadObject, addr 0x11b5854, size 0x478, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadObject();

  /// @brief Method get_Limit, addr 0x11b68f8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method ReadTagNumber, addr 0x11b5ef8, size 0x100, virtual false, abstract: false, final false
  static inline int32_t ReadTagNumber(::System::IO::Stream* s, int32_t tag);

  /// @brief Method ReadLength, addr 0x11b5ff8, size 0x2f0, virtual false, abstract: false, final false
  static inline int32_t ReadLength(::System::IO::Stream* s, int32_t limit, bool isParsing);

  /// @brief Method GetBuffer, addr 0x11b6900, size 0xe8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn,
                                                               ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> tmpBuffers);

  /// @brief Method GetBmpCharBuffer, addr 0x11b6d8c, size 0x310, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> GetBmpCharBuffer(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn);

  /// @brief Method CreatePrimitiveDerObject, addr 0x11b51a0, size 0x5c4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* CreatePrimitiveDerObject(int32_t tagNo, ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn,
                                                                                ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> tmpBuffers);

  // Ctor Parameters [CppParam { name: "", ty: "Asn1InputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1InputStream(Asn1InputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1InputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1InputStream(Asn1InputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1InputStream();

public:
  /// @brief Field limit, offset: 0x30, size: 0x4, def value: None
  int32_t ___limit;

  /// @brief Field tmpBuffers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___tmpBuffers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1InputStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1InputStream, ___limit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1InputStream, ___tmpBuffers) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1InputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1InputStream*, "Org.BouncyCastle.Asn1", "Asn1InputStream");

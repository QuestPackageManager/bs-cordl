#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1StreamParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1StreamParser);
// Type: Org.BouncyCastle.Asn1::Asn1StreamParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::Asn1StreamParser*
class CORDL_TYPE Asn1StreamParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _in, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__in, put = __cordl_internal_set__in))::System::IO::Stream* _in;

  /// @brief Field _limit, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit)) int32_t _limit;

  /// @brief Field tmpBuffers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tmpBuffers,
                      put = __cordl_internal_set_tmpBuffers))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> tmpBuffers;

  static inline ::Org::BouncyCastle::Asn1::Asn1StreamParser* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Asn1::Asn1StreamParser* New_ctor(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Asn1::Asn1StreamParser* New_ctor(::System::IO::Stream* inStream, int32_t limit);

  /// @brief Method ReadImplicit, addr 0x13291c8, size 0x2c8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadImplicit(bool constructed, int32_t tag);

  /// @brief Method ReadIndef, addr 0x132903c, size 0x18c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadIndef(int32_t tagValue);

  /// @brief Method ReadObject, addr 0x13296c4, size 0x5dc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();

  /// @brief Method ReadTaggedObject, addr 0x1323ce8, size 0x23c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadTaggedObject(bool constructed, int32_t tag);

  /// @brief Method ReadVector, addr 0x1329508, size 0x128, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector();

  /// @brief Method Set00Check, addr 0x1329ca0, size 0x90, virtual false, abstract: false, final false
  inline void Set00Check(bool enabled);

  constexpr ::System::IO::Stream*& __cordl_internal_get__in();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__in() const;

  constexpr int32_t const& __cordl_internal_get__limit() const;

  constexpr int32_t& __cordl_internal_get__limit();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __cordl_internal_get_tmpBuffers() const;

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __cordl_internal_get_tmpBuffers();

  constexpr void __cordl_internal_set__in(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__limit(int32_t value);

  constexpr void __cordl_internal_set_tmpBuffers(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  /// @brief Method .ctor, addr 0x1328fbc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor, addr 0x1323cb8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream);

  /// @brief Method .ctor, addr 0x1325414, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream, int32_t limit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1StreamParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1StreamParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1StreamParser(Asn1StreamParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1StreamParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1StreamParser(Asn1StreamParser const&) = delete;

  /// @brief Field _in, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ____in;

  /// @brief Field _limit, offset: 0x18, size: 0x4, def value: None
  int32_t ____limit;

  /// @brief Field tmpBuffers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___tmpBuffers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1StreamParser, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1StreamParser, ____in) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1StreamParser, ____limit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1StreamParser, ___tmpBuffers) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1StreamParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1StreamParser*, "Org.BouncyCastle.Asn1", "Asn1StreamParser");

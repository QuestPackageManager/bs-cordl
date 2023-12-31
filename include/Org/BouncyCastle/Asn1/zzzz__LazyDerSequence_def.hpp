#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LazyDerSequence)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class LazyDerSequence;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::LazyDerSequence);
// Type: Org.BouncyCastle.Asn1::LazyDerSequence
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(487))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(525))
// CS Name: ::Org.BouncyCastle.Asn1::LazyDerSequence*
class CORDL_TYPE LazyDerSequence : public ::Org::BouncyCastle::Asn1::DerSequence {
public:
  // Declarations
  /// @brief Field encoded, offset 0x18, size 0x8
  __declspec(property(get = __get_encoded, put = __set_encoded))::ArrayW<uint8_t, ::Array<uint8_t>*> encoded;

  __declspec(property(get = get_Item))::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_encoded();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_encoded() const;

  constexpr void __set_encoded(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Asn1::LazyDerSequence* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method .ctor, addr 0x11c643c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method Parse, addr 0x11c6580, size 0x168, virtual false, abstract: false, final false
  inline void Parse();

  /// @brief Method get_Item, addr 0x11c66e8, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Method GetEnumerator, addr 0x11c6710, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_Count, addr 0x11c6734, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method Encode, addr 0x11c6758, size 0xcc, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  // Ctor Parameters [CppParam { name: "", ty: "LazyDerSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyDerSequence(LazyDerSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyDerSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyDerSequence(LazyDerSequence const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyDerSequence();

public:
  /// @brief Field encoded, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encoded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::LazyDerSequence, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::LazyDerSequence, ___encoded) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LazyDerSequence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LazyDerSequence*, "Org.BouncyCastle.Asn1", "LazyDerSequence");

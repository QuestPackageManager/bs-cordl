#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/LazyDerSequence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.DerSequence
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.LazyDerSequence
class CORDL_TYPE LazyDerSequence : public ::Org::BouncyCastle::Asn1::DerSequence {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  /// @brief Field encoded, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encoded, put = __cordl_internal_set_encoded)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encoded;

  /// @brief Method Encode, addr 0x263d72c, size 0xcc, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetEnumerator, addr 0x263d6e4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Asn1::LazyDerSequence* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method Parse, addr 0x263d544, size 0x178, virtual false, abstract: false, final false
  inline void Parse();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_encoded() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_encoded();

  constexpr void __cordl_internal_set_encoded(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x263d404, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method get_Count, addr 0x263d708, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x263d6bc, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyDerSequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LazyDerSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyDerSequence(LazyDerSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyDerSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyDerSequence(LazyDerSequence const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 525 };

  /// @brief Field encoded, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encoded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::LazyDerSequence, ___encoded) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::LazyDerSequence, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LazyDerSequence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LazyDerSequence*, "Org.BouncyCastle.Asn1", "LazyDerSequence");

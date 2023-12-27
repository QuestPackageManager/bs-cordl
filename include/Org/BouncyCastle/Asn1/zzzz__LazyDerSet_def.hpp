#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerSet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LazyDerSet)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class LazyDerSet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::LazyDerSet);
// Type: Org.BouncyCastle.Asn1::LazyDerSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(491))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(526))
// CS Name: ::Org.BouncyCastle.Asn1::LazyDerSet*
class CORDL_TYPE LazyDerSet : public ::Org::BouncyCastle::Asn1::DerSet {
public:
  // Declarations
  /// @brief Field encoded, offset 0x18, size 0x8
  __declspec(property(get = __get_encoded, put = __set_encoded))::ArrayW<uint8_t, ::Array<uint8_t>*> encoded;

  __declspec(property(get = get_Item))::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_encoded();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_encoded() const;

  constexpr void __set_encoded(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Asn1::LazyDerSet* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method .ctor addr 0x11c6518 size 0x68 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method Parse addr 0x11c6824 size 0x168 virtual false final false
  inline void Parse();

  /// @brief Method get_Item addr 0x11c698c size 0x28 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Method GetEnumerator addr 0x11c69b4 size 0x24 virtual true final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_Count addr 0x11c69d8 size 0x24 virtual true final false
  inline int32_t get_Count();

  /// @brief Method Encode addr 0x11c69fc size 0xcc virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  // Ctor Parameters [CppParam { name: "", ty: "LazyDerSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyDerSet(LazyDerSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyDerSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyDerSet(LazyDerSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyDerSet();

public:
  /// @brief Field encoded, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encoded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::LazyDerSet, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LazyDerSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LazyDerSet*, "Org.BouncyCastle.Asn1", "LazyDerSet");

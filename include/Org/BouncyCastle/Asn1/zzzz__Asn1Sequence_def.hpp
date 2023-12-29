#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Sequence)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class __Asn1Sequence__Asn1SequenceParserImpl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class __Asn1Sequence__Asn1SequenceParserImpl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Sequence);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl);
// Type: ::Asn1SequenceParserImpl
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(460))
// CS Name: ::Asn1Sequence::Asn1SequenceParserImpl*
class CORDL_TYPE __Asn1Sequence__Asn1SequenceParserImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __get_outer, put = __set_outer))::Org::BouncyCastle::Asn1::Asn1Sequence* outer;

  /// @brief Field max, offset 0x18, size 0x4
  __declspec(property(get = __get_max, put = __set_max)) int32_t max;

  /// @brief Field index, offset 0x1c, size 0x4
  __declspec(property(get = __get_index, put = __set_index)) int32_t index;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1SequenceParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1SequenceParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_outer() const;

  constexpr void __set_outer(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr int32_t& __get_max();

  constexpr int32_t const& __get_max() const;

  constexpr void __set_max(int32_t value);

  constexpr int32_t& __get_index();

  constexpr int32_t const& __get_index() const;

  constexpr void __set_index(int32_t value);

  static inline ::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* outer);

  /// @brief Method .ctor addr 0x1147528 size 0x48 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* outer);

  /// @brief Method ReadObject addr 0x1147828 size 0xf8 virtual true final true
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();

  /// @brief Method ToAsn1Object addr 0x1147980 size 0x8 virtual true final true
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "__Asn1Sequence__Asn1SequenceParserImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Asn1Sequence__Asn1SequenceParserImpl(__Asn1Sequence__Asn1SequenceParserImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Asn1Sequence__Asn1SequenceParserImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Asn1Sequence__Asn1SequenceParserImpl(__Asn1Sequence__Asn1SequenceParserImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Asn1Sequence__Asn1SequenceParserImpl();

public:
  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___outer;

  /// @brief Field max, offset: 0x18, size: 0x4, def value: None
  int32_t ___max;

  /// @brief Field index, offset: 0x1c, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl, ___max) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl, ___index) == 0x1c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Type: Org.BouncyCastle.Asn1::Asn1Sequence
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(461))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1Sequence*
class CORDL_TYPE Asn1Sequence : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  using Asn1SequenceParserImpl = ::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl;

  /// @brief Field elements, offset 0x10, size 0x8
  __declspec(property(get = __get_elements, put = __set_elements))::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements;

  __declspec(property(get = get_Parser))::Org::BouncyCastle::Asn1::Asn1SequenceParser* Parser;

  __declspec(property(get = get_Item))::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>& __get_elements();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> const& __get_elements() const;

  constexpr void __set_elements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> value);

  /// @brief Method GetInstance addr 0x113fb5c size 0x398 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0x1146f14 size 0x264 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* New_ctor();

  /// @brief Method .ctor addr 0x11471e0 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor addr 0x114724c size 0xec virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method .ctor addr 0x1147338 size 0xf4 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor addr 0x114742c size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method GetEnumerator addr 0x11474ac size 0x1c virtual true final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_Parser addr 0x11474c8 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1SequenceParser* get_Parser();

  /// @brief Method get_Item addr 0x1147570 size 0x30 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Method get_Count addr 0x11475a0 size 0x1c virtual true final false
  inline int32_t get_Count();

  /// @brief Method ToArray addr 0x11475bc size 0x58 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ToArray();

  /// @brief Method Asn1GetHashCode addr 0x1147614 size 0x94 virtual true final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Asn1Equals addr 0x11476a8 size 0x174 virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method ToString addr 0x114781c size 0xc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Sequence(Asn1Sequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Sequence(Asn1Sequence const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Sequence();

public:
  /// @brief Field elements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ___elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Sequence, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Sequence, ___elements) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Sequence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Sequence*, "Org.BouncyCastle.Asn1", "Asn1Sequence");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::__Asn1Sequence__Asn1SequenceParserImpl*, "Org.BouncyCastle.Asn1", "Asn1Sequence/Asn1SequenceParserImpl");

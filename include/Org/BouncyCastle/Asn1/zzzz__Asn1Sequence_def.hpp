#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Sequence)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence_Asn1SequenceParserImpl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence_Asn1SequenceParserImpl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Sequence);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Sequence_Asn1SequenceParserImpl);
// Dependencies Org.BouncyCastle.Asn1.Asn1SequenceParser, Org.BouncyCastle.Asn1.IAsn1Convertible, System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1Sequence/Asn1SequenceParserImpl
class CORDL_TYPE Asn1Sequence_Asn1SequenceParserImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field index, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field max, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) int32_t max;

  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer)) ::Org::BouncyCastle::Asn1::Asn1Sequence* outer;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1SequenceParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1SequenceParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence_Asn1SequenceParserImpl* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* outer);

  /// @brief Method ReadObject, addr 0x2634188, size 0xf8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();

  /// @brief Method ToAsn1Object, addr 0x26342d8, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr int32_t const& __cordl_internal_get_max() const;

  constexpr int32_t& __cordl_internal_get_max();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_outer() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_max(int32_t value);

  constexpr void __cordl_internal_set_outer(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x2633ea0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* outer);

  /// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1SequenceParser"
  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* i___Org__BouncyCastle__Asn1__Asn1SequenceParser() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Sequence_Asn1SequenceParserImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence_Asn1SequenceParserImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Sequence_Asn1SequenceParserImpl(Asn1Sequence_Asn1SequenceParserImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence_Asn1SequenceParserImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Sequence_Asn1SequenceParserImpl(Asn1Sequence_Asn1SequenceParserImpl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 460 };

  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___outer;

  /// @brief Field max, offset: 0x18, size: 0x4, def value: None
  int32_t ___max;

  /// @brief Field index, offset: 0x1c, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Sequence_Asn1SequenceParserImpl, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Sequence_Asn1SequenceParserImpl, ___max) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Sequence_Asn1SequenceParserImpl, ___index) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Sequence_Asn1SequenceParserImpl, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Dependencies Org.BouncyCastle.Asn1.Asn1Object, System.Collections.IEnumerable
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1Sequence
class CORDL_TYPE Asn1Sequence : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  using Asn1SequenceParserImpl = ::Org::BouncyCastle::Asn1::Asn1Sequence_Asn1SequenceParserImpl;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Parser)) ::Org::BouncyCastle::Asn1::Asn1SequenceParser* Parser;

  /// @brief Field elements, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elements,
                      put = __cordl_internal_set_elements)) ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>
      elements;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Asn1Equals, addr 0x2634010, size 0x16c, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x2633f8c, size 0x84, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method GetEnumerator, addr 0x2633e2c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetInstance, addr 0x26338a8, size 0x25c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x262c65c, size 0x38c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method ToArray, addr 0x2633f34, size 0x58, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ToArray();

  /// @brief Method ToString, addr 0x263417c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> const& __cordl_internal_get_elements() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>& __cordl_internal_get_elements();

  constexpr void __cordl_internal_set_elements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> value);

  /// @brief Method .ctor, addr 0x2633b6c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2633bd8, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor, addr 0x2633db0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor, addr 0x2633cc0, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method get_Count, addr 0x2633f18, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x2633ee8, size 0x30, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Method get_Parser, addr 0x2633e48, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SequenceParser* get_Parser();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Sequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Sequence(Asn1Sequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Sequence(Asn1Sequence const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 461 };

  /// @brief Field elements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ___elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Sequence, ___elements) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Sequence, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Sequence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Sequence*, "Org.BouncyCastle.Asn1", "Asn1Sequence");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Sequence_Asn1SequenceParserImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Sequence_Asn1SequenceParserImpl*, "Org.BouncyCastle.Asn1", "Asn1Sequence/Asn1SequenceParserImpl");

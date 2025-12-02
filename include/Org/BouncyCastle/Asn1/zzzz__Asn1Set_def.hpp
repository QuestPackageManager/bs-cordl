#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1Set.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Set)
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
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set_Asn1SetParserImpl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set_DerComparer;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set_Asn1SetParserImpl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set_DerComparer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Set);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Set_Asn1SetParserImpl);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Set_DerComparer);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1Set/Asn1SetParserImpl
class CORDL_TYPE Asn1Set_Asn1SetParserImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field index, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field max, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) int32_t max;

  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer)) ::Org::BouncyCastle::Asn1::Asn1Set* outer;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1SetParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1SetParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  static inline ::Org::BouncyCastle::Asn1::Asn1Set_Asn1SetParserImpl* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* outer);

  /// @brief Method ReadObject, addr 0x3560f24, size 0x100, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();

  /// @brief Method ToAsn1Object, addr 0x3561024, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr int32_t const& __cordl_internal_get_max() const;

  constexpr int32_t& __cordl_internal_get_max();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_outer() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_max(int32_t value);

  constexpr void __cordl_internal_set_outer(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method .ctor, addr 0x3560bc4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* outer);

  /// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1SetParser"
  constexpr ::Org::BouncyCastle::Asn1::Asn1SetParser* i___Org__BouncyCastle__Asn1__Asn1SetParser() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Set_Asn1SetParserImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Set_Asn1SetParserImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Set_Asn1SetParserImpl(Asn1Set_Asn1SetParserImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Set_Asn1SetParserImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Set_Asn1SetParserImpl(Asn1Set_Asn1SetParserImpl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 463 };

  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___outer;

  /// @brief Field max, offset: 0x18, size: 0x4, def value: None
  int32_t ___max;

  /// @brief Field index, offset: 0x1c, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Set_Asn1SetParserImpl, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Set_Asn1SetParserImpl, ___max) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Set_Asn1SetParserImpl, ___index) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Set_Asn1SetParserImpl, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1Set/DerComparer
class CORDL_TYPE Asn1Set_DerComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x356102c, size 0x184, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* x, ::System::Object* y);

  static inline ::Org::BouncyCastle::Asn1::Asn1Set_DerComparer* New_ctor();

  /// @brief Method .ctor, addr 0x3560f14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Set_DerComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Set_DerComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Set_DerComparer(Asn1Set_DerComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Set_DerComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Set_DerComparer(Asn1Set_DerComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 464 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Set_DerComparer, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Dependencies Org.BouncyCastle.Asn1.Asn1Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1Set
class CORDL_TYPE Asn1Set : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  using Asn1SetParserImpl = ::Org::BouncyCastle::Asn1::Asn1Set_Asn1SetParserImpl;

  using DerComparer = ::Org::BouncyCastle::Asn1::Asn1Set_DerComparer;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Parser)) ::Org::BouncyCastle::Asn1::Asn1SetParser* Parser;

  /// @brief Field elements, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elements,
                      put = __cordl_internal_set_elements)) ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>
      elements;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Asn1Equals, addr 0x3560c84, size 0x164, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x3560bf8, size 0x8c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method GetEnumerator, addr 0x3560b08, size 0x18, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetInstance, addr 0x35602d0, size 0x544, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Set* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x355ff08, size 0x3c8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Set* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Asn1Set* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::Asn1Set* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::Asn1Set* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::Asn1Set* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method Sort, addr 0x3560de8, size 0x12c, virtual false, abstract: false, final false
  inline void Sort();

  /// @brief Method ToArray, addr 0x3560b68, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ToArray();

  /// @brief Method ToString, addr 0x3560f18, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> const& __cordl_internal_get_elements() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>& __cordl_internal_get_elements();

  constexpr void __cordl_internal_set_elements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> value);

  /// @brief Method .ctor, addr 0x356084c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x35608b0, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor, addr 0x3560aa0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor, addr 0x3560998, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method get_Count, addr 0x3560b50, size 0x18, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x3560b20, size 0x30, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Method get_Parser, addr 0x355fe88, size 0x78, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* get_Parser();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Set();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Set", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Set(Asn1Set&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Set", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Set(Asn1Set const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 465 };

  /// @brief Field elements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ___elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Set, ___elements) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Set, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Set);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Set*, "Org.BouncyCastle.Asn1", "Asn1Set");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Set_Asn1SetParserImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Set_Asn1SetParserImpl*, "Org.BouncyCastle.Asn1", "Asn1Set/Asn1SetParserImpl");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Set_DerComparer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Set_DerComparer*, "Org.BouncyCastle.Asn1", "Asn1Set/DerComparer");

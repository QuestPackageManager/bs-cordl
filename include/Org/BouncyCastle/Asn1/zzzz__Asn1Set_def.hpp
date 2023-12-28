#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Set)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class __Asn1Set__Asn1SetParserImpl;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class __Asn1Set__DerComparer;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class __Asn1Set__Asn1SetParserImpl;
}
namespace Org::BouncyCastle::Asn1 {
class __Asn1Set__DerComparer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Set);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::__Asn1Set__Asn1SetParserImpl);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::__Asn1Set__DerComparer);
// Type: ::Asn1SetParserImpl
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(463))
// CS Name: ::Asn1Set::Asn1SetParserImpl*
class CORDL_TYPE __Asn1Set__Asn1SetParserImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __get_outer, put = __set_outer))::Org::BouncyCastle::Asn1::Asn1Set* outer;

  /// @brief Field max, offset 0x18, size 0x4
  __declspec(property(get = __get_max, put = __set_max)) int32_t max;

  /// @brief Field index, offset 0x1c, size 0x4
  __declspec(property(get = __get_index, put = __set_index)) int32_t index;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1SetParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1SetParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_outer() const;

  constexpr void __set_outer(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr int32_t& __get_max();

  constexpr int32_t const& __get_max() const;

  constexpr void __set_max(int32_t value);

  constexpr int32_t& __get_index();

  constexpr int32_t const& __get_index() const;

  constexpr void __set_index(int32_t value);

  static inline ::Org::BouncyCastle::Asn1::__Asn1Set__Asn1SetParserImpl* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* outer);

  /// @brief Method .ctor addr 0x11b988c size 0x44 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* outer);

  /// @brief Method ReadObject addr 0x11b9c54 size 0xf8 virtual true final true
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();

  /// @brief Method ToAsn1Object addr 0x11b9d4c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "__Asn1Set__Asn1SetParserImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Asn1Set__Asn1SetParserImpl(__Asn1Set__Asn1SetParserImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Asn1Set__Asn1SetParserImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Asn1Set__Asn1SetParserImpl(__Asn1Set__Asn1SetParserImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Asn1Set__Asn1SetParserImpl();

public:
  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___outer;

  /// @brief Field max, offset: 0x18, size: 0x4, def value: None
  int32_t ___max;

  /// @brief Field index, offset: 0x1c, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::__Asn1Set__Asn1SetParserImpl, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Type: ::DerComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(464))
// CS Name: ::Asn1Set::DerComparer*
class CORDL_TYPE __Asn1Set__DerComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare addr 0x11b9d54 size 0x180 virtual true final true
  inline int32_t Compare(::System::Object* x, ::System::Object* y);

  static inline ::Org::BouncyCastle::Asn1::__Asn1Set__DerComparer* New_ctor();

  /// @brief Method .ctor addr 0x11b9c40 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Asn1Set__DerComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Asn1Set__DerComparer(__Asn1Set__DerComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Asn1Set__DerComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Asn1Set__DerComparer(__Asn1Set__DerComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Asn1Set__DerComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::__Asn1Set__DerComparer, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Type: Org.BouncyCastle.Asn1::Asn1Set
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(465))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1Set*
class CORDL_TYPE Asn1Set : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  using DerComparer = ::Org::BouncyCastle::Asn1::__Asn1Set__DerComparer;

  using Asn1SetParserImpl = ::Org::BouncyCastle::Asn1::__Asn1Set__Asn1SetParserImpl;

  /// @brief Field elements, offset 0x10, size 0x8
  __declspec(property(get = __get_elements, put = __set_elements))::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements;

  __declspec(property(get = get_Item))::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Parser))::Org::BouncyCastle::Asn1::Asn1SetParser* Parser;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>& __get_elements();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> const& __get_elements() const;

  constexpr void __set_elements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> value);

  /// @brief Method GetInstance addr 0x11b8bd8 size 0x398 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Set* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0x11b8f70 size 0x558 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Set* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  static inline ::Org::BouncyCastle::Asn1::Asn1Set* New_ctor();

  /// @brief Method .ctor addr 0x11b9500 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::Asn1Set* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor addr 0x11b956c size 0xec virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::Asn1Set* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method .ctor addr 0x11b9658 size 0xf4 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  static inline ::Org::BouncyCastle::Asn1::Asn1Set* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor addr 0x11b974c size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method GetEnumerator addr 0x11b97cc size 0x1c virtual true final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_Item addr 0x11b97e8 size 0x30 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Method get_Count addr 0x11b9818 size 0x1c virtual true final false
  inline int32_t get_Count();

  /// @brief Method ToArray addr 0x11b9834 size 0x58 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ToArray();

  /// @brief Method get_Parser addr 0x11b8b70 size 0x60 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* get_Parser();

  /// @brief Method Asn1GetHashCode addr 0x11b98d0 size 0x94 virtual true final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Asn1Equals addr 0x11b9964 size 0x16c virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Sort addr 0x11b9ad0 size 0x170 virtual false final false
  inline void Sort();

  /// @brief Method ToString addr 0x11b9c48 size 0xc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Set", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Set(Asn1Set&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Set", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Set(Asn1Set const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Set();

public:
  /// @brief Field elements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ___elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Set, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Set);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Set*, "Org.BouncyCastle.Asn1", "Asn1Set");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::__Asn1Set__Asn1SetParserImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::__Asn1Set__Asn1SetParserImpl*, "Org.BouncyCastle.Asn1", "Asn1Set/Asn1SetParserImpl");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::__Asn1Set__DerComparer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::__Asn1Set__DerComparer*, "Org.BouncyCastle.Asn1", "Asn1Set/DerComparer");

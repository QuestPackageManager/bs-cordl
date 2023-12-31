#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerTaggedObjectParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerTaggedObjectParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerTaggedObjectParser);
// Type: Org.BouncyCastle.Asn1::BerTaggedObjectParser
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(497))
// CS Name: ::Org.BouncyCastle.Asn1::BerTaggedObjectParser*
class CORDL_TYPE BerTaggedObjectParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _constructed, offset 0x10, size 0x1
  __declspec(property(get = __get__constructed, put = __set__constructed)) bool _constructed;

  /// @brief Field _tagNumber, offset 0x14, size 0x4
  __declspec(property(get = __get__tagNumber, put = __set__tagNumber)) int32_t _tagNumber;

  /// @brief Field _parser, offset 0x18, size 0x8
  __declspec(property(get = __get__parser, put = __set__parser))::Org::BouncyCastle::Asn1::Asn1StreamParser* _parser;

  __declspec(property(get = get_IsConstructed)) bool IsConstructed;

  __declspec(property(get = get_TagNo)) int32_t TagNo;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser"
  constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* i___Org__BouncyCastle__Asn1__Asn1TaggedObjectParser() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

  constexpr bool& __get__constructed();

  constexpr bool const& __get__constructed() const;

  constexpr void __set__constructed(bool value);

  constexpr int32_t& __get__tagNumber();

  constexpr int32_t const& __get__tagNumber() const;

  constexpr void __set__tagNumber(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& __get__parser();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1StreamParser*> const& __get__parser() const;

  constexpr void __set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value);

  static inline ::Org::BouncyCastle::Asn1::BerTaggedObjectParser* New_ctor(int32_t baseTag, int32_t tagNumber, ::System::IO::Stream* contentStream);

  /// @brief Method .ctor, addr 0x11bf820, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t baseTag, int32_t tagNumber, ::System::IO::Stream* contentStream);

  static inline ::Org::BouncyCastle::Asn1::BerTaggedObjectParser* New_ctor(bool constructed, int32_t tagNumber, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

  /// @brief Method .ctor, addr 0x11b64c8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool constructed, int32_t tagNumber, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

  /// @brief Method get_IsConstructed, addr 0x11bf8c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsConstructed();

  /// @brief Method get_TagNo, addr 0x11bf8cc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_TagNo();

  /// @brief Method GetObjectParser, addr 0x11bf8d4, size 0x98, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* GetObjectParser(int32_t tag, bool isExplicit);

  /// @brief Method ToAsn1Object, addr 0x11b6508, size 0xfc, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "BerTaggedObjectParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerTaggedObjectParser(BerTaggedObjectParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerTaggedObjectParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerTaggedObjectParser(BerTaggedObjectParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerTaggedObjectParser();

public:
  /// @brief Field _constructed, offset: 0x10, size: 0x1, def value: None
  bool ____constructed;

  /// @brief Field _tagNumber, offset: 0x14, size: 0x4, def value: None
  int32_t ____tagNumber;

  /// @brief Field _parser, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1StreamParser* ____parser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerTaggedObjectParser, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerTaggedObjectParser, ____constructed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerTaggedObjectParser, ____tagNumber) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerTaggedObjectParser, ____parser) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerTaggedObjectParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerTaggedObjectParser*, "Org.BouncyCastle.Asn1", "BerTaggedObjectParser");

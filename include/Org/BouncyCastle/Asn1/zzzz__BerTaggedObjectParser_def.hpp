#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerTaggedObjectParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObjectParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.Asn1TaggedObjectParser, Org.BouncyCastle.Asn1.IAsn1Convertible, System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerTaggedObjectParser
class CORDL_TYPE BerTaggedObjectParser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsConstructed)) bool IsConstructed;

  __declspec(property(get = get_TagNo)) int32_t TagNo;

  /// @brief Field _constructed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__constructed, put = __cordl_internal_set__constructed)) bool _constructed;

  /// @brief Field _parser, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__parser, put = __cordl_internal_set__parser)) ::Org::BouncyCastle::Asn1::Asn1StreamParser* _parser;

  /// @brief Field _tagNumber, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__tagNumber, put = __cordl_internal_set__tagNumber)) int32_t _tagNumber;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Method GetObjectParser, addr 0x2636b90, size 0x94, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* GetObjectParser(int32_t tag, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::BerTaggedObjectParser* New_ctor(int32_t baseTag, int32_t tagNumber, ::System::IO::Stream* contentStream);

  static inline ::Org::BouncyCastle::Asn1::BerTaggedObjectParser* New_ctor(bool constructed, int32_t tagNumber, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

  /// @brief Method ToAsn1Object, addr 0x262d940, size 0xf4, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr bool const& __cordl_internal_get__constructed() const;

  constexpr bool& __cordl_internal_get__constructed();

  constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser* const& __cordl_internal_get__parser() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& __cordl_internal_get__parser();

  constexpr int32_t const& __cordl_internal_get__tagNumber() const;

  constexpr int32_t& __cordl_internal_get__tagNumber();

  constexpr void __cordl_internal_set__constructed(bool value);

  constexpr void __cordl_internal_set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value);

  constexpr void __cordl_internal_set__tagNumber(int32_t value);

  /// @brief Method .ctor, addr 0x2636ae4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t baseTag, int32_t tagNumber, ::System::IO::Stream* contentStream);

  /// @brief Method .ctor, addr 0x262d900, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool constructed, int32_t tagNumber, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

  /// @brief Method get_IsConstructed, addr 0x2636b80, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsConstructed();

  /// @brief Method get_TagNo, addr 0x2636b88, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_TagNo();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser"
  constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* i___Org__BouncyCastle__Asn1__Asn1TaggedObjectParser() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerTaggedObjectParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerTaggedObjectParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerTaggedObjectParser(BerTaggedObjectParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerTaggedObjectParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerTaggedObjectParser(BerTaggedObjectParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 497 };

  /// @brief Field _constructed, offset: 0x10, size: 0x1, def value: None
  bool ____constructed;

  /// @brief Field _tagNumber, offset: 0x14, size: 0x4, def value: None
  int32_t ____tagNumber;

  /// @brief Field _parser, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1StreamParser* ____parser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::BerTaggedObjectParser, ____constructed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerTaggedObjectParser, ____tagNumber) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerTaggedObjectParser, ____parser) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerTaggedObjectParser, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerTaggedObjectParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerTaggedObjectParser*, "Org.BouncyCastle.Asn1", "BerTaggedObjectParser");

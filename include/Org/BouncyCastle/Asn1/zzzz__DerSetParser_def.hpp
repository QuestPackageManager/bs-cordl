#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerSetParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SetParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DerSetParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSetParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerSetParser);
// Dependencies Org.BouncyCastle.Asn1.Asn1SetParser, Org.BouncyCastle.Asn1.IAsn1Convertible, System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerSetParser
class CORDL_TYPE DerSetParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _parser, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parser, put = __cordl_internal_set__parser)) ::Org::BouncyCastle::Asn1::Asn1StreamParser* _parser;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1SetParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1SetParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  static inline ::Org::BouncyCastle::Asn1::DerSetParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

  /// @brief Method ReadObject, addr 0x263b2dc, size 0x20, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();

  /// @brief Method ToAsn1Object, addr 0x263b2fc, size 0x70, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser* const& __cordl_internal_get__parser() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& __cordl_internal_get__parser();

  constexpr void __cordl_internal_set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value);

  /// @brief Method .ctor, addr 0x26316b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

  /// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1SetParser"
  constexpr ::Org::BouncyCastle::Asn1::Asn1SetParser* i___Org__BouncyCastle__Asn1__Asn1SetParser() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSetParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerSetParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerSetParser(DerSetParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerSetParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerSetParser(DerSetParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 516 };

  /// @brief Field _parser, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1StreamParser* ____parser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerSetParser, ____parser) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerSetParser, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSetParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSetParser*, "Org.BouncyCastle.Asn1", "DerSetParser");

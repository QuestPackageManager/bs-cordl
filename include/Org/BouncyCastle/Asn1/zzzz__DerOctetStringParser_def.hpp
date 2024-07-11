#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerOctetStringParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DerOctetStringParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class DefiniteLengthInputStream;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerOctetStringParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerOctetStringParser);
// Type: Org.BouncyCastle.Asn1::DerOctetStringParser
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerOctetStringParser*
class CORDL_TYPE DerOctetStringParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field stream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream))::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Method GetOctetStream, addr 0x1435a88, size 0x8, virtual true, abstract: false, final true
  inline ::System::IO::Stream* GetOctetStream();

  static inline ::Org::BouncyCastle::Asn1::DerOctetStringParser* New_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream);

  /// @brief Method ToAsn1Object, addr 0x1435a90, size 0x16c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*& __cordl_internal_get_stream();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*> const& __cordl_internal_get_stream() const;

  constexpr void __cordl_internal_set_stream(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* value);

  /// @brief Method .ctor, addr 0x142c76c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream);

  /// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* i___Org__BouncyCastle__Asn1__Asn1OctetStringParser() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerOctetStringParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerOctetStringParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerOctetStringParser(DerOctetStringParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerOctetStringParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerOctetStringParser(DerOctetStringParser const&) = delete;

  /// @brief Field stream, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* ___stream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerOctetStringParser, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerOctetStringParser, ___stream) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerOctetStringParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerOctetStringParser*, "Org.BouncyCastle.Asn1", "DerOctetStringParser");

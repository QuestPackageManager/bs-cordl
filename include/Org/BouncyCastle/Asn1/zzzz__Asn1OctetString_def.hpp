#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1OctetString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1OctetString)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1OctetString);
// Dependencies Org.BouncyCastle.Asn1.Asn1Object, Org.BouncyCastle.Asn1.Asn1OctetStringParser, Org.BouncyCastle.Asn1.IAsn1Convertible
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1OctetString
class CORDL_TYPE Asn1OctetString : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  __declspec(property(get = get_Parser)) ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* Parser;

  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str)) ::ArrayW<uint8_t, ::Array<uint8_t>*> str;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Method Asn1Equals, addr 0x262ec1c, size 0xe0, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x262ebac, size 0x70, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method GetInstance, addr 0x262e8b0, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x2627c6c, size 0x2b0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetInstance(::System::Object* obj);

  /// @brief Method GetOctetStream, addr 0x262eb3c, size 0x64, virtual true, abstract: false, final true
  inline ::System::IO::Stream* GetOctetStream();

  /// @brief Method GetOctets, addr 0x262eba4, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  static inline ::Org::BouncyCastle::Asn1::Asn1OctetString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method ToString, addr 0x262ecfc, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_str() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_str();

  constexpr void __cordl_internal_set_str(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x262eac8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method get_Parser, addr 0x262eba0, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* get_Parser();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* i___Org__BouncyCastle__Asn1__Asn1OctetStringParser() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1OctetString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1OctetString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1OctetString(Asn1OctetString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1OctetString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1OctetString(Asn1OctetString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 456 };

  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1OctetString, ___str) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1OctetString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1OctetString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1OctetString*, "Org.BouncyCastle.Asn1", "Asn1OctetString");

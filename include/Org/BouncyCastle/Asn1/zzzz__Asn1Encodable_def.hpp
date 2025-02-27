#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Encodable)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Encodable);
// Dependencies Org.BouncyCastle.Asn1.IAsn1Convertible, System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1Encodable
class CORDL_TYPE Asn1Encodable : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Method Equals, addr 0x22f6ed4, size 0x108, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetDerEncoded, addr 0x22f6de0, size 0xc0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDerEncoded();

  /// @brief Method GetEncoded, addr 0x22f6c30, size 0xbc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncoded, addr 0x22f6cec, size 0xf4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded(::StringW encoding);

  /// @brief Method GetHashCode, addr 0x22f6ea0, size 0x28, virtual true, abstract: false, final true
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* New_ctor();

  /// @brief Method ToAsn1Object, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method .ctor, addr 0x22f6fe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Encodable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Encodable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Encodable(Asn1Encodable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Encodable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Encodable(Asn1Encodable const&) = delete;

  /// @brief Field Ber offset 0xffffffff size 0x8
  static constexpr ::ConstString Ber{ u"BER" };

  /// @brief Field Der offset 0xffffffff size 0x8
  static constexpr ::ConstString Der{ u"DER" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Encodable, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Encodable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Encodable*, "Org.BouncyCastle.Asn1", "Asn1Encodable");

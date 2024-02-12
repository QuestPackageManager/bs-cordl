#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Encodable)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
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
// Type: Org.BouncyCastle.Asn1::Asn1Encodable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1Encodable*
class CORDL_TYPE Asn1Encodable : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

  /// @brief Method GetEncoded, addr 0xe8e05c, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncoded, addr 0xe8e110, size 0xf4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded(::StringW encoding);

  /// @brief Method GetDerEncoded, addr 0xe8e204, size 0xc0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDerEncoded();

  /// @brief Method GetHashCode, addr 0xe8e2c4, size 0x28, virtual true, abstract: false, final true
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0xe8e2f8, size 0x108, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* obj);

  /// @brief Method ToAsn1Object, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* New_ctor();

  /// @brief Method .ctor, addr 0xe8e40c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Encodable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Encodable(Asn1Encodable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Encodable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Encodable(Asn1Encodable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Encodable();

public:
  /// @brief Field Der offset 0xffffffff size 0x8
  static constexpr ::ConstString Der{ u"DER" };

  /// @brief Field Ber offset 0xffffffff size 0x8
  static constexpr ::ConstString Ber{ u"BER" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Encodable, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Encodable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Encodable*, "Org.BouncyCastle.Asn1", "Asn1Encodable");

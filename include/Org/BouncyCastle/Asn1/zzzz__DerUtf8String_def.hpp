#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerUtf8String.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerUtf8String)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerUtf8String);
// Dependencies Org.BouncyCastle.Asn1.DerStringBase
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerUtf8String
class CORDL_TYPE DerUtf8String : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str)) ::StringW str;

  /// @brief Method Asn1Equals, addr 0x263c86c, size 0x98, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Encode, addr 0x263c904, size 0x50, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetInstance, addr 0x263c6f8, size 0xf8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerUtf8String* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x263c610, size 0xe8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerUtf8String* GetInstance(::System::Object* obj);

  /// @brief Method GetString, addr 0x263c864, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetString();

  static inline ::Org::BouncyCastle::Asn1::DerUtf8String* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::DerUtf8String* New_ctor(::StringW str);

  constexpr ::StringW const& __cordl_internal_get_str() const;

  constexpr ::StringW& __cordl_internal_get_str();

  constexpr void __cordl_internal_set_str(::StringW value);

  /// @brief Method .ctor, addr 0x262e808, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor, addr 0x263c7f0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerUtf8String();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerUtf8String", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerUtf8String(DerUtf8String&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerUtf8String", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerUtf8String(DerUtf8String const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 520 };

  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::StringW ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerUtf8String, ___str) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerUtf8String, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerUtf8String);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerUtf8String*, "Org.BouncyCastle.Asn1", "DerUtf8String");

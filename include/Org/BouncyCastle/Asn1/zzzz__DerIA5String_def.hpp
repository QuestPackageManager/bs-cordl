#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerIA5String.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerIA5String)
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
class DerIA5String;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerIA5String);
// Dependencies Org.BouncyCastle.Asn1.DerStringBase
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerIA5String
class CORDL_TYPE DerIA5String : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str)) ::StringW str;

  /// @brief Method Asn1Equals, addr 0x24031dc, size 0x98, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x24031c0, size 0x1c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Encode, addr 0x240318c, size 0x34, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetInstance, addr 0x2402fc8, size 0x110, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerIA5String* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x23ff0c4, size 0xe8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerIA5String* GetInstance(::System::Object* obj);

  /// @brief Method GetOctets, addr 0x2403180, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method GetString, addr 0x2403178, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method IsIA5String, addr 0x2403108, size 0x70, virtual false, abstract: false, final false
  static inline bool IsIA5String(::StringW str);

  static inline ::Org::BouncyCastle::Asn1::DerIA5String* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::DerIA5String* New_ctor(::StringW str);

  static inline ::Org::BouncyCastle::Asn1::DerIA5String* New_ctor(::StringW str, bool validate);

  constexpr ::StringW const& __cordl_internal_get_str() const;

  constexpr ::StringW& __cordl_internal_get_str();

  constexpr void __cordl_internal_set_str(::StringW value);

  /// @brief Method .ctor, addr 0x24030d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor, addr 0x2403100, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Method .ctor, addr 0x23ff394, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, bool validate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerIA5String();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerIA5String", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerIA5String(DerIA5String&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerIA5String", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerIA5String(DerIA5String const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 199 };

  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::StringW ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerIA5String, ___str) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerIA5String, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerIA5String);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerIA5String*, "Org.BouncyCastle.Asn1", "DerIA5String");

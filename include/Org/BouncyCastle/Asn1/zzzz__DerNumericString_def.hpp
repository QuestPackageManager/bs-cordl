#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerNumericString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerNumericString)
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
class DerNumericString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerNumericString);
// Type: Org.BouncyCastle.Asn1::DerNumericString
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerNumericString*
class CORDL_TYPE DerNumericString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str)) ::StringW str;

  /// @brief Method Asn1Equals, addr 0x25fa0a0, size 0x98, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Encode, addr 0x25fa070, size 0x30, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetInstance, addr 0x25f9db4, size 0x10c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerNumericString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x25f9ccc, size 0xe8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerNumericString* GetInstance(::System::Object* obj);

  /// @brief Method GetOctets, addr 0x25fa064, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method GetString, addr 0x25fa05c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method IsNumericString, addr 0x25f9f98, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsNumericString(::StringW str);

  static inline ::Org::BouncyCastle::Asn1::DerNumericString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::DerNumericString* New_ctor(::StringW str);

  static inline ::Org::BouncyCastle::Asn1::DerNumericString* New_ctor(::StringW str, bool validate);

  constexpr ::StringW const& __cordl_internal_get_str() const;

  constexpr ::StringW& __cordl_internal_get_str();

  constexpr void __cordl_internal_set_str(::StringW value);

  /// @brief Method .ctor, addr 0x25edf78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor, addr 0x25f9f90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Method .ctor, addr 0x25f9ec0, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, bool validate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerNumericString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerNumericString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerNumericString(DerNumericString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerNumericString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerNumericString(DerNumericString const&) = delete;

  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::StringW ___str;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 510 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerNumericString, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerNumericString, ___str) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerNumericString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerNumericString*, "Org.BouncyCastle.Asn1", "DerNumericString");

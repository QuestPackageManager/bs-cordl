#pragma once
// IWYU pragma private; include "Mono\Security\ASN1Convert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ASN1Convert)
namespace Mono::Security {
class ASN1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Mono::Security {
class ASN1Convert;
}
// Write type traits
MARK_REF_T(::Mono::Security::ASN1Convert*);
DEFINE_IL2CPP_CLASS(::Mono::Security::ASN1Convert*, "Mono.Security", "ASN1Convert");
// Dependencies System.Object
namespace Mono::Security {
// Is value type: false
// CS Name: Mono.Security.ASN1Convert
class CORDL_TYPE ASN1Convert : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromInt32, addr 0x5a89e10, size 0x168, virtual false, abstract: false, final false
  static inline ::Mono::Security::ASN1* FromInt32(int32_t value);

  /// @brief Method FromOid, addr 0x5a89f90, size 0xe4, virtual false, abstract: false, final false
  static inline ::Mono::Security::ASN1* FromOid(::StringW oid);

  /// @brief Method FromUnsignedBigInteger, addr 0x5a8a074, size 0x100, virtual false, abstract: false, final false
  static inline ::Mono::Security::ASN1* FromUnsignedBigInteger(::ArrayW<uint8_t> big);

  /// @brief Method ToDateTime, addr 0x5a8a4d0, size 0x5b4, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::Mono::Security::ASN1* time);

  /// @brief Method ToInt32, addr 0x5a8a174, size 0x104, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::Mono::Security::ASN1* asn1);

  /// @brief Method ToOid, addr 0x5a8a278, size 0x258, virtual false, abstract: false, final false
  static inline ::StringW ToOid(::Mono::Security::ASN1* asn1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ASN1Convert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ASN1Convert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ASN1Convert(ASN1Convert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ASN1Convert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ASN1Convert(ASN1Convert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19275 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::ASN1Convert) == 0x10, "Size mismatch!");

} // namespace Mono::Security

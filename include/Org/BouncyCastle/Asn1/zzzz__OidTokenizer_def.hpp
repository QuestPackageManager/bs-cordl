#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/OidTokenizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OidTokenizer)
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class OidTokenizer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::OidTokenizer);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.OidTokenizer
class CORDL_TYPE OidTokenizer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasMoreTokens)) bool HasMoreTokens;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field oid, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_oid, put = __cordl_internal_set_oid)) ::StringW oid;

  static inline ::Org::BouncyCastle::Asn1::OidTokenizer* New_ctor(::StringW oid);

  /// @brief Method NextToken, addr 0x3598108, size 0x90, virtual false, abstract: false, final false
  inline ::StringW NextToken();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::StringW const& __cordl_internal_get_oid() const;

  constexpr ::StringW& __cordl_internal_get_oid();

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_oid(::StringW value);

  /// @brief Method .ctor, addr 0x35980f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid);

  /// @brief Method get_HasMoreTokens, addr 0x35980f8, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasMoreTokens();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OidTokenizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OidTokenizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OidTokenizer(OidTokenizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OidTokenizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OidTokenizer(OidTokenizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 527 };

  /// @brief Field oid, offset: 0x10, size: 0x8, def value: None
  ::StringW ___oid;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::OidTokenizer, ___oid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::OidTokenizer, ___index) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::OidTokenizer, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::OidTokenizer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::OidTokenizer*, "Org.BouncyCastle.Asn1", "OidTokenizer");

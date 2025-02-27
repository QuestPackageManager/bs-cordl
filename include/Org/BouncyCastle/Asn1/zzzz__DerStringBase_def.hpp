#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerStringBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1String_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerStringBase)
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerStringBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerStringBase);
// Dependencies Org.BouncyCastle.Asn1.Asn1Object, Org.BouncyCastle.Asn1.IAsn1String
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerStringBase
class CORDL_TYPE DerStringBase : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1String"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1String*() noexcept;

  /// @brief Method Asn1GetHashCode, addr 0x22fdde4, size 0x24, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method GetString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetString();

  static inline ::Org::BouncyCastle::Asn1::DerStringBase* New_ctor();

  /// @brief Method ToString, addr 0x22fddd8, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x22fddd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1String"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1String* i___Org__BouncyCastle__Asn1__IAsn1String() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerStringBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerStringBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerStringBase(DerStringBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerStringBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerStringBase(DerStringBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 33 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerStringBase, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerStringBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerStringBase*, "Org.BouncyCastle.Asn1", "DerStringBase");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerStringBase)
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerStringBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerStringBase);
// Type: Org.BouncyCastle.Asn1::DerStringBase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerStringBase*
class CORDL_TYPE DerStringBase : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1String"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1String*() noexcept;

  /// @brief Method Asn1GetHashCode, addr 0xedc458, size 0x24, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method GetString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetString();

  static inline ::Org::BouncyCastle::Asn1::DerStringBase* New_ctor();

  /// @brief Method ToString, addr 0xedc44c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0xedc444, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerStringBase, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerStringBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerStringBase*, "Org.BouncyCastle.Asn1", "DerStringBase");

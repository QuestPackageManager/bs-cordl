#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/X9ECParametersHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X9ECParametersHolder)
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParametersHolder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
class CORDL_TYPE X9ECParametersHolder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Parameters)) ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Parameters;

  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::Org::BouncyCastle::Asn1::X9::X9ECParameters* parameters;

  /// @brief Method CreateParameters, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* New_ctor();

  constexpr ::Org::BouncyCastle::Asn1::X9::X9ECParameters* const& __cordl_internal_get_parameters() const;

  constexpr ::Org::BouncyCastle::Asn1::X9::X9ECParameters*& __cordl_internal_get_parameters();

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Asn1::X9::X9ECParameters* value);

  /// @brief Method .ctor, addr 0x22f0b74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Parameters, addr 0x22f08a4, size 0xb8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* get_Parameters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X9ECParametersHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X9ECParametersHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X9ECParametersHolder(X9ECParametersHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X9ECParametersHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X9ECParametersHolder(X9ECParametersHolder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3 };

  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X9::X9ECParameters* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder, ___parameters) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Org.BouncyCastle.Asn1.X9", "X9ECParametersHolder");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(IPasswordFinder)
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class IPasswordFinder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::IPasswordFinder);
// Type: Org.BouncyCastle.OpenSsl::IPasswordFinder
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1680))
// CS Name: ::Org.BouncyCastle.OpenSsl::IPasswordFinder*
class CORDL_TYPE IPasswordFinder {
public:
  // Declarations
  /// @brief Method GetPassword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetPassword();

  // Ctor Parameters [CppParam { name: "", ty: "IPasswordFinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPasswordFinder(IPasswordFinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPasswordFinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPasswordFinder(IPasswordFinder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::IPasswordFinder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::IPasswordFinder*, "Org.BouncyCastle.OpenSsl", "IPasswordFinder");

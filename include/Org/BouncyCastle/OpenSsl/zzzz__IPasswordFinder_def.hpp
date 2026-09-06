#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/IPasswordFinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IPasswordFinder)
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class IPasswordFinder;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::OpenSsl::IPasswordFinder*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::OpenSsl::IPasswordFinder*, "Org.BouncyCastle.OpenSsl", "IPasswordFinder");
// Dependencies
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// CS Name: Org.BouncyCastle.OpenSsl.IPasswordFinder
class CORDL_TYPE IPasswordFinder {
public:
  // Declarations
  /// @brief Method GetPassword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<char16_t> GetPassword();

  // Ctor Parameters [CppParam { name: "", ty: "IPasswordFinder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPasswordFinder(IPasswordFinderconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::OpenSsl

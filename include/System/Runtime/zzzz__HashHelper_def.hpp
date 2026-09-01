#pragma once
// IWYU pragma private; include "System\Runtime\HashHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashHelper)
// Forward declare root types
namespace System::Runtime {
class HashHelper;
}
// Write type traits
MARK_REF_T(::System::Runtime::HashHelper*);
DEFINE_IL2CPP_CLASS(::System::Runtime::HashHelper*, "System.Runtime", "HashHelper");
// Dependencies System.Object
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.HashHelper
class CORDL_TYPE HashHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ComputeHash, addr 0x6187480, size 0x548, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ComputeHash(::ArrayW<uint8_t> buffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashHelper(HashHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashHelper(HashHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21306 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::HashHelper) == 0x10, "Size mismatch!");

} // namespace System::Runtime

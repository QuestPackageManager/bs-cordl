#pragma once
// IWYU pragma private; include "UnityEngine/HashUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HashUtilities)
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine {
class HashUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HashUtilities);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.HashUtilities
class CORDL_TYPE HashUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendHash, addr 0x68fd5d8, size 0xc, virtual false, abstract: false, final false
  static inline void AppendHash(::ByRef<::UnityEngine::Hash128> inHash, ::ByRef<::UnityEngine::Hash128> outHash);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashUtilities(HashUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashUtilities(HashUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10214 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HashUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HashUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HashUtilities*, "UnityEngine", "HashUtilities");

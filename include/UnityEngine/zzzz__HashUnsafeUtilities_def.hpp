#pragma once
// IWYU pragma private; include "UnityEngine/HashUnsafeUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashUnsafeUtilities)
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine {
class HashUnsafeUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HashUnsafeUtilities);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.HashUnsafeUtilities
class CORDL_TYPE HashUnsafeUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method ComputeHash128, addr 0x489aad8, size 0x40, virtual false, abstract: false, final false
  static inline void ComputeHash128(::cordl_internals::Ptr<void> data, uint64_t dataSize, ::cordl_internals::Ptr<::UnityEngine::Hash128> hash);

  /// @brief Method ComputeHash128, addr 0x489a754, size 0x7c, virtual false, abstract: false, final false
  static inline void ComputeHash128(::cordl_internals::Ptr<void> data, uint64_t dataSize, ::cordl_internals::Ptr<uint64_t> hash1, ::cordl_internals::Ptr<uint64_t> hash2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashUnsafeUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashUnsafeUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashUnsafeUtilities(HashUnsafeUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashUnsafeUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashUnsafeUtilities(HashUnsafeUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10802 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HashUnsafeUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HashUnsafeUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HashUnsafeUtilities*, "UnityEngine", "HashUnsafeUtilities");

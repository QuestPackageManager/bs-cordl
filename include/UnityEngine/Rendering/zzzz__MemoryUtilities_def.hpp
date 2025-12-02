#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MemoryUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryUtilities)
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class MemoryUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::MemoryUtilities);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.MemoryUtilities
class CORDL_TYPE MemoryUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Free(T* p, ::Unity::Collections::Allocator allocator);

  /// @brief Method Malloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* Malloc(int32_t count, ::Unity::Collections::Allocator allocator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryUtilities(MemoryUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryUtilities(MemoryUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17752 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MemoryUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::MemoryUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MemoryUtilities*, "UnityEngine.Rendering", "MemoryUtilities");

#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/Common.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Common)
// Forward declare root types
namespace Unity::Burst::Intrinsics {
class Common;
}
// Write type traits
MARK_REF_T(::Unity::Burst::Intrinsics::Common*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::Common*, "Unity.Burst.Intrinsics", "Common");
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.Common
class CORDL_TYPE Common : public ::System::Object {
public:
  // Declarations
  /// @brief Method Pause, addr 0x648e038, size 0x4, virtual false, abstract: false, final false
  static inline void Pause();

  /// @brief Method umul128, addr 0x648e03c, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t umul128(uint64_t x, uint64_t y, ::by_ref<uint64_t> high);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Common();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Common(Common&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Common(Common const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::Common) == 0x10, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics

#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeAtomicCounter32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeAtomicCounter32)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAtomicCounter32;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32
struct CORDL_TYPE UnsafeAtomicCounter32 {
public:
  // Declarations
  /// @brief Method Add, addr 0x62af9e0, size 0x5c, virtual false, abstract: false, final false
  inline int32_t Add(int32_t value);

  /// @brief Method AddSat, addr 0x62afa98, size 0x90, virtual false, abstract: false, final false
  inline int32_t AddSat(int32_t value, int32_t max);

  /// @brief Method Reset, addr 0x62af9d4, size 0xc, virtual false, abstract: false, final false
  inline void Reset(int32_t value);

  /// @brief Method Sub, addr 0x62afa3c, size 0x5c, virtual false, abstract: false, final false
  inline int32_t Sub(int32_t value);

  /// @brief Method SubSat, addr 0x62afb28, size 0x90, virtual false, abstract: false, final false
  inline int32_t SubSat(int32_t value, int32_t min);

  /// @brief Method .ctor, addr 0x62af9cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* ptr);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeAtomicCounter32();

  // Ctor Parameters [CppParam { name: "Counter", ty: "int32_t*", modifiers: "", def_value: None }]
  constexpr UnsafeAtomicCounter32(int32_t* Counter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15713 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Counter, offset: 0x0, size: 0x8, def value: None
  int32_t* Counter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32, Counter) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32, 0x8>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32, "Unity.Collections.LowLevel.Unsafe", "UnsafeAtomicCounter32");

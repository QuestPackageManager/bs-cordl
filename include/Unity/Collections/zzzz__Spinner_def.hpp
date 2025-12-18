#pragma once
// IWYU pragma private; include "Unity/Collections/Spinner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Spinner)
// Forward declare root types
namespace Unity::Collections {
struct Spinner;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Spinner);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Spinner
struct CORDL_TYPE Spinner {
public:
  // Declarations
  /// @brief Method Acquire, addr 0x62f14b8, size 0x40, virtual false, abstract: false, final false
  inline void Acquire();

  /// @brief Method Release, addr 0x62f15d8, size 0xc, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method TryAcquire, addr 0x62f14f8, size 0x3c, virtual false, abstract: false, final false
  inline bool TryAcquire();

  /// @brief Method TryAcquire, addr 0x62f1534, size 0xa4, virtual false, abstract: false, final false
  inline bool TryAcquire(bool spin);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Spinner();

  // Ctor Parameters [CppParam { name: "m_Lock", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Spinner(int32_t m_Lock) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15490 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Lock, offset: 0x0, size: 0x4, def value: None
  int32_t m_Lock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::Spinner, m_Lock) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::Spinner, 0x4>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Spinner, "Unity.Collections", "Spinner");

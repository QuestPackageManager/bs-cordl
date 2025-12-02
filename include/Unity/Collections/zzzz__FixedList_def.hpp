#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedList)
// Forward declare root types
namespace Unity::Collections {
struct FixedList;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::FixedList);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedList
#pragma pack(push, 0)
struct CORDL_TYPE FixedList {
public:
  // Declarations
  /// @brief Method Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename BUFFER, typename T> static inline int32_t Capacity();

  /// @brief Method CheckResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename BUFFER, typename T> static inline void CheckResize(int32_t newLength);

  /// @brief Method PaddingBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t PaddingBytes();

  /// @brief Method StorageBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename BUFFER, typename T> static inline int32_t StorageBytes();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedList();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15528 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedList, 0x1>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedList, "Unity.Collections", "FixedList");

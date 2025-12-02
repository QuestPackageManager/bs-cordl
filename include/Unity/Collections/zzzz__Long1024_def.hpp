#pragma once
// IWYU pragma private; include "Unity/Collections/Long1024.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Long512_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Long1024)
namespace Unity::Collections {
template <typename T> class IIndexable_1;
}
// Forward declare root types
namespace Unity::Collections {
struct Long1024;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Long1024);
// Dependencies Unity.Collections.Long512
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Long1024
struct CORDL_TYPE Long1024 {
public:
  // Declarations
  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  /// @brief Convert operator to "::Unity::Collections::IIndexable_1<int64_t>"
  constexpr operator ::Unity::Collections::IIndexable_1<int64_t>*();

  /// @brief Method ElementAt, addr 0x628ac20, size 0x50, virtual true, abstract: false, final true
  inline ::ByRef<int64_t> ElementAt(int32_t index);

  /// @brief Method get_Length, addr 0x628e354, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Convert to "::Unity::Collections::IIndexable_1<int64_t>"
  constexpr ::Unity::Collections::IIndexable_1<int64_t>* i___Unity__Collections__IIndexable_1_int64_t_();

  /// @brief Method set_Length, addr 0x628e35c, size 0x4, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Long1024();

  // Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::Long512", modifiers: "", def_value: None }, CppParam { name: "f1", ty: "::Unity::Collections::Long512", modifiers: "",
  // def_value: None }]
  constexpr Long1024(::Unity::Collections::Long512 f0, ::Unity::Collections::Long512 f1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15518 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2000 };

  /// @brief Field f0, offset: 0x0, size: 0x1000, def value: None
  ::Unity::Collections::Long512 f0;

  /// @brief Field f1, offset: 0x1000, size: 0x1000, def value: None
  ::Unity::Collections::Long512 f1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::Long1024, f0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::Long1024, f1) == 0x1000, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::Long1024, 0x2000>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Long1024, "Unity.Collections", "Long1024");

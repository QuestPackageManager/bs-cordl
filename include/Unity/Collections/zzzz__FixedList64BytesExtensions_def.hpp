#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList64BytesExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedList64BytesExtensions)
namespace Unity::Collections {
template <typename T> struct FixedList64Bytes_1;
}
// Forward declare root types
namespace Unity::Collections {
class FixedList64BytesExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::FixedList64BytesExtensions);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedList64BytesExtensions
class CORDL_TYPE FixedList64BytesExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Contains(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> list, U value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t IndexOf(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> list, U value);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Remove(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> list, U value);

  /// @brief Method RemoveSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool RemoveSwapBack(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> list, U value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedList64BytesExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedList64BytesExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedList64BytesExtensions(FixedList64BytesExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedList64BytesExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedList64BytesExtensions(FixedList64BytesExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15549 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedList64BytesExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::FixedList64BytesExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedList64BytesExtensions*, "Unity.Collections", "FixedList64BytesExtensions");

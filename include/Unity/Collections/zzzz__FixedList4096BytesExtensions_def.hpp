#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList4096BytesExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedList4096BytesExtensions)
namespace Unity::Collections {
template <typename T> struct FixedList4096Bytes_1;
}
// Forward declare root types
namespace Unity::Collections {
class FixedList4096BytesExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::FixedList4096BytesExtensions);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedList4096BytesExtensions
class CORDL_TYPE FixedList4096BytesExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Contains(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> list, U value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t IndexOf(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> list, U value);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Remove(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> list, U value);

  /// @brief Method RemoveSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool RemoveSwapBack(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> list, U value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedList4096BytesExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedList4096BytesExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedList4096BytesExtensions(FixedList4096BytesExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedList4096BytesExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedList4096BytesExtensions(FixedList4096BytesExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15547 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedList4096BytesExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::FixedList4096BytesExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedList4096BytesExtensions*, "Unity.Collections", "FixedList4096BytesExtensions");

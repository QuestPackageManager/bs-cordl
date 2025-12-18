#pragma once
// IWYU pragma private; include "Unity/Collections/FixedListExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FixedListExtensions)
namespace Unity::Collections {
template <typename T> struct FixedList128Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList32Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList4096Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList512Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList64Bytes_1;
}
// Forward declare root types
namespace Unity::Collections {
class FixedListExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::FixedListExtensions);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedListExtensions
class CORDL_TYPE FixedListExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> list);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> list, U comp);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> list);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> list, U comp);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> list);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> list, U comp);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> list);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> list, U comp);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> list);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> list, U comp);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedListExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedListExtensions(FixedListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedListExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedListExtensions(FixedListExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15563 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedListExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::FixedListExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedListExtensions*, "Unity.Collections", "FixedListExtensions");

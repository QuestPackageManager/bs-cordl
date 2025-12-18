#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeListExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeListExtensions)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_ParallelReader;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_ReadOnly;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeListExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeListExtensions
class CORDL_TYPE UnsafeListExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ArraysEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ArraysEqual(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> container, ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>> other);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Contains(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U value);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Contains(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T> list, U value);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Contains(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T> list, U value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t IndexOf(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t IndexOf(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T> list, U value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t IndexOf(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T> list, U value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeListExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeListExtensions(UnsafeListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeListExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeListExtensions(UnsafeListExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15749 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*, "Unity.Collections.LowLevel.Unsafe", "UnsafeListExtensions");

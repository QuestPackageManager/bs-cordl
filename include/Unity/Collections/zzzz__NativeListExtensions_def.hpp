#pragma once
// IWYU pragma private; include "Unity/Collections/NativeListExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeListExtensions)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
// Forward declare root types
namespace Unity::Collections {
class NativeListExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeListExtensions);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeListExtensions
class CORDL_TYPE NativeListExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ArraysEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ArraysEqual(::Unity::Collections::NativeArray_1<T> container, ::ByRef<::Unity::Collections::NativeList_1<T>> other);

  /// @brief Method ArraysEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ArraysEqual(::Unity::Collections::NativeList_1<T> container, ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>> other);

  /// @brief Method ArraysEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ArraysEqual(::Unity::Collections::NativeList_1<T> container, ::ByRef<::Unity::Collections::NativeArray_1<T>> other);

  /// @brief Method ArraysEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ArraysEqual(::Unity::Collections::NativeList_1<T> container, ::ByRef<::Unity::Collections::NativeList_1<T>> other);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Contains(::Unity::Collections::NativeList_1<T> list, U value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t IndexOf(::Unity::Collections::NativeList_1<T> list, U value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeListExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeListExtensions(NativeListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeListExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeListExtensions(NativeListExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15624 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeListExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeListExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeListExtensions*, "Unity.Collections", "NativeListExtensions");

#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArrayExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayExtensions)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeHashSet_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename T> struct NativeArrayExtensions_NativeArrayStaticId_1;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeHashSet_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
// Forward declare root types
namespace Unity::Collections {
class NativeArrayExtensions;
}
namespace Unity::Collections {
template <typename T> struct NativeArrayExtensions_NativeArrayStaticId_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeArrayExtensions);
MARK_GEN_VAL_T(::Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1);
// Dependencies Unity.Burst.SharedStatic`1<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeArrayExtensions/NativeArrayStaticId`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE NativeArrayExtensions_NativeArrayStaticId_1 {
public:
  // Declarations
  /// @brief Field s_staticSafetyId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_staticSafetyId, put = setStaticF_s_staticSafetyId)) ::Unity::Burst::SharedStatic_1<int32_t> s_staticSafetyId;

  static inline ::Unity::Burst::SharedStatic_1<int32_t> getStaticF_s_staticSafetyId();

  static inline void setStaticF_s_staticSafetyId(::Unity::Burst::SharedStatic_1<int32_t> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayExtensions_NativeArrayStaticId_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeArrayExtensions
class CORDL_TYPE NativeArrayExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using NativeArrayStaticId_1 = ::Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1<T>;

  /// @brief Method ArraysEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ArraysEqual(::Unity::Collections::NativeArray_1<T> container, ::Unity::Collections::NativeArray_1<T> other);

  /// @brief Method CheckReinterpretSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void CheckReinterpretSize(::ByRef<::Unity::Collections::NativeArray_1<T>> array);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Contains(::Unity::Collections::NativeArray_1<T> array, U value);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Contains(::Unity::Collections::NativeArray_1_ReadOnly<T> array, U value);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline bool Contains(void* ptr, int32_t length, U value);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyFrom(::ByRef<::Unity::Collections::NativeArray_1<T>> container, ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> other);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyFrom(::ByRef<::Unity::Collections::NativeArray_1<T>> container, ::ByRef<::Unity::Collections::NativeHashSet_1<T>> other);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyFrom(::ByRef<::Unity::Collections::NativeArray_1<T>> container, ::Unity::Collections::NativeList_1<T> other);

  /// @brief Method DisposeCheckAllocator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DisposeCheckAllocator(::ByRef<::Unity::Collections::NativeArray_1<T>> array);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t IndexOf(::Unity::Collections::NativeArray_1<T> array, U value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t IndexOf(::Unity::Collections::NativeArray_1_ReadOnly<T> array, U value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t IndexOf(void* ptr, int32_t length, U value);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
  static inline void Initialize(::ByRef<::Unity::Collections::NativeArray_1<T>> array, int32_t length, ::ByRef<U> allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void Initialize(::ByRef<::Unity::Collections::NativeArray_1<T>> array, int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method Reinterpret, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::NativeArray_1<U> Reinterpret(::Unity::Collections::NativeArray_1<T> array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeArrayExtensions(NativeArrayExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeArrayExtensions(NativeArrayExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15587 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeArrayExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeArrayExtensions*, "Unity.Collections", "NativeArrayExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1, "Unity.Collections", "NativeArrayExtensions/NativeArrayStaticId`1");

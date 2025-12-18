#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeUtility)
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeUtility_AlignOfHelper_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeUtility_TypeFlagsCache_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct LeakCategory;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeUtility;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeUtility_AlignOfHelper_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeUtility_TypeFlagsCache_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_AlignOfHelper_1);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_TypeFlagsCache_1);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtility/TypeFlagsCache`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE UnsafeUtility_TypeFlagsCache_1 {
public:
  // Declarations
  /// @brief Field flags, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_flags, put = setStaticF_flags)) int32_t flags;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Init(::ByRef<int32_t> flags);

  static inline int32_t getStaticF_flags();

  static inline void setStaticF_flags(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeUtility_TypeFlagsCache_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10002 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<T>
struct CORDL_TYPE UnsafeUtility_AlignOfHelper_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeUtility_AlignOfHelper_1();

  // Ctor Parameters [CppParam { name: "dummy", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "T", modifiers: "", def_value: None }]
  constexpr UnsafeUtility_AlignOfHelper_1(uint8_t dummy, T data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10003 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field dummy, offset: 0x0, size: 0x1, def value: None
  uint8_t dummy;

  /// @brief Field data, offset: 0x8, size: 0x8, def value: None
  T data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
class CORDL_TYPE UnsafeUtility : public ::System::Object {
public:
  // Declarations
  template <typename T> using AlignOfHelper_1 = ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_AlignOfHelper_1<T>;

  template <typename T> using TypeFlagsCache_1 = ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_TypeFlagsCache_1<T>;

  /// @brief Method AddressOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void* AddressOf(::ByRef<T> output);

  /// @brief Method AlignOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t AlignOf();

  /// @brief Method ArrayElementAsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ByRef<T> ArrayElementAsRef(void* ptr, int32_t index);

  /// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U, typename T> static inline ::ByRef<T> As(::ByRef<U> from);

  /// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T As(::System::Object* from);

  /// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ByRef<T> AsRef(void* ptr);

  /// @brief Method CopyPtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyPtrToStructure(void* ptr, ::ByRef<T> output);

  /// @brief Method CopyStructureToPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyStructureToPtr(::ByRef<T> input, void* ptr);

  /// @brief Method EnumEquals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool EnumEquals(T lhs, T rhs);

  /// @brief Method EnumToInt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t EnumToInt(T enumValue);

  /// @brief Method Free, addr 0x68931bc, size 0x44, virtual false, abstract: false, final false
  static inline void Free(void* memory, ::Unity::Collections::Allocator allocator);

  /// @brief Method FreeTracked, addr 0x6892e6c, size 0x44, virtual false, abstract: false, final false
  static inline void FreeTracked(void* memory, ::Unity::Collections::Allocator allocator);

  /// @brief Method GetReasonForArrayNonBlittable, addr 0x6893794, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetReasonForArrayNonBlittable(::System::Array* arr);

  /// @brief Method GetReasonForGenericListNonBlittable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW GetReasonForGenericListNonBlittable();

  /// @brief Method GetReasonForTypeNonBlittableImpl, addr 0x6893530, size 0x230, virtual false, abstract: false, final false
  static inline ::StringW GetReasonForTypeNonBlittableImpl(::System::Type* t, ::StringW name);

  /// @brief Method GetScriptingTypeFlags, addr 0x689348c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetScriptingTypeFlags(::System::Type* type);

  /// @brief Method InternalCopyPtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InternalCopyPtrToStructure(void* ptr, ::ByRef<T> output);

  /// @brief Method InternalCopyStructureToPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InternalCopyStructureToPtr(::ByRef<T> input, void* ptr);

  /// @brief Method InternalEnumToInt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InternalEnumToInt(::ByRef<T> enumValue, ::ByRef<int32_t> intValue);

  /// @brief Method IsArrayBlittable, addr 0x6893760, size 0x34, virtual false, abstract: false, final false
  static inline bool IsArrayBlittable(::System::Array* arr);

  /// @brief Method IsBlittable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsBlittable();

  /// @brief Method IsBlittable, addr 0x6893450, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsBlittable(::System::Type* type);

  /// @brief Method IsBlittableValueType, addr 0x68934c8, size 0x68, virtual false, abstract: false, final false
  static inline bool IsBlittableValueType(::System::Type* t);

  /// @brief Method IsGenericListBlittable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsGenericListBlittable();

  /// @brief Method IsUnmanaged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsUnmanaged();

  /// @brief Method LeakErase, addr 0x68930c8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t LeakErase(::System::IntPtr handle, ::Unity::Collections::LeakCategory category);

  /// @brief Method LeakRecord, addr 0x6893074, size 0x54, virtual false, abstract: false, final false
  static inline int32_t LeakRecord(::System::IntPtr handle, ::Unity::Collections::LeakCategory category, int32_t callstacksToSkip);

  /// @brief Method Malloc, addr 0x6893168, size 0x54, virtual false, abstract: false, final false
  static inline void* Malloc(int64_t size, int32_t alignment, ::Unity::Collections::Allocator allocator);

  /// @brief Method MallocTracked, addr 0x689310c, size 0x5c, virtual false, abstract: false, final false
  static inline void* MallocTracked(int64_t size, int32_t alignment, ::Unity::Collections::Allocator allocator, int32_t callstacksToSkip);

  /// @brief Method MemClear, addr 0x6893378, size 0x48, virtual false, abstract: false, final false
  static inline void MemClear(void* destination, int64_t size);

  /// @brief Method MemCmp, addr 0x68933c0, size 0x54, virtual false, abstract: false, final false
  static inline int32_t MemCmp(void* ptr1, void* ptr2, int64_t size);

  /// @brief Method MemCpy, addr 0x6891e34, size 0x54, virtual false, abstract: false, final false
  static inline void MemCpy(void* destination, void* source, int64_t size);

  /// @brief Method MemCpyReplicate, addr 0x6893200, size 0x5c, virtual false, abstract: false, final false
  static inline void MemCpyReplicate(void* destination, void* source, int32_t size, int32_t count);

  /// @brief Method MemCpyStride, addr 0x689325c, size 0x74, virtual false, abstract: false, final false
  static inline void MemCpyStride(void* destination, int32_t destinationStride, void* source, int32_t sourceStride, int32_t elementSize, int32_t count);

  /// @brief Method MemMove, addr 0x68932d0, size 0x54, virtual false, abstract: false, final false
  static inline void MemMove(void* destination, void* source, int64_t size);

  /// @brief Method MemSet, addr 0x6893324, size 0x54, virtual false, abstract: false, final false
  static inline void MemSet(void* destination, uint8_t value, int64_t size);

  /// @brief Method ReadArrayElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ReadArrayElement(void* source, int32_t index);

  /// @brief Method ReadArrayElementWithStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ReadArrayElementWithStride(void* source, int32_t index, int32_t stride);

  /// @brief Method SizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t SizeOf();

  /// @brief Method SizeOf, addr 0x6893414, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t SizeOf(::System::Type* type);

  /// @brief Method WriteArrayElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void WriteArrayElement(void* destination, int32_t index, T value);

  /// @brief Method WriteArrayElementWithStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void WriteArrayElementWithStride(void* destination, int32_t index, int32_t stride, T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeUtility(UnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeUtility(UnsafeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10004 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_AlignOfHelper_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility/AlignOfHelper`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_TypeFlagsCache_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility/TypeFlagsCache`1");

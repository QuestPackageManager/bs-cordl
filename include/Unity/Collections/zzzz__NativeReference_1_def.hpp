#pragma once
// IWYU pragma private; include "Unity/Collections/NativeReference_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeReference_1)
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T> struct NativeReference_1_ReadOnly;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct NativeReference_1;
}
namespace Unity::Collections {
template <typename T> struct NativeReference_1_ReadOnly;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeReference_1);
MARK_GEN_VAL_T(::Unity::Collections::NativeReference_1_ReadOnly);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeReference`1/ReadOnly<T>
struct CORDL_TYPE NativeReference_1_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_Value)) T Value;

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(void* data);

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeReference_1_ReadOnly();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: None }]
  constexpr NativeReference_1_ReadOnly(void* m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15652 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  void* m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeReference`1<T>
struct CORDL_TYPE NativeReference_1 {
public:
  // Declarations
  using ReadOnly = ::Unity::Collections::NativeReference_1_ReadOnly<T>;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Value, put = set_Value)) T Value;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::ByRef<::Unity::Collections::NativeReference_1<T>> reference);

  /// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeReference_1_ReadOnly<T> AsReadOnly();

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Copy(::Unity::Collections::NativeReference_1<T> dst, ::Unity::Collections::NativeReference_1<T> src);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::Unity::Collections::NativeReference_1<T> reference);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::Unity::Collections::NativeReference_1<T> reference);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::NativeReference_1<T> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>"
  constexpr ::System::IEquatable_1<::Unity::Collections::NativeReference_1<T>>* i___System__IEquatable_1___Unity__Collections__NativeReference_1_T__();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::Unity::Collections::NativeReference_1<T> left, ::Unity::Collections::NativeReference_1<T> right);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeReference_1_ReadOnly<T> op_Implicit___Unity__Collections__NativeReference_1_ReadOnly_T_(::Unity::Collections::NativeReference_1<T> nativeReference);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::Collections::NativeReference_1<T> left, ::Unity::Collections::NativeReference_1<T> right);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(T value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeReference_1();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle",
  // modifiers: "", def_value: None }]
  constexpr NativeReference_1(void* m_Data, ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15653 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  void* m_Data;

  /// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeReference_1, "Unity.Collections", "NativeReference`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeReference_1_ReadOnly, "Unity.Collections", "NativeReference`1/ReadOnly");

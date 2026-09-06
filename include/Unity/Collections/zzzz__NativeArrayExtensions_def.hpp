#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArrayExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayExtensions)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct UnsafeHashSet_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct NativeArrayExtensions_NativeArrayStaticId_1;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct NativeHashSet_1;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct NativeList_1;
}
// Forward declare root types
namespace Unity::Collections {
class NativeArrayExtensions;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct NativeArrayExtensions_NativeArrayStaticId_1;
}
// Write type traits
MARK_REF_T(::Unity::Collections::NativeArrayExtensions*);
MARK_GEN_VAL_T(::Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1);
DEFINE_IL2CPP_CLASS(::Unity::Collections::NativeArrayExtensions*, "Unity.Collections", "NativeArrayExtensions");
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1, "Unity.Collections", "NativeArrayExtensions/NativeArrayStaticId`1");
// Dependencies Unity.Burst.SharedStatic`1<T>
namespace Unity::Collections {
// cpp template
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15631 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Collections
// [Extension]
// [GenerateTestsForBurstCompatibility]
// Dependencies System.IEquatable`1<T>, System.Object, Unity.Collections.AllocatorManager::IAllocator
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeArrayExtensions
class CORDL_TYPE NativeArrayExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  using NativeArrayStaticId_1 = ::Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1<T>;

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method ArraysEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool ArraysEqual(::Unity::Collections::NativeArray_1<T> container, ::Unity::Collections::NativeArray_1<T> other);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckReinterpretSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::value_type_constraint<U> &&
             ::cordl_internals::default_constructor_constraint<U>)
  static inline void CheckReinterpretSize(::by_ref<::Unity::Collections::NativeArray_1<T>> array);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool Contains(::Unity::Collections::NativeArray_1<T> array, U value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool Contains(::Unity::Collections::NativeArray_1_ReadOnly<T> array, U value);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool Contains(void* ptr, int32_t length, U value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void CopyFrom(::by_ref<::Unity::Collections::NativeArray_1<T>> container, ::Unity::Collections::NativeList_1<T> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void CopyFrom(::by_ref<::Unity::Collections::NativeArray_1<T>> container, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void CopyFrom(::by_ref<::Unity::Collections::NativeArray_1<T>> container, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeHashSet_1<T>> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method DisposeCheckAllocator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void DisposeCheckAllocator(::by_ref<::Unity::Collections::NativeArray_1<T>> array);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t IndexOf(::Unity::Collections::NativeArray_1<T> array, U value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t IndexOf(::Unity::Collections::NativeArray_1_ReadOnly<T> array, U value);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t IndexOf(void* ptr, int32_t length, U value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void Initialize(::by_ref<::Unity::Collections::NativeArray_1<T>> array, int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                ::Unity::Collections::NativeArrayOptions options);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.AllocatorManager::AllocatorHandle) })]
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<U> &&
             ::cordl_internals::default_constructor_constraint<U>)
  static inline void Initialize(::by_ref<::Unity::Collections::NativeArray_1<T>> array, int32_t length, ::by_ref<U> allocator, ::Unity::Collections::NativeArrayOptions options);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method Reinterpret, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::value_type_constraint<U> &&
             ::cordl_internals::default_constructor_constraint<U>)
  static inline ::Unity::Collections::NativeArray_1<U> Reinterpret(::Unity::Collections::NativeArray_1<T> array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeArrayExtensions(NativeArrayExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeArrayExtensions(NativeArrayExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15632 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::NativeArrayExtensions) == 0x10, "Size mismatch!");

} // namespace Unity::Collections

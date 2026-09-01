#pragma once
// IWYU pragma private; include "Unity\Collections\NativeText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Unicode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeText)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeText;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct CopyError;
}
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString32Bytes;
}
namespace Unity::Collections {
struct FixedString4096Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
namespace Unity::Collections {
struct FixedString64Bytes;
}
namespace Unity::Collections {
template <typename T> class IIndexable_1;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
template <typename T> class INativeList_1;
}
namespace Unity::Collections {
class IUTF8Bytes;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
struct NativeText_Enumerator;
}
namespace Unity::Collections {
struct NativeText_ReadOnly;
}
namespace Unity::Collections {
struct Unicode_Rune;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeText;
}
namespace Unity::Collections {
struct NativeText_Enumerator;
}
namespace Unity::Collections {
struct NativeText_ReadOnly;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeText);
MARK_VAL_T(::Unity::Collections::NativeText_Enumerator);
MARK_VAL_T(::Unity::Collections::NativeText_ReadOnly);
DEFINE_IL2CPP_CLASS(::Unity::Collections::NativeText, "Unity.Collections", "NativeText");
DEFINE_IL2CPP_CLASS(::Unity::Collections::NativeText_Enumerator, "Unity.Collections", "NativeText/Enumerator");
DEFINE_IL2CPP_CLASS(::Unity::Collections::NativeText_ReadOnly, "Unity.Collections", "NativeText/ReadOnly");
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeText/ReadOnly
struct CORDL_TYPE NativeText_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsEmpty, put = set_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item, put = set_Item)) uint8_t Item[];

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Convert operator to "::System::IComparable_1<::StringW>"
  constexpr operator ::System::IComparable_1<::StringW>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::NativeText>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::NativeText>*();

  /// @brief Convert operator to "::System::IEquatable_1<::StringW>"
  constexpr operator ::System::IEquatable_1<::StringW>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeText>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::NativeText>*();

  /// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
  constexpr operator ::Unity::Collections::IIndexable_1<uint8_t>*();

  /// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
  constexpr operator ::Unity::Collections::INativeList_1<uint8_t>*();

  /// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
  constexpr operator ::Unity::Collections::IUTF8Bytes*();

  /// @brief Method CheckNull, addr 0x64c6224, size 0x54, virtual false, abstract: false, final false
  static inline void CheckNull(void* dataPtr);

  /// @brief Method CheckRead, addr 0x64c6278, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method Clear, addr 0x64c61cc, size 0x4, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method CompareTo, addr 0x64c62c8, size 0x28, virtual true, abstract: false, final true
  inline int32_t CompareTo(::StringW other);

  /// @brief Method CompareTo, addr 0x64c6834, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method CompareTo, addr 0x64c6564, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method CompareTo, addr 0x64c6b04, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method CompareTo, addr 0x64c699c, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method CompareTo, addr 0x64c66cc, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method CompareTo, addr 0x64c64ac, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::NativeText other);

  /// @brief Method CompareTo, addr 0x64c63f4, size 0x5c, virtual false, abstract: false, final false
  inline int32_t CompareTo(::Unity::Collections::NativeText_ReadOnly other);

  /// @brief Method ElementAt, addr 0x64c61d0, size 0x4c, virtual true, abstract: false, final true
  inline ::by_ref<uint8_t> ElementAt(int32_t index);

  /// @brief Method Equals, addr 0x64c63cc, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::StringW other);

  /// @brief Method Equals, addr 0x64c6d34, size 0x2dc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x64c6998, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method Equals, addr 0x64c66c8, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method Equals, addr 0x64c6c68, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method Equals, addr 0x64c6b00, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method Equals, addr 0x64c6830, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method Equals, addr 0x64c6508, size 0x5c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::NativeText other);

  /// @brief Method Equals, addr 0x64c6450, size 0x5c, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Collections::NativeText_ReadOnly other);

  /// @brief Method ErrorWrite, addr 0x64c627c, size 0x4c, virtual false, abstract: false, final false
  inline void ErrorWrite();

  /// @brief Method GetEnumerator, addr 0x64c7014, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeText_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x64c6ce8, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnsafePtr, addr 0x64c5d9c, size 0xc, virtual true, abstract: false, final true
  inline uint8_t* GetUnsafePtr();

  /// @brief Method ToString, addr 0x64c6c6c, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryResize, addr 0x64c621c, size 0x8, virtual true, abstract: false, final true
  inline bool TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions);

  /// @brief Method .ctor, addr 0x64c5f9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeText* text);

  /// @brief Method get_Capacity, addr 0x64c5fa4, size 0x70, virtual true, abstract: false, final true
  inline int32_t get_Capacity();

  /// @brief Method get_IsEmpty, addr 0x64c6018, size 0xe4, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x64c6174, size 0x54, virtual true, abstract: false, final true
  inline uint8_t get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x64c6100, size 0x70, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_Value, addr 0x64c7010, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::IComparable_1<::StringW>"
  constexpr ::System::IComparable_1<::StringW>* i___System__IComparable_1___StringW_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* i___System__IComparable_1___Unity__Collections__FixedString128Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* i___System__IComparable_1___Unity__Collections__FixedString32Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* i___System__IComparable_1___Unity__Collections__FixedString512Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* i___System__IComparable_1___Unity__Collections__FixedString64Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::NativeText>"
  constexpr ::System::IComparable_1<::Unity::Collections::NativeText>* i___System__IComparable_1___Unity__Collections__NativeText_();

  /// @brief Convert to "::System::IEquatable_1<::StringW>"
  constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeText>"
  constexpr ::System::IEquatable_1<::Unity::Collections::NativeText>* i___System__IEquatable_1___Unity__Collections__NativeText_();

  /// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
  constexpr ::Unity::Collections::IIndexable_1<uint8_t>* i___Unity__Collections__IIndexable_1_uint8_t_();

  /// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
  constexpr ::Unity::Collections::INativeList_1<uint8_t>* i___Unity__Collections__INativeList_1_uint8_t_();

  /// @brief Convert to "::Unity::Collections::IUTF8Bytes"
  constexpr ::Unity::Collections::IUTF8Bytes* i___Unity__Collections__IUTF8Bytes();

  /// @brief Method op_Equality, addr 0x64c6890, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b);

  /// @brief Method op_Equality, addr 0x64c65c0, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b);

  /// @brief Method op_Equality, addr 0x64c6b60, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b);

  /// @brief Method op_Equality, addr 0x64c69f8, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b);

  /// @brief Method op_Equality, addr 0x64c6728, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c6980, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c66b0, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c6c50, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c6ae8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c6818, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText_ReadOnly> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b);

  /// @brief Method set_Capacity, addr 0x64c6014, size 0x4, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_IsEmpty, addr 0x64c60fc, size 0x4, virtual false, abstract: false, final false
  inline void set_IsEmpty(bool value);

  /// @brief Method set_Item, addr 0x64c61c8, size 0x4, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, uint8_t value);

  /// @brief Method set_Length, addr 0x64c6170, size 0x4, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeText_ReadOnly();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: None }]
  constexpr NativeText_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15707 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeText_ReadOnly, m_Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::NativeText_ReadOnly) == 0x8, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.NativeText::ReadOnly, Unity.Collections.Unicode::Rune
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeText/Enumerator
struct CORDL_TYPE NativeText_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Collections::Unicode_Rune Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x64c5c88, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x64c5c8c, size 0x110, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x64c5f2c, size 0x8, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x64c5f34, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x64c4ec8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeText source);

  /// @brief Method .ctor, addr 0x64c5c80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeText_ReadOnly source);

  /// @brief Method get_Current, addr 0x64c5f94, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Collections::Unicode_Rune get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>* i___System__Collections__Generic__IEnumerator_1___Unity__Collections__Unicode_Rune_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeText_Enumerator();

  // Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeText_ReadOnly", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "current", ty: "::Unity::Collections::Unicode_Rune", modifiers: "", def_value: None }]
  constexpr NativeText_Enumerator(::Unity::Collections::NativeText_ReadOnly target, int32_t offset, ::Unity::Collections::Unicode_Rune current) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15706 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field target, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeText_ReadOnly target;

  /// @brief Field offset, offset: 0x8, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field current, offset: 0xc, size: 0x4, def value: None
  ::Unity::Collections::Unicode_Rune current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeText_Enumerator, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeText_Enumerator, offset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeText_Enumerator, current) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::NativeText_Enumerator) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeText
struct CORDL_TYPE NativeText {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::NativeText_Enumerator;

  using ReadOnly = ::Unity::Collections::NativeText_ReadOnly;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item, put = set_Item)) uint8_t Item[];

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Convert operator to "::System::IComparable_1<::StringW>"
  constexpr operator ::System::IComparable_1<::StringW>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::NativeText>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::NativeText>*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::IEquatable_1<::StringW>"
  constexpr operator ::System::IEquatable_1<::StringW>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeText>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::NativeText>*();

  /// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
  constexpr operator ::Unity::Collections::IIndexable_1<uint8_t>*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
  constexpr operator ::Unity::Collections::INativeList_1<uint8_t>*();

  /// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
  constexpr operator ::Unity::Collections::IUTF8Bytes*();

  /// @brief Method Add, addr 0x64c4ac0, size 0xc4, virtual false, abstract: false, final false
  inline void Add(::by_ref<uint8_t> value);

  /// @brief Method AsReadOnly, addr 0x64c5c78, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeText_ReadOnly AsReadOnly();

  /// @brief Method CheckIndexInRange, addr 0x64c5a9c, size 0x15c, virtual false, abstract: false, final false
  inline void CheckIndexInRange(int32_t index);

  /// @brief Method CheckNull, addr 0x64c5a3c, size 0x54, virtual false, abstract: false, final false
  static inline void CheckNull(void* dataPtr);

  /// @brief Method CheckRead, addr 0x64c5a90, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method CheckWrite, addr 0x64c5a94, size 0x4, virtual false, abstract: false, final false
  inline void CheckWrite();

  /// @brief Method CheckWriteAndBumpSecondaryVersion, addr 0x64c5a98, size 0x4, virtual false, abstract: false, final false
  inline void CheckWriteAndBumpSecondaryVersion();

  /// @brief Method Clear, addr 0x64c4ab4, size 0xc, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method CompareTo, addr 0x64c4ed0, size 0x24, virtual true, abstract: false, final true
  inline int32_t CompareTo(::StringW other);

  /// @brief Method CompareTo, addr 0x64c5264, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method CompareTo, addr 0x64c4f18, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method CompareTo, addr 0x64c5584, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method CompareTo, addr 0x64c53f4, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method CompareTo, addr 0x64c50d4, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method CompareTo, addr 0x64c4b84, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::NativeText other);

  /// @brief Method CompareTo, addr 0x64c4c3c, size 0x60, virtual false, abstract: false, final false
  inline int32_t CompareTo(::Unity::Collections::NativeText_ReadOnly other);

  /// @brief Method Dispose, addr 0x64c4dc0, size 0x7c, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x64c4cf8, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ElementAt, addr 0x64c4a60, size 0x54, virtual true, abstract: false, final true
  inline ::by_ref<uint8_t> ElementAt(int32_t index);

  /// @brief Method Equals, addr 0x64c4ef4, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::StringW other);

  /// @brief Method Equals, addr 0x64c5760, size 0x2dc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x64c53f0, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method Equals, addr 0x64c50d0, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method Equals, addr 0x64c5710, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method Equals, addr 0x64c5580, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method Equals, addr 0x64c5260, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method Equals, addr 0x64c4be0, size 0x5c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::NativeText other);

  /// @brief Method Equals, addr 0x64c4c9c, size 0x5c, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Collections::NativeText_ReadOnly other);

  /// @brief Method GetEnumerator, addr 0x64c4ebc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeText_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x64c5714, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnsafePtr, addr 0x64c3e4c, size 0xc, virtual true, abstract: false, final true
  inline uint8_t* GetUnsafePtr();

  /// @brief Method ThrowCopyError, addr 0x64c5bf8, size 0x80, virtual false, abstract: false, final false
  inline void ThrowCopyError(::Unity::Collections::CopyError error, ::StringW source);

  /// @brief Method ToString, addr 0x64c4e40, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryResize, addr 0x64c4854, size 0x18, virtual true, abstract: false, final true
  inline bool TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions);

  /// @brief Method .ctor, addr 0x64c4084, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x64c40e0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x64c3f58, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x64c3de0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x64c3ca4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x64c3cac, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::StringW source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x64c4424, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString128Bytes> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x64c4334, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString128Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x64c4234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString32Bytes> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x64c413c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString32Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x64c4614, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString4096Bytes> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x64c4524, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString4096Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x64c451c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString512Bytes> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x64c442c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString512Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x64c432c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString64Bytes> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x64c423c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString64Bytes> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_Capacity, addr 0x64c4758, size 0x70, virtual true, abstract: false, final true
  inline int32_t get_Capacity();

  /// @brief Method get_IsCreated, addr 0x64c4950, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x64c486c, size 0xe4, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x64c4960, size 0x54, virtual true, abstract: false, final true
  inline uint8_t get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x64c461c, size 0x70, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_Value, addr 0x64c4e3c, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::IComparable_1<::StringW>"
  constexpr ::System::IComparable_1<::StringW>* i___System__IComparable_1___StringW_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* i___System__IComparable_1___Unity__Collections__FixedString128Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* i___System__IComparable_1___Unity__Collections__FixedString32Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* i___System__IComparable_1___Unity__Collections__FixedString512Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* i___System__IComparable_1___Unity__Collections__FixedString64Bytes_();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::NativeText>"
  constexpr ::System::IComparable_1<::Unity::Collections::NativeText>* i___System__IComparable_1___Unity__Collections__NativeText_();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::IEquatable_1<::StringW>"
  constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeText>"
  constexpr ::System::IEquatable_1<::Unity::Collections::NativeText>* i___System__IEquatable_1___Unity__Collections__NativeText_();

  /// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
  constexpr ::Unity::Collections::IIndexable_1<uint8_t>* i___Unity__Collections__IIndexable_1_uint8_t_();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  /// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
  constexpr ::Unity::Collections::INativeList_1<uint8_t>* i___Unity__Collections__INativeList_1_uint8_t_();

  /// @brief Convert to "::Unity::Collections::IUTF8Bytes"
  constexpr ::Unity::Collections::IUTF8Bytes* i___Unity__Collections__IUTF8Bytes();

  /// @brief Method op_Equality, addr 0x64c52c0, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b);

  /// @brief Method op_Equality, addr 0x64c4f74, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b);

  /// @brief Method op_Equality, addr 0x64c55e0, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b);

  /// @brief Method op_Equality, addr 0x64c5450, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b);

  /// @brief Method op_Equality, addr 0x64c5130, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c53d8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c50b8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c56f8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c5568, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b);

  /// @brief Method op_Inequality, addr 0x64c5248, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::NativeText> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b);

  /// @brief Method set_Capacity, addr 0x64c47c8, size 0x8, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x64c4a08, size 0x58, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, uint8_t value);

  /// @brief Method set_Length, addr 0x64c3e44, size 0x8, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeText();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: None }]
  constexpr NativeText(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15708 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeText, m_Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::NativeText) == 0x8, "Size mismatch!");

} // namespace Unity::Collections

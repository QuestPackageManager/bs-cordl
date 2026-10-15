#pragma once
// IWYU pragma private; include "Unity/Collections/NativeText.hpp"
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
// [DefaultMember("Item")]
// [NativeContainer]
// [NativeContainerIsReadOnly]
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

  /// [CreateProperty]
  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief [ExcludeFromBurstCompatTesting("Returns managed string")]
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

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckNull, addr 0x692bff8, size 0x54, virtual false, abstract: false, final false
  static inline void CheckNull(void* dataPtr);

  /// [IsReadOnly]
  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// @brief Method CheckRead, addr 0x692c04c, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method Clear, addr 0x692bfa0, size 0x4, virtual true, abstract: false, final true
  inline void Clear();

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method CompareTo, addr 0x692c09c, size 0x28, virtual true, abstract: false, final true
  inline int32_t CompareTo(::StringW other);

  /// @brief Method CompareTo, addr 0x692c608, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method CompareTo, addr 0x692c338, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method CompareTo, addr 0x692c8d8, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method CompareTo, addr 0x692c770, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method CompareTo, addr 0x692c4a0, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method CompareTo, addr 0x692c280, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::NativeText other);

  /// @brief Method CompareTo, addr 0x692c1c8, size 0x5c, virtual false, abstract: false, final false
  inline int32_t CompareTo(::Unity::Collections::NativeText_ReadOnly other);

  /// @brief Method ElementAt, addr 0x692bfa4, size 0x4c, virtual true, abstract: false, final true
  inline ::by_ref<uint8_t> ElementAt(int32_t index);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Equals, addr 0x692c1a0, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::StringW other);

  /// [ExcludeFromBurstCompatTesting("Takes managed object")]
  /// @brief Method Equals, addr 0x692cb08, size 0x2dc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x692c76c, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method Equals, addr 0x692c49c, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method Equals, addr 0x692ca3c, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method Equals, addr 0x692c8d4, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method Equals, addr 0x692c604, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method Equals, addr 0x692c2dc, size 0x5c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::NativeText other);

  /// @brief Method Equals, addr 0x692c224, size 0x5c, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Collections::NativeText_ReadOnly other);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method ErrorWrite, addr 0x692c050, size 0x4c, virtual false, abstract: false, final false
  inline void ErrorWrite();

  /// @brief Method GetEnumerator, addr 0x692cde8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeText_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x692cabc, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnsafePtr, addr 0x692bb70, size 0xc, virtual true, abstract: false, final true
  inline uint8_t* GetUnsafePtr();

  /// [ExcludeFromBurstCompatTesting("Returns managed string")]
  /// @brief Method ToString, addr 0x692ca40, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryResize, addr 0x692bff0, size 0x8, virtual true, abstract: false, final true
  inline bool TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions);

  /// @brief Method .ctor, addr 0x692bd70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeText* text);

  /// [IsReadOnly]
  /// @brief Method get_Capacity, addr 0x692bd78, size 0x70, virtual true, abstract: false, final true
  inline int32_t get_Capacity();

  /// [IsReadOnly]
  /// @brief Method get_IsEmpty, addr 0x692bdec, size 0xe4, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// [IsReadOnly]
  /// @brief Method get_Item, addr 0x692bf48, size 0x54, virtual true, abstract: false, final true
  inline uint8_t get_Item(int32_t index);

  /// [IsReadOnly]
  /// @brief Method get_Length, addr 0x692bed4, size 0x70, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_Value, addr 0x692cde4, size 0x4, virtual false, abstract: false, final false
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

  /// @brief Method op_Equality, addr 0x692c664, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> b);

  /// @brief Method op_Equality, addr 0x692c394, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> b);

  /// @brief Method op_Equality, addr 0x692c934, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> b);

  /// @brief Method op_Equality, addr 0x692c7cc, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> b);

  /// @brief Method op_Equality, addr 0x692c4fc, size 0xf0, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692c754, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692c484, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692ca24, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692c8bc, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692c5ec, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText_ReadOnly const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> b);

  /// @brief Method set_Capacity, addr 0x692bde8, size 0x4, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_IsEmpty, addr 0x692bed0, size 0x4, virtual false, abstract: false, final false
  inline void set_IsEmpty(bool value);

  /// @brief Method set_Item, addr 0x692bf9c, size 0x4, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, uint8_t value);

  /// @brief Method set_Length, addr 0x692bf44, size 0x4, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeText_ReadOnly();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: None, comment: None }]
  constexpr NativeText_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [NativeDisableUnsafePtrRestriction]
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

  /// @brief Method Dispose, addr 0x692ba5c, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x692ba60, size 0x110, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x692bd00, size 0x8, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x692bd08, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x692ac9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeText source);

  /// @brief Method .ctor, addr 0x692ba54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeText_ReadOnly source);

  /// @brief Method get_Current, addr 0x692bd68, size 0x8, virtual true, abstract: false, final true
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

  // Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeText_ReadOnly", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "current", ty: "::Unity::Collections::Unicode_Rune", modifiers: "", def_value: None, comment: None }]
  constexpr NativeText_Enumerator(::Unity::Collections::NativeText_ReadOnly target, int32_t offset, ::Unity::Collections::Unicode_Rune current) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15980 };

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
// [DefaultMember("Item")]
// [NativeContainer]
// [DebuggerDisplay("Length = {Length}")]
// [GenerateTestsForBurstCompatibility]
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

  /// [CreateProperty]
  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief [ExcludeFromBurstCompatTesting("Returns managed string")]
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

  /// @brief Method Add, addr 0x692a894, size 0xc4, virtual false, abstract: false, final false
  inline void Add(/* [IsReadOnly] */ ::by_ref<uint8_t const> value);

  /// @brief Method AsReadOnly, addr 0x692ba4c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeText_ReadOnly AsReadOnly();

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckIndexInRange, addr 0x692b870, size 0x15c, virtual false, abstract: false, final false
  inline void CheckIndexInRange(int32_t index);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckNull, addr 0x692b810, size 0x54, virtual false, abstract: false, final false
  static inline void CheckNull(void* dataPtr);

  /// [IsReadOnly]
  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// @brief Method CheckRead, addr 0x692b864, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// @brief Method CheckWrite, addr 0x692b868, size 0x4, virtual false, abstract: false, final false
  inline void CheckWrite();

  /// [IsReadOnly]
  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// @brief Method CheckWriteAndBumpSecondaryVersion, addr 0x692b86c, size 0x4, virtual false, abstract: false, final false
  inline void CheckWriteAndBumpSecondaryVersion();

  /// @brief Method Clear, addr 0x692a888, size 0xc, virtual true, abstract: false, final true
  inline void Clear();

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method CompareTo, addr 0x692aca4, size 0x24, virtual true, abstract: false, final true
  inline int32_t CompareTo(::StringW other);

  /// @brief Method CompareTo, addr 0x692b038, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method CompareTo, addr 0x692acec, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method CompareTo, addr 0x692b358, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method CompareTo, addr 0x692b1c8, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method CompareTo, addr 0x692aea8, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method CompareTo, addr 0x692a958, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::NativeText other);

  /// @brief Method CompareTo, addr 0x692aa10, size 0x60, virtual false, abstract: false, final false
  inline int32_t CompareTo(::Unity::Collections::NativeText_ReadOnly other);

  /// @brief Method Dispose, addr 0x692ab94, size 0x7c, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x692aacc, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ElementAt, addr 0x692a834, size 0x54, virtual true, abstract: false, final true
  inline ::by_ref<uint8_t> ElementAt(int32_t index);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Equals, addr 0x692acc8, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::StringW other);

  /// [ExcludeFromBurstCompatTesting("Takes managed object")]
  /// @brief Method Equals, addr 0x692b534, size 0x2dc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x692b1c4, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method Equals, addr 0x692aea4, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method Equals, addr 0x692b4e4, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method Equals, addr 0x692b354, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method Equals, addr 0x692b034, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method Equals, addr 0x692a9b4, size 0x5c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::NativeText other);

  /// @brief Method Equals, addr 0x692aa70, size 0x5c, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Collections::NativeText_ReadOnly other);

  /// @brief Method GetEnumerator, addr 0x692ac90, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeText_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x692b4e8, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnsafePtr, addr 0x6929c20, size 0xc, virtual true, abstract: false, final true
  inline uint8_t* GetUnsafePtr();

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method ThrowCopyError, addr 0x692b9cc, size 0x80, virtual false, abstract: false, final false
  inline void ThrowCopyError(::Unity::Collections::CopyError error, ::StringW source);

  /// [ExcludeFromBurstCompatTesting("Returns managed string")]
  /// @brief Method ToString, addr 0x692ac14, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryResize, addr 0x692a628, size 0x18, virtual true, abstract: false, final true
  inline bool TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions);

  /// @brief Method .ctor, addr 0x6929e58, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x6929eb4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x6929d2c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x6929bb4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method .ctor, addr 0x6929a78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW source, ::Unity::Collections::Allocator allocator);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method .ctor, addr 0x6929a80, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::StringW source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x692a1f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x692a108, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x692a008, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x6929f10, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x692a3e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x692a2f8, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x692a2f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x692a200, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x692a100, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> source, ::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x692a010, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> source, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// [IsReadOnly]
  /// @brief Method get_Capacity, addr 0x692a52c, size 0x70, virtual true, abstract: false, final true
  inline int32_t get_Capacity();

  /// [IsReadOnly]
  /// @brief Method get_IsCreated, addr 0x692a724, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// [IsReadOnly]
  /// @brief Method get_IsEmpty, addr 0x692a640, size 0xe4, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x692a734, size 0x54, virtual true, abstract: false, final true
  inline uint8_t get_Item(int32_t index);

  /// [IsReadOnly]
  /// @brief Method get_Length, addr 0x692a3f0, size 0x70, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_Value, addr 0x692ac10, size 0x4, virtual false, abstract: false, final false
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

  /// @brief Method op_Equality, addr 0x692b094, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> b);

  /// @brief Method op_Equality, addr 0x692ad48, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> b);

  /// @brief Method op_Equality, addr 0x692b3b4, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> b);

  /// @brief Method op_Equality, addr 0x692b224, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> b);

  /// @brief Method op_Equality, addr 0x692af04, size 0x118, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692b1ac, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692ae8c, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692b4cc, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692b33c, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> b);

  /// @brief Method op_Inequality, addr 0x692b01c, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeText const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> b);

  /// @brief Method set_Capacity, addr 0x692a59c, size 0x8, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x692a7dc, size 0x58, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, uint8_t value);

  /// @brief Method set_Length, addr 0x6929c18, size 0x8, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeText();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: None, comment: None }]
  constexpr NativeText(::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data) noexcept;

  /// @brief Field MaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t MaxCapacity{ static_cast<int32_t>(0x7ffffffe) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15982 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [NativeDisableUnsafePtrRestriction]
  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeText* m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeText, m_Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::NativeText) == 0x8, "Size mismatch!");

} // namespace Unity::Collections

#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString32Bytes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedBytes30_def.hpp"
#include "Unity/Collections/zzzz__Unicode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedString32Bytes)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class IComparable_1;
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
struct CopyError;
}
namespace Unity::Collections {
template <typename T> struct FixedList32Bytes_1;
}
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString32Bytes_Enumerator;
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
struct FormatError;
}
namespace Unity::Collections {
template <typename T> class IIndexable_1;
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
struct NativeText_ReadOnly;
}
namespace Unity::Collections {
struct Unicode_Rune;
}
// Forward declare root types
namespace Unity::Collections {
struct FixedString32Bytes;
}
namespace Unity::Collections {
struct FixedString32Bytes_Enumerator;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::FixedString32Bytes);
MARK_VAL_T(::Unity::Collections::FixedString32Bytes_Enumerator);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString32Bytes, "Unity.Collections", "FixedString32Bytes");
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString32Bytes_Enumerator, "Unity.Collections", "FixedString32Bytes/Enumerator");
// Dependencies Unity.Collections.FixedBytes30
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedString32Bytes
#pragma pack(push, 0)
struct CORDL_TYPE FixedString32Bytes {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::FixedString32Bytes_Enumerator;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

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

  /// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
  constexpr operator ::Unity::Collections::IIndexable_1<uint8_t>*();

  /// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
  constexpr operator ::Unity::Collections::INativeList_1<uint8_t>*();

  /// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
  constexpr operator ::Unity::Collections::IUTF8Bytes*();

  /// @brief Method Add, addr 0x64a966c, size 0x20, virtual false, abstract: false, final false
  inline void Add(::by_ref<uint8_t> value);

  /// @brief Method AsFixedList, addr 0x64a9760, size 0x44, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Collections::FixedList32Bytes_1<uint8_t>> AsFixedList();

  /// @brief Method CheckCapacityInRange, addr 0x64aa810, size 0xa0, virtual false, abstract: false, final false
  inline void CheckCapacityInRange(int32_t capacity);

  /// @brief Method CheckCopyError, addr 0x64aa8b0, size 0x88, virtual false, abstract: false, final false
  static inline void CheckCopyError(::Unity::Collections::CopyError error, ::StringW source);

  /// @brief Method CheckFormatError, addr 0x64aa938, size 0x54, virtual false, abstract: false, final false
  static inline void CheckFormatError(::Unity::Collections::FormatError error);

  /// @brief Method CheckIndexInRange, addr 0x64aa634, size 0xf4, virtual false, abstract: false, final false
  inline void CheckIndexInRange(int32_t index);

  /// @brief Method CheckLengthInRange, addr 0x64aa728, size 0xe8, virtual false, abstract: false, final false
  inline void CheckLengthInRange(int32_t length);

  /// @brief Method Clear, addr 0x64a9660, size 0xc, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method CompareTo, addr 0x64a96ac, size 0x24, virtual true, abstract: false, final true
  inline int32_t CompareTo(::StringW other);

  /// @brief Method CompareTo, addr 0x64a9da4, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method CompareTo, addr 0x64a9a3c, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method CompareTo, addr 0x64aa198, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method CompareTo, addr 0x64a9f88, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method CompareTo, addr 0x64a9bd0, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method ElementAt, addr 0x64a9654, size 0xc, virtual true, abstract: false, final true
  inline ::by_ref<uint8_t> ElementAt(int32_t index);

  /// @brief Method Equals, addr 0x64aa408, size 0x22c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x64a96d0, size 0x90, virtual true, abstract: false, final true
  inline bool Equals(::StringW other);

  /// @brief Method Equals, addr 0x64a9f4c, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method Equals, addr 0x64a9bcc, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method Equals, addr 0x64aa340, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method Equals, addr 0x64aa130, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method Equals, addr 0x64a9d78, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method GetEnumerator, addr 0x64a968c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString32Bytes_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x64aa3bc, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnsafePtr, addr 0x64a9550, size 0x8, virtual true, abstract: false, final true
  inline uint8_t* GetUnsafePtr();

  /// @brief Method Initialize, addr 0x64a97b0, size 0x5c, virtual false, abstract: false, final false
  inline ::Unity::Collections::CopyError Initialize(::StringW source);

  /// @brief Method Initialize, addr 0x64a9e0c, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(::by_ref<::Unity::Collections::FixedString128Bytes> other);

  /// @brief Method Initialize, addr 0x64a9aa4, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(::by_ref<::Unity::Collections::FixedString32Bytes> other);

  /// @brief Method Initialize, addr 0x64aa200, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(::by_ref<::Unity::Collections::FixedString4096Bytes> other);

  /// @brief Method Initialize, addr 0x64a9ff0, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(::by_ref<::Unity::Collections::FixedString512Bytes> other);

  /// @brief Method Initialize, addr 0x64a9c38, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(::by_ref<::Unity::Collections::FixedString64Bytes> other);

  /// @brief Method Initialize, addr 0x64a981c, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(::Unity::Collections::Unicode_Rune rune, int32_t count);

  /// @brief Method Initialize, addr 0x64a9888, size 0x94, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(uint8_t* srcBytes, int32_t srcLength);

  /// @brief Method ToString, addr 0x64a9504, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryResize, addr 0x64a957c, size 0xb0, virtual true, abstract: false, final true
  inline bool TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions);

  /// @brief Method .ctor, addr 0x64a991c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeText_ReadOnly other);

  /// @brief Method .ctor, addr 0x64a9e00, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString128Bytes> other);

  /// @brief Method .ctor, addr 0x64a9a98, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString32Bytes> other);

  /// @brief Method .ctor, addr 0x64aa1f4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString4096Bytes> other);

  /// @brief Method .ctor, addr 0x64a9fe4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString512Bytes> other);

  /// @brief Method .ctor, addr 0x64a9c2c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::FixedString64Bytes> other);

  /// @brief Method .ctor, addr 0x64a99ac, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> other);

  /// @brief Method .ctor, addr 0x64a980c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Unicode_Rune rune, int32_t count);

  /// @brief Method .ctor, addr 0x64a97a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW source);

  /// @brief Method get_Capacity, addr 0x64a9570, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Capacity();

  /// @brief Method get_IsEmpty, addr 0x64a962c, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x64a963c, size 0xc, virtual true, abstract: false, final true
  inline uint8_t get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x64a9558, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_UTF8MaxLengthInBytes, addr 0x64a94f8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_UTF8MaxLengthInBytes();

  /// @brief Method get_Value, addr 0x64a9500, size 0x4, virtual false, abstract: false, final false
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

  /// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
  constexpr ::Unity::Collections::IIndexable_1<uint8_t>* i___Unity__Collections__IIndexable_1_uint8_t_();

  /// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
  constexpr ::Unity::Collections::INativeList_1<uint8_t>* i___Unity__Collections__INativeList_1_uint8_t_();

  /// @brief Convert to "::Unity::Collections::IUTF8Bytes"
  constexpr ::Unity::Collections::IUTF8Bytes* i___Unity__Collections__IUTF8Bytes();

  /// @brief Method op_Equality, addr 0x64a9e78, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b);

  /// @brief Method op_Equality, addr 0x64a9b10, size 0xa4, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b);

  /// @brief Method op_Equality, addr 0x64aa26c, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b);

  /// @brief Method op_Equality, addr 0x64aa05c, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b);

  /// @brief Method op_Equality, addr 0x64a9ca4, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b);

  /// @brief Method op_Implicit, addr 0x64a9f50, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes op_Implicit___Unity__Collections__FixedString128Bytes(::by_ref<::Unity::Collections::FixedString32Bytes> fs);

  /// @brief Method op_Implicit, addr 0x64aa3a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString32Bytes op_Implicit___Unity__Collections__FixedString32Bytes(::StringW b);

  /// @brief Method op_Implicit, addr 0x64aa344, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString4096Bytes op_Implicit___Unity__Collections__FixedString4096Bytes(::by_ref<::Unity::Collections::FixedString32Bytes> fs);

  /// @brief Method op_Implicit, addr 0x64aa134, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes op_Implicit___Unity__Collections__FixedString512Bytes(::by_ref<::Unity::Collections::FixedString32Bytes> fs);

  /// @brief Method op_Implicit, addr 0x64a9d7c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString64Bytes op_Implicit___Unity__Collections__FixedString64Bytes(::by_ref<::Unity::Collections::FixedString32Bytes> fs);

  /// @brief Method op_Inequality, addr 0x64a9f34, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString128Bytes> b);

  /// @brief Method op_Inequality, addr 0x64a9bb4, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString32Bytes> b);

  /// @brief Method op_Inequality, addr 0x64aa328, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString4096Bytes> b);

  /// @brief Method op_Inequality, addr 0x64aa118, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString512Bytes> b);

  /// @brief Method op_Inequality, addr 0x64a9d60, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::by_ref<::Unity::Collections::FixedString32Bytes> a, ::by_ref<::Unity::Collections::FixedString64Bytes> b);

  /// @brief Method set_Capacity, addr 0x64a9578, size 0x4, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x64a9648, size 0xc, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, uint8_t value);

  /// @brief Method set_Length, addr 0x64a9560, size 0x10, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedString32Bytes();

  // Ctor Parameters [CppParam { name: "utf8LengthInBytes", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "bytes", ty: "::Unity::Collections::FixedBytes30", modifiers: "",
  // def_value: None }]
  constexpr FixedString32Bytes(uint16_t utf8LengthInBytes, ::Unity::Collections::FixedBytes30 bytes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15573 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field utf8MaxLengthInBytes offset 0xffffffff size 0x2
  static constexpr uint16_t utf8MaxLengthInBytes{ static_cast<uint16_t>(0x1du) };

  /// @brief Field utf8LengthInBytes, offset: 0x0, size: 0x2, def value: None
  uint16_t utf8LengthInBytes;

  /// @brief Field bytes, offset: 0x2, size: 0x1e, def value: None
  ::Unity::Collections::FixedBytes30 bytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::FixedString32Bytes, utf8LengthInBytes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::FixedString32Bytes, bytes) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::FixedString32Bytes) == 0x20, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.FixedString32Bytes, Unity.Collections.Unicode::Rune
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedString32Bytes/Enumerator
struct CORDL_TYPE FixedString32Bytes_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Collections::Unicode_Rune Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Method Dispose, addr 0x64aa98c, size 0x4, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x64aa990, size 0x48, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x64aa9d8, size 0x8, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x64aa9e8, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x64a969c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method get_Current, addr 0x64aa9e0, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Collections::Unicode_Rune get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedString32Bytes_Enumerator();

  // Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "current", ty: "::Unity::Collections::Unicode_Rune", modifiers: "", def_value: None }]
  constexpr FixedString32Bytes_Enumerator(::Unity::Collections::FixedString32Bytes target, int32_t offset, ::Unity::Collections::Unicode_Rune current) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15572 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field target, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::FixedString32Bytes target;

  /// @brief Field offset, offset: 0x20, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field current, offset: 0x24, size: 0x4, def value: None
  ::Unity::Collections::Unicode_Rune current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::FixedString32Bytes_Enumerator, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::FixedString32Bytes_Enumerator, offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::FixedString32Bytes_Enumerator, current) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::FixedString32Bytes_Enumerator) == 0x28, "Size mismatch!");

} // namespace Unity::Collections

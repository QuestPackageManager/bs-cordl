#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString128Bytes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedBytes126_def.hpp"
#include "Unity/Collections/zzzz__Unicode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedString128Bytes)
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
template <typename T> struct FixedList128Bytes_1;
}
namespace Unity::Collections {
struct FixedString128Bytes_Enumerator;
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
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString128Bytes_Enumerator;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::FixedString128Bytes);
MARK_VAL_T(::Unity::Collections::FixedString128Bytes_Enumerator);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString128Bytes, "Unity.Collections", "FixedString128Bytes");
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString128Bytes_Enumerator, "Unity.Collections", "FixedString128Bytes/Enumerator");
// [DefaultMember("Item")]
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.FixedBytes126
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedString128Bytes
#pragma pack(push, 0)
struct CORDL_TYPE FixedString128Bytes {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::FixedString128Bytes_Enumerator;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

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

  /// @brief Method Add, addr 0x68da650, size 0x20, virtual false, abstract: false, final false
  inline void Add(/* [IsReadOnly] */ ::by_ref<uint8_t const> value);

  /// @brief Method AsFixedList, addr 0x68da754, size 0x44, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Collections::FixedList128Bytes_1<uint8_t>> AsFixedList();

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckCapacityInRange, addr 0x68db94c, size 0xa0, virtual false, abstract: false, final false
  inline void CheckCapacityInRange(int32_t capacity);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckCopyError, addr 0x68db9ec, size 0x88, virtual false, abstract: false, final false
  static inline void CheckCopyError(::Unity::Collections::CopyError error, ::StringW source);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckFormatError, addr 0x68dba74, size 0x54, virtual false, abstract: false, final false
  static inline void CheckFormatError(::Unity::Collections::FormatError error);

  /// [IsReadOnly]
  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckIndexInRange, addr 0x68db770, size 0xf4, virtual false, abstract: false, final false
  inline void CheckIndexInRange(int32_t index);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckLengthInRange, addr 0x68db864, size 0xe8, virtual false, abstract: false, final false
  inline void CheckLengthInRange(int32_t length);

  /// @brief Method Clear, addr 0x68da644, size 0xc, virtual true, abstract: false, final true
  inline void Clear();

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method CompareTo, addr 0x68da6a0, size 0x24, virtual true, abstract: false, final true
  inline int32_t CompareTo(::StringW other);

  /// @brief Method CompareTo, addr 0x68dadb8, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method CompareTo, addr 0x68daa78, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method CompareTo, addr 0x68db174, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method CompareTo, addr 0x68daf58, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method CompareTo, addr 0x68dac18, size 0x5c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method ElementAt, addr 0x68da638, size 0xc, virtual true, abstract: false, final true
  inline ::by_ref<uint8_t> ElementAt(int32_t index);

  /// [ExcludeFromBurstCompatTesting("Takes managed object")]
  /// @brief Method Equals, addr 0x68db544, size 0x22c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Equals, addr 0x68da6c4, size 0x90, virtual true, abstract: false, final true
  inline bool Equals(::StringW other);

  /// @brief Method Equals, addr 0x68daf54, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method Equals, addr 0x68dac14, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString32Bytes other);

  /// @brief Method Equals, addr 0x68db328, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString4096Bytes other);

  /// @brief Method Equals, addr 0x68db10c, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString512Bytes other);

  /// @brief Method Equals, addr 0x68dadb4, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedString64Bytes other);

  /// @brief Method GetEnumerator, addr 0x68da670, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedString128Bytes_Enumerator GetEnumerator();

  /// @brief Method GetHashCode, addr 0x68db4f8, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [IsReadOnly]
  /// @brief Method GetUnsafePtr, addr 0x68da534, size 0x8, virtual true, abstract: false, final true
  inline uint8_t* GetUnsafePtr();

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method Initialize, addr 0x68da7b0, size 0x5c, virtual false, abstract: false, final false
  inline ::Unity::Collections::CopyError Initialize(::StringW source);

  /// @brief Method Initialize, addr 0x68dae2c, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> other);

  /// @brief Method Initialize, addr 0x68daad4, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> other);

  /// @brief Method Initialize, addr 0x68db1e8, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> other);

  /// @brief Method Initialize, addr 0x68dafcc, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> other);

  /// @brief Method Initialize, addr 0x68dac74, size 0x6c, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> other);

  /// @brief Method Initialize, addr 0x68da828, size 0x78, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(::Unity::Collections::Unicode_Rune rune, int32_t count);

  /// @brief Method Initialize, addr 0x68da8a0, size 0xa0, virtual false, abstract: false, final false
  inline ::Unity::Collections::FormatError Initialize(uint8_t* srcBytes, int32_t srcLength);

  /// [ExcludeFromBurstCompatTesting("Returns managed string")]
  /// @brief Method ToString, addr 0x68da4e8, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryResize, addr 0x68da560, size 0xb0, virtual true, abstract: false, final true
  inline bool TryResize(int32_t newLength, ::Unity::Collections::NativeArrayOptions clearOptions);

  /// @brief Method .ctor, addr 0x68da940, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeText_ReadOnly other);

  /// @brief Method .ctor, addr 0x68dae14, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> other);

  /// @brief Method .ctor, addr 0x68d8264, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> other);

  /// @brief Method .ctor, addr 0x68db1d0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> other);

  /// @brief Method .ctor, addr 0x68dafb4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> other);

  /// @brief Method .ctor, addr 0x68d98c8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> other);

  /// @brief Method .ctor, addr 0x68da9dc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText const> other);

  /// @brief Method .ctor, addr 0x68da80c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Unicode_Rune rune, int32_t count);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method .ctor, addr 0x68da798, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW source);

  /// [IsReadOnly]
  /// @brief Method get_Capacity, addr 0x68da554, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Capacity();

  /// [IsReadOnly]
  /// @brief Method get_IsEmpty, addr 0x68da610, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// [IsReadOnly]
  /// @brief Method get_Item, addr 0x68da620, size 0xc, virtual true, abstract: false, final true
  inline uint8_t get_Item(int32_t index);

  /// [IsReadOnly]
  /// @brief Method get_Length, addr 0x68da53c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_UTF8MaxLengthInBytes, addr 0x68da4dc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_UTF8MaxLengthInBytes();

  /// @brief Method get_Value, addr 0x68da4e4, size 0x4, virtual false, abstract: false, final false
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

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method op_Equality, addr 0x68db390, size 0xc8, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, ::StringW b);

  /// @brief Method op_Equality, addr 0x68dae98, size 0xa4, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> b);

  /// @brief Method op_Equality, addr 0x68dab40, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> b);

  /// @brief Method op_Equality, addr 0x68db254, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> b);

  /// @brief Method op_Equality, addr 0x68db038, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> b);

  /// @brief Method op_Equality, addr 0x68dace0, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> b);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method op_Implicit, addr 0x68db458, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes op_Implicit___Unity__Collections__FixedString128Bytes(::StringW b);

  /// @brief Method op_Implicit, addr 0x68db32c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString4096Bytes op_Implicit___Unity__Collections__FixedString4096Bytes(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> fs);

  /// @brief Method op_Implicit, addr 0x68db110, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes op_Implicit___Unity__Collections__FixedString512Bytes(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> fs);

  /// [ExcludeFromBurstCompatTesting("Takes managed string")]
  /// @brief Method op_Inequality, addr 0x68db478, size 0x80, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, ::StringW b);

  /// @brief Method op_Inequality, addr 0x68daf3c, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> b);

  /// @brief Method op_Inequality, addr 0x68dabfc, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes const> b);

  /// @brief Method op_Inequality, addr 0x68db310, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes const> b);

  /// @brief Method op_Inequality, addr 0x68db0f4, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes const> b);

  /// @brief Method op_Inequality, addr 0x68dad9c, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes const> a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes const> b);

  /// @brief Method set_Capacity, addr 0x68da55c, size 0x4, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x68da62c, size 0xc, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, uint8_t value);

  /// @brief Method set_Length, addr 0x68da544, size 0x10, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedString128Bytes();

  // Ctor Parameters [CppParam { name: "utf8LengthInBytes", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bytes", ty: "::Unity::Collections::FixedBytes126",
  // modifiers: "", def_value: None, comment: None }]
  constexpr FixedString128Bytes(uint16_t utf8LengthInBytes, ::Unity::Collections::FixedBytes126 bytes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15851 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field utf8MaxLengthInBytes offset 0xffffffff size 0x2
  static constexpr uint16_t utf8MaxLengthInBytes{ static_cast<uint16_t>(0x7du) };

  /// [SerializeField]
  /// @brief Field utf8LengthInBytes, offset: 0x0, size: 0x2, def value: None
  uint16_t utf8LengthInBytes;

  /// [SerializeField]
  /// @brief Field bytes, offset: 0x2, size: 0x7e, def value: None
  ::Unity::Collections::FixedBytes126 bytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::FixedString128Bytes, utf8LengthInBytes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::FixedString128Bytes, bytes) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::FixedString128Bytes) == 0x80, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.FixedString128Bytes, Unity.Collections.Unicode::Rune
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedString128Bytes/Enumerator
struct CORDL_TYPE FixedString128Bytes_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Collections::Unicode_Rune Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Method Dispose, addr 0x68dbac8, size 0x4, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x68dbacc, size 0x48, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x68dbb14, size 0x8, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x68dbb24, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x68da684, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::FixedString128Bytes other);

  /// @brief Method get_Current, addr 0x68dbb1c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Collections::Unicode_Rune get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedString128Bytes_Enumerator();

  // Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::FixedString128Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "current", ty: "::Unity::Collections::Unicode_Rune", modifiers: "", def_value: None, comment: None }]
  constexpr FixedString128Bytes_Enumerator(::Unity::Collections::FixedString128Bytes target, int32_t offset, ::Unity::Collections::Unicode_Rune current) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15850 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field target, offset: 0x0, size: 0x80, def value: None
  ::Unity::Collections::FixedString128Bytes target;

  /// @brief Field offset, offset: 0x80, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field current, offset: 0x84, size: 0x4, def value: None
  ::Unity::Collections::Unicode_Rune current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::FixedString128Bytes_Enumerator, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::FixedString128Bytes_Enumerator, offset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::FixedString128Bytes_Enumerator, current) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::FixedString128Bytes_Enumerator) == 0x88, "Size mismatch!");

} // namespace Unity::Collections

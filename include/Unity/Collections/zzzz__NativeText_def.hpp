#pragma once
// IWYU pragma private; include "Unity/Collections/NativeText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Unicode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeText)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
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
template<typename T>
class IIndexable_1;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
template<typename T>
class INativeList_1;
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
// Dependencies 
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeText/ReadOnly
struct CORDL_TYPE NativeText_ReadOnly {
public:
// Declarations
 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsEmpty, put=set_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_Item, put=set_Item)) uint8_t  Item[];

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr operator  ::System::IComparable_1<::StringW>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::NativeText>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr operator  ::System::IEquatable_1<::StringW>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeText>*() ;

/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr operator  ::Unity::Collections::IIndexable_1<uint8_t>*() ;

/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr operator  ::Unity::Collections::INativeList_1<uint8_t>*() ;

/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr operator  ::Unity::Collections::IUTF8Bytes*() ;

/// @brief Method CheckNull, addr 0x6310268, size 0x54, virtual false, abstract: false, final false
static inline void CheckNull(void*  dataPtr) ;

/// @brief Method CheckRead, addr 0x63102bc, size 0x4, virtual false, abstract: false, final false
inline void CheckRead() ;

/// @brief Method Clear, addr 0x6310210, size 0x4, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method CompareTo, addr 0x631030c, size 0x28, virtual true, abstract: false, final true
inline int32_t CompareTo(::StringW  other) ;

/// @brief Method CompareTo, addr 0x6310878, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes  other) ;

/// @brief Method CompareTo, addr 0x63105a8, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes  other) ;

/// @brief Method CompareTo, addr 0x6310b48, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes  other) ;

/// @brief Method CompareTo, addr 0x63109e0, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes  other) ;

/// @brief Method CompareTo, addr 0x6310710, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes  other) ;

/// @brief Method CompareTo, addr 0x63104f0, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::NativeText  other) ;

/// @brief Method CompareTo, addr 0x6310438, size 0x5c, virtual false, abstract: false, final false
inline int32_t CompareTo(::Unity::Collections::NativeText_ReadOnly  other) ;

/// @brief Method ElementAt, addr 0x6310214, size 0x4c, virtual true, abstract: false, final true
inline ::ByRef<uint8_t> ElementAt(int32_t  index) ;

/// @brief Method Equals, addr 0x6310410, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::StringW  other) ;

/// @brief Method Equals, addr 0x6310d78, size 0x2dc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x63109dc, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString128Bytes  other) ;

/// @brief Method Equals, addr 0x631070c, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString32Bytes  other) ;

/// @brief Method Equals, addr 0x6310cac, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString4096Bytes  other) ;

/// @brief Method Equals, addr 0x6310b44, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString512Bytes  other) ;

/// @brief Method Equals, addr 0x6310874, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString64Bytes  other) ;

/// @brief Method Equals, addr 0x631054c, size 0x5c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::NativeText  other) ;

/// @brief Method Equals, addr 0x6310494, size 0x5c, virtual false, abstract: false, final false
inline bool Equals(::Unity::Collections::NativeText_ReadOnly  other) ;

/// @brief Method ErrorWrite, addr 0x63102c0, size 0x4c, virtual false, abstract: false, final false
inline void ErrorWrite() ;

/// @brief Method GetEnumerator, addr 0x6311058, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeText_Enumerator GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x6310d2c, size 0x4c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetUnsafePtr, addr 0x630fde0, size 0xc, virtual true, abstract: false, final true
inline uint8_t* GetUnsafePtr() ;

/// @brief Method ToString, addr 0x6310cb0, size 0x7c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryResize, addr 0x6310260, size 0x8, virtual true, abstract: false, final true
inline bool TryResize(int32_t  newLength, ::Unity::Collections::NativeArrayOptions  clearOptions) ;

/// @brief Method .ctor, addr 0x630ffe0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeText*  text) ;

/// @brief Method get_Capacity, addr 0x630ffe8, size 0x70, virtual true, abstract: false, final true
inline int32_t get_Capacity() ;

/// @brief Method get_IsEmpty, addr 0x631005c, size 0xe4, virtual true, abstract: false, final true
inline bool get_IsEmpty() ;

/// @brief Method get_Item, addr 0x63101b8, size 0x54, virtual true, abstract: false, final true
inline uint8_t get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x6310144, size 0x70, virtual true, abstract: false, final true
inline int32_t get_Length() ;

/// @brief Method get_Value, addr 0x6311054, size 0x4, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* i___System__IComparable_1___StringW_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* i___System__IComparable_1___Unity__Collections__FixedString128Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* i___System__IComparable_1___Unity__Collections__FixedString32Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* i___System__IComparable_1___Unity__Collections__FixedString512Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* i___System__IComparable_1___Unity__Collections__FixedString64Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr ::System::IComparable_1<::Unity::Collections::NativeText>* i___System__IComparable_1___Unity__Collections__NativeText_() ;

/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr ::System::IEquatable_1<::Unity::Collections::NativeText>* i___System__IEquatable_1___Unity__Collections__NativeText_() ;

/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* i___Unity__Collections__IIndexable_1_uint8_t_() ;

/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* i___Unity__Collections__INativeList_1_uint8_t_() ;

/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* i___Unity__Collections__IUTF8Bytes() ;

/// @brief Method op_Equality, addr 0x63108d4, size 0xf0, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString128Bytes>  b) ;

/// @brief Method op_Equality, addr 0x6310604, size 0xf0, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString32Bytes>  b) ;

/// @brief Method op_Equality, addr 0x6310ba4, size 0xf0, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString4096Bytes>  b) ;

/// @brief Method op_Equality, addr 0x6310a3c, size 0xf0, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString512Bytes>  b) ;

/// @brief Method op_Equality, addr 0x631076c, size 0xf0, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString64Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x63109c4, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString128Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x63106f4, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString32Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x6310c94, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString4096Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x6310b2c, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString512Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x631085c, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText_ReadOnly>  a, ::ByRef<::Unity::Collections::FixedString64Bytes>  b) ;

/// @brief Method set_Capacity, addr 0x6310058, size 0x4, virtual true, abstract: false, final true
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_IsEmpty, addr 0x6310140, size 0x4, virtual false, abstract: false, final false
inline void set_IsEmpty(bool  value) ;

/// @brief Method set_Item, addr 0x631020c, size 0x4, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, uint8_t  value) ;

/// @brief Method set_Length, addr 0x63101b4, size 0x4, virtual true, abstract: false, final true
inline void set_Length(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeText_ReadOnly() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: None }]
constexpr NativeText_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeText*  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15680};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeText*  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeText_ReadOnly, m_Data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeText_ReadOnly, 0x8>, "Size mismatch!");

} // namespace end def Unity::Collections
// Dependencies Unity.Collections.NativeText::ReadOnly, Unity.Collections.Unicode::Rune
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeText/Enumerator
struct CORDL_TYPE NativeText_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::Unity::Collections::Unicode_Rune  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x630fccc, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x630fcd0, size 0x110, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x630ff70, size 0x8, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x630ff78, size 0x60, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x630ef0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeText  source) ;

/// @brief Method .ctor, addr 0x630fcc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeText_ReadOnly  source) ;

/// @brief Method get_Current, addr 0x630ffd8, size 0x8, virtual true, abstract: false, final true
inline ::Unity::Collections::Unicode_Rune get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::Unicode_Rune>* i___System__Collections__Generic__IEnumerator_1___Unity__Collections__Unicode_Rune_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeText_Enumerator() ;

// Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeText_ReadOnly", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "current", ty: "::Unity::Collections::Unicode_Rune", modifiers: "", def_value: None }]
constexpr NativeText_Enumerator(::Unity::Collections::NativeText_ReadOnly  target, int32_t  offset, ::Unity::Collections::Unicode_Rune  current) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15679};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field target, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeText_ReadOnly  target;

/// @brief Field offset, offset: 0x8, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field current, offset: 0xc, size: 0x4, def value: None
 ::Unity::Collections::Unicode_Rune  current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeText_Enumerator, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeText_Enumerator, offset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeText_Enumerator, current) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeText_Enumerator, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections
// Dependencies 
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeText
struct CORDL_TYPE NativeText {
public:
// Declarations
using Enumerator = ::Unity::Collections::NativeText_Enumerator;

using ReadOnly = ::Unity::Collections::NativeText_ReadOnly;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_Item, put=set_Item)) uint8_t  Item[];

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr operator  ::System::IComparable_1<::StringW>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::NativeText>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr operator  ::System::IEquatable_1<::StringW>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeText>*() ;

/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr operator  ::Unity::Collections::IIndexable_1<uint8_t>*() ;

/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
constexpr operator  ::Unity::Collections::INativeDisposable*() ;

/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr operator  ::Unity::Collections::INativeList_1<uint8_t>*() ;

/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr operator  ::Unity::Collections::IUTF8Bytes*() ;

/// @brief Method Add, addr 0x630eb04, size 0xc4, virtual false, abstract: false, final false
inline void Add(::ByRef<uint8_t>  value) ;

/// @brief Method AsReadOnly, addr 0x630fcbc, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeText_ReadOnly AsReadOnly() ;

/// @brief Method CheckIndexInRange, addr 0x630fae0, size 0x15c, virtual false, abstract: false, final false
inline void CheckIndexInRange(int32_t  index) ;

/// @brief Method CheckNull, addr 0x630fa80, size 0x54, virtual false, abstract: false, final false
static inline void CheckNull(void*  dataPtr) ;

/// @brief Method CheckRead, addr 0x630fad4, size 0x4, virtual false, abstract: false, final false
inline void CheckRead() ;

/// @brief Method CheckWrite, addr 0x630fad8, size 0x4, virtual false, abstract: false, final false
inline void CheckWrite() ;

/// @brief Method CheckWriteAndBumpSecondaryVersion, addr 0x630fadc, size 0x4, virtual false, abstract: false, final false
inline void CheckWriteAndBumpSecondaryVersion() ;

/// @brief Method Clear, addr 0x630eaf8, size 0xc, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method CompareTo, addr 0x630ef14, size 0x24, virtual true, abstract: false, final true
inline int32_t CompareTo(::StringW  other) ;

/// @brief Method CompareTo, addr 0x630f2a8, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes  other) ;

/// @brief Method CompareTo, addr 0x630ef5c, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes  other) ;

/// @brief Method CompareTo, addr 0x630f5c8, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes  other) ;

/// @brief Method CompareTo, addr 0x630f438, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes  other) ;

/// @brief Method CompareTo, addr 0x630f118, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes  other) ;

/// @brief Method CompareTo, addr 0x630ebc8, size 0x5c, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::NativeText  other) ;

/// @brief Method CompareTo, addr 0x630ec80, size 0x60, virtual false, abstract: false, final false
inline int32_t CompareTo(::Unity::Collections::NativeText_ReadOnly  other) ;

/// @brief Method Dispose, addr 0x630ee04, size 0x7c, virtual true, abstract: false, final true
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method Dispose, addr 0x630ed3c, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ElementAt, addr 0x630eaa4, size 0x54, virtual true, abstract: false, final true
inline ::ByRef<uint8_t> ElementAt(int32_t  index) ;

/// @brief Method Equals, addr 0x630ef38, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::StringW  other) ;

/// @brief Method Equals, addr 0x630f7a4, size 0x2dc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x630f434, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString128Bytes  other) ;

/// @brief Method Equals, addr 0x630f114, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString32Bytes  other) ;

/// @brief Method Equals, addr 0x630f754, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString4096Bytes  other) ;

/// @brief Method Equals, addr 0x630f5c4, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString512Bytes  other) ;

/// @brief Method Equals, addr 0x630f2a4, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString64Bytes  other) ;

/// @brief Method Equals, addr 0x630ec24, size 0x5c, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::NativeText  other) ;

/// @brief Method Equals, addr 0x630ece0, size 0x5c, virtual false, abstract: false, final false
inline bool Equals(::Unity::Collections::NativeText_ReadOnly  other) ;

/// @brief Method GetEnumerator, addr 0x630ef00, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeText_Enumerator GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x630f758, size 0x4c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetUnsafePtr, addr 0x630de90, size 0xc, virtual true, abstract: false, final true
inline uint8_t* GetUnsafePtr() ;

/// @brief Method ThrowCopyError, addr 0x630fc3c, size 0x80, virtual false, abstract: false, final false
inline void ThrowCopyError(::Unity::Collections::CopyError  error, ::StringW  source) ;

/// @brief Method ToString, addr 0x630ee84, size 0x7c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryResize, addr 0x630e898, size 0x18, virtual true, abstract: false, final true
inline bool TryResize(int32_t  newLength, ::Unity::Collections::NativeArrayOptions  clearOptions) ;

/// @brief Method .ctor, addr 0x630e0c8, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x630e124, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x630df9c, size 0x64, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x630de24, size 0x64, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x630e468, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString128Bytes>  source, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x630e378, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString128Bytes>  source, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x630e278, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString32Bytes>  source, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x630e180, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString32Bytes>  source, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x630e658, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString4096Bytes>  source, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x630e568, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString4096Bytes>  source, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x630e560, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString512Bytes>  source, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x630e470, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString512Bytes>  source, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x630e370, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString64Bytes>  source, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x630e280, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::ByRef<::Unity::Collections::FixedString64Bytes>  source, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method .ctor, addr 0x630dce8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  source, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method .ctor, addr 0x630dcf0, size 0x134, virtual false, abstract: false, final false
inline void _ctor(::StringW  source, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method get_Capacity, addr 0x630e79c, size 0x70, virtual true, abstract: false, final true
inline int32_t get_Capacity() ;

/// @brief Method get_IsCreated, addr 0x630e994, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_IsEmpty, addr 0x630e8b0, size 0xe4, virtual true, abstract: false, final true
inline bool get_IsEmpty() ;

/// @brief Method get_Item, addr 0x630e9a4, size 0x54, virtual true, abstract: false, final true
inline uint8_t get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x630e660, size 0x70, virtual true, abstract: false, final true
inline int32_t get_Length() ;

/// @brief Method get_Value, addr 0x630ee80, size 0x4, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* i___System__IComparable_1___StringW_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* i___System__IComparable_1___Unity__Collections__FixedString128Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* i___System__IComparable_1___Unity__Collections__FixedString32Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* i___System__IComparable_1___Unity__Collections__FixedString512Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* i___System__IComparable_1___Unity__Collections__FixedString64Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::NativeText>"
constexpr ::System::IComparable_1<::Unity::Collections::NativeText>* i___System__IComparable_1___Unity__Collections__NativeText_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeText>"
constexpr ::System::IEquatable_1<::Unity::Collections::NativeText>* i___System__IEquatable_1___Unity__Collections__NativeText_() ;

/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* i___Unity__Collections__IIndexable_1_uint8_t_() ;

/// @brief Convert to "::Unity::Collections::INativeDisposable"
constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable() ;

/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* i___Unity__Collections__INativeList_1_uint8_t_() ;

/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* i___Unity__Collections__IUTF8Bytes() ;

/// @brief Method op_Equality, addr 0x630f304, size 0x118, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString128Bytes>  b) ;

/// @brief Method op_Equality, addr 0x630efb8, size 0x118, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString32Bytes>  b) ;

/// @brief Method op_Equality, addr 0x630f624, size 0x118, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString4096Bytes>  b) ;

/// @brief Method op_Equality, addr 0x630f494, size 0x118, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString512Bytes>  b) ;

/// @brief Method op_Equality, addr 0x630f174, size 0x118, virtual false, abstract: false, final false
static inline bool op_Equality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString64Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x630f41c, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString128Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x630f0fc, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString32Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x630f73c, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString4096Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x630f5ac, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString512Bytes>  b) ;

/// @brief Method op_Inequality, addr 0x630f28c, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::ByRef<::Unity::Collections::NativeText>  a, ::ByRef<::Unity::Collections::FixedString64Bytes>  b) ;

/// @brief Method set_Capacity, addr 0x630e80c, size 0x8, virtual true, abstract: false, final true
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x630ea4c, size 0x58, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, uint8_t  value) ;

/// @brief Method set_Length, addr 0x630de88, size 0x8, virtual true, abstract: false, final true
inline void set_Length(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeText() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeText*", modifiers: "", def_value: None }]
constexpr NativeText(::Unity::Collections::LowLevel::Unsafe::UnsafeText*  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeText*  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeText, m_Data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeText, 0x8>, "Size mismatch!");

} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeText, "Unity.Collections", "NativeText");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeText_Enumerator, "Unity.Collections", "NativeText/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeText_ReadOnly, "Unity.Collections", "NativeText/ReadOnly");

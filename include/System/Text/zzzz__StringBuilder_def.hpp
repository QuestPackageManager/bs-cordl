#pragma once
// IWYU pragma private; include "System/Text/StringBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StringBuilder)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
struct ParamsArray;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Text {
class StringBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::StringBuilder);
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.StringBuilder
class CORDL_TYPE StringBuilder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Chars, put = set_Chars)) char16_t Chars[];

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  __declspec(property(get = get_MaxCapacity)) int32_t MaxCapacity;

  __declspec(property(get = get_RemainingCurrentChunk)) ::System::Span_1<char16_t> RemainingCurrentChunk;

  /// @brief Field m_ChunkChars, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChunkChars, put = __cordl_internal_set_m_ChunkChars)) ::ArrayW<char16_t, ::Array<char16_t>*> m_ChunkChars;

  /// @brief Field m_ChunkLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChunkLength, put = __cordl_internal_set_m_ChunkLength)) int32_t m_ChunkLength;

  /// @brief Field m_ChunkOffset, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChunkOffset, put = __cordl_internal_set_m_ChunkOffset)) int32_t m_ChunkOffset;

  /// @brief Field m_ChunkPrevious, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChunkPrevious, put = __cordl_internal_set_m_ChunkPrevious)) ::System::Text::StringBuilder* m_ChunkPrevious;

  /// @brief Field m_MaxCapacity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxCapacity, put = __cordl_internal_set_m_MaxCapacity)) int32_t m_MaxCapacity;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Append, addr 0x592a2bc, size 0x28, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method Append, addr 0x5928f90, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t startIndex, int32_t charCount);

  /// @brief Method Append, addr 0x592921c, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::StringW value);

  /// @brief Method Append, addr 0x592931c, size 0x114, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method Append, addr 0x592a284, size 0x38, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::System::Object* value);

  /// @brief Method Append, addr 0x592a2e4, size 0x80, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method Append, addr 0x5929430, size 0x24, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* value);

  /// @brief Method Append, addr 0x5929fc8, size 0x44, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(bool value);

  /// @brief Method Append, addr 0x592a00c, size 0x50, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(char16_t value);

  /// @brief Method Append, addr 0x5928b68, size 0x130, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(char16_t value, int32_t repeatCount);

  /// @brief Method Append, addr 0x59290cc, size 0x150, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(char16_t* value, int32_t valueCount);

  /// @brief Method Append, addr 0x592a1cc, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(double_t value);

  /// @brief Method Append, addr 0x592a170, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(float_t value);

  /// @brief Method Append, addr 0x592a0b8, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(int32_t value);

  /// @brief Method Append, addr 0x592a114, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(int64_t value);

  /// @brief Method Append, addr 0x592a228, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(uint32_t value);

  /// @brief Method Append, addr 0x592a05c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(uint8_t value);

  /// @brief Method AppendCore, addr 0x5929454, size 0x204, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendCore(::System::Text::StringBuilder* value, int32_t startIndex, int32_t count);

  /// @brief Method AppendFormat, addr 0x592a538, size 0x50, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::System::Object* arg0);

  /// @brief Method AppendFormat, addr 0x592b0d0, size 0x54, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method AppendFormat, addr 0x592b124, size 0x58, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method AppendFormat, addr 0x592b17c, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method AppendFormat, addr 0x592b248, size 0x54, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0);

  /// @brief Method AppendFormat, addr 0x592b29c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method AppendFormatHelper, addr 0x592a588, size 0xb48, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormatHelper(::System::IFormatProvider* provider, ::StringW format, ::System::ParamsArray args);

  /// @brief Method AppendHelper, addr 0x5929304, size 0x18, virtual false, abstract: false, final false
  inline void AppendHelper(::StringW value);

  /// @brief Method AppendLine, addr 0x5929658, size 0x20, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendLine();

  /// @brief Method AppendLine, addr 0x5929678, size 0x24, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendLine(::StringW value);

  /// @brief Method AppendSpanFormattable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Text::StringBuilder* AppendSpanFormattable(T value);

  /// @brief Method Clear, addr 0x5928920, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Clear();

  /// @brief Method CopyTo, addr 0x5928760, size 0x1c0, virtual false, abstract: false, final false
  inline void CopyTo(int32_t sourceIndex, ::System::Span_1<char16_t> destination, int32_t count);

  /// @brief Method EnsureCapacity, addr 0x5928404, size 0xb4, virtual false, abstract: false, final false
  inline int32_t EnsureCapacity(int32_t capacity);

  /// @brief Method ExpandByABlock, addr 0x5928e00, size 0x190, virtual false, abstract: false, final false
  inline void ExpandByABlock(int32_t minBlockCharCount);

  /// @brief Method FindChunkForIndex, addr 0x5928c98, size 0x28, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* FindChunkForIndex(int32_t index);

  /// @brief Method FormatError, addr 0x592b2f8, size 0x4c, virtual false, abstract: false, final false
  static inline void FormatError();

  /// @brief Method Insert, addr 0x592a364, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Insert(int32_t index, ::StringW value);

  /// @brief Method Insert, addr 0x5929830, size 0x15c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Insert(int32_t index, ::StringW value, int32_t count);

  /// @brief Method Insert, addr 0x592a4d0, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Insert(int32_t index, char16_t value);

  /// @brief Method Insert, addr 0x592a4fc, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Insert(int32_t index, int32_t value);

  /// @brief Method Insert, addr 0x592a400, size 0xd0, virtual false, abstract: false, final false
  inline void Insert(int32_t index, char16_t* value, int32_t valueCount);

  /// @brief Method MakeRoom, addr 0x592998c, size 0x2a4, virtual false, abstract: false, final false
  inline void MakeRoom(int32_t index, int32_t count, ::ByRef<::System::Text::StringBuilder*> chunk, ::ByRef<int32_t> indexInChunk, bool doNotMoveFollowingChars);

  static inline ::System::Text::StringBuilder* New_ctor();

  static inline ::System::Text::StringBuilder* New_ctor(int32_t capacity);

  static inline ::System::Text::StringBuilder* New_ctor(int32_t capacity, int32_t maxCapacity);

  static inline ::System::Text::StringBuilder* New_ctor(::System::Text::StringBuilder* from);

  static inline ::System::Text::StringBuilder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Text::StringBuilder* New_ctor(int32_t size, int32_t maxCapacity, ::System::Text::StringBuilder* previousBlock);

  static inline ::System::Text::StringBuilder* New_ctor(::StringW value);

  static inline ::System::Text::StringBuilder* New_ctor(::StringW value, int32_t capacity);

  static inline ::System::Text::StringBuilder* New_ctor(::StringW value, int32_t startIndex, int32_t length, int32_t capacity);

  /// @brief Method Next, addr 0x592b8c0, size 0x40, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Next(::System::Text::StringBuilder* chunk);

  /// @brief Method Remove, addr 0x5929d44, size 0x130, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Remove(int32_t startIndex, int32_t length);

  /// @brief Method Remove, addr 0x5929e74, size 0x154, virtual false, abstract: false, final false
  inline void Remove(int32_t startIndex, int32_t count, ::ByRef<::System::Text::StringBuilder*> chunk, ::ByRef<int32_t> indexInChunk);

  /// @brief Method Replace, addr 0x592b344, size 0x10, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Replace(::StringW oldValue, ::StringW newValue);

  /// @brief Method Replace, addr 0x592b354, size 0x300, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Replace(::StringW oldValue, ::StringW newValue, int32_t startIndex, int32_t count);

  /// @brief Method ReplaceAllInChunk, addr 0x592b730, size 0x190, virtual false, abstract: false, final false
  inline void ReplaceAllInChunk(::ArrayW<int32_t, ::Array<int32_t>*> replacements, int32_t replacementsCount, ::System::Text::StringBuilder* sourceChunk, int32_t removeCount, ::StringW value);

  /// @brief Method ReplaceInPlaceAtChunk, addr 0x5929c30, size 0x114, virtual false, abstract: false, final false
  inline void ReplaceInPlaceAtChunk(::ByRef<::System::Text::StringBuilder*> chunk, ::ByRef<int32_t> indexInChunk, char16_t* value, int32_t count);

  /// @brief Method StartsWith, addr 0x592b654, size 0xdc, virtual false, abstract: false, final false
  inline bool StartsWith(::System::Text::StringBuilder* chunk, int32_t indexInChunk, int32_t count, ::StringW value);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x5928100, size 0x154, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ThreadSafeCopy, addr 0x592969c, size 0x194, virtual false, abstract: false, final false
  static inline void ThreadSafeCopy(::ArrayW<char16_t, ::Array<char16_t>*> source, int32_t sourceIndex, ::System::Span_1<char16_t> destination, int32_t destinationIndex, int32_t count);

  /// @brief Method ThreadSafeCopy, addr 0x5927d18, size 0xec, virtual false, abstract: false, final false
  static inline void ThreadSafeCopy(char16_t* sourcePtr, ::ArrayW<char16_t, ::Array<char16_t>*> destination, int32_t destinationIndex, int32_t count);

  /// @brief Method ToString, addr 0x59284b8, size 0x118, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x59285d0, size 0x190, virtual false, abstract: false, final false
  inline ::StringW ToString(int32_t startIndex, int32_t length);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_m_ChunkChars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_m_ChunkChars();

  constexpr int32_t const& __cordl_internal_get_m_ChunkLength() const;

  constexpr int32_t& __cordl_internal_get_m_ChunkLength();

  constexpr int32_t const& __cordl_internal_get_m_ChunkOffset() const;

  constexpr int32_t& __cordl_internal_get_m_ChunkOffset();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_m_ChunkPrevious() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_m_ChunkPrevious();

  constexpr int32_t const& __cordl_internal_get_m_MaxCapacity() const;

  constexpr int32_t& __cordl_internal_get_m_MaxCapacity();

  constexpr void __cordl_internal_set_m_ChunkChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_m_ChunkLength(int32_t value);

  constexpr void __cordl_internal_set_m_ChunkOffset(int32_t value);

  constexpr void __cordl_internal_set_m_ChunkPrevious(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_m_MaxCapacity(int32_t value);

  /// @brief Method .ctor, addr 0x5927894, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x59278f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x59278f8, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, int32_t maxCapacity);

  /// @brief Method .ctor, addr 0x592b970, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::StringBuilder* from);

  /// @brief Method .ctor, addr 0x5927e04, size 0x2fc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x592b998, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, int32_t maxCapacity, ::System::Text::StringBuilder* previousBlock);

  /// @brief Method .ctor, addr 0x5927ab4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method .ctor, addr 0x5927ad0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, int32_t capacity);

  /// @brief Method .ctor, addr 0x5927aec, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, int32_t startIndex, int32_t length, int32_t capacity);

  /// @brief Method get_Capacity, addr 0x5928254, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Chars, addr 0x5928cc0, size 0x88, virtual false, abstract: false, final false
  inline char16_t get_Chars(int32_t index);

  /// @brief Method get_Length, addr 0x59283f0, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_MaxCapacity, addr 0x59283fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxCapacity();

  /// @brief Method get_RemainingCurrentChunk, addr 0x592b900, size 0x70, virtual false, abstract: false, final false
  inline ::System::Span_1<char16_t> get_RemainingCurrentChunk();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method set_Capacity, addr 0x5928274, size 0x17c, virtual false, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Chars, addr 0x5928d48, size 0xb8, virtual false, abstract: false, final false
  inline void set_Chars(int32_t index, char16_t value);

  /// @brief Method set_Length, addr 0x592893c, size 0x22c, virtual false, abstract: false, final false
  inline void set_Length(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringBuilder(StringBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringBuilder(StringBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2872 };

  /// @brief Field m_ChunkChars, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___m_ChunkChars;

  /// @brief Field m_ChunkPrevious, offset: 0x18, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___m_ChunkPrevious;

  /// @brief Field m_ChunkLength, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_ChunkLength;

  /// @brief Field m_ChunkOffset, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_ChunkOffset;

  /// @brief Field m_MaxCapacity, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_MaxCapacity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkChars) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkPrevious) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_MaxCapacity) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::StringBuilder, 0x30>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::StringBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::StringBuilder*, "System.Text", "StringBuilder");

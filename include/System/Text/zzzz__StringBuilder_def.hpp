#pragma once
// IWYU pragma private; include "System/Text/StringBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StringBuilder)
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
// Dependencies System.Object, System.Runtime.Serialization.ISerializable
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

  /// @brief Method Append, addr 0x3c7f128, size 0x28, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method Append, addr 0x3c7e2b4, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t startIndex, int32_t charCount);

  /// @brief Method Append, addr 0x3c7e540, size 0x104, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::StringW value);

  /// @brief Method Append, addr 0x3c7e67c, size 0x138, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method Append, addr 0x3c7f0f0, size 0x38, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::System::Object* value);

  /// @brief Method Append, addr 0x3c7f150, size 0x88, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method Append, addr 0x3c7e7b4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* value);

  /// @brief Method Append, addr 0x3c7e3f0, size 0x150, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(::cordl_internals::Ptr<char16_t> value, int32_t valueCount);

  /// @brief Method Append, addr 0x3c7ee18, size 0x78, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(bool value);

  /// @brief Method Append, addr 0x3c7ee90, size 0x50, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(char16_t value);

  /// @brief Method Append, addr 0x3c7de84, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(char16_t value, int32_t repeatCount);

  /// @brief Method Append, addr 0x3c7f040, size 0x58, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(double_t value);

  /// @brief Method Append, addr 0x3c7efe8, size 0x58, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(float_t value);

  /// @brief Method Append, addr 0x3c7ef38, size 0x58, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(int32_t value);

  /// @brief Method Append, addr 0x3c7ef90, size 0x58, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(int64_t value);

  /// @brief Method Append, addr 0x3c7f098, size 0x58, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(uint32_t value);

  /// @brief Method Append, addr 0x3c7eee0, size 0x58, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Append(uint8_t value);

  /// @brief Method AppendCore, addr 0x3c7e7d0, size 0x218, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendCore(::System::Text::StringBuilder* value, int32_t startIndex, int32_t count);

  /// @brief Method AppendFormat, addr 0x3c7f384, size 0x58, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::System::Object* arg0);

  /// @brief Method AppendFormat, addr 0x3c7fef8, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method AppendFormat, addr 0x3c7ff54, size 0x60, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method AppendFormat, addr 0x3c7ffb4, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method AppendFormat, addr 0x3c80068, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0);

  /// @brief Method AppendFormat, addr 0x3c800c4, size 0x64, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormat(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method AppendFormatHelper, addr 0x3c7f3dc, size 0xb1c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendFormatHelper(::System::IFormatProvider* provider, ::StringW format, ::System::ParamsArray args);

  /// @brief Method AppendHelper, addr 0x3c7e644, size 0x38, virtual false, abstract: false, final false
  inline void AppendHelper(::StringW value);

  /// @brief Method AppendLine, addr 0x3c7e9e8, size 0x20, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendLine();

  /// @brief Method AppendLine, addr 0x3c7ea08, size 0x24, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* AppendLine(::StringW value);

  /// @brief Method AppendSpanFormattable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Text::StringBuilder* AppendSpanFormattable(T value);

  /// @brief Method Clear, addr 0x3c7dc20, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Clear();

  /// @brief Method CopyTo, addr 0x3c7da54, size 0x1cc, virtual false, abstract: false, final false
  inline void CopyTo(int32_t sourceIndex, ::System::Span_1<char16_t> destination, int32_t count);

  /// @brief Method EnsureCapacity, addr 0x3c7d6cc, size 0xb4, virtual false, abstract: false, final false
  inline int32_t EnsureCapacity(int32_t capacity);

  /// @brief Method ExpandByABlock, addr 0x3c7e128, size 0x18c, virtual false, abstract: false, final false
  inline void ExpandByABlock(int32_t minBlockCharCount);

  /// @brief Method FindChunkForIndex, addr 0x3c7dfc0, size 0x28, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* FindChunkForIndex(int32_t index);

  /// @brief Method FormatError, addr 0x3c80128, size 0x4c, virtual false, abstract: false, final false
  static inline void FormatError();

  /// @brief Method Insert, addr 0x3c7f1d8, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Insert(int32_t index, ::StringW value);

  /// @brief Method Insert, addr 0x3c7f358, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Insert(int32_t index, char16_t value);

  /// @brief Method Insert, addr 0x3c7f288, size 0xd0, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::cordl_internals::Ptr<char16_t> value, int32_t valueCount);

  /// @brief Method MakeRoom, addr 0x3c8072c, size 0x2ac, virtual false, abstract: false, final false
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

  /// @brief Method Next, addr 0x3c80ae0, size 0x40, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Next(::System::Text::StringBuilder* chunk);

  /// @brief Method Remove, addr 0x3c7eb94, size 0x134, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Remove(int32_t startIndex, int32_t length);

  /// @brief Method Remove, addr 0x3c7ecc8, size 0x150, virtual false, abstract: false, final false
  inline void Remove(int32_t startIndex, int32_t count, ::ByRef<::System::Text::StringBuilder*> chunk, ::ByRef<int32_t> indexInChunk);

  /// @brief Method Replace, addr 0x3c80174, size 0x10, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Replace(::StringW oldValue, ::StringW newValue);

  /// @brief Method Replace, addr 0x3c80184, size 0x314, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* Replace(::StringW oldValue, ::StringW newValue, int32_t startIndex, int32_t count);

  /// @brief Method ReplaceAllInChunk, addr 0x3c80570, size 0x1bc, virtual false, abstract: false, final false
  inline void ReplaceAllInChunk(::ArrayW<int32_t, ::Array<int32_t>*> replacements, int32_t replacementsCount, ::System::Text::StringBuilder* sourceChunk, int32_t removeCount, ::StringW value);

  /// @brief Method ReplaceInPlaceAtChunk, addr 0x3c809d8, size 0x108, virtual false, abstract: false, final false
  inline void ReplaceInPlaceAtChunk(::ByRef<::System::Text::StringBuilder*> chunk, ::ByRef<int32_t> indexInChunk, ::cordl_internals::Ptr<char16_t> value, int32_t count);

  /// @brief Method StartsWith, addr 0x3c80498, size 0xd8, virtual false, abstract: false, final false
  inline bool StartsWith(::System::Text::StringBuilder* chunk, int32_t indexInChunk, int32_t count, ::StringW value);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3c7d3e0, size 0x144, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ThreadSafeCopy, addr 0x3c7ea2c, size 0x168, virtual false, abstract: false, final false
  static inline void ThreadSafeCopy(::ArrayW<char16_t, ::Array<char16_t>*> source, int32_t sourceIndex, ::System::Span_1<char16_t> destination, int32_t destinationIndex, int32_t count);

  /// @brief Method ThreadSafeCopy, addr 0x3c7d028, size 0xc8, virtual false, abstract: false, final false
  static inline void ThreadSafeCopy(::cordl_internals::Ptr<char16_t> sourcePtr, ::ArrayW<char16_t, ::Array<char16_t>*> destination, int32_t destinationIndex, int32_t count);

  /// @brief Method ToString, addr 0x3c7d780, size 0x13c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3c7d8bc, size 0x198, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x3c7cb70, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c7cbd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x3c7cbdc, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, int32_t maxCapacity);

  /// @brief Method .ctor, addr 0x3c80b88, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::StringBuilder* from);

  /// @brief Method .ctor, addr 0x3c7d0f0, size 0x2f0, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3c80bd4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, int32_t maxCapacity, ::System::Text::StringBuilder* previousBlock);

  /// @brief Method .ctor, addr 0x3c7cda4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method .ctor, addr 0x3c7cdc0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, int32_t capacity);

  /// @brief Method .ctor, addr 0x3c7cddc, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, int32_t startIndex, int32_t length, int32_t capacity);

  /// @brief Method get_Capacity, addr 0x3c7d524, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Chars, addr 0x3c7dfe8, size 0x88, virtual false, abstract: false, final false
  inline char16_t get_Chars(int32_t index);

  /// @brief Method get_Length, addr 0x3c7d6b8, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_MaxCapacity, addr 0x3c7d6c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxCapacity();

  /// @brief Method get_RemainingCurrentChunk, addr 0x3c80b20, size 0x68, virtual false, abstract: false, final false
  inline ::System::Span_1<char16_t> get_RemainingCurrentChunk();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method set_Capacity, addr 0x3c7d548, size 0x170, virtual false, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Chars, addr 0x3c7e070, size 0xb8, virtual false, abstract: false, final false
  inline void set_Chars(int32_t index, char16_t value);

  /// @brief Method set_Length, addr 0x3c7dc3c, size 0x248, virtual false, abstract: false, final false
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

  /// @brief Field CapacityField offset 0xffffffff size 0x8
  static constexpr ::ConstString CapacityField{ u"Capacity" };

  /// @brief Field DefaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCapacity{ static_cast<int32_t>(0x10) };

  /// @brief Field IndexLimit offset 0xffffffff size 0x4
  static constexpr int32_t IndexLimit{ static_cast<int32_t>(0xf4240) };

  /// @brief Field MaxCapacityField offset 0xffffffff size 0x8
  static constexpr ::ConstString MaxCapacityField{ u"m_MaxCapacity" };

  /// @brief Field MaxChunkSize offset 0xffffffff size 0x4
  static constexpr int32_t MaxChunkSize{ static_cast<int32_t>(0x1f40) };

  /// @brief Field StringValueField offset 0xffffffff size 0x8
  static constexpr ::ConstString StringValueField{ u"m_StringValue" };

  /// @brief Field ThreadIDField offset 0xffffffff size 0x8
  static constexpr ::ConstString ThreadIDField{ u"m_currentThread" };

  /// @brief Field WidthLimit offset 0xffffffff size 0x4
  static constexpr int32_t WidthLimit{ static_cast<int32_t>(0xf4240) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2856 };

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

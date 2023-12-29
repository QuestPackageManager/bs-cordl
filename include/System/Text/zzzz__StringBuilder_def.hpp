#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StringBuilder)
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
struct ParamsArray;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Text {
class StringBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::StringBuilder);
// Type: System.Text::StringBuilder
// SizeInfo { instance_size: 48, native_size: 8, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2849))
// CS Name: ::System.Text::StringBuilder*
class CORDL_TYPE StringBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ChunkChars, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ChunkChars, put = __set_m_ChunkChars))::ArrayW<char16_t, ::Array<char16_t>*> m_ChunkChars;

  /// @brief Field m_ChunkPrevious, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ChunkPrevious, put = __set_m_ChunkPrevious))::System::Text::StringBuilder* m_ChunkPrevious;

  /// @brief Field m_ChunkLength, offset 0x20, size 0x4
  __declspec(property(get = __get_m_ChunkLength, put = __set_m_ChunkLength)) int32_t m_ChunkLength;

  /// @brief Field m_ChunkOffset, offset 0x24, size 0x4
  __declspec(property(get = __get_m_ChunkOffset, put = __set_m_ChunkOffset)) int32_t m_ChunkOffset;

  /// @brief Field m_MaxCapacity, offset 0x28, size 0x4
  __declspec(property(get = __get_m_MaxCapacity, put = __set_m_MaxCapacity)) int32_t m_MaxCapacity;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_MaxCapacity)) int32_t MaxCapacity;

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  __declspec(property(get = get_Chars, put = set_Chars)) char16_t Chars[];

  __declspec(property(get = get_RemainingCurrentChunk))::System::Span_1<char16_t> RemainingCurrentChunk;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_m_ChunkChars();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_m_ChunkChars() const;

  constexpr void __set_m_ChunkChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::System::Text::StringBuilder*& __get_m_ChunkPrevious();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get_m_ChunkPrevious() const;

  constexpr void __set_m_ChunkPrevious(::System::Text::StringBuilder* value);

  constexpr int32_t& __get_m_ChunkLength();

  constexpr int32_t const& __get_m_ChunkLength() const;

  constexpr void __set_m_ChunkLength(int32_t value);

  constexpr int32_t& __get_m_ChunkOffset();

  constexpr int32_t const& __get_m_ChunkOffset() const;

  constexpr void __set_m_ChunkOffset(int32_t value);

  constexpr int32_t& __get_m_MaxCapacity();

  constexpr int32_t const& __get_m_MaxCapacity() const;

  constexpr void __set_m_MaxCapacity(int32_t value);

  static inline ::System::Text::StringBuilder* New_ctor();

  /// @brief Method .ctor addr 0x22df740 size 0x64 virtual false final false
  inline void _ctor();

  static inline ::System::Text::StringBuilder* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x22df7a4 size 0x8 virtual false final false
  inline void _ctor(int32_t capacity);

  static inline ::System::Text::StringBuilder* New_ctor(::StringW value);

  /// @brief Method .ctor addr 0x22df980 size 0x1c virtual false final false
  inline void _ctor(::StringW value);

  static inline ::System::Text::StringBuilder* New_ctor(::StringW value, int32_t capacity);

  /// @brief Method .ctor addr 0x22df99c size 0x1c virtual false final false
  inline void _ctor(::StringW value, int32_t capacity);

  static inline ::System::Text::StringBuilder* New_ctor(::StringW value, int32_t startIndex, int32_t length, int32_t capacity);

  /// @brief Method .ctor addr 0x22df9b8 size 0x25c virtual false final false
  inline void _ctor(::StringW value, int32_t startIndex, int32_t length, int32_t capacity);

  static inline ::System::Text::StringBuilder* New_ctor(int32_t capacity, int32_t maxCapacity);

  /// @brief Method .ctor addr 0x22df7ac size 0x1d4 virtual false final false
  inline void _ctor(int32_t capacity, int32_t maxCapacity);

  static inline ::System::Text::StringBuilder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x22dfce0 size 0x2fc virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x22dffdc size 0x148 virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Capacity addr 0x22e0124 size 0x24 virtual false final false
  inline int32_t get_Capacity();

  /// @brief Method set_Capacity addr 0x22e0148 size 0x17c virtual false final false
  inline void set_Capacity(int32_t value);

  /// @brief Method get_MaxCapacity addr 0x22e02d0 size 0x8 virtual false final false
  inline int32_t get_MaxCapacity();

  /// @brief Method EnsureCapacity addr 0x22e02d8 size 0xb8 virtual false final false
  inline int32_t EnsureCapacity(int32_t capacity);

  /// @brief Method ToString addr 0x22e0390 size 0x140 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x22e04d0 size 0x1d4 virtual false final false
  inline ::StringW ToString(int32_t startIndex, int32_t length);

  /// @brief Method Clear addr 0x22e087c size 0x1c virtual false final false
  inline ::System::Text::StringBuilder* Clear();

  /// @brief Method get_Length addr 0x22e02c4 size 0xc virtual false final false
  inline int32_t get_Length();

  /// @brief Method set_Length addr 0x22e0898 size 0x250 virtual false final false
  inline void set_Length(int32_t value);

  /// @brief Method get_Chars addr 0x22e0c54 size 0x90 virtual false final false
  inline char16_t get_Chars(int32_t index);

  /// @brief Method set_Chars addr 0x22e0ce4 size 0xbc virtual false final false
  inline void set_Chars(int32_t index, char16_t value);

  /// @brief Method Append addr 0x22e0ae8 size 0x144 virtual false final false
  inline ::System::Text::StringBuilder* Append(char16_t value, int32_t repeatCount);

  /// @brief Method Append addr 0x22e0f40 size 0x14c virtual false final false
  inline ::System::Text::StringBuilder* Append(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t startIndex, int32_t charCount);

  /// @brief Method Append addr 0x22e11e4 size 0x104 virtual false final false
  inline ::System::Text::StringBuilder* Append(::StringW value);

  /// @brief Method AppendHelper addr 0x22e12e8 size 0x38 virtual false final false
  inline void AppendHelper(::StringW value);

  /// @brief Method Append addr 0x22e1320 size 0x144 virtual false final false
  inline ::System::Text::StringBuilder* Append(::StringW value, int32_t startIndex, int32_t count);

  /// @brief Method Append addr 0x22e1464 size 0x1c virtual false final false
  inline ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* value);

  /// @brief Method AppendCore addr 0x22e1480 size 0x254 virtual false final false
  inline ::System::Text::StringBuilder* AppendCore(::System::Text::StringBuilder* value, int32_t startIndex, int32_t count);

  /// @brief Method AppendLine addr 0x22e16d4 size 0x20 virtual false final false
  inline ::System::Text::StringBuilder* AppendLine();

  /// @brief Method AppendLine addr 0x22e16f4 size 0x24 virtual false final false
  inline ::System::Text::StringBuilder* AppendLine(::StringW value);

  /// @brief Method CopyTo addr 0x22e06a4 size 0x1d8 virtual false final false
  inline void CopyTo(int32_t sourceIndex, ::System::Span_1<char16_t> destination, int32_t count);

  /// @brief Method Remove addr 0x22e1888 size 0x140 virtual false final false
  inline ::System::Text::StringBuilder* Remove(int32_t startIndex, int32_t length);

  /// @brief Method Append addr 0x22e1b18 size 0x38 virtual false final false
  inline ::System::Text::StringBuilder* Append(bool value);

  /// @brief Method Append addr 0x22e1b50 size 0x50 virtual false final false
  inline ::System::Text::StringBuilder* Append(char16_t value);

  /// @brief Method Append addr 0x22e1ba0 size 0x58 virtual false final false
  inline ::System::Text::StringBuilder* Append(uint8_t value);

  /// @brief Method Append addr 0x22e1bf8 size 0x58 virtual false final false
  inline ::System::Text::StringBuilder* Append(int32_t value);

  /// @brief Method Append addr 0x22e1c50 size 0x58 virtual false final false
  inline ::System::Text::StringBuilder* Append(int64_t value);

  /// @brief Method Append addr 0x22e1ca8 size 0x58 virtual false final false
  inline ::System::Text::StringBuilder* Append(double_t value);

  /// @brief Method Append addr 0x22e1d00 size 0x58 virtual false final false
  inline ::System::Text::StringBuilder* Append(uint32_t value);

  /// @brief Method AppendSpanFormattable addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::System::Text::StringBuilder* AppendSpanFormattable(T value);

  /// @brief Method Append addr 0x22e1d58 size 0x38 virtual false final false
  inline ::System::Text::StringBuilder* Append(::System::Object* value);

  /// @brief Method Append addr 0x22e1d90 size 0x28 virtual false final false
  inline ::System::Text::StringBuilder* Append(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method Append addr 0x22e1db8 size 0x88 virtual false final false
  inline ::System::Text::StringBuilder* Append(::System::ReadOnlySpan_1<char16_t> value);

  /// @brief Method Insert addr 0x22e1e40 size 0xb4 virtual false final false
  inline ::System::Text::StringBuilder* Insert(int32_t index, ::StringW value);

  /// @brief Method Insert addr 0x22e1fc8 size 0x2c virtual false final false
  inline ::System::Text::StringBuilder* Insert(int32_t index, char16_t value);

  /// @brief Method AppendFormat addr 0x22e1ff4 size 0x58 virtual false final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::System::Object* arg0);

  /// @brief Method AppendFormat addr 0x22e2b58 size 0x5c virtual false final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method AppendFormat addr 0x22e2bb4 size 0x60 virtual false final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method AppendFormat addr 0x22e2c14 size 0xbc virtual false final false
  inline ::System::Text::StringBuilder* AppendFormat(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method AppendFormat addr 0x22e2cd0 size 0x5c virtual false final false
  inline ::System::Text::StringBuilder* AppendFormat(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0);

  /// @brief Method AppendFormat addr 0x22e2d2c size 0x64 virtual false final false
  inline ::System::Text::StringBuilder* AppendFormat(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method FormatError addr 0x22e2d90 size 0x50 virtual false final false
  static inline void FormatError();

  /// @brief Method AppendFormatHelper addr 0x22e204c size 0xb0c virtual false final false
  inline ::System::Text::StringBuilder* AppendFormatHelper(::System::IFormatProvider* provider, ::StringW format, ::System::ParamsArray args);

  /// @brief Method Replace addr 0x22e2de0 size 0x10 virtual false final false
  inline ::System::Text::StringBuilder* Replace(::StringW oldValue, ::StringW newValue);

  /// @brief Method Replace addr 0x22e2df0 size 0x330 virtual false final false
  inline ::System::Text::StringBuilder* Replace(::StringW oldValue, ::StringW newValue, int32_t startIndex, int32_t count);

  /// @brief Method Append addr 0x22e108c size 0x158 virtual false final false
  inline ::System::Text::StringBuilder* Append(::cordl_internals::Ptr<char16_t> value, int32_t valueCount);

  /// @brief Method Insert addr 0x22e1ef4 size 0xd4 virtual false final false
  inline void Insert(int32_t index, ::cordl_internals::Ptr<char16_t> value, int32_t valueCount);

  /// @brief Method ReplaceAllInChunk addr 0x22e31f8 size 0x1bc virtual false final false
  inline void ReplaceAllInChunk(::ArrayW<int32_t, ::Array<int32_t>*> replacements, int32_t replacementsCount, ::System::Text::StringBuilder* sourceChunk, int32_t removeCount, ::StringW value);

  /// @brief Method StartsWith addr 0x22e3120 size 0xd8 virtual false final false
  inline bool StartsWith(::System::Text::StringBuilder* chunk, int32_t indexInChunk, int32_t count, ::StringW value);

  /// @brief Method ReplaceInPlaceAtChunk addr 0x22e3664 size 0x108 virtual false final false
  inline void ReplaceInPlaceAtChunk(ByRef<::System::Text::StringBuilder*> chunk, ByRef<int32_t> indexInChunk, ::cordl_internals::Ptr<char16_t> value, int32_t count);

  /// @brief Method ThreadSafeCopy addr 0x22dfc14 size 0xcc virtual false final false
  static inline void ThreadSafeCopy(::cordl_internals::Ptr<char16_t> sourcePtr, ::ArrayW<char16_t, ::Array<char16_t>*> destination, int32_t destinationIndex, int32_t count);

  /// @brief Method ThreadSafeCopy addr 0x22e1718 size 0x170 virtual false final false
  static inline void ThreadSafeCopy(::ArrayW<char16_t, ::Array<char16_t>*> source, int32_t sourceIndex, ::System::Span_1<char16_t> destination, int32_t destinationIndex, int32_t count);

  /// @brief Method FindChunkForIndex addr 0x22e0c2c size 0x28 virtual false final false
  inline ::System::Text::StringBuilder* FindChunkForIndex(int32_t index);

  /// @brief Method get_RemainingCurrentChunk addr 0x22e37ac size 0xac virtual false final false
  inline ::System::Span_1<char16_t> get_RemainingCurrentChunk();

  /// @brief Method Next addr 0x22e376c size 0x40 virtual false final false
  inline ::System::Text::StringBuilder* Next(::System::Text::StringBuilder* chunk);

  /// @brief Method ExpandByABlock addr 0x22e0da0 size 0x1a0 virtual false final false
  inline void ExpandByABlock(int32_t minBlockCharCount);

  static inline ::System::Text::StringBuilder* New_ctor(::System::Text::StringBuilder* from);

  /// @brief Method .ctor addr 0x22e3858 size 0x44 virtual false final false
  inline void _ctor(::System::Text::StringBuilder* from);

  /// @brief Method MakeRoom addr 0x22e33b4 size 0x2b0 virtual false final false
  inline void MakeRoom(int32_t index, int32_t count, ByRef<::System::Text::StringBuilder*> chunk, ByRef<int32_t> indexInChunk, bool doNotMoveFollowingChars);

  static inline ::System::Text::StringBuilder* New_ctor(int32_t size, int32_t maxCapacity, ::System::Text::StringBuilder* previousBlock);

  /// @brief Method .ctor addr 0x22e389c size 0x8c virtual false final false
  inline void _ctor(int32_t size, int32_t maxCapacity, ::System::Text::StringBuilder* previousBlock);

  /// @brief Method Remove addr 0x22e19c8 size 0x150 virtual false final false
  inline void Remove(int32_t startIndex, int32_t count, ByRef<::System::Text::StringBuilder*> chunk, ByRef<int32_t> indexInChunk);

  // Ctor Parameters [CppParam { name: "", ty: "StringBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringBuilder(StringBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringBuilder(StringBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringBuilder();

public:
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

  /// @brief Field DefaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCapacity{ static_cast<int32_t>(0x10) };

  /// @brief Field CapacityField offset 0xffffffff size 0x8
  static constexpr ::ConstString CapacityField{ u"Capacity" };

  /// @brief Field MaxCapacityField offset 0xffffffff size 0x8
  static constexpr ::ConstString MaxCapacityField{ u"m_MaxCapacity" };

  /// @brief Field StringValueField offset 0xffffffff size 0x8
  static constexpr ::ConstString StringValueField{ u"m_StringValue" };

  /// @brief Field ThreadIDField offset 0xffffffff size 0x8
  static constexpr ::ConstString ThreadIDField{ u"m_currentThread" };

  /// @brief Field MaxChunkSize offset 0xffffffff size 0x4
  static constexpr int32_t MaxChunkSize{ static_cast<int32_t>(0x1f40) };

  /// @brief Field IndexLimit offset 0xffffffff size 0x4
  static constexpr int32_t IndexLimit{ static_cast<int32_t>(0xf4240) };

  /// @brief Field WidthLimit offset 0xffffffff size 0x4
  static constexpr int32_t WidthLimit{ static_cast<int32_t>(0xf4240) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::StringBuilder, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkChars) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkPrevious) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_ChunkOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Text::StringBuilder, ___m_MaxCapacity) == 0x28, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::StringBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::StringBuilder*, "System.Text", "StringBuilder");

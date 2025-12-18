#pragma once
// IWYU pragma private; include "Unity/Collections/UTF8ArrayUnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UTF8ArrayUnsafeUtility)
namespace Unity::Collections {
struct ConversionError;
}
namespace Unity::Collections {
struct CopyError;
}
namespace Unity::Collections {
struct FormatError;
}
namespace Unity::Collections {
struct UTF8ArrayUnsafeUtility_Comparison;
}
namespace Unity::Collections {
struct Unicode_Rune;
}
// Forward declare root types
namespace Unity::Collections {
class UTF8ArrayUnsafeUtility;
}
namespace Unity::Collections {
struct UTF8ArrayUnsafeUtility_Comparison;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::UTF8ArrayUnsafeUtility);
MARK_VAL_T(::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.UTF8ArrayUnsafeUtility/Comparison
struct CORDL_TYPE UTF8ArrayUnsafeUtility_Comparison {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6313350, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Unicode_Rune runeA, ::Unity::Collections::ConversionError errorA, ::Unity::Collections::Unicode_Rune runeB, ::Unity::Collections::ConversionError errorB);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UTF8ArrayUnsafeUtility_Comparison();

  // Ctor Parameters [CppParam { name: "terminates", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UTF8ArrayUnsafeUtility_Comparison(bool terminates, int32_t result) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15709 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field terminates, offset: 0x0, size: 0x1, def value: None
  bool terminates;

  /// @brief Field result, offset: 0x4, size: 0x4, def value: None
  int32_t result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison, terminates) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison, result) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison, 0x8>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.UTF8ArrayUnsafeUtility
class CORDL_TYPE UTF8ArrayUnsafeUtility : public ::System::Object {
public:
  // Declarations
  using Comparison = ::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison;

  /// @brief Method Append, addr 0x6313274, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Collections::CopyError Append(char16_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUCS2MaxLengthInChars, uint8_t* src, uint16_t srcLength);

  /// @brief Method Append, addr 0x6313220, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Collections::CopyError Append(uint8_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, char16_t* src, int32_t srcLength);

  /// @brief Method Append, addr 0x63131cc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Collections::CopyError Append(uint8_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, uint8_t* src, uint16_t srcLength);

  /// @brief Method AppendUTF8Bytes, addr 0x631313c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FormatError AppendUTF8Bytes(uint8_t* dest, ::ByRef<int32_t> destLength, int32_t destCapacity, uint8_t* src, int32_t srcLength);

  /// @brief Method Copy, addr 0x63130d8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Collections::CopyError Copy(char16_t* dest, ::ByRef<int32_t> destLength, int32_t destUCS2MaxLengthInChars, uint8_t* src, int32_t srcLength);

  /// @brief Method Copy, addr 0x63130f8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Collections::CopyError Copy(char16_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUCS2MaxLengthInChars, uint8_t* src, uint16_t srcLength);

  /// @brief Method Copy, addr 0x630d7dc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Collections::CopyError Copy(uint8_t* dest, ::ByRef<int32_t> destLength, int32_t destUTF8MaxLengthInBytes, char16_t* src, int32_t srcLength);

  /// @brief Method Copy, addr 0x6313050, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Collections::CopyError Copy(uint8_t* dest, ::ByRef<int32_t> destLength, int32_t destUTF8MaxLengthInBytes, uint8_t* src, int32_t srcLength);

  /// @brief Method Copy, addr 0x6313008, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Collections::CopyError Copy(uint8_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, char16_t* src, int32_t srcLength);

  /// @brief Method Copy, addr 0x6313094, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Collections::CopyError Copy(uint8_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, uint8_t* src, uint16_t srcLength);

  /// @brief Method EqualsUTF8Bytes, addr 0x630ea10, size 0x2c, virtual false, abstract: false, final false
  static inline bool EqualsUTF8Bytes(uint8_t* aBytes, int32_t aLength, uint8_t* bBytes, int32_t bLength);

  /// @brief Method StrCmp, addr 0x6313514, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t StrCmp(char16_t* utf16Buffer, int32_t utf16LengthInChars, uint8_t* utf8Buffer, int32_t utf8LengthInBytes);

  /// @brief Method StrCmp, addr 0x6313404, size 0x88, virtual false, abstract: false, final false
  static inline int32_t StrCmp(char16_t* utf16BufferA, int32_t utf16LengthInCharsA, char16_t* utf16BufferB, int32_t utf16LengthInCharsB);

  /// @brief Method StrCmp, addr 0x631348c, size 0x88, virtual false, abstract: false, final false
  static inline int32_t StrCmp(uint8_t* utf8Buffer, int32_t utf8LengthInBytes, char16_t* utf16Buffer, int32_t utf16LengthInChars);

  /// @brief Method StrCmp, addr 0x631337c, size 0x88, virtual false, abstract: false, final false
  static inline int32_t StrCmp(uint8_t* utf8BufferA, int32_t utf8LengthInBytesA, ::Unity::Collections::Unicode_Rune* runeBufferB, int32_t lengthInRunesB);

  /// @brief Method StrCmp, addr 0x63132c8, size 0x88, virtual false, abstract: false, final false
  static inline int32_t StrCmp(uint8_t* utf8BufferA, int32_t utf8LengthInBytesA, uint8_t* utf8BufferB, int32_t utf8LengthInBytesB);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UTF8ArrayUnsafeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UTF8ArrayUnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UTF8ArrayUnsafeUtility(UTF8ArrayUnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UTF8ArrayUnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UTF8ArrayUnsafeUtility(UTF8ArrayUnsafeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15710 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::UTF8ArrayUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::UTF8ArrayUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::UTF8ArrayUnsafeUtility*, "Unity.Collections", "UTF8ArrayUnsafeUtility");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison, "Unity.Collections", "UTF8ArrayUnsafeUtility/Comparison");

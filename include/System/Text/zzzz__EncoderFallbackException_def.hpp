#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderFallbackException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Text {
class EncoderFallbackException;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderFallbackException);
// Type: System.Text::EncoderFallbackException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2839))
// CS Name: ::System.Text::EncoderFallbackException*
class CORDL_TYPE EncoderFallbackException : public ::System::ArgumentException {
public:
  // Declarations
  /// @brief Field _charUnknown, offset 0x98, size 0x2
  __declspec(property(get = __get__charUnknown, put = __set__charUnknown)) char16_t _charUnknown;

  /// @brief Field _charUnknownHigh, offset 0x9a, size 0x2
  __declspec(property(get = __get__charUnknownHigh, put = __set__charUnknownHigh)) char16_t _charUnknownHigh;

  /// @brief Field _charUnknownLow, offset 0x9c, size 0x2
  __declspec(property(get = __get__charUnknownLow, put = __set__charUnknownLow)) char16_t _charUnknownLow;

  /// @brief Field _index, offset 0xa0, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  constexpr char16_t& __get__charUnknown();

  constexpr char16_t const& __get__charUnknown() const;

  constexpr void __set__charUnknown(char16_t value);

  constexpr char16_t& __get__charUnknownHigh();

  constexpr char16_t const& __get__charUnknownHigh() const;

  constexpr void __set__charUnknownHigh(char16_t value);

  constexpr char16_t& __get__charUnknownLow();

  constexpr char16_t const& __get__charUnknownLow() const;

  constexpr void __set__charUnknownLow(char16_t value);

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  static inline ::System::Text::EncoderFallbackException* New_ctor();

  /// @brief Method .ctor addr 0x24d9f8c size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::Text::EncoderFallbackException* New_ctor(::StringW message, char16_t charUnknown, int32_t index);

  /// @brief Method .ctor addr 0x24d9aec size 0x30 virtual false final false
  inline void _ctor(::StringW message, char16_t charUnknown, int32_t index);

  static inline ::System::Text::EncoderFallbackException* New_ctor(::StringW message, char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method .ctor addr 0x24d9d7c size 0x1f8 virtual false final false
  inline void _ctor(::StringW message, char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  static inline ::System::Text::EncoderFallbackException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                   ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor addr 0x24d9fe8 size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderFallbackException(EncoderFallbackException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderFallbackException(EncoderFallbackException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderFallbackException();

public:
  /// @brief Field _charUnknown, offset: 0x98, size: 0x2, def value: None
  char16_t ____charUnknown;

  /// @brief Field _charUnknownHigh, offset: 0x9a, size: 0x2, def value: None
  char16_t ____charUnknownHigh;

  /// @brief Field _charUnknownLow, offset: 0x9c, size: 0x2, def value: None
  char16_t ____charUnknownLow;

  /// @brief Field _index, offset: 0xa0, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderFallbackException, 0xa8>, "Size mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackException, ____charUnknown) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackException, ____charUnknownHigh) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackException, ____charUnknownLow) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackException, ____index) == 0xa0, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderFallbackException);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderFallbackException*, "System.Text", "EncoderFallbackException");

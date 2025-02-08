#pragma once
// IWYU pragma private; include "System/Text/EncoderFallbackException.hpp"
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
// Dependencies System.ArgumentException
namespace System::Text {
// Is value type: false
// CS Name: System.Text.EncoderFallbackException
class CORDL_TYPE EncoderFallbackException : public ::System::ArgumentException {
public:
  // Declarations
  /// @brief Field _charUnknown, offset 0x98, size 0x2
  __declspec(property(get = __cordl_internal_get__charUnknown, put = __cordl_internal_set__charUnknown)) char16_t _charUnknown;

  /// @brief Field _charUnknownHigh, offset 0x9a, size 0x2
  __declspec(property(get = __cordl_internal_get__charUnknownHigh, put = __cordl_internal_set__charUnknownHigh)) char16_t _charUnknownHigh;

  /// @brief Field _charUnknownLow, offset 0x9c, size 0x2
  __declspec(property(get = __cordl_internal_get__charUnknownLow, put = __cordl_internal_set__charUnknownLow)) char16_t _charUnknownLow;

  /// @brief Field _index, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  static inline ::System::Text::EncoderFallbackException* New_ctor();

  static inline ::System::Text::EncoderFallbackException* New_ctor(::StringW message, char16_t charUnknown, int32_t index);

  static inline ::System::Text::EncoderFallbackException* New_ctor(::StringW message, char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  static inline ::System::Text::EncoderFallbackException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                   ::System::Runtime::Serialization::StreamingContext streamingContext);

  constexpr char16_t const& __cordl_internal_get__charUnknown() const;

  constexpr char16_t& __cordl_internal_get__charUnknown();

  constexpr char16_t const& __cordl_internal_get__charUnknownHigh() const;

  constexpr char16_t& __cordl_internal_get__charUnknownHigh();

  constexpr char16_t const& __cordl_internal_get__charUnknownLow() const;

  constexpr char16_t& __cordl_internal_get__charUnknownLow();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__charUnknown(char16_t value);

  constexpr void __cordl_internal_set__charUnknownHigh(char16_t value);

  constexpr void __cordl_internal_set__charUnknownLow(char16_t value);

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x3c7dea0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c7da18, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, char16_t charUnknown, int32_t index);

  /// @brief Method .ctor, addr 0x3c7dc98, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method .ctor, addr 0x3c7defc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderFallbackException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderFallbackException(EncoderFallbackException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderFallbackException(EncoderFallbackException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2846 };

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
static_assert(offsetof(::System::Text::EncoderFallbackException, ____charUnknown) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackException, ____charUnknownHigh) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackException, ____charUnknownLow) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackException, ____index) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::EncoderFallbackException, 0xa8>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderFallbackException);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderFallbackException*, "System.Text", "EncoderFallbackException");

#pragma once
// IWYU pragma private; include "System/Text/DecoderFallbackException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderFallbackException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Text {
class DecoderFallbackException;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderFallbackException);
// Dependencies System.ArgumentException
namespace System::Text {
// Is value type: false
// CS Name: System.Text.DecoderFallbackException
class CORDL_TYPE DecoderFallbackException : public ::System::ArgumentException {
public:
  // Declarations
  /// @brief Field _bytesUnknown, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__bytesUnknown, put = __cordl_internal_set__bytesUnknown)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _bytesUnknown;

  /// @brief Field _index, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  static inline ::System::Text::DecoderFallbackException* New_ctor();

  static inline ::System::Text::DecoderFallbackException* New_ctor(::StringW message, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  static inline ::System::Text::DecoderFallbackException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                   ::System::Runtime::Serialization::StreamingContext streamingContext);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__bytesUnknown() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__bytesUnknown();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__bytesUnknown(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x3e70da8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e70d78, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method .ctor, addr 0x3e70e04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderFallbackException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderFallbackException(DecoderFallbackException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderFallbackException(DecoderFallbackException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2835 };

  /// @brief Field _bytesUnknown, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____bytesUnknown;

  /// @brief Field _index, offset: 0xa0, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::DecoderFallbackException, ____bytesUnknown) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Text::DecoderFallbackException, ____index) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::DecoderFallbackException, 0xa8>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderFallbackException);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderFallbackException*, "System.Text", "DecoderFallbackException");

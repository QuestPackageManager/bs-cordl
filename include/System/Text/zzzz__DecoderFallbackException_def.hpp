#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderFallbackException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Text {
class DecoderFallbackException;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderFallbackException);
// Type: System.Text::DecoderFallbackException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 164, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2832))
// CS Name: ::System.Text::DecoderFallbackException*
class CORDL_TYPE DecoderFallbackException : public ::System::ArgumentException {
public:
  // Declarations
  /// @brief Field _bytesUnknown, offset 0x98, size 0x8
  __declspec(property(get = __get__bytesUnknown, put = __set__bytesUnknown))::ArrayW<uint8_t, ::Array<uint8_t>*> _bytesUnknown;

  /// @brief Field _index, offset 0xa0, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__bytesUnknown();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__bytesUnknown() const;

  constexpr void __set__bytesUnknown(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  static inline ::System::Text::DecoderFallbackException* New_ctor();

  /// @brief Method .ctor addr 0x2631318 size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::Text::DecoderFallbackException* New_ctor(::StringW message, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method .ctor addr 0x26312e8 size 0x30 virtual false final false
  inline void _ctor(::StringW message, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  static inline ::System::Text::DecoderFallbackException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                   ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor addr 0x2631374 size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  // Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderFallbackException(DecoderFallbackException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderFallbackException(DecoderFallbackException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderFallbackException();

public:
  /// @brief Field _bytesUnknown, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____bytesUnknown;

  /// @brief Field _index, offset: 0xa0, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderFallbackException, 0xa8>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderFallbackException);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderFallbackException*, "System.Text", "DecoderFallbackException");

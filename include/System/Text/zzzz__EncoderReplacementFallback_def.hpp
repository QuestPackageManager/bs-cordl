#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderReplacementFallback)
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Text {
class EncoderReplacementFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderReplacementFallback);
// Type: System.Text::EncoderReplacementFallback
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2844))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2847))
// CS Name: ::System.Text::EncoderReplacementFallback*
class CORDL_TYPE EncoderReplacementFallback : public ::System::Text::EncoderFallback {
public:
  // Declarations
  /// @brief Field _strDefault, offset 0x10, size 0x8
  __declspec(property(get = __get__strDefault, put = __set__strDefault))::StringW _strDefault;

  __declspec(property(get = get_DefaultString))::StringW DefaultString;

  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::StringW& __get__strDefault();

  constexpr ::StringW const& __get__strDefault() const;

  constexpr void __set__strDefault(::StringW value);

  static inline ::System::Text::EncoderReplacementFallback* New_ctor();

  /// @brief Method .ctor, addr 0x2436a04, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::EncoderReplacementFallback* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2436bf4, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2436cf8, size 0x5c, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Text::EncoderReplacementFallback* New_ctor(::StringW replacement);

  /// @brief Method .ctor, addr 0x2436a4c, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::StringW replacement);

  /// @brief Method get_DefaultString, addr 0x2436d54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DefaultString();

  /// @brief Method CreateFallbackBuffer, addr 0x2436d5c, size 0x60, virtual true, abstract: false, final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method get_MaxCharCount, addr 0x2436e04, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

  /// @brief Method Equals, addr 0x2436e20, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x2436ea0, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderReplacementFallback(EncoderReplacementFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderReplacementFallback(EncoderReplacementFallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderReplacementFallback();

public:
  /// @brief Field _strDefault, offset: 0x10, size: 0x8, def value: None
  ::StringW ____strDefault;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderReplacementFallback, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Text::EncoderReplacementFallback, ____strDefault) == 0x10, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderReplacementFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderReplacementFallback*, "System.Text", "EncoderReplacementFallback");

#pragma once
// IWYU pragma private; include "System/Text/EncoderReplacementFallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderReplacementFallback)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class EncoderReplacementFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderReplacementFallback);
// Dependencies System.Runtime.Serialization.ISerializable, System.Text.EncoderFallback
namespace System::Text {
// Is value type: false
// CS Name: System.Text.EncoderReplacementFallback
class CORDL_TYPE EncoderReplacementFallback : public ::System::Text::EncoderFallback {
public:
  // Declarations
  __declspec(property(get = get_DefaultString)) ::StringW DefaultString;

  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Field _strDefault, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__strDefault, put = __cordl_internal_set__strDefault)) ::StringW _strDefault;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CreateFallbackBuffer, addr 0x3c7aa88, size 0x58, virtual true, abstract: false, final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method Equals, addr 0x3c7ab44, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x3c7abc4, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Text::EncoderReplacementFallback* New_ctor();

  static inline ::System::Text::EncoderReplacementFallback* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Text::EncoderReplacementFallback* New_ctor(::StringW replacement);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3c7aa24, size 0x5c, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::StringW const& __cordl_internal_get__strDefault() const;

  constexpr ::StringW& __cordl_internal_get__strDefault();

  constexpr void __cordl_internal_set__strDefault(::StringW value);

  /// @brief Method .ctor, addr 0x3c79890, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c7a920, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3c7a778, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::StringW replacement);

  /// @brief Method get_DefaultString, addr 0x3c7aa80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DefaultString();

  /// @brief Method get_MaxCharCount, addr 0x3c7ab28, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderReplacementFallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderReplacementFallback(EncoderReplacementFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderReplacementFallback(EncoderReplacementFallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2850 };

  /// @brief Field _strDefault, offset: 0x10, size: 0x8, def value: None
  ::StringW ____strDefault;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::EncoderReplacementFallback, ____strDefault) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::EncoderReplacementFallback, 0x18>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderReplacementFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderReplacementFallback*, "System.Text", "EncoderReplacementFallback");

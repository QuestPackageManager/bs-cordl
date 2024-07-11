#pragma once
// IWYU pragma private; include "System/Text/DecoderReplacementFallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderReplacementFallback)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class DecoderReplacementFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderReplacementFallback);
// Type: System.Text::DecoderReplacementFallback
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::DecoderReplacementFallback*
class CORDL_TYPE DecoderReplacementFallback : public ::System::Text::DecoderFallback {
public:
  // Declarations
  __declspec(property(get = get_DefaultString))::StringW DefaultString;

  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Field _strDefault, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__strDefault, put = __cordl_internal_set__strDefault))::StringW _strDefault;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CreateFallbackBuffer, addr 0x29ec190, size 0x60, virtual true, abstract: false, final false
  inline ::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method Equals, addr 0x29ec248, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x29ec2c8, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Text::DecoderReplacementFallback* New_ctor();

  static inline ::System::Text::DecoderReplacementFallback* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Text::DecoderReplacementFallback* New_ctor(::StringW replacement);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x29ec12c, size 0x5c, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::StringW const& __cordl_internal_get__strDefault() const;

  constexpr ::StringW& __cordl_internal_get__strDefault();

  constexpr void __cordl_internal_set__strDefault(::StringW value);

  /// @brief Method .ctor, addr 0x29ead1c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29ec028, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x29ebe80, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::StringW replacement);

  /// @brief Method get_DefaultString, addr 0x29ec188, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DefaultString();

  /// @brief Method get_MaxCharCount, addr 0x29ec22c, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderReplacementFallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderReplacementFallback(DecoderReplacementFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderReplacementFallback(DecoderReplacementFallback const&) = delete;

  /// @brief Field _strDefault, offset: 0x10, size: 0x8, def value: None
  ::StringW ____strDefault;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderReplacementFallback, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Text::DecoderReplacementFallback, ____strDefault) == 0x10, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderReplacementFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderReplacementFallback*, "System.Text", "DecoderReplacementFallback");

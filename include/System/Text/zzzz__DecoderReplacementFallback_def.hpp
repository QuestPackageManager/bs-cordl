#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderReplacementFallback)
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2833))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2836))
// CS Name: ::System.Text::DecoderReplacementFallback*
class CORDL_TYPE DecoderReplacementFallback : public ::System::Text::DecoderFallback {
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

  static inline ::System::Text::DecoderReplacementFallback* New_ctor();

  /// @brief Method .ctor addr 0x263137c size 0x48 virtual false final false
  inline void _ctor();

  static inline ::System::Text::DecoderReplacementFallback* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2632688 size 0x104 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x263278c size 0x5c virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Text::DecoderReplacementFallback* New_ctor(::StringW replacement);

  /// @brief Method .ctor addr 0x26324e0 size 0x1a8 virtual false final false
  inline void _ctor(::StringW replacement);

  /// @brief Method get_DefaultString addr 0x26327e8 size 0x8 virtual false final false
  inline ::StringW get_DefaultString();

  /// @brief Method CreateFallbackBuffer addr 0x26327f0 size 0x60 virtual true final false
  inline ::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method get_MaxCharCount addr 0x263288c size 0x1c virtual true final false
  inline int32_t get_MaxCharCount();

  /// @brief Method Equals addr 0x26328a8 size 0x80 virtual true final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode addr 0x2632928 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderReplacementFallback(DecoderReplacementFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderReplacementFallback(DecoderReplacementFallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderReplacementFallback();

public:
  /// @brief Field _strDefault, offset: 0x10, size: 0x8, def value: None
  ::StringW ____strDefault;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderReplacementFallback, 0x18>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderReplacementFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderReplacementFallback*, "System.Text", "DecoderReplacementFallback");

#pragma once
// IWYU pragma private; include "System/Text/EncodingProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncodingProvider)
namespace System::Text {
class DecoderFallback;
}
namespace System::Text {
class EncoderFallback;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class EncodingProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncodingProvider);
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.EncodingProvider
class CORDL_TYPE EncodingProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject)) ::System::Object* s_InternalSyncObject;

  /// @brief Field s_providers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_providers, put = setStaticF_s_providers)) ::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*> s_providers;

  /// @brief Method GetEncoding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* GetEncoding(int32_t codepage);

  /// @brief Method GetEncoding, addr 0x59269d0, size 0x108, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* GetEncoding(int32_t codepage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback);

  /// @brief Method GetEncoding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* GetEncoding(::StringW name);

  /// @brief Method GetEncodingFromProvider, addr 0x5926ad8, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncodingFromProvider(int32_t codepage);

  /// @brief Method GetEncodingFromProvider, addr 0x5926c90, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncodingFromProvider(int32_t codepage, ::System::Text::EncoderFallback* enc, ::System::Text::DecoderFallback* dec);

  /// @brief Method GetEncodingFromProvider, addr 0x5926bb4, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncodingFromProvider(::StringW encodingName);

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  static inline ::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*> getStaticF_s_providers();

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

  static inline void setStaticF_s_providers(::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncodingProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncodingProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncodingProvider(EncodingProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncodingProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncodingProvider(EncodingProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncodingProvider, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncodingProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncodingProvider*, "System.Text", "EncodingProvider");

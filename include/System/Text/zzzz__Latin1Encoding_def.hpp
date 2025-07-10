#pragma once
// IWYU pragma private; include "System/Text/Latin1Encoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Text/zzzz__EncodingNLS_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Latin1Encoding)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class EncoderNLS;
}
// Forward declare root types
namespace System::Text {
class Latin1Encoding;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::Latin1Encoding);
// Dependencies System.Runtime.Serialization.ISerializable, System.Text.EncodingNLS
namespace System::Text {
// Is value type: false
// CS Name: System.Text.Latin1Encoding
class CORDL_TYPE Latin1Encoding : public ::System::Text::EncodingNLS {
public:
  // Declarations
  /// @brief Field arrayCharBestFit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arrayCharBestFit, put = setStaticF_arrayCharBestFit)) ::ArrayW<char16_t, ::Array<char16_t>*> arrayCharBestFit;

  /// @brief Field s_default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_default, put = setStaticF_s_default)) ::System::Text::Latin1Encoding* s_default;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetBestFitUnicodeToBytesData, addr 0x3c7ca60, size 0x58, virtual true, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetBestFitUnicodeToBytesData();

  /// @brief Method GetByteCount, addr 0x3c7c258, size 0x200, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes, addr 0x3c7c458, size 0x380, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetCharCount, addr 0x3c7c7d8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetChars, addr 0x3c7c7e0, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetMaxByteCount, addr 0x3c7c864, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x3c7c964, size 0xfc, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  static inline ::System::Text::Latin1Encoding* New_ctor();

  static inline ::System::Text::Latin1Encoding* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3c7c170, size 0xe8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3c7c118, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c7c124, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_arrayCharBestFit();

  static inline ::System::Text::Latin1Encoding* getStaticF_s_default();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_arrayCharBestFit(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_default(::System::Text::Latin1Encoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Latin1Encoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Latin1Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Latin1Encoding(Latin1Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Latin1Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Latin1Encoding(Latin1Encoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::Latin1Encoding, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::Latin1Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Latin1Encoding*, "System.Text", "Latin1Encoding");

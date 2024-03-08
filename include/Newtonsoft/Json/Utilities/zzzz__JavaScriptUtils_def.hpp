#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JavaScriptUtils)
namespace Newtonsoft::Json {
template <typename T> class IArrayPool_1;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class JavaScriptUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::JavaScriptUtils);
// Type: Newtonsoft.Json.Utilities::JavaScriptUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::JavaScriptUtils*
class CORDL_TYPE JavaScriptUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field DoubleQuoteCharEscapeFlags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DoubleQuoteCharEscapeFlags, put = setStaticF_DoubleQuoteCharEscapeFlags))::ArrayW<bool, ::Array<bool>*> DoubleQuoteCharEscapeFlags;

  /// @brief Field HtmlCharEscapeFlags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HtmlCharEscapeFlags, put = setStaticF_HtmlCharEscapeFlags))::ArrayW<bool, ::Array<bool>*> HtmlCharEscapeFlags;

  /// @brief Field SingleQuoteCharEscapeFlags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SingleQuoteCharEscapeFlags, put = setStaticF_SingleQuoteCharEscapeFlags))::ArrayW<bool, ::Array<bool>*> SingleQuoteCharEscapeFlags;

  /// @brief Method GetCharEscapeFlags, addr 0x27b6398, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, char16_t quoteChar);

  /// @brief Method ShouldEscapeJavaScriptString, addr 0x27b6430, size 0x88, virtual false, abstract: false, final false
  static inline bool ShouldEscapeJavaScriptString(::StringW s, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags);

  /// @brief Method ToEscapedJavaScriptString, addr 0x27b6a5c, size 0x24c, virtual false, abstract: false, final false
  static inline ::StringW ToEscapedJavaScriptString(::StringW value, char16_t delimiter, bool appendDelimiters, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling);

  /// @brief Method WriteEscapedJavaScriptString, addr 0x27b64b8, size 0x4ec, virtual false, abstract: false, final false
  static inline void WriteEscapedJavaScriptString(::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter, bool appendDelimiters, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags,
                                                  ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool,
                                                  ByRef<::ArrayW<char16_t, ::Array<char16_t>*>> writeBuffer);

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_DoubleQuoteCharEscapeFlags();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_HtmlCharEscapeFlags();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_SingleQuoteCharEscapeFlags();

  static inline void setStaticF_DoubleQuoteCharEscapeFlags(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_HtmlCharEscapeFlags(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_SingleQuoteCharEscapeFlags(::ArrayW<bool, ::Array<bool>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JavaScriptUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JavaScriptUtils(JavaScriptUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JavaScriptUtils(JavaScriptUtils const&) = delete;

  /// @brief Field EscapedUnicodeText offset 0xffffffff size 0x8
  static constexpr ::ConstString EscapedUnicodeText{ u"!" };

  /// @brief Field UnicodeTextLength offset 0xffffffff size 0x4
  static constexpr int32_t UnicodeTextLength{ static_cast<int32_t>(0x6) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::JavaScriptUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::JavaScriptUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JavaScriptUtils*, "Newtonsoft.Json.Utilities", "JavaScriptUtils");

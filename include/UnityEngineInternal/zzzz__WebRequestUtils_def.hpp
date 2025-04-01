#pragma once
// IWYU pragma private; include "UnityEngineInternal/WebRequestUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebRequestUtils)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace UnityEngineInternal {
class WebRequestUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::WebRequestUtils);
// Dependencies System.Object
namespace UnityEngineInternal {
// Is value type: false
// CS Name: UnityEngineInternal.WebRequestUtils
class CORDL_TYPE WebRequestUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field domainRegex, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_domainRegex, put = setStaticF_domainRegex)) ::System::Text::RegularExpressions::Regex* domainRegex;

  /// @brief Method MakeInitialUrl, addr 0x4addfd0, size 0x370, virtual false, abstract: false, final false
  static inline ::StringW MakeInitialUrl(::StringW targetUrl, ::StringW localUrl);

  /// @brief Method MakeUriString, addr 0x4ade340, size 0x3dc, virtual false, abstract: false, final false
  static inline ::StringW MakeUriString(::System::Uri* targetUri, ::StringW targetUrl, bool prependProtocol);

  /// @brief Method RedirectTo, addr 0x4addee4, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW RedirectTo(::StringW baseUri, ::StringW redirectUri);

  /// @brief Method URLDecode, addr 0x4ade71c, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW URLDecode(::StringW encoded);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_domainRegex();

  static inline void setStaticF_domainRegex(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestUtils(WebRequestUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestUtils(WebRequestUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18238 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::WebRequestUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngineInternal
NEED_NO_BOX(::UnityEngineInternal::WebRequestUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::WebRequestUtils*, "UnityEngineInternal", "WebRequestUtils");

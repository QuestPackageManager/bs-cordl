#pragma once
// IWYU pragma private; include "System/Net/WebExceptionMapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebExceptionMapping)
namespace System::Net {
struct WebExceptionStatus;
}
// Forward declare root types
namespace System::Net {
class WebExceptionMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebExceptionMapping);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebExceptionMapping
class CORDL_TYPE WebExceptionMapping : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Mapping, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Mapping, put = setStaticF_s_Mapping)) ::ArrayW<::StringW, ::Array<::StringW>*> s_Mapping;

  /// @brief Method GetWebStatusString, addr 0x44b0244, size 0x190, virtual false, abstract: false, final false
  static inline ::StringW GetWebStatusString(::System::Net::WebExceptionStatus status);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_Mapping();

  static inline void setStaticF_s_Mapping(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebExceptionMapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebExceptionMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebExceptionMapping(WebExceptionMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebExceptionMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebExceptionMapping(WebExceptionMapping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9609 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebExceptionMapping, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebExceptionMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebExceptionMapping*, "System.Net", "WebExceptionMapping");

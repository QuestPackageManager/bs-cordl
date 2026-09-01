#pragma once
// IWYU pragma private; include "System\Net\WebExceptionMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebExceptionMapping)
namespace System::Net {
struct WebExceptionStatus;
}
// Forward declare root types
namespace System::Net {
class WebExceptionMapping;
}
// Write type traits
MARK_REF_T(::System::Net::WebExceptionMapping*);
DEFINE_IL2CPP_CLASS(::System::Net::WebExceptionMapping*, "System.Net", "WebExceptionMapping");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebExceptionMapping
class CORDL_TYPE WebExceptionMapping : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Mapping, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Mapping, put = setStaticF_s_Mapping)) ::ArrayW<::StringW> s_Mapping;

  /// @brief Method GetWebStatusString, addr 0x640f8c4, size 0x19c, virtual false, abstract: false, final false
  static inline ::StringW GetWebStatusString(::System::Net::WebExceptionStatus status);

  static inline ::ArrayW<::StringW> getStaticF_s_Mapping();

  static inline void setStaticF_s_Mapping(::ArrayW<::StringW> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11512 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebExceptionMapping) == 0x10, "Size mismatch!");

} // namespace System::Net

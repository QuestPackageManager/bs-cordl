#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartFormDataContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__MultipartContent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultipartFormDataContent)
namespace System::Net::Http {
class HttpContent;
}
// Forward declare root types
namespace System::Net::Http {
class MultipartFormDataContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::MultipartFormDataContent);
// Dependencies System.Net.Http.MultipartContent
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.MultipartFormDataContent
class CORDL_TYPE MultipartFormDataContent : public ::System::Net::Http::MultipartContent {
public:
  // Declarations
  /// @brief Method Add, addr 0x5f2ceb4, size 0x20, virtual true, abstract: false, final false
  inline void Add(::System::Net::Http::HttpContent* content);

  /// @brief Method Add, addr 0x5f2cfb8, size 0xb8, virtual false, abstract: false, final false
  inline void Add(::System::Net::Http::HttpContent* content, ::StringW name, ::StringW fileName);

  /// @brief Method AddContentDisposition, addr 0x5f2ced4, size 0xe4, virtual false, abstract: false, final false
  inline void AddContentDisposition(::System::Net::Http::HttpContent* content, ::StringW name, ::StringW fileName);

  static inline ::System::Net::Http::MultipartFormDataContent* New_ctor();

  /// @brief Method .ctor, addr 0x5f2ce68, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipartFormDataContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultipartFormDataContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipartFormDataContent(MultipartFormDataContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipartFormDataContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipartFormDataContent(MultipartFormDataContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20060 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::MultipartFormDataContent, 0x40>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::MultipartFormDataContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::MultipartFormDataContent*, "System.Net.Http", "MultipartFormDataContent");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpStatusDescription)
namespace System::Net {
struct HttpStatusCode;
}
// Forward declare root types
namespace System::Net {
class HttpStatusDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpStatusDescription);
// Type: System.Net::HttpStatusDescription
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7031))
// CS Name: ::System.Net::HttpStatusDescription*
class CORDL_TYPE HttpStatusDescription : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0x298c0e8, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW Get(::System::Net::HttpStatusCode code);

  /// @brief Method Get, addr 0x298c0ec, size 0x698, virtual false, abstract: false, final false
  static inline ::StringW Get(int32_t code);

  // Ctor Parameters [CppParam { name: "", ty: "HttpStatusDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpStatusDescription(HttpStatusDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpStatusDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpStatusDescription(HttpStatusDescription const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpStatusDescription();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpStatusDescription, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpStatusDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpStatusDescription*, "System.Net", "HttpStatusDescription");

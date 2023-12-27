#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpRequestCreator)
namespace System {
class Uri;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class IWebRequestCreate;
}
// Forward declare root types
namespace System::Net {
class HttpRequestCreator;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpRequestCreator);
// Type: System.Net::HttpRequestCreator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9177))
// CS Name: ::System.Net::HttpRequestCreator*
class CORDL_TYPE HttpRequestCreator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Net::IWebRequestCreate"
  constexpr operator ::System::Net::IWebRequestCreate*() noexcept;

  static inline ::System::Net::HttpRequestCreator* New_ctor();

  /// @brief Method .ctor addr 0x29cb7b8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Create addr 0x29cb7c0 size 0x60 virtual true final true
  inline ::System::Net::WebRequest* Create(::System::Uri* uri);

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestCreator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequestCreator(HttpRequestCreator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequestCreator(HttpRequestCreator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestCreator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpRequestCreator, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpRequestCreator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpRequestCreator*, "System.Net", "HttpRequestCreator");

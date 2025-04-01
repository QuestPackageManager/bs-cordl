#pragma once
// IWYU pragma private; include "System/Net/WebCompletionSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
CORDL_MODULE_EXPORT(WebCompletionSource)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class WebCompletionSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebCompletionSource);
// Dependencies System.Net.WebCompletionSource`1<T>
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebCompletionSource
class CORDL_TYPE WebCompletionSource : public ::System::Net::WebCompletionSource_1<::System::Object*> {
public:
  // Declarations
  static inline ::System::Net::WebCompletionSource* New_ctor();

  /// @brief Method .ctor, addr 0x43c9f78, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebCompletionSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebCompletionSource(WebCompletionSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebCompletionSource(WebCompletionSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9734 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebCompletionSource, 0x20>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebCompletionSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebCompletionSource*, "System.Net", "WebCompletionSource");

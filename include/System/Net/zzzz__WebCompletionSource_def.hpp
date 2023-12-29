#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WebCompletionSource)
// Forward declare root types
namespace System::Net {
class WebCompletionSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebCompletionSource);
// Type: System.Net::WebCompletionSource
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8049), inst: 2 }), TypeDefinitionIndex(TypeDefinitionIndex(2611)),
// TypeDefinitionIndex(TypeDefinitionIndex(8049))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8050)) CS Name: ::System.Net::WebCompletionSource*
class CORDL_TYPE WebCompletionSource : public ::System::Net::WebCompletionSource_1<::System::Object*> {
public:
  // Declarations
  static inline ::System::Net::WebCompletionSource* New_ctor();

  /// @brief Method .ctor addr 0x2860268 size 0x4c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebCompletionSource(WebCompletionSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebCompletionSource(WebCompletionSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebCompletionSource();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebCompletionSource, 0x20>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebCompletionSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebCompletionSource*, "System.Net", "WebCompletionSource");

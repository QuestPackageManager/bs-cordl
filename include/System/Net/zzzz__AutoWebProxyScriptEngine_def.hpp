#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoWebProxyScriptEngine)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class AutoWebProxyScriptEngine;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::AutoWebProxyScriptEngine);
// Type: System.Net::AutoWebProxyScriptEngine
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9140))
// CS Name: ::System.Net::AutoWebProxyScriptEngine*
class CORDL_TYPE AutoWebProxyScriptEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetProxies, addr 0x29b9280, size 0xc, virtual false, abstract: false, final false
  inline bool GetProxies(::System::Uri* destination, ByRef<::System::Collections::Generic::IList_1<::StringW>*> proxyList);

  /// @brief Method GetProxies, addr 0x29b928c, size 0xc, virtual false, abstract: false, final false
  inline bool GetProxies(::System::Uri* destination, ByRef<::System::Collections::Generic::IList_1<::StringW>*> proxyList, ByRef<int32_t> syncStatus);

  // Ctor Parameters [CppParam { name: "", ty: "AutoWebProxyScriptEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoWebProxyScriptEngine(AutoWebProxyScriptEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoWebProxyScriptEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoWebProxyScriptEngine(AutoWebProxyScriptEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoWebProxyScriptEngine();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::AutoWebProxyScriptEngine, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::AutoWebProxyScriptEngine);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AutoWebProxyScriptEngine*, "System.Net", "AutoWebProxyScriptEngine");

#pragma once
// IWYU pragma private; include "System/Net/AutoWebProxyScriptEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.AutoWebProxyScriptEngine
class CORDL_TYPE AutoWebProxyScriptEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetProxies, addr 0x44b97cc, size 0xc, virtual false, abstract: false, final false
  inline bool GetProxies(::System::Uri* destination, ::ByRef<::System::Collections::Generic::IList_1<::StringW>*> proxyList);

  /// @brief Method GetProxies, addr 0x44b9b78, size 0xc, virtual false, abstract: false, final false
  inline bool GetProxies(::System::Uri* destination, ::ByRef<::System::Collections::Generic::IList_1<::StringW>*> proxyList, ::ByRef<int32_t> syncStatus);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoWebProxyScriptEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoWebProxyScriptEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoWebProxyScriptEngine(AutoWebProxyScriptEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoWebProxyScriptEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoWebProxyScriptEngine(AutoWebProxyScriptEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::AutoWebProxyScriptEngine, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::AutoWebProxyScriptEngine);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AutoWebProxyScriptEngine*, "System.Net", "AutoWebProxyScriptEngine");

#pragma once
// IWYU pragma private; include "System/Net/AutoWebProxyScriptEngine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Net::AutoWebProxyScriptEngine*);
DEFINE_IL2CPP_CLASS(::System::Net::AutoWebProxyScriptEngine*, "System.Net", "AutoWebProxyScriptEngine");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.AutoWebProxyScriptEngine
class CORDL_TYPE AutoWebProxyScriptEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetProxies, addr 0x64205fc, size 0xc, virtual false, abstract: false, final false
  inline bool GetProxies(::System::Uri* destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*> proxyList);

  /// @brief Method GetProxies, addr 0x6420980, size 0xc, virtual false, abstract: false, final false
  inline bool GetProxies(::System::Uri* destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*> proxyList, ::by_ref<int32_t> syncStatus);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11537 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::AutoWebProxyScriptEngine) == 0x10, "Size mismatch!");

} // namespace System::Net

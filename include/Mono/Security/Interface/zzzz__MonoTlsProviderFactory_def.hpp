#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoTlsProviderFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonoTlsProviderFactory)
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoTlsProviderFactory;
}
// Write type traits
MARK_REF_T(::Mono::Security::Interface::MonoTlsProviderFactory*);
DEFINE_IL2CPP_CLASS(::Mono::Security::Interface::MonoTlsProviderFactory*, "Mono.Security.Interface", "MonoTlsProviderFactory");
// Dependencies System.Object
namespace Mono::Security::Interface {
// Is value type: false
// CS Name: Mono.Security.Interface.MonoTlsProviderFactory
class CORDL_TYPE MonoTlsProviderFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetProvider, addr 0x5a9be70, size 0x7c, virtual false, abstract: false, final false
  static inline ::Mono::Security::Interface::MonoTlsProvider* GetProvider();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsProviderFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsProviderFactory(MonoTlsProviderFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsProviderFactory(MonoTlsProviderFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19289 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::Interface::MonoTlsProviderFactory) == 0x10, "Size mismatch!");

} // namespace Mono::Security::Interface

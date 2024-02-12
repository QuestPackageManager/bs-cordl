#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Mono::Security::Interface::MonoTlsProviderFactory);
// Type: Mono.Security.Interface::MonoTlsProviderFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13736))
// CS Name: ::Mono.Security.Interface::MonoTlsProviderFactory*
class CORDL_TYPE MonoTlsProviderFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetProvider, addr 0x2422bec, size 0x70, virtual false, abstract: false, final false
  static inline ::Mono::Security::Interface::MonoTlsProvider* GetProvider();

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsProviderFactory(MonoTlsProviderFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsProviderFactory(MonoTlsProviderFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsProviderFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoTlsProviderFactory, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsProviderFactory);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsProviderFactory*, "Mono.Security.Interface", "MonoTlsProviderFactory");

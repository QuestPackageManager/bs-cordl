#pragma once
// IWYU pragma private; include "Mono/ISystemDependencyProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISystemDependencyProvider)
namespace Mono {
class ISystemCertificateProvider;
}
// Forward declare root types
namespace Mono {
class ISystemDependencyProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::ISystemDependencyProvider);
// Dependencies
namespace Mono {
// Is value type: false
// CS Name: Mono.ISystemDependencyProvider
class CORDL_TYPE ISystemDependencyProvider {
public:
  // Declarations
  __declspec(property(get = get_CertificateProvider)) ::Mono::ISystemCertificateProvider* CertificateProvider;

  /// @brief Method get_CertificateProvider, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Mono::ISystemCertificateProvider* get_CertificateProvider();

  // Ctor Parameters [CppParam { name: "", ty: "ISystemDependencyProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISystemDependencyProvider(ISystemDependencyProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2226 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Mono
NEED_NO_BOX(::Mono::ISystemDependencyProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::ISystemDependencyProvider*, "Mono", "ISystemDependencyProvider");

#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformEntitlements.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlatformEntitlements)
namespace OculusStudios::Platform::Core {
class IProductDefinition;
}
namespace OculusStudios::Platform::Core {
class Product;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class IPlatformEntitlements;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::IPlatformEntitlements);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IPlatformEntitlements
class CORDL_TYPE IPlatformEntitlements {
public:
  // Declarations
  /// @brief Method GetAllProductsAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>* GetAllProductsAsync();

  /// @brief Method RegisterNewProducts, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterNewProducts(::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* productDefinitions);

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformEntitlements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformEntitlements(IPlatformEntitlements const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::IPlatformEntitlements);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::IPlatformEntitlements*, "OculusStudios.Platform.Core", "IPlatformEntitlements");

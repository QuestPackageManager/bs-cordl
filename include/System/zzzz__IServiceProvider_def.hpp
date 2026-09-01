#pragma once
// IWYU pragma private; include "System\IServiceProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServiceProvider)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class IServiceProvider;
}
// Write type traits
MARK_REF_T(::System::IServiceProvider*);
DEFINE_IL2CPP_CLASS(::System::IServiceProvider*, "System", "IServiceProvider");
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.IServiceProvider
class CORDL_TYPE IServiceProvider {
public:
  // Declarations
  /// @brief Method GetService, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetService(::System::Type* serviceType);

  // Ctor Parameters [CppParam { name: "", ty: "IServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServiceProvider(IServiceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2522 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System

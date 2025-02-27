#pragma once
// IWYU pragma private; include "System/ComponentModel/IComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
CORDL_MODULE_EXPORT(IComponent)
namespace System::ComponentModel {
class ISite;
}
// Forward declare root types
namespace System::ComponentModel {
class IComponent;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IComponent);
// Dependencies System.IDisposable
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IComponent
class CORDL_TYPE IComponent {
public:
  // Declarations
  __declspec(property(get = get_Site)) ::System::ComponentModel::ISite* Site;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method get_Site, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ISite* get_Site();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComponent(IComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9444 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IComponent);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IComponent*, "System.ComponentModel", "IComponent");

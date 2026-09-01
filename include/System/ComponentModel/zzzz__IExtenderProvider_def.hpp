#pragma once
// IWYU pragma private; include "System\ComponentModel\IExtenderProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExtenderProvider)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class IExtenderProvider;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::IExtenderProvider*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::IExtenderProvider*, "System.ComponentModel", "IExtenderProvider");
// Dependencies
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IExtenderProvider
class CORDL_TYPE IExtenderProvider {
public:
  // Declarations
  /// @brief Method CanExtend, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanExtend(::System::Object* extendee);

  // Ctor Parameters [CppParam { name: "", ty: "IExtenderProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExtenderProvider(IExtenderProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11271 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel

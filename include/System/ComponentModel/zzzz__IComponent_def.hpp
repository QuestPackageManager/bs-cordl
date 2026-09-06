#pragma once
// IWYU pragma private; include "System/ComponentModel/IComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IComponent)
namespace System::ComponentModel {
class ISite;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::ComponentModel {
class IComponent;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::IComponent*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::IComponent*, "System.ComponentModel", "IComponent");
// [ComVisible(true)]
// [TypeConverter(typeof(System.ComponentModel.ComponentConverter))]
// [RootDesignerSerializer("System.ComponentModel.Design.Serialization.RootCodeDomSerializer, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a",
// "System.ComponentModel.Design.Serialization.CodeDomSerializer, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", true)] Dependencies
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IComponent
class CORDL_TYPE IComponent {
public:
  // Declarations
  __declspec(property(get = get_Site)) ::System::ComponentModel::ISite* Site;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method get_Site, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::ISite* get_Site();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IComponent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComponent(IComponentconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11322 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel

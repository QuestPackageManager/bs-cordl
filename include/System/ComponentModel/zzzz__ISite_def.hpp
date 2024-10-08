#pragma once
// IWYU pragma private; include "System/ComponentModel/ISite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISite)
namespace System::ComponentModel {
class IContainer;
}
namespace System {
class IServiceProvider;
}
// Forward declare root types
namespace System::ComponentModel {
class ISite;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ISite);
// Type: System.ComponentModel::ISite
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ISite*
class CORDL_TYPE ISite {
public:
  // Declarations
  __declspec(property(get = get_Container)) ::System::ComponentModel::IContainer* Container;

  __declspec(property(get = get_DesignMode)) bool DesignMode;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Method get_Container, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::IContainer* get_Container();

  /// @brief Method get_DesignMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_DesignMode();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ISite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISite(ISite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISite(ISite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9318 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ISite);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ISite*, "System.ComponentModel", "ISite");

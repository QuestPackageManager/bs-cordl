#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(INestedSite)
namespace System::ComponentModel {
class ISite;
}
namespace System {
class IServiceProvider;
}
// Forward declare root types
namespace System::ComponentModel {
class INestedSite;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INestedSite);
// Type: System.ComponentModel::INestedSite
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7443))
// CS Name: ::System.ComponentModel::INestedSite*
class CORDL_TYPE INestedSite {
public:
  // Declarations
  __declspec(property(get = get_FullName))::StringW FullName;

  /// @brief Convert operator to "::System::ComponentModel::ISite"
  constexpr operator ::System::ComponentModel::ISite*() noexcept;

  /// @brief Convert to "::System::ComponentModel::ISite"
  constexpr ::System::ComponentModel::ISite* i___System__ComponentModel__ISite() noexcept;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  /// @brief Method get_FullName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_FullName();

  // Ctor Parameters [CppParam { name: "", ty: "INestedSite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INestedSite(INestedSite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INestedSite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INestedSite(INestedSite const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INestedSite);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INestedSite*, "System.ComponentModel", "INestedSite");

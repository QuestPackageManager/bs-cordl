#pragma once
// IWYU pragma private; include "System/ComponentModel/INestedSite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(INestedSite)
// Forward declare root types
namespace System::ComponentModel {
class INestedSite;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::INestedSite);
// Dependencies System.ComponentModel.ISite, System.IServiceProvider
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.INestedSite
class CORDL_TYPE INestedSite {
public:
  // Declarations
  __declspec(property(get = get_FullName)) ::StringW FullName;

  /// @brief Convert operator to "::System::ComponentModel::ISite"
  constexpr operator ::System::ComponentModel::ISite*() noexcept;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Method get_FullName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Convert to "::System::ComponentModel::ISite"
  constexpr ::System::ComponentModel::ISite* i___System__ComponentModel__ISite() noexcept;

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "INestedSite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INestedSite(INestedSite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::INestedSite);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INestedSite*, "System.ComponentModel", "INestedSite");

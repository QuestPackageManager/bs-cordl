#pragma once
// IWYU pragma private; include "Zenject/MonoInstallerUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoInstallerUtil)
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class MonoInstallerUtil;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MonoInstallerUtil);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.MonoInstallerUtil
class CORDL_TYPE MonoInstallerUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> static inline TInstaller CreateInstaller(::StringW resourcePath, ::Zenject::DiContainer* container);

  /// @brief Method GetDefaultResourcePath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> static inline ::StringW GetDefaultResourcePath();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoInstallerUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoInstallerUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoInstallerUtil(MonoInstallerUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstallerUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoInstallerUtil(MonoInstallerUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12487 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MonoInstallerUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::MonoInstallerUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MonoInstallerUtil*, "Zenject", "MonoInstallerUtil");

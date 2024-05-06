#pragma once
// IWYU pragma private; include "Zenject/ScriptableObjectInstallerUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstallerUtil)
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectInstallerUtil;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ScriptableObjectInstallerUtil);
// Type: Zenject::ScriptableObjectInstallerUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ScriptableObjectInstallerUtil*
class CORDL_TYPE ScriptableObjectInstallerUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> static inline TInstaller CreateInstaller(::StringW resourcePath, ::Zenject::DiContainer* container);

  /// @brief Method GetDefaultResourcePath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> static inline ::StringW GetDefaultResourcePath();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectInstallerUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectInstallerUtil(ScriptableObjectInstallerUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectInstallerUtil(ScriptableObjectInstallerUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ScriptableObjectInstallerUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ScriptableObjectInstallerUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScriptableObjectInstallerUtil*, "Zenject", "ScriptableObjectInstallerUtil");

#pragma once
// IWYU pragma private; include "Environments/Definitions/ColorSchemesAsyncInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSchemesAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace Environments::Definitions {
class ColorSchemesAsyncInstaller___c;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Environments::Definitions {
class ColorSchemesAsyncInstaller;
}
namespace Environments::Definitions {
class ColorSchemesAsyncInstaller___c;
}
// Write type traits
MARK_REF_PTR_T(::Environments::Definitions::ColorSchemesAsyncInstaller);
MARK_REF_PTR_T(::Environments::Definitions::ColorSchemesAsyncInstaller___c);
// Dependencies System.Object
namespace Environments::Definitions {
// Is value type: false
// CS Name: Environments.Definitions.ColorSchemesAsyncInstaller/<>c
class CORDL_TYPE ColorSchemesAsyncInstaller___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Environments::Definitions::ColorSchemesAsyncInstaller___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>* __9__3_0;

  static inline ::Environments::Definitions::ColorSchemesAsyncInstaller___c* New_ctor();

  /// @brief Method <LoadResourcesBeforeInstall>b__3_0, addr 0x271314c, size 0x18, virtual false, abstract: false, final false
  inline int32_t _LoadResourcesBeforeInstall_b__3_0(::GlobalNamespace::ColorSchemeSO* colorScheme);

  /// @brief Method .ctor, addr 0x2713144, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Environments::Definitions::ColorSchemesAsyncInstaller___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::Environments::Definitions::ColorSchemesAsyncInstaller___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesAsyncInstaller___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesAsyncInstaller___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemesAsyncInstaller___c(ColorSchemesAsyncInstaller___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesAsyncInstaller___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemesAsyncInstaller___c(ColorSchemesAsyncInstaller___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13530 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Environments::Definitions::ColorSchemesAsyncInstaller___c, 0x10>, "Size mismatch!");

} // namespace Environments::Definitions
// Dependencies BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1<T>
namespace Environments::Definitions {
// Is value type: false
// CS Name: Environments.Definitions.ColorSchemesAsyncInstaller
class CORDL_TYPE ColorSchemesAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::GlobalNamespace::ColorSchemeSO>> {
public:
  // Declarations
  using __c = ::Environments::Definitions::ColorSchemesAsyncInstaller___c;

  /// @brief Field _colorSchemes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemes,
                      put = __cordl_internal_set__colorSchemes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* _colorSchemes;

  __declspec(property(get = get_assetLabelRuntimeKey)) ::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x2712fa8, size 0xb0, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x2712e84, size 0x124, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemes,
                                         ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry);

  static inline ::Environments::Definitions::ColorSchemesAsyncInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* const& __cordl_internal_get__colorSchemes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*& __cordl_internal_get__colorSchemes();

  constexpr void __cordl_internal_set__colorSchemes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* value);

  /// @brief Method .ctor, addr 0x2713058, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x2712e44, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemesAsyncInstaller(ColorSchemesAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemesAsyncInstaller(ColorSchemesAsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13531 };

  /// @brief Field _colorSchemes, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* ____colorSchemes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Environments::Definitions::ColorSchemesAsyncInstaller, ____colorSchemes) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Environments::Definitions::ColorSchemesAsyncInstaller, 0x50>, "Size mismatch!");

} // namespace Environments::Definitions
NEED_NO_BOX(::Environments::Definitions::ColorSchemesAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Environments::Definitions::ColorSchemesAsyncInstaller*, "Environments.Definitions", "ColorSchemesAsyncInstaller");
NEED_NO_BOX(::Environments::Definitions::ColorSchemesAsyncInstaller___c);
DEFINE_IL2CPP_ARG_TYPE(::Environments::Definitions::ColorSchemesAsyncInstaller___c*, "Environments.Definitions", "ColorSchemesAsyncInstaller/<>c");

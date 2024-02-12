#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
CORDL_MODULE_EXPORT(ResultsEnvironmentInstaller)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace GlobalNamespace {
class BaseResultsEnvironmentController;
}
namespace GlobalNamespace {
class __ResultsEnvironmentInstaller____c;
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
namespace UnityEngine::AddressableAssets {
class AssetLabelReference;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultsEnvironmentInstaller;
}
namespace GlobalNamespace {
class __ResultsEnvironmentInstaller____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultsEnvironmentInstaller);
MARK_REF_PTR_T(::GlobalNamespace::__ResultsEnvironmentInstaller____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4046))
// CS Name: ::ResultsEnvironmentInstaller::<>c*
class CORDL_TYPE __ResultsEnvironmentInstaller____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ResultsEnvironmentInstaller____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0,
                             put = setStaticF___9__4_0))::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* __9__4_0;

  static inline void setStaticF___9(::GlobalNamespace::__ResultsEnvironmentInstaller____c* value);

  static inline ::GlobalNamespace::__ResultsEnvironmentInstaller____c* getStaticF___9();

  static inline void setStaticF___9__4_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* value);

  static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* getStaticF___9__4_0();

  static inline ::GlobalNamespace::__ResultsEnvironmentInstaller____c* New_ctor();

  /// @brief Method .ctor, addr 0x22bce88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadResourcesBeforeInstall>b__4_0, addr 0x22bce90, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> _LoadResourcesBeforeInstall_b__4_0(::UnityEngine::GameObject* asset);

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsEnvironmentInstaller____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResultsEnvironmentInstaller____c(__ResultsEnvironmentInstaller____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsEnvironmentInstaller____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResultsEnvironmentInstaller____c(__ResultsEnvironmentInstaller____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResultsEnvironmentInstaller____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ResultsEnvironmentInstaller____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ResultsEnvironmentInstaller
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8940)), TypeDefinitionIndex(TypeDefinitionIndex(15466)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15466), inst:
// 313 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(4047)) CS Name: ::ResultsEnvironmentInstaller*
class CORDL_TYPE ResultsEnvironmentInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::UnityEngine::GameObject>> {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ResultsEnvironmentInstaller____c;

  /// @brief Field _resultEnvironmentControllerLabel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__resultEnvironmentControllerLabel,
                      put = __cordl_internal_set__resultEnvironmentControllerLabel))::UnityEngine::AddressableAssets::AssetLabelReference* _resultEnvironmentControllerLabel;

  /// @brief Field _resultsEnvironmentControllers, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__resultsEnvironmentControllers,
      put = __cordl_internal_set__resultsEnvironmentControllers))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* _resultsEnvironmentControllers;

  __declspec(property(get = get_assetLabel))::UnityEngine::AddressableAssets::AssetLabelReference* assetLabel;

  constexpr ::UnityEngine::AddressableAssets::AssetLabelReference*& __cordl_internal_get__resultEnvironmentControllerLabel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetLabelReference*> const& __cordl_internal_get__resultEnvironmentControllerLabel() const;

  constexpr void __cordl_internal_set__resultEnvironmentControllerLabel(::UnityEngine::AddressableAssets::AssetLabelReference* value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*& __cordl_internal_get__resultsEnvironmentControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*> const&
  __cordl_internal_get__resultsEnvironmentControllers() const;

  constexpr void __cordl_internal_set__resultsEnvironmentControllers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* value);

  /// @brief Method get_assetLabel, addr 0x22bcbac, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetLabelReference* get_assetLabel();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x22bcbb4, size 0x160, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>* assets,
                                         ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method InstallBindings, addr 0x22bcd14, size 0x80, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::ResultsEnvironmentInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x22bcd94, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsEnvironmentInstaller(ResultsEnvironmentInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsEnvironmentInstaller(ResultsEnvironmentInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsEnvironmentInstaller();

public:
  /// @brief Field _resultEnvironmentControllerLabel, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetLabelReference* ____resultEnvironmentControllerLabel;

  /// @brief Field _resultsEnvironmentControllers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* ____resultsEnvironmentControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsEnvironmentInstaller, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsEnvironmentInstaller, ____resultEnvironmentControllerLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsEnvironmentInstaller, ____resultsEnvironmentControllers) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsEnvironmentInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsEnvironmentInstaller*, "", "ResultsEnvironmentInstaller");
NEED_NO_BOX(::GlobalNamespace::__ResultsEnvironmentInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ResultsEnvironmentInstaller____c*, "", "ResultsEnvironmentInstaller/<>c");

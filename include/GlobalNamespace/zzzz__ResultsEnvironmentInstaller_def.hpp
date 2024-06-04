#pragma once
// IWYU pragma private; include "GlobalNamespace/ResultsEnvironmentInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// CS Name: ::ResultsEnvironmentInstaller::<>c*
class CORDL_TYPE __ResultsEnvironmentInstaller____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ResultsEnvironmentInstaller____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0,
                             put = setStaticF___9__3_0))::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* __9__3_0;

  static inline ::GlobalNamespace::__ResultsEnvironmentInstaller____c* New_ctor();

  /// @brief Method <LoadResourcesBeforeInstall>b__3_0, addr 0x2625318, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> _LoadResourcesBeforeInstall_b__3_0(::UnityEngine::GameObject* asset);

  /// @brief Method .ctor, addr 0x2625310, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__ResultsEnvironmentInstaller____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::__ResultsEnvironmentInstaller____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResultsEnvironmentInstaller____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ResultsEnvironmentInstaller____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResultsEnvironmentInstaller____c(__ResultsEnvironmentInstaller____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsEnvironmentInstaller____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResultsEnvironmentInstaller____c(__ResultsEnvironmentInstaller____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ResultsEnvironmentInstaller____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ResultsEnvironmentInstaller
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ResultsEnvironmentInstaller*
class CORDL_TYPE ResultsEnvironmentInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::UnityEngine::GameObject>> {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ResultsEnvironmentInstaller____c;

  /// @brief Field _resultsEnvironmentControllers, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__resultsEnvironmentControllers,
      put = __cordl_internal_set__resultsEnvironmentControllers))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* _resultsEnvironmentControllers;

  __declspec(property(get = get_assetLabelRuntimeKey))::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x262519c, size 0x80, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x262503c, size 0x160, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>* assets,
                                         ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  static inline ::GlobalNamespace::ResultsEnvironmentInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*& __cordl_internal_get__resultsEnvironmentControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*> const&
  __cordl_internal_get__resultsEnvironmentControllers() const;

  constexpr void __cordl_internal_set__resultsEnvironmentControllers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* value);

  /// @brief Method .ctor, addr 0x262521c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x2624ffc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsEnvironmentInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsEnvironmentInstaller(ResultsEnvironmentInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsEnvironmentInstaller(ResultsEnvironmentInstaller const&) = delete;

  /// @brief Field _resultsEnvironmentControllers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* ____resultsEnvironmentControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsEnvironmentInstaller, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsEnvironmentInstaller, ____resultsEnvironmentControllers) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsEnvironmentInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsEnvironmentInstaller*, "", "ResultsEnvironmentInstaller");
NEED_NO_BOX(::GlobalNamespace::__ResultsEnvironmentInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ResultsEnvironmentInstaller____c*, "", "ResultsEnvironmentInstaller/<>c");

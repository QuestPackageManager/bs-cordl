#pragma once
// IWYU pragma private; include "GlobalNamespace/PackDefinitionAsyncInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PackDefinitionAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace GlobalNamespace {
class PackDefinitionAsyncInstaller___c;
}
namespace GlobalNamespace {
class PackDefinitionSO;
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
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PackDefinitionAsyncInstaller;
}
namespace GlobalNamespace {
class PackDefinitionAsyncInstaller___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionAsyncInstaller);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionAsyncInstaller___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionAsyncInstaller/<>c
class CORDL_TYPE PackDefinitionAsyncInstaller___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PackDefinitionAsyncInstaller___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* __9__3_0;

  static inline ::GlobalNamespace::PackDefinitionAsyncInstaller___c* New_ctor();

  /// @brief Method <LoadResourcesBeforeInstall>b__3_0, addr 0x26ce2a8, size 0x18, virtual false, abstract: false, final false
  inline int32_t _LoadResourcesBeforeInstall_b__3_0(::GlobalNamespace::PackDefinitionSO* asset);

  /// @brief Method .ctor, addr 0x26ce2a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PackDefinitionAsyncInstaller___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::PackDefinitionAsyncInstaller___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionAsyncInstaller___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionAsyncInstaller___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionAsyncInstaller___c(PackDefinitionAsyncInstaller___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionAsyncInstaller___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionAsyncInstaller___c(PackDefinitionAsyncInstaller___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12989 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionAsyncInstaller___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionAsyncInstaller
class CORDL_TYPE PackDefinitionAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::GlobalNamespace::PackDefinitionSO>> {
public:
  // Declarations
  using __c = ::GlobalNamespace::PackDefinitionAsyncInstaller___c;

  /// @brief Field _packDefinitions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__packDefinitions,
                      put = __cordl_internal_set__packDefinitions)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _packDefinitions;

  __declspec(property(get = get_assetLabelRuntimeKey)) ::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x26ce0bc, size 0x74, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadPackDefinitionListAsync, addr 0x26ce130, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>>
  LoadPackDefinitionListAsync();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x26cdf60, size 0x15c, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* assets,
                                         ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry);

  static inline ::GlobalNamespace::PackDefinitionAsyncInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get__packDefinitions() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get__packDefinitions();

  constexpr void __cordl_internal_set__packDefinitions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method .ctor, addr 0x26ce1b4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x26cdf20, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionAsyncInstaller(PackDefinitionAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionAsyncInstaller(PackDefinitionAsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12990 };

  /// @brief Field _packDefinitions, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ____packDefinitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionAsyncInstaller, ____packDefinitions) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionAsyncInstaller, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackDefinitionAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionAsyncInstaller*, "", "PackDefinitionAsyncInstaller");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionAsyncInstaller___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionAsyncInstaller___c*, "", "PackDefinitionAsyncInstaller/<>c");

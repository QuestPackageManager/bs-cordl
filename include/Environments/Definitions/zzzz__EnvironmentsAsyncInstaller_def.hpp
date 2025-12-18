#pragma once
// IWYU pragma private; include "Environments/Definitions/EnvironmentsAsyncInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentsAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace Environments::Definitions {
class EnvironmentsAsyncInstaller___c;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
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
namespace Environments::Definitions {
class EnvironmentsAsyncInstaller;
}
namespace Environments::Definitions {
class EnvironmentsAsyncInstaller___c;
}
// Write type traits
MARK_REF_PTR_T(::Environments::Definitions::EnvironmentsAsyncInstaller);
MARK_REF_PTR_T(::Environments::Definitions::EnvironmentsAsyncInstaller___c);
// Dependencies System.Object
namespace Environments::Definitions {
// Is value type: false
// CS Name: Environments.Definitions.EnvironmentsAsyncInstaller/<>c
class CORDL_TYPE EnvironmentsAsyncInstaller___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Environments::Definitions::EnvironmentsAsyncInstaller___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* __9__5_0;

  static inline ::Environments::Definitions::EnvironmentsAsyncInstaller___c* New_ctor();

  /// @brief Method <LoadResourcesBeforeInstall>b__5_0, addr 0x366e9e0, size 0x14, virtual false, abstract: false, final false
  inline int32_t _LoadResourcesBeforeInstall_b__5_0(::GlobalNamespace::EnvironmentInfoSO* environmentInfo);

  /// @brief Method .ctor, addr 0x366e9dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Environments::Definitions::EnvironmentsAsyncInstaller___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* getStaticF___9__5_0();

  static inline void setStaticF___9(::Environments::Definitions::EnvironmentsAsyncInstaller___c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentsAsyncInstaller___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsAsyncInstaller___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentsAsyncInstaller___c(EnvironmentsAsyncInstaller___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsAsyncInstaller___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentsAsyncInstaller___c(EnvironmentsAsyncInstaller___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Environments::Definitions::EnvironmentsAsyncInstaller___c, 0x10>, "Size mismatch!");

} // namespace Environments::Definitions
// Dependencies BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1<T>
namespace Environments::Definitions {
// Is value type: false
// CS Name: Environments.Definitions.EnvironmentsAsyncInstaller
class CORDL_TYPE EnvironmentsAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>> {
public:
  // Declarations
  using __c = ::Environments::Definitions::EnvironmentsAsyncInstaller___c;

  /// @brief Field _environmentInfos, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentInfos,
                      put = __cordl_internal_set__environmentInfos)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _environmentInfos;

  __declspec(property(get = get_assetLabelRuntimeKey)) ::StringW assetLabelRuntimeKey;

  __declspec(property(get = get_telemetryEventName)) ::StringW telemetryEventName;

  /// @brief Method InstallBindings, addr 0x366e7b4, size 0xcc, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadEnvironmentInfoListAsync, addr 0x366e880, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>>
  LoadEnvironmentInfoListAsync();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x366e66c, size 0x148, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* environmentInfos,
                                         ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry);

  static inline ::Environments::Definitions::EnvironmentsAsyncInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const& __cordl_internal_get__environmentInfos() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__environmentInfos();

  constexpr void __cordl_internal_set__environmentInfos(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  /// @brief Method .ctor, addr 0x366e8fc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x366e5e4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

  /// @brief Method get_telemetryEventName, addr 0x366e628, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_telemetryEventName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentsAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentsAsyncInstaller(EnvironmentsAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentsAsyncInstaller(EnvironmentsAsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15459 };

  /// @brief Field _environmentInfos, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____environmentInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Environments::Definitions::EnvironmentsAsyncInstaller, ____environmentInfos) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Environments::Definitions::EnvironmentsAsyncInstaller, 0x48>, "Size mismatch!");

} // namespace Environments::Definitions
NEED_NO_BOX(::Environments::Definitions::EnvironmentsAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Environments::Definitions::EnvironmentsAsyncInstaller*, "Environments.Definitions", "EnvironmentsAsyncInstaller");
NEED_NO_BOX(::Environments::Definitions::EnvironmentsAsyncInstaller___c);
DEFINE_IL2CPP_ARG_TYPE(::Environments::Definitions::EnvironmentsAsyncInstaller___c*, "Environments.Definitions", "EnvironmentsAsyncInstaller/<>c");

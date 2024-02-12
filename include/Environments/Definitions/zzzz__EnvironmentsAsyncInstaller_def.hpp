#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentsAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace Environments::Definitions {
class __EnvironmentsAsyncInstaller____c;
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
namespace UnityEngine::AddressableAssets {
class AssetLabelReference;
}
// Forward declare root types
namespace Environments::Definitions {
class EnvironmentsAsyncInstaller;
}
namespace Environments::Definitions {
class __EnvironmentsAsyncInstaller____c;
}
// Write type traits
MARK_REF_PTR_T(::Environments::Definitions::EnvironmentsAsyncInstaller);
MARK_REF_PTR_T(::Environments::Definitions::__EnvironmentsAsyncInstaller____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Environments::Definitions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11292))
// CS Name: ::EnvironmentsAsyncInstaller::<>c*
class CORDL_TYPE __EnvironmentsAsyncInstaller____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Environments::Definitions::__EnvironmentsAsyncInstaller____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* __9__4_0;

  static inline void setStaticF___9(::Environments::Definitions::__EnvironmentsAsyncInstaller____c* value);

  static inline ::Environments::Definitions::__EnvironmentsAsyncInstaller____c* getStaticF___9();

  static inline void setStaticF___9__4_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* value);

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* getStaticF___9__4_0();

  static inline ::Environments::Definitions::__EnvironmentsAsyncInstaller____c* New_ctor();

  /// @brief Method .ctor, addr 0x12c8d08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadResourcesBeforeInstall>b__4_0, addr 0x12c8d10, size 0x18, virtual false, abstract: false, final false
  inline int32_t _LoadResourcesBeforeInstall_b__4_0(::GlobalNamespace::EnvironmentInfoSO* environmentInfo);

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentsAsyncInstaller____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentsAsyncInstaller____c(__EnvironmentsAsyncInstaller____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentsAsyncInstaller____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentsAsyncInstaller____c(__EnvironmentsAsyncInstaller____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentsAsyncInstaller____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Environments::Definitions::__EnvironmentsAsyncInstaller____c, 0x10>, "Size mismatch!");

} // namespace Environments::Definitions
// Type: Environments.Definitions::EnvironmentsAsyncInstaller
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Environments::Definitions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10621)), TypeDefinitionIndex(TypeDefinitionIndex(15466)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15466), inst:
// 306 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(11293)) CS Name: ::Environments.Definitions::EnvironmentsAsyncInstaller*
class CORDL_TYPE EnvironmentsAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>> {
public:
  // Declarations
  using __c = ::Environments::Definitions::__EnvironmentsAsyncInstaller____c;

  /// @brief Field _environmentInfoLabel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentInfoLabel, put = __cordl_internal_set__environmentInfoLabel))::UnityEngine::AddressableAssets::AssetLabelReference* _environmentInfoLabel;

  /// @brief Field _environmentInfos, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentInfos,
                      put = __cordl_internal_set__environmentInfos))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _environmentInfos;

  __declspec(property(get = get_assetLabel))::UnityEngine::AddressableAssets::AssetLabelReference* assetLabel;

  constexpr ::UnityEngine::AddressableAssets::AssetLabelReference*& __cordl_internal_get__environmentInfoLabel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetLabelReference*> const& __cordl_internal_get__environmentInfoLabel() const;

  constexpr void __cordl_internal_set__environmentInfoLabel(::UnityEngine::AddressableAssets::AssetLabelReference* value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__environmentInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const& __cordl_internal_get__environmentInfos() const;

  constexpr void __cordl_internal_set__environmentInfos(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  /// @brief Method get_assetLabel, addr 0x12c8a30, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetLabelReference* get_assetLabel();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x12c8a38, size 0x128, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* environmentInfos,
                                         ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method InstallBindings, addr 0x12c8b60, size 0xb4, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::Environments::Definitions::EnvironmentsAsyncInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x12c8c14, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentsAsyncInstaller(EnvironmentsAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentsAsyncInstaller(EnvironmentsAsyncInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentsAsyncInstaller();

public:
  /// @brief Field _environmentInfoLabel, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetLabelReference* ____environmentInfoLabel;

  /// @brief Field _environmentInfos, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____environmentInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Environments::Definitions::EnvironmentsAsyncInstaller, 0x50>, "Size mismatch!");

static_assert(offsetof(::Environments::Definitions::EnvironmentsAsyncInstaller, ____environmentInfoLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Environments::Definitions::EnvironmentsAsyncInstaller, ____environmentInfos) == 0x48, "Offset mismatch!");

} // namespace Environments::Definitions
NEED_NO_BOX(::Environments::Definitions::EnvironmentsAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Environments::Definitions::EnvironmentsAsyncInstaller*, "Environments.Definitions", "EnvironmentsAsyncInstaller");
NEED_NO_BOX(::Environments::Definitions::__EnvironmentsAsyncInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(::Environments::Definitions::__EnvironmentsAsyncInstaller____c*, "Environments.Definitions", "EnvironmentsAsyncInstaller/<>c");

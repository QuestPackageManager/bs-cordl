#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PackDefinitionAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
class __PackDefinitionAsyncInstaller____c;
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
namespace GlobalNamespace {
class PackDefinitionAsyncInstaller;
}
namespace GlobalNamespace {
class __PackDefinitionAsyncInstaller____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionAsyncInstaller);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionAsyncInstaller____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10814))
// CS Name: ::PackDefinitionAsyncInstaller::<>c*
class CORDL_TYPE __PackDefinitionAsyncInstaller____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__PackDefinitionAsyncInstaller____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* __9__4_0;

  static inline void setStaticF___9(::GlobalNamespace::__PackDefinitionAsyncInstaller____c* value);

  static inline ::GlobalNamespace::__PackDefinitionAsyncInstaller____c* getStaticF___9();

  static inline void setStaticF___9__4_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* value);

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* getStaticF___9__4_0();

  static inline ::GlobalNamespace::__PackDefinitionAsyncInstaller____c* New_ctor();

  /// @brief Method .ctor, addr 0x128b0dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LoadResourcesBeforeInstall>b__4_0, addr 0x128b0e4, size 0x18, virtual false, abstract: false, final false
  inline int32_t _LoadResourcesBeforeInstall_b__4_0(::GlobalNamespace::PackDefinitionSO* asset);

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionAsyncInstaller____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionAsyncInstaller____c(__PackDefinitionAsyncInstaller____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionAsyncInstaller____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionAsyncInstaller____c(__PackDefinitionAsyncInstaller____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionAsyncInstaller____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionAsyncInstaller____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PackDefinitionAsyncInstaller
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10831)), TypeDefinitionIndex(TypeDefinitionIndex(15466)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15466), inst:
// 729 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(10815)) CS Name: ::PackDefinitionAsyncInstaller*
class CORDL_TYPE PackDefinitionAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::GlobalNamespace::PackDefinitionSO>> {
public:
  // Declarations
  using __c = ::GlobalNamespace::__PackDefinitionAsyncInstaller____c;

  /// @brief Field _packDefinitionLabel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__packDefinitionLabel, put = __cordl_internal_set__packDefinitionLabel))::UnityEngine::AddressableAssets::AssetLabelReference* _packDefinitionLabel;

  /// @brief Field _packDefinitions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__packDefinitions,
                      put = __cordl_internal_set__packDefinitions))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _packDefinitions;

  __declspec(property(get = get_assetLabel))::UnityEngine::AddressableAssets::AssetLabelReference* assetLabel;

  constexpr ::UnityEngine::AddressableAssets::AssetLabelReference*& __cordl_internal_get__packDefinitionLabel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetLabelReference*> const& __cordl_internal_get__packDefinitionLabel() const;

  constexpr void __cordl_internal_set__packDefinitionLabel(::UnityEngine::AddressableAssets::AssetLabelReference* value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get__packDefinitions() const;

  constexpr void __cordl_internal_set__packDefinitions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method get_assetLabel, addr 0x128ae0c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetLabelReference* get_assetLabel();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x128ae14, size 0x160, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* assets,
                                         ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method InstallBindings, addr 0x128af74, size 0x74, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PackDefinitionAsyncInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x128afe8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionAsyncInstaller(PackDefinitionAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionAsyncInstaller(PackDefinitionAsyncInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionAsyncInstaller();

public:
  /// @brief Field _packDefinitionLabel, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetLabelReference* ____packDefinitionLabel;

  /// @brief Field _packDefinitions, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ____packDefinitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionAsyncInstaller, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionAsyncInstaller, ____packDefinitionLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionAsyncInstaller, ____packDefinitions) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackDefinitionAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionAsyncInstaller*, "", "PackDefinitionAsyncInstaller");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionAsyncInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionAsyncInstaller____c*, "", "PackDefinitionAsyncInstaller/<>c");

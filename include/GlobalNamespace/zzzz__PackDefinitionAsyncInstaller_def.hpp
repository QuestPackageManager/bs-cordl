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
class __PackDefinitionAsyncInstaller____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionAsyncInstaller);
MARK_REF_PTR_T(::GlobalNamespace::__PackDefinitionAsyncInstaller____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionAsyncInstaller::<>c*
class CORDL_TYPE __PackDefinitionAsyncInstaller____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__PackDefinitionAsyncInstaller____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* __9__3_0;

  static inline ::GlobalNamespace::__PackDefinitionAsyncInstaller____c* New_ctor();

  /// @brief Method <LoadResourcesBeforeInstall>b__3_0, addr 0x14d4584, size 0x18, virtual false, abstract: false, final false
  inline int32_t _LoadResourcesBeforeInstall_b__3_0(::GlobalNamespace::PackDefinitionSO* asset);

  /// @brief Method .ctor, addr 0x14d457c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__PackDefinitionAsyncInstaller____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::__PackDefinitionAsyncInstaller____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackDefinitionAsyncInstaller____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionAsyncInstaller____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PackDefinitionAsyncInstaller____c(__PackDefinitionAsyncInstaller____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PackDefinitionAsyncInstaller____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PackDefinitionAsyncInstaller____c(__PackDefinitionAsyncInstaller____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackDefinitionAsyncInstaller____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PackDefinitionAsyncInstaller
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PackDefinitionAsyncInstaller*
class CORDL_TYPE PackDefinitionAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::GlobalNamespace::PackDefinitionSO>> {
public:
  // Declarations
  using __c = ::GlobalNamespace::__PackDefinitionAsyncInstaller____c;

  /// @brief Field _packDefinitions, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__packDefinitions,
                      put = __cordl_internal_set__packDefinitions))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _packDefinitions;

  __declspec(property(get = get_assetLabelRuntimeKey))::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x14d4390, size 0x74, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadPackDefinitionListAsync, addr 0x14d4404, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>>
  LoadPackDefinitionListAsync();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x14d4230, size 0x160, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* assets,
                                         ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  static inline ::GlobalNamespace::PackDefinitionAsyncInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get__packDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get__packDefinitions() const;

  constexpr void __cordl_internal_set__packDefinitions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  /// @brief Method .ctor, addr 0x14d4488, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x14d41f0, size 0x40, virtual true, abstract: false, final false
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

  /// @brief Field _packDefinitions, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ____packDefinitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionAsyncInstaller, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionAsyncInstaller, ____packDefinitions) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackDefinitionAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionAsyncInstaller*, "", "PackDefinitionAsyncInstaller");
NEED_NO_BOX(::GlobalNamespace::__PackDefinitionAsyncInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackDefinitionAsyncInstaller____c*, "", "PackDefinitionAsyncInstaller/<>c");

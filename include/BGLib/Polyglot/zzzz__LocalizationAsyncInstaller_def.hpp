#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
CORDL_MODULE_EXPORT(LocalizationAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace BGLib::Polyglot {
class LocalizationAsset;
}
namespace BGLib::Polyglot {
class Localization;
}
namespace BGLib::Polyglot {
class __LocalizationAsyncInstaller____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
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
class TextAsset;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizationAsyncInstaller;
}
namespace BGLib::Polyglot {
class __LocalizationAsyncInstaller____c;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizationAsyncInstaller);
MARK_REF_PTR_T(::BGLib::Polyglot::__LocalizationAsyncInstaller____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15678))
// CS Name: ::LocalizationAsyncInstaller::<>c*
class CORDL_TYPE __LocalizationAsyncInstaller____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BGLib::Polyglot::__LocalizationAsyncInstaller____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* __9__7_0;

  static inline void setStaticF___9(::BGLib::Polyglot::__LocalizationAsyncInstaller____c* value);

  static inline ::BGLib::Polyglot::__LocalizationAsyncInstaller____c* getStaticF___9();

  static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* value);

  static inline ::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* getStaticF___9__7_0();

  static inline ::BGLib::Polyglot::__LocalizationAsyncInstaller____c* New_ctor();

  /// @brief Method .ctor, addr 0xe4ca68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LocalizationContentToAsset>b__7_0, addr 0xe4ca70, size 0x68, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::LocalizationAsset* _LocalizationContentToAsset_b__7_0(::UnityEngine::TextAsset* localizationTextAsset);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizationAsyncInstaller____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalizationAsyncInstaller____c(__LocalizationAsyncInstaller____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizationAsyncInstaller____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalizationAsyncInstaller____c(__LocalizationAsyncInstaller____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalizationAsyncInstaller____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::__LocalizationAsyncInstaller____c, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
// Type: BGLib.Polyglot::LocalizationAsyncInstaller
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8952)), TypeDefinitionIndex(TypeDefinitionIndex(15466)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15466), inst:
// 402 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(15679)) CS Name: ::BGLib.Polyglot::LocalizationAsyncInstaller*
class CORDL_TYPE LocalizationAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::UnityEngine::TextAsset>> {
public:
  // Declarations
  using __c = ::BGLib::Polyglot::__LocalizationAsyncInstaller____c;

  /// @brief Field _mainPolyglotAsset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mainPolyglotAsset, put = __cordl_internal_set__mainPolyglotAsset))::UnityW<::BGLib::Polyglot::Localization> _mainPolyglotAsset;

  /// @brief Field _localizationContentReference, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__localizationContentReference,
                      put = __cordl_internal_set__localizationContentReference))::UnityEngine::AddressableAssets::AssetLabelReference* _localizationContentReference;

  /// @brief Field _inputFiles, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__inputFiles, put = __cordl_internal_set__inputFiles))::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* _inputFiles;

  /// @brief Field kDefaultLocalizationContent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kDefaultLocalizationContent,
                             put = setStaticF_kDefaultLocalizationContent))::UnityEngine::AddressableAssets::AssetLabelReference* kDefaultLocalizationContent;

  __declspec(property(get = get_assetLabel))::UnityEngine::AddressableAssets::AssetLabelReference* assetLabel;

  constexpr ::UnityW<::BGLib::Polyglot::Localization>& __cordl_internal_get__mainPolyglotAsset();

  constexpr ::UnityW<::BGLib::Polyglot::Localization> const& __cordl_internal_get__mainPolyglotAsset() const;

  constexpr void __cordl_internal_set__mainPolyglotAsset(::UnityW<::BGLib::Polyglot::Localization> value);

  constexpr ::UnityEngine::AddressableAssets::AssetLabelReference*& __cordl_internal_get__localizationContentReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetLabelReference*> const& __cordl_internal_get__localizationContentReference() const;

  constexpr void __cordl_internal_set__localizationContentReference(::UnityEngine::AddressableAssets::AssetLabelReference* value);

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*& __cordl_internal_get__inputFiles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*> const& __cordl_internal_get__inputFiles() const;

  constexpr void __cordl_internal_set__inputFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* value);

  static inline void setStaticF_kDefaultLocalizationContent(::UnityEngine::AddressableAssets::AssetLabelReference* value);

  static inline ::UnityEngine::AddressableAssets::AssetLabelReference* getStaticF_kDefaultLocalizationContent();

  /// @brief Method get_assetLabel, addr 0xe4c5ac, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetLabelReference* get_assetLabel();

  /// @brief Method LoadResourcesBeforeInstall, addr 0xe4c5b4, size 0x68, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>* assets,
                                         ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method LocalizationContentToAsset, addr 0xe4c61c, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*
  LocalizationContentToAsset(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>* content);

  /// @brief Method InstallBindings, addr 0xe4c730, size 0x150, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadLocalizationAssetsSync, addr 0xe4c880, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* LoadLocalizationAssetsSync();

  static inline ::BGLib::Polyglot::LocalizationAsyncInstaller* New_ctor();

  /// @brief Method .ctor, addr 0xe4c8f4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationAsyncInstaller(LocalizationAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationAsyncInstaller(LocalizationAsyncInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationAsyncInstaller();

public:
  /// @brief Field _mainPolyglotAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::BGLib::Polyglot::Localization> ____mainPolyglotAsset;

  /// @brief Field _localizationContentReference, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetLabelReference* ____localizationContentReference;

  /// @brief Field _inputFiles, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* ____inputFiles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizationAsyncInstaller, 0x58>, "Size mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationAsyncInstaller, ____mainPolyglotAsset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationAsyncInstaller, ____localizationContentReference) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationAsyncInstaller, ____inputFiles) == 0x50, "Offset mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizationAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizationAsyncInstaller*, "BGLib.Polyglot", "LocalizationAsyncInstaller");
NEED_NO_BOX(::BGLib::Polyglot::__LocalizationAsyncInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::__LocalizationAsyncInstaller____c*, "BGLib.Polyglot", "LocalizationAsyncInstaller/<>c");

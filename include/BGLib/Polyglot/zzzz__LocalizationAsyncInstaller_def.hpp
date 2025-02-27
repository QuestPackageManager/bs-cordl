#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationAsyncInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizationAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace BGLib::Polyglot {
class LocalizationAsset;
}
namespace BGLib::Polyglot {
class LocalizationAsyncInstaller___c;
}
namespace BGLib::Polyglot {
class Localization;
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
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizationAsyncInstaller;
}
namespace BGLib::Polyglot {
class LocalizationAsyncInstaller___c;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizationAsyncInstaller);
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizationAsyncInstaller___c);
// Dependencies System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizationAsyncInstaller/<>c
class CORDL_TYPE LocalizationAsyncInstaller___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::Polyglot::LocalizationAsyncInstaller___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* __9__6_0;

  static inline ::BGLib::Polyglot::LocalizationAsyncInstaller___c* New_ctor();

  /// @brief Method <LocalizationContentToAsset>b__6_0, addr 0x22b36ec, size 0x60, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::LocalizationAsset* _LocalizationContentToAsset_b__6_0(::UnityEngine::TextAsset* localizationTextAsset);

  /// @brief Method .ctor, addr 0x22b36e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::Polyglot::LocalizationAsyncInstaller___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* getStaticF___9__6_0();

  static inline void setStaticF___9(::BGLib::Polyglot::LocalizationAsyncInstaller___c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::UnityW<::UnityEngine::TextAsset>, ::BGLib::Polyglot::LocalizationAsset*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationAsyncInstaller___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsyncInstaller___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationAsyncInstaller___c(LocalizationAsyncInstaller___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsyncInstaller___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationAsyncInstaller___c(LocalizationAsyncInstaller___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizationAsyncInstaller___c, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
// Dependencies BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1<T>
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizationAsyncInstaller
class CORDL_TYPE LocalizationAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::UnityEngine::TextAsset>> {
public:
  // Declarations
  using __c = ::BGLib::Polyglot::LocalizationAsyncInstaller___c;

  /// @brief Field _inputFiles, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__inputFiles, put = __cordl_internal_set__inputFiles)) ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* _inputFiles;

  /// @brief Field _mainPolyglotAsset, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mainPolyglotAsset, put = __cordl_internal_set__mainPolyglotAsset)) ::UnityW<::BGLib::Polyglot::Localization> _mainPolyglotAsset;

  __declspec(property(get = get_assetLabelRuntimeKey)) ::StringW assetLabelRuntimeKey;

  /// @brief Method InstallBindings, addr 0x22b3498, size 0x14c, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadLocalizationAssetsSync, addr 0x22b35e4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* LoadLocalizationAssetsSync();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x22b3368, size 0x1c, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>* assets,
                                         ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry);

  /// @brief Method LocalizationContentToAsset, addr 0x22b3384, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*
  LocalizationContentToAsset(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::TextAsset>>* content);

  static inline ::BGLib::Polyglot::LocalizationAsyncInstaller* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* const& __cordl_internal_get__inputFiles() const;

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*& __cordl_internal_get__inputFiles();

  constexpr ::UnityW<::BGLib::Polyglot::Localization> const& __cordl_internal_get__mainPolyglotAsset() const;

  constexpr ::UnityW<::BGLib::Polyglot::Localization>& __cordl_internal_get__mainPolyglotAsset();

  constexpr void __cordl_internal_set__inputFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* value);

  constexpr void __cordl_internal_set__mainPolyglotAsset(::UnityW<::BGLib::Polyglot::Localization> value);

  /// @brief Method .ctor, addr 0x22b3640, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0x22b3328, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationAsyncInstaller(LocalizationAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationAsyncInstaller(LocalizationAsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18057 };

  /// @brief Field kLocalizationContentLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kLocalizationContentLabel{ u"LocalizationContent" };

  /// @brief Field _mainPolyglotAsset, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::BGLib::Polyglot::Localization> ____mainPolyglotAsset;

  /// @brief Field _inputFiles, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* ____inputFiles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::Polyglot::LocalizationAsyncInstaller, ____mainPolyglotAsset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationAsyncInstaller, ____inputFiles) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizationAsyncInstaller, 0x58>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizationAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizationAsyncInstaller*, "BGLib.Polyglot", "LocalizationAsyncInstaller");
NEED_NO_BOX(::BGLib::Polyglot::LocalizationAsyncInstaller___c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizationAsyncInstaller___c*, "BGLib.Polyglot", "LocalizationAsyncInstaller/<>c");

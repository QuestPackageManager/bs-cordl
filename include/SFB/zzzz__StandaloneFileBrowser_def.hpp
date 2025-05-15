#pragma once
// IWYU pragma private; include "SFB/StandaloneFileBrowser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandaloneFileBrowser)
namespace SFB {
struct ExtensionFilter;
}
namespace SFB {
class IStandaloneFileBrowser;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace SFB {
class StandaloneFileBrowser;
}
// Write type traits
MARK_REF_PTR_T(::SFB::StandaloneFileBrowser);
// Dependencies System.Object
namespace SFB {
// Is value type: false
// CS Name: SFB.StandaloneFileBrowser
class CORDL_TYPE StandaloneFileBrowser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _platformWrapper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__platformWrapper, put = setStaticF__platformWrapper)) ::SFB::IStandaloneFileBrowser* _platformWrapper;

  static inline ::SFB::StandaloneFileBrowser* New_ctor();

  /// @brief Method OpenFilePanel, addr 0x3b7557c, size 0x110, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFilePanel(::StringW title, ::StringW directory, ::StringW extension, bool multiselect);

  /// @brief Method OpenFilePanel, addr 0x3b7568c, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions,
                                                                       bool multiselect);

  /// @brief Method OpenFilePanelAsync, addr 0x3b75784, size 0x120, virtual false, abstract: false, final false
  static inline void OpenFilePanelAsync(::StringW title, ::StringW directory, ::StringW extension, bool multiselect, ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method OpenFilePanelAsync, addr 0x3b758a4, size 0x104, virtual false, abstract: false, final false
  static inline void OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions, bool multiselect,
                                        ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method OpenFolderPanel, addr 0x3b759a8, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect);

  /// @brief Method OpenFolderPanelAsync, addr 0x3b75a94, size 0xfc, virtual false, abstract: false, final false
  static inline void OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method SaveFilePanel, addr 0x3b75b90, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension);

  /// @brief Method SaveFilePanel, addr 0x3b75ca0, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions);

  /// @brief Method SaveFilePanelAsync, addr 0x3b75d9c, size 0x120, virtual false, abstract: false, final false
  static inline void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension, ::System::Action_1<::StringW>* cb);

  /// @brief Method SaveFilePanelAsync, addr 0x3b75ebc, size 0x104, virtual false, abstract: false, final false
  static inline void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions,
                                        ::System::Action_1<::StringW>* cb);

  /// @brief Method .ctor, addr 0x3b75fc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::SFB::IStandaloneFileBrowser* getStaticF__platformWrapper();

  static inline void setStaticF__platformWrapper(::SFB::IStandaloneFileBrowser* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneFileBrowser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandaloneFileBrowser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneFileBrowser(StandaloneFileBrowser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneFileBrowser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneFileBrowser(StandaloneFileBrowser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::SFB::StandaloneFileBrowser, 0x10>, "Size mismatch!");

} // namespace SFB
NEED_NO_BOX(::SFB::StandaloneFileBrowser);
DEFINE_IL2CPP_ARG_TYPE(::SFB::StandaloneFileBrowser*, "SFB", "StandaloneFileBrowser");

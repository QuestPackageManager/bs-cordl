#pragma once
// IWYU pragma private; include "SFB/IStandaloneFileBrowser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IStandaloneFileBrowser)
namespace SFB {
struct ExtensionFilter;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace SFB {
class IStandaloneFileBrowser;
}
// Write type traits
MARK_REF_PTR_T(::SFB::IStandaloneFileBrowser);
// Dependencies
namespace SFB {
// Is value type: false
// CS Name: SFB.IStandaloneFileBrowser
class CORDL_TYPE IStandaloneFileBrowser {
public:
  // Declarations
  /// @brief Method OpenFilePanel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions, bool multiselect);

  /// @brief Method OpenFilePanelAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions, bool multiselect,
                                 ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method OpenFolderPanel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect);

  /// @brief Method OpenFolderPanelAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method SaveFilePanel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions);

  /// @brief Method SaveFilePanelAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions,
                                 ::System::Action_1<::StringW>* cb);

  // Ctor Parameters [CppParam { name: "", ty: "IStandaloneFileBrowser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStandaloneFileBrowser(IStandaloneFileBrowser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5413 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace SFB
NEED_NO_BOX(::SFB::IStandaloneFileBrowser);
DEFINE_IL2CPP_ARG_TYPE(::SFB::IStandaloneFileBrowser*, "SFB", "IStandaloneFileBrowser");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: SFB::IStandaloneFileBrowser
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace SFB {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6088))
// CS Name: ::SFB::IStandaloneFileBrowser*
class CORDL_TYPE IStandaloneFileBrowser {
public:
  // Declarations
  /// @brief Method OpenFilePanel addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions, bool multiselect);

  /// @brief Method OpenFolderPanel addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect);

  /// @brief Method SaveFilePanel addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions);

  /// @brief Method OpenFilePanelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions, bool multiselect,
                                 ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method OpenFolderPanelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method SaveFilePanelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions,
                                 ::System::Action_1<::StringW>* cb);

  // Ctor Parameters [CppParam { name: "", ty: "IStandaloneFileBrowser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStandaloneFileBrowser(IStandaloneFileBrowser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStandaloneFileBrowser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStandaloneFileBrowser(IStandaloneFileBrowser const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace SFB
NEED_NO_BOX(::SFB::IStandaloneFileBrowser);
DEFINE_IL2CPP_ARG_TYPE(::SFB::IStandaloneFileBrowser*, "SFB", "IStandaloneFileBrowser");

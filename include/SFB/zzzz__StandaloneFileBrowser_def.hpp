#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandaloneFileBrowser)
namespace SFB {
class IStandaloneFileBrowser;
}
namespace SFB {
struct ExtensionFilter;
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
// Type: SFB::StandaloneFileBrowser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace SFB {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6090))
// CS Name: ::SFB::StandaloneFileBrowser*
class CORDL_TYPE StandaloneFileBrowser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _platformWrapper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__platformWrapper, put = setStaticF__platformWrapper))::SFB::IStandaloneFileBrowser* _platformWrapper;

  static inline void setStaticF__platformWrapper(::SFB::IStandaloneFileBrowser* value);

  static inline ::SFB::IStandaloneFileBrowser* getStaticF__platformWrapper();

  /// @brief Method OpenFilePanel addr 0x232130c size 0x140 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFilePanel(::StringW title, ::StringW directory, ::StringW extension, bool multiselect);

  /// @brief Method OpenFilePanel addr 0x232144c size 0xf8 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions,
                                                                       bool multiselect);

  /// @brief Method OpenFilePanelAsync addr 0x2321544 size 0x148 virtual false final false
  static inline void OpenFilePanelAsync(::StringW title, ::StringW directory, ::StringW extension, bool multiselect, ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method OpenFilePanelAsync addr 0x232168c size 0x104 virtual false final false
  static inline void OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions, bool multiselect,
                                        ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method OpenFolderPanel addr 0x2321790 size 0xec virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect);

  /// @brief Method OpenFolderPanelAsync addr 0x232187c size 0xfc virtual false final false
  static inline void OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW, ::Array<::StringW>*>>* cb);

  /// @brief Method SaveFilePanel addr 0x2321978 size 0x140 virtual false final false
  static inline ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension);

  /// @brief Method SaveFilePanel addr 0x2321ab8 size 0xfc virtual false final false
  static inline ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions);

  /// @brief Method SaveFilePanelAsync addr 0x2321bb4 size 0x148 virtual false final false
  static inline void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension, ::System::Action_1<::StringW>* cb);

  /// @brief Method SaveFilePanelAsync addr 0x2321cfc size 0x104 virtual false final false
  static inline void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter, ::Array<::SFB::ExtensionFilter>*> extensions,
                                        ::System::Action_1<::StringW>* cb);

  static inline ::SFB::StandaloneFileBrowser* New_ctor();

  /// @brief Method .ctor addr 0x2321e00 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneFileBrowser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneFileBrowser(StandaloneFileBrowser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneFileBrowser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneFileBrowser(StandaloneFileBrowser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneFileBrowser();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::SFB::StandaloneFileBrowser, 0x10>, "Size mismatch!");

} // namespace SFB
NEED_NO_BOX(::SFB::StandaloneFileBrowser);
DEFINE_IL2CPP_ARG_TYPE(::SFB::StandaloneFileBrowser*, "SFB", "StandaloneFileBrowser");

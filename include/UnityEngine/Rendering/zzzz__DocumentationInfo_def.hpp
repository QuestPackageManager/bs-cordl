#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DocumentationInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DocumentationInfo)
// Forward declare root types
namespace UnityEngine::Rendering {
class DocumentationInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DocumentationInfo);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DocumentationInfo
class CORDL_TYPE DocumentationInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDefaultPackageLink, addr 0x65d1050, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultPackageLink(::StringW packageName);

  /// @brief Method GetDefaultPackageLink, addr 0x65d0fc0, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultPackageLink(::StringW packageName, ::StringW packageVersion);

  /// @brief Method GetPackageLink, addr 0x65d0b50, size 0x158, virtual false, abstract: false, final false
  static inline ::StringW GetPackageLink(::StringW packageName, ::StringW packageVersion, ::StringW pageName);

  /// @brief Method GetPackageLink, addr 0x65d0ca8, size 0x194, virtual false, abstract: false, final false
  static inline ::StringW GetPackageLink(::StringW packageName, ::StringW packageVersion, ::StringW pageName, ::StringW pageHash);

  /// @brief Method GetPageLink, addr 0x65d0e3c, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW GetPageLink(::StringW packageName, ::StringW pageName);

  /// @brief Method GetPageLink, addr 0x65d0860, size 0x1b8, virtual false, abstract: false, final false
  static inline ::StringW GetPageLink(::StringW packageName, ::StringW pageName, ::StringW pageHash);

  static inline ::UnityEngine::Rendering::DocumentationInfo* New_ctor();

  /// @brief Method .ctor, addr 0x65d1100, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_version, addr 0x65d0b0c, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DocumentationInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DocumentationInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DocumentationInfo(DocumentationInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DocumentationInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DocumentationInfo(DocumentationInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12045 };

  /// @brief Field fallbackVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString fallbackVersion{ u"13.1" };

  /// @brief Field packageDocumentationUrl offset 0xffffffff size 0x8
  static constexpr ::ConstString packageDocumentationUrl{ u"https://docs.unity3d.com/Packages/{0}@{1}/manual/" };

  /// @brief Field url offset 0xffffffff size 0x8
  static constexpr ::ConstString url{ u"https://docs.unity3d.com/Packages/{0}@{1}/manual/{2}.html{3}" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DocumentationInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DocumentationInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DocumentationInfo*, "UnityEngine.Rendering", "DocumentationInfo");

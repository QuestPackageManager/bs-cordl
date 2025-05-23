#pragma once
// IWYU pragma private; include "GlobalNamespace/IEnvironmentInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IEnvironmentInfo)
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class IEnvironmentInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IEnvironmentInfo);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IEnvironmentInfo
class CORDL_TYPE IEnvironmentInfo {
public:
  // Declarations
  __declspec(property(get = get_defaultLightshowAsset)) ::UnityW<::UnityEngine::TextAsset> defaultLightshowAsset;

  __declspec(property(get = get_environmentKeywords)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords;

  __declspec(property(get = get_environmentLightGroups)) ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups;

  /// @brief Method get_defaultLightshowAsset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_defaultLightshowAsset();

  /// @brief Method get_environmentKeywords, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords();

  /// @brief Method get_environmentLightGroups, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IEnvironmentLightGroups* get_environmentLightGroups();

  // Ctor Parameters [CppParam { name: "", ty: "IEnvironmentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnvironmentInfo(IEnvironmentInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IEnvironmentInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IEnvironmentInfo*, "", "IEnvironmentInfo");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MovedFromAttributeData)
// Forward declare root types
namespace UnityEngine::Scripting::APIUpdating {
struct MovedFromAttributeData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData);
// Type: UnityEngine.Scripting.APIUpdating::MovedFromAttributeData
// SizeInfo { instance_size: 32, native_size: 40, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Scripting::APIUpdating {
// Is value type: true
// CS Name: ::UnityEngine.Scripting.APIUpdating::MovedFromAttributeData
struct CORDL_TYPE MovedFromAttributeData {
public:
  // Declarations
  /// @brief Method Set, addr 0x2ddc658, size 0x38, virtual false, abstract: false, final false
  inline void Set(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MovedFromAttributeData();

  // Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "nameSpace", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "assembly", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "classHasChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nameSpaceHasChanged", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "assemblyHasChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "autoUdpateAPI", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr MovedFromAttributeData(::StringW className, ::StringW nameSpace, ::StringW assembly, bool classHasChanged, bool nameSpaceHasChanged, bool assemblyHasChanged, bool autoUdpateAPI) noexcept;

  /// @brief Field className, offset: 0x0, size: 0x8, def value: None
  ::StringW className;

  /// @brief Field nameSpace, offset: 0x8, size: 0x8, def value: None
  ::StringW nameSpace;

  /// @brief Field assembly, offset: 0x10, size: 0x8, def value: None
  ::StringW assembly;

  /// @brief Field classHasChanged, offset: 0x18, size: 0x1, def value: None
  bool classHasChanged;

  /// @brief Field nameSpaceHasChanged, offset: 0x19, size: 0x1, def value: None
  bool nameSpaceHasChanged;

  /// @brief Field assemblyHasChanged, offset: 0x1a, size: 0x1, def value: None
  bool assemblyHasChanged;

  /// @brief Field autoUdpateAPI, offset: 0x1b, size: 0x1, def value: None
  bool autoUdpateAPI;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, className) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, nameSpace) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, assembly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, classHasChanged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, nameSpaceHasChanged) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, assemblyHasChanged) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, autoUdpateAPI) == 0x1b, "Offset mismatch!");

} // namespace UnityEngine::Scripting::APIUpdating
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, "UnityEngine.Scripting.APIUpdating", "MovedFromAttributeData");

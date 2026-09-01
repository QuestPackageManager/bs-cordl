#pragma once
// IWYU pragma private; include "GlobalNamespace\CustomLevelPathHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CustomLevelPathHelper)
namespace System::IO {
class DirectoryInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomLevelPathHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomLevelPathHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomLevelPathHelper*, "", "CustomLevelPathHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomLevelPathHelper
class CORDL_TYPE CustomLevelPathHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsHiddenDirectory, addr 0x3707e9c, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsHiddenDirectory(::System::IO::DirectoryInfo* beatmapDirectory);

  static inline ::GlobalNamespace::CustomLevelPathHelper* New_ctor();

  /// @brief Method .ctor, addr 0x3707f58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomLevelPathHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelPathHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomLevelPathHelper(CustomLevelPathHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelPathHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomLevelPathHelper(CustomLevelPathHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14816 };

  /// @brief Field kStandardLevelInfoFilename offset 0xffffffff size 0x8
  static constexpr ::ConstString kStandardLevelInfoFilename{ u"Info.dat" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomLevelPathHelper) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace

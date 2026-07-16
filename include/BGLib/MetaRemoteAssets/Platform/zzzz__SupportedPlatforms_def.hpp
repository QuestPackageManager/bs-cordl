#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/Platform/SupportedPlatforms.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SupportedPlatforms)
// Forward declare root types
namespace BGLib::MetaRemoteAssets::Platform {
class SupportedPlatforms;
}
// Write type traits
MARK_REF_T(::BGLib::MetaRemoteAssets::Platform::SupportedPlatforms*);
DEFINE_IL2CPP_CLASS(::BGLib::MetaRemoteAssets::Platform::SupportedPlatforms*, "BGLib.MetaRemoteAssets.Platform", "SupportedPlatforms");
// Dependencies System.Object
namespace BGLib::MetaRemoteAssets::Platform {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.Platform.SupportedPlatforms
class CORDL_TYPE SupportedPlatforms : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportedPlatforms();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupportedPlatforms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupportedPlatforms(SupportedPlatforms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupportedPlatforms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupportedPlatforms(SupportedPlatforms const&) = delete;

  /// @brief Field Android offset 0xffffffff size 0x8
  static constexpr ::ConstString Android{ u"ANDROID" };

  /// @brief Field Playstation offset 0xffffffff size 0x8
  static constexpr ::ConstString Playstation{ u"PLAYSTATION" };

  /// @brief Field Windows offset 0xffffffff size 0x8
  static constexpr ::ConstString Windows{ u"WIN_64" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::MetaRemoteAssets::Platform::SupportedPlatforms) == 0x10, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets::Platform

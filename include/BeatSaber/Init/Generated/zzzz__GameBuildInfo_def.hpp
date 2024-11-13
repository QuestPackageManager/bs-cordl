#pragma once
// IWYU pragma private; include "BeatSaber/Init/Generated/GameBuildInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameBuildInfo)
// Forward declare root types
namespace BeatSaber::Init::Generated {
class GameBuildInfo;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Init::Generated::GameBuildInfo);
// Type: BeatSaber.Init.Generated::GameBuildInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Init::Generated {
// Is value type: false
// CS Name: ::BeatSaber.Init.Generated::GameBuildInfo*
class CORDL_TYPE GameBuildInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field kBuildLabel, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kBuildLabel, put = setStaticF_kBuildLabel)) ::BeatSaber::Init::__GameVersion__PreReleaseLabel kBuildLabel;

  static inline ::BeatSaber::Init::__GameVersion__PreReleaseLabel getStaticF_kBuildLabel();

  static inline void setStaticF_kBuildLabel(::BeatSaber::Init::__GameVersion__PreReleaseLabel value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameBuildInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameBuildInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameBuildInfo(GameBuildInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameBuildInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameBuildInfo(GameBuildInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18307 };

  /// @brief Field kDefaultPlatformVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultPlatformVersion{ u"1390" };

  /// @brief Field kPreReleaseLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kPreReleaseLabel{ u"" };

  /// @brief Field kPreReleasePrefix value: static_cast<int32_t>(0x1e)
  static ::BeatSaber::Init::__GameVersion__PreReleasePrefix const kPreReleasePrefix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::Generated::GameBuildInfo, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Init::Generated
NEED_NO_BOX(::BeatSaber::Init::Generated::GameBuildInfo);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::Generated::GameBuildInfo*, "BeatSaber.Init.Generated", "GameBuildInfo");

#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/EaseTypeConvertor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EaseTypeConvertor)
namespace BeatmapSaveDataCommon {
struct EaseType;
}
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace BeatmapSaveDataCommon {
class EaseTypeConvertor;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataCommon::EaseTypeConvertor);
// Dependencies System.Object
namespace BeatmapSaveDataCommon {
// Is value type: false
// CS Name: BeatmapSaveDataCommon.EaseTypeConvertor
class CORDL_TYPE EaseTypeConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x270f2d0, size 0x24, virtual false, abstract: false, final false
  static inline ::BeatmapSaveDataCommon::EaseType Convert(::GlobalNamespace::EaseType easeType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EaseTypeConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EaseTypeConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EaseTypeConvertor(EaseTypeConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EaseTypeConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EaseTypeConvertor(EaseTypeConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::EaseTypeConvertor, 0x10>, "Size mismatch!");

} // namespace BeatmapSaveDataCommon
NEED_NO_BOX(::BeatmapSaveDataCommon::EaseTypeConvertor);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::EaseTypeConvertor*, "BeatmapSaveDataCommon", "EaseTypeConvertor");

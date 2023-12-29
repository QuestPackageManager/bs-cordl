#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapSaveDataHelpers)
namespace System {
class Version;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapSaveDataHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapSaveDataHelpers);
// Type: ::BeatmapSaveDataHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14987))
// CS Name: ::BeatmapSaveDataHelpers*
class CORDL_TYPE BeatmapSaveDataHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Field version2_6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version2_6_0, put = setStaticF_version2_6_0))::System::Version* version2_6_0;

  static inline void setStaticF_version2_6_0(::System::Version* value);

  static inline ::System::Version* getStaticF_version2_6_0();

  /// @brief Method GetVersion addr 0xd9f668 size 0x130 virtual false final false
  static inline ::System::Version* GetVersion(::StringW data);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveDataHelpers(BeatmapSaveDataHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveDataHelpers(BeatmapSaveDataHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveDataHelpers();

public:
  /// @brief Field kLegacyVersionSearchString offset 0xffffffff size 0x8
  static constexpr ::ConstString kLegacyVersionSearchString{ u"\"_version\":\"" };

  /// @brief Field kVersionSearchString offset 0xffffffff size 0x8
  static constexpr ::ConstString kVersionSearchString{ u"\"version\":\"" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapSaveDataHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapSaveDataHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSaveDataHelpers*, "", "BeatmapSaveDataHelpers");

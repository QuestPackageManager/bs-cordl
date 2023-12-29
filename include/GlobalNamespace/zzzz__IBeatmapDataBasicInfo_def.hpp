#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBeatmapDataBasicInfo)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapDataBasicInfo);
// Type: ::IBeatmapDataBasicInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4290))
// CS Name: ::IBeatmapDataBasicInfo*
class CORDL_TYPE IBeatmapDataBasicInfo {
public:
  // Declarations
  __declspec(property(get = get_numberOfLines)) int32_t numberOfLines;

  __declspec(property(get = get_cuttableNotesCount)) int32_t cuttableNotesCount;

  __declspec(property(get = get_obstaclesCount)) int32_t obstaclesCount;

  __declspec(property(get = get_bombsCount)) int32_t bombsCount;

  __declspec(property(get = get_specialBasicBeatmapEventKeywords))::System::Collections::Generic::IEnumerable_1<::StringW>* specialBasicBeatmapEventKeywords;

  /// @brief Method get_numberOfLines addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_numberOfLines();

  /// @brief Method get_cuttableNotesCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_cuttableNotesCount();

  /// @brief Method get_obstaclesCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_obstaclesCount();

  /// @brief Method get_bombsCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_bombsCount();

  /// @brief Method get_specialBasicBeatmapEventKeywords addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_specialBasicBeatmapEventKeywords();

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapDataBasicInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapDataBasicInfo(IBeatmapDataBasicInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapDataBasicInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapDataBasicInfo(IBeatmapDataBasicInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapDataBasicInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapDataBasicInfo*, "", "IBeatmapDataBasicInfo");

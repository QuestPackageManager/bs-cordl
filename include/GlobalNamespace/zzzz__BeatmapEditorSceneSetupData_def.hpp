#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorSceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEditorSceneSetupData);
// Type: ::BeatmapEditorSceneSetupData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6047))
// CS Name: ::BeatmapEditorSceneSetupData*
class CORDL_TYPE BeatmapEditorSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field _levelDirPath, offset 0x10, size 0x8
  __declspec(property(get = __get__levelDirPath, put = __set__levelDirPath))::StringW _levelDirPath;

  /// @brief Field _levelAssetPath, offset 0x18, size 0x8
  __declspec(property(get = __get__levelAssetPath, put = __set__levelAssetPath))::StringW _levelAssetPath;

  __declspec(property(get = get_levelDirPath))::StringW levelDirPath;

  __declspec(property(get = get_levelAssetPath))::StringW levelAssetPath;

  constexpr ::StringW& __get__levelDirPath();

  constexpr ::StringW const& __get__levelDirPath() const;

  constexpr void __set__levelDirPath(::StringW value);

  constexpr ::StringW& __get__levelAssetPath();

  constexpr ::StringW const& __get__levelAssetPath() const;

  constexpr void __set__levelAssetPath(::StringW value);

  /// @brief Method get_levelDirPath addr 0x231c394 size 0x8 virtual false final false
  inline ::StringW get_levelDirPath();

  /// @brief Method get_levelAssetPath addr 0x231c39c size 0x8 virtual false final false
  inline ::StringW get_levelAssetPath();

  static inline ::GlobalNamespace::BeatmapEditorSceneSetupData* New_ctor(::StringW levelDirPath, ::StringW levelAssetPath);

  /// @brief Method .ctor addr 0x231c3a4 size 0x2c virtual false final false
  inline void _ctor(::StringW levelDirPath, ::StringW levelAssetPath);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEditorSceneSetupData(BeatmapEditorSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEditorSceneSetupData(BeatmapEditorSceneSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorSceneSetupData();

public:
  /// @brief Field _levelDirPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelDirPath;

  /// @brief Field _levelAssetPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____levelAssetPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorSceneSetupData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEditorSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorSceneSetupData*, "", "BeatmapEditorSceneSetupData");

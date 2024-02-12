#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileDifficultyBeatmap)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FileDifficultyBeatmap;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileDifficultyBeatmap);
// Type: ::FileDifficultyBeatmap
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10803))
// CS Name: ::FileDifficultyBeatmap*
class CORDL_TYPE FileDifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapChecksum, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapChecksum, put = __cordl_internal_set__beatmapChecksum))::StringW _beatmapChecksum;

  /// @brief Field _beatmapPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapPath, put = __cordl_internal_set__beatmapPath))::StringW _beatmapPath;

  /// @brief Field _lightshowPath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightshowPath, put = __cordl_internal_set__lightshowPath))::StringW _lightshowPath;

  constexpr ::StringW& __cordl_internal_get__beatmapChecksum();

  constexpr ::StringW const& __cordl_internal_get__beatmapChecksum() const;

  constexpr void __cordl_internal_set__beatmapChecksum(::StringW value);

  constexpr ::StringW& __cordl_internal_get__beatmapPath();

  constexpr ::StringW const& __cordl_internal_get__beatmapPath() const;

  constexpr void __cordl_internal_set__beatmapPath(::StringW value);

  constexpr ::StringW& __cordl_internal_get__lightshowPath();

  constexpr ::StringW const& __cordl_internal_get__lightshowPath() const;

  constexpr void __cordl_internal_set__lightshowPath(::StringW value);

  static inline ::GlobalNamespace::FileDifficultyBeatmap* New_ctor(::StringW beatmapChecksum, ::StringW beatmapPath, ::StringW lightshowPath);

  /// @brief Method .ctor, addr 0x1288b6c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW beatmapChecksum, ::StringW beatmapPath, ::StringW lightshowPath);

  /// @brief Method GetBeatmapStringAsync, addr 0x1288ba8, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync();

  /// @brief Method GetLightshowStringAsync, addr 0x1288c8c, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync();

  /// @brief Method GetBeatmapString, addr 0x1288d70, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapString();

  /// @brief Method GetLightshowString, addr 0x1288e14, size 0x88, virtual false, abstract: false, final false
  inline ::StringW GetLightshowString();

  /// @brief Method GetBeatmapChecksum, addr 0x1288e9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapChecksum();

  // Ctor Parameters [CppParam { name: "", ty: "FileDifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileDifficultyBeatmap(FileDifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileDifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileDifficultyBeatmap(FileDifficultyBeatmap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileDifficultyBeatmap();

public:
  /// @brief Field _beatmapChecksum, offset: 0x10, size: 0x8, def value: None
  ::StringW ____beatmapChecksum;

  /// @brief Field _beatmapPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____beatmapPath;

  /// @brief Field _lightshowPath, offset: 0x20, size: 0x8, def value: None
  ::StringW ____lightshowPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileDifficultyBeatmap, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FileDifficultyBeatmap, ____beatmapChecksum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileDifficultyBeatmap, ____beatmapPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileDifficultyBeatmap, ____lightshowPath) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileDifficultyBeatmap*, "", "FileDifficultyBeatmap");

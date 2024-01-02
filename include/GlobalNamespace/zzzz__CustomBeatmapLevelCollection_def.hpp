#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CustomBeatmapLevelCollection)
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace GlobalNamespace {
class CustomPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBeatmapLevelCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomBeatmapLevelCollection);
// Type: ::CustomBeatmapLevelCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4377))
// CS Name: ::CustomBeatmapLevelCollection*
class CORDL_TYPE CustomBeatmapLevelCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _customPreviewBeatmapLevels, offset 0x10, size 0x8
  __declspec(property(get = __get__customPreviewBeatmapLevels,
                      put = __set__customPreviewBeatmapLevels))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>* _customPreviewBeatmapLevels;

  __declspec(property(get = get_beatmapLevels))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* beatmapLevels;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
  constexpr operator ::GlobalNamespace::IBeatmapLevelCollection*() noexcept;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*& __get__customPreviewBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*> const& __get__customPreviewBeatmapLevels() const;

  constexpr void __set__customPreviewBeatmapLevels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>* value);

  /// @brief Method get_beatmapLevels, addr 0x2346a7c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();

  static inline ::GlobalNamespace::CustomBeatmapLevelCollection*
  New_ctor(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*, ::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*> customPreviewBeatmapLevels);

  /// @brief Method .ctor, addr 0x2346a84, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*, ::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*> customPreviewBeatmapLevels);

  // Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevelCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomBeatmapLevelCollection(CustomBeatmapLevelCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevelCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomBeatmapLevelCollection(CustomBeatmapLevelCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomBeatmapLevelCollection();

public:
  /// @brief Field _customPreviewBeatmapLevels, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>* ____customPreviewBeatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomBeatmapLevelCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBeatmapLevelCollection, ____customPreviewBeatmapLevels) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomBeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomBeatmapLevelCollection*, "", "CustomBeatmapLevelCollection");

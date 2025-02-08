#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataMirrorTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataMirrorTransform)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapDataMirrorTransform___c__DisplayClass0_0;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataMirrorTransform;
}
namespace GlobalNamespace {
class BeatmapDataMirrorTransform___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataMirrorTransform);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataMirrorTransform/<>c__DisplayClass0_0
class CORDL_TYPE BeatmapDataMirrorTransform___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field numberOfLines, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_numberOfLines, put = __cordl_internal_set_numberOfLines)) int32_t numberOfLines;

  static inline ::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateTransformedData>g__ProcessData|0, addr 0x26ad030, size 0x88, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  constexpr int32_t const& __cordl_internal_get_numberOfLines() const;

  constexpr int32_t& __cordl_internal_get_numberOfLines();

  constexpr void __cordl_internal_set_numberOfLines(int32_t value);

  /// @brief Method .ctor, addr 0x26ad028, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataMirrorTransform___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataMirrorTransform___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataMirrorTransform___c__DisplayClass0_0(BeatmapDataMirrorTransform___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataMirrorTransform___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataMirrorTransform___c__DisplayClass0_0(BeatmapDataMirrorTransform___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12789 };

  /// @brief Field numberOfLines, offset: 0x10, size: 0x4, def value: None
  int32_t ___numberOfLines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0, ___numberOfLines) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataMirrorTransform
class CORDL_TYPE BeatmapDataMirrorTransform : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0;

  /// @brief Method CreateTransformedData, addr 0x26aceac, size 0x17c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataMirrorTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataMirrorTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataMirrorTransform(BeatmapDataMirrorTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataMirrorTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataMirrorTransform(BeatmapDataMirrorTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12790 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataMirrorTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataMirrorTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataMirrorTransform*, "", "BeatmapDataMirrorTransform");
NEED_NO_BOX(::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataMirrorTransform___c__DisplayClass0_0*, "", "BeatmapDataMirrorTransform/<>c__DisplayClass0_0");

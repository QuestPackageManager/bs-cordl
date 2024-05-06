#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelExtensions)
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class __BeatmapLevelExtensions____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelExtensions;
}
namespace GlobalNamespace {
class __BeatmapLevelExtensions____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelExtensions);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelExtensions____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelExtensions::<>c*
class CORDL_TYPE __BeatmapLevelExtensions____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BeatmapLevelExtensions____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Func_2<::StringW, ::StringW>* __9__1_0;

  static inline ::GlobalNamespace::__BeatmapLevelExtensions____c* New_ctor();

  /// @brief Method <ToRuntime>b__1_0, addr 0x14be958, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _ToRuntime_b__1_0(::StringW l);

  /// @brief Method .ctor, addr 0x14be950, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__BeatmapLevelExtensions____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__1_0();

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapLevelExtensions____c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelExtensions____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelExtensions____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelExtensions____c(__BeatmapLevelExtensions____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelExtensions____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelExtensions____c(__BeatmapLevelExtensions____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelExtensions____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelExtensions*
class CORDL_TYPE BeatmapLevelExtensions : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BeatmapLevelExtensions____c;

  /// @brief Method ToCensoredRuntime, addr 0x14bd2d4, size 0x8d8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevel* ToCensoredRuntime(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo, ::UnityEngine::Sprite* coverSprite, ::StringW censoredLocalizedSongName);

  /// @brief Method ToRuntime, addr 0x14bdbd8, size 0xc84, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevel* ToRuntime(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelExtensions(BeatmapLevelExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelExtensions(BeatmapLevelExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelExtensions*, "", "BeatmapLevelExtensions");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelExtensions____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelExtensions____c*, "", "BeatmapLevelExtensions/<>c");

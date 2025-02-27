#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelExtensions)
namespace GlobalNamespace {
class BeatmapLevelExtensions___c;
}
namespace GlobalNamespace {
class BeatmapLevelSO_ColorScheme;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
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
class BeatmapLevelExtensions___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelExtensions);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelExtensions___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelExtensions/<>c
class CORDL_TYPE BeatmapLevelExtensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapLevelExtensions___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::StringW, ::StringW>* __9__1_0;

  static inline ::GlobalNamespace::BeatmapLevelExtensions___c* New_ctor();

  /// @brief Method <ToRuntime>b__1_0, addr 0x26ced28, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _ToRuntime_b__1_0(::StringW l);

  /// @brief Method .ctor, addr 0x26ced20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapLevelExtensions___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__1_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapLevelExtensions___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelExtensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelExtensions___c(BeatmapLevelExtensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelExtensions___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelExtensions___c(BeatmapLevelExtensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelExtensions___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelExtensions
class CORDL_TYPE BeatmapLevelExtensions : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::BeatmapLevelExtensions___c;

  /// @brief Method CreateColorScheme, addr 0x26cea2c, size 0x290, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorScheme* CreateColorScheme(int32_t idx, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>* colorSchemes);

  /// @brief Method ToCensoredRuntime, addr 0x26cd29c, size 0x930, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevel* ToCensoredRuntime(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo, ::UnityEngine::Sprite* coverSprite, ::StringW censoredLocalizedSongName);

  /// @brief Method ToRuntime, addr 0x26cdbf8, size 0xd04, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12961 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelExtensions*, "", "BeatmapLevelExtensions");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelExtensions___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelExtensions___c*, "", "BeatmapLevelExtensions/<>c");

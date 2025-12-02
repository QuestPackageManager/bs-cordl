#pragma once
// IWYU pragma private; include "GlobalNamespace/AlphabetScrollbarInfoBeatmapLevelHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlphabetScrollbarInfoBeatmapLevelHelper)
namespace GlobalNamespace {
class AlphabetScrollInfo_Data;
}
namespace GlobalNamespace {
class AlphabetScrollbarInfoBeatmapLevelHelper___c;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class AlphabetScrollbarInfoBeatmapLevelHelper;
}
namespace GlobalNamespace {
class AlphabetScrollbarInfoBeatmapLevelHelper___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper);
MARK_REF_PTR_T(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AlphabetScrollbarInfoBeatmapLevelHelper/<>c
class CORDL_TYPE AlphabetScrollbarInfoBeatmapLevelHelper___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>* __9__4_0;

  static inline ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c* New_ctor();

  /// @brief Method <CreateData>b__4_0, addr 0x3605954, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _CreateData_b__4_0(::GlobalNamespace::BeatmapLevel* x);

  /// @brief Method .ctor, addr 0x3605950, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>* getStaticF___9__4_0();

  static inline void setStaticF___9(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphabetScrollbarInfoBeatmapLevelHelper___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbarInfoBeatmapLevelHelper___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphabetScrollbarInfoBeatmapLevelHelper___c(AlphabetScrollbarInfoBeatmapLevelHelper___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbarInfoBeatmapLevelHelper___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphabetScrollbarInfoBeatmapLevelHelper___c(AlphabetScrollbarInfoBeatmapLevelHelper___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14984 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AlphabetScrollbarInfoBeatmapLevelHelper
class CORDL_TYPE AlphabetScrollbarInfoBeatmapLevelHelper : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c;

  /// @brief Method CreateData, addr 0x36052ac, size 0x5c0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>*
  CreateData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, bool sortBeatmapLevels,
             ::ByRef<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*> sortedBeatmapLevels);

  /// @brief Method IsNumericOrSpecial, addr 0x360586c, size 0x90, virtual false, abstract: false, final false
  static inline bool IsNumericOrSpecial(::StringW comparedChar);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphabetScrollbarInfoBeatmapLevelHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbarInfoBeatmapLevelHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphabetScrollbarInfoBeatmapLevelHelper(AlphabetScrollbarInfoBeatmapLevelHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbarInfoBeatmapLevelHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphabetScrollbarInfoBeatmapLevelHelper(AlphabetScrollbarInfoBeatmapLevelHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14985 };

  /// @brief Field kFirstAlphabet offset 0xffffffff size 0x8
  static constexpr ::ConstString kFirstAlphabet{ u"A" };

  /// @brief Field kLastAlphabet offset 0xffffffff size 0x8
  static constexpr ::ConstString kLastAlphabet{ u"Z" };

  /// @brief Field kMaxCharactersCount offset 0xffffffff size 0x4
  static constexpr int32_t kMaxCharactersCount{ static_cast<int32_t>(0x1c) };

  /// @brief Field kNonAlphabetChar offset 0xffffffff size 0x2
  static constexpr char16_t kNonAlphabetChar{ u'#' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper*, "", "AlphabetScrollbarInfoBeatmapLevelHelper");
NEED_NO_BOX(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*, "", "AlphabetScrollbarInfoBeatmapLevelHelper/<>c");

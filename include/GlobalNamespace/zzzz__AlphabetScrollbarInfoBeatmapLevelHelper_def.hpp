#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlphabetScrollbarInfoBeatmapLevelHelper)
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class __AlphabetScrollInfo__Data;
}
namespace GlobalNamespace {
class __AlphabetScrollbarInfoBeatmapLevelHelper____c;
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
class __AlphabetScrollbarInfoBeatmapLevelHelper____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper);
MARK_REF_PTR_T(::GlobalNamespace::__AlphabetScrollbarInfoBeatmapLevelHelper____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AlphabetScrollbarInfoBeatmapLevelHelper::<>c*
class CORDL_TYPE __AlphabetScrollbarInfoBeatmapLevelHelper____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__AlphabetScrollbarInfoBeatmapLevelHelper____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>* __9__3_0;

  static inline ::GlobalNamespace::__AlphabetScrollbarInfoBeatmapLevelHelper____c* New_ctor();

  /// @brief Method <CreateData>b__3_0, addr 0x12f8e84, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _CreateData_b__3_0(::GlobalNamespace::BeatmapLevel* x);

  /// @brief Method .ctor, addr 0x12f8e7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__AlphabetScrollbarInfoBeatmapLevelHelper____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::__AlphabetScrollbarInfoBeatmapLevelHelper____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AlphabetScrollbarInfoBeatmapLevelHelper____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollbarInfoBeatmapLevelHelper____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AlphabetScrollbarInfoBeatmapLevelHelper____c(__AlphabetScrollbarInfoBeatmapLevelHelper____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollbarInfoBeatmapLevelHelper____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AlphabetScrollbarInfoBeatmapLevelHelper____c(__AlphabetScrollbarInfoBeatmapLevelHelper____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AlphabetScrollbarInfoBeatmapLevelHelper____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AlphabetScrollbarInfoBeatmapLevelHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AlphabetScrollbarInfoBeatmapLevelHelper*
class CORDL_TYPE AlphabetScrollbarInfoBeatmapLevelHelper : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__AlphabetScrollbarInfoBeatmapLevelHelper____c;

  /// @brief Method CreateData, addr 0x12f8884, size 0x594, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__AlphabetScrollInfo__Data*>*
  CreateData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, bool sortBeatmapLevels,
             ByRef<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*> sortedBeatmapLevels);

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

  /// @brief Field kFirstAlphabet offset 0xffffffff size 0x8
  static constexpr ::ConstString kFirstAlphabet{ u"A" };

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
NEED_NO_BOX(::GlobalNamespace::__AlphabetScrollbarInfoBeatmapLevelHelper____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AlphabetScrollbarInfoBeatmapLevelHelper____c*, "", "AlphabetScrollbarInfoBeatmapLevelHelper/<>c");

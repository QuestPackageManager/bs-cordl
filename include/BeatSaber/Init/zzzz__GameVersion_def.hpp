#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__RuntimePlatformType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameVersion)
namespace BeatSaber::Init {
struct GameVersion_BuildInfo;
}
namespace BeatSaber::Init {
struct GameVersion_Content;
}
namespace BeatSaber::Init {
struct GameVersion_Metadata;
}
namespace BeatSaber::Init {
struct GameVersion_PreReleaseLabel;
}
namespace BeatSaber::Init {
struct GameVersion_PreReleasePrefix;
}
namespace BeatSaber::Init {
class PreReleaseLabel_GameVersion___c;
}
namespace BeatSaber::Init {
class PreReleaseLabel_GameVersion___c__DisplayClass10_0;
}
namespace BeatSaber::Init {
class PreReleaseLabel_GameVersion___c__DisplayClass11_0;
}
namespace BeatSaber::Init {
struct RuntimePlatformType;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Text::RegularExpressions {
class Group;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BeatSaber::Init {
struct GameVersion_PreReleasePrefix;
}
namespace BeatSaber::Init {
class GameVersion;
}
namespace BeatSaber::Init {
class PreReleaseLabel_GameVersion___c;
}
namespace BeatSaber::Init {
class PreReleaseLabel_GameVersion___c__DisplayClass10_0;
}
namespace BeatSaber::Init {
class PreReleaseLabel_GameVersion___c__DisplayClass11_0;
}
namespace BeatSaber::Init {
struct GameVersion_BuildInfo;
}
namespace BeatSaber::Init {
struct GameVersion_Content;
}
namespace BeatSaber::Init {
struct GameVersion_Metadata;
}
namespace BeatSaber::Init {
struct GameVersion_PreReleaseLabel;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Init::GameVersion_PreReleasePrefix);
MARK_REF_PTR_T(::BeatSaber::Init::GameVersion);
MARK_REF_PTR_T(::BeatSaber::Init::PreReleaseLabel_GameVersion___c);
MARK_REF_PTR_T(::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0);
MARK_REF_PTR_T(::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0);
MARK_VAL_T(::BeatSaber::Init::GameVersion_BuildInfo);
MARK_VAL_T(::BeatSaber::Init::GameVersion_Content);
MARK_VAL_T(::BeatSaber::Init::GameVersion_Metadata);
MARK_VAL_T(::BeatSaber::Init::GameVersion_PreReleaseLabel);
// Dependencies
namespace BeatSaber::Init {
// Is value type: true
// CS Name: BeatSaber.Init.GameVersion/PreReleasePrefix
struct CORDL_TYPE GameVersion_PreReleasePrefix {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameVersion_PreReleasePrefix_Unwrapped
  enum struct __GameVersion_PreReleasePrefix_Unwrapped : int32_t {
    __E_Alpha = static_cast<int32_t>(0x0),
    __E_Beta = static_cast<int32_t>(0xa),
    __E_Nightly = static_cast<int32_t>(0x14),
    __E_ReleaseCandidate = static_cast<int32_t>(0x1e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameVersion_PreReleasePrefix_Unwrapped() const noexcept {
    return static_cast<__GameVersion_PreReleasePrefix_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersion_PreReleasePrefix();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameVersion_PreReleasePrefix(int32_t value__) noexcept;

  /// @brief Field Alpha value: I32(0)
  static ::BeatSaber::Init::GameVersion_PreReleasePrefix const Alpha;

  /// @brief Field Beta value: I32(10)
  static ::BeatSaber::Init::GameVersion_PreReleasePrefix const Beta;

  /// @brief Field Nightly value: I32(20)
  static ::BeatSaber::Init::GameVersion_PreReleasePrefix const Nightly;

  /// @brief Field ReleaseCandidate value: I32(30)
  static ::BeatSaber::Init::GameVersion_PreReleasePrefix const ReleaseCandidate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22360 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersion_PreReleasePrefix, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersion_PreReleasePrefix, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies
namespace BeatSaber::Init {
// Is value type: true
// CS Name: BeatSaber.Init.GameVersion/Content
struct CORDL_TYPE GameVersion_Content {
public:
  // Declarations
  /// @brief Field kZero, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kZero, put = setStaticF_kZero)) ::BeatSaber::Init::GameVersion_Content kZero;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>*();

  /// @brief Method CompareTo, addr 0x3195700, size 0x40, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::GameVersion_Content other);

  /// @brief Method Equals, addr 0x3196478, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::GameVersion_Content other);

  /// @brief Method Parse, addr 0x3195380, size 0x7c, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_Content Parse(::StringW versionCode);

  /// @brief Method Parse, addr 0x3196044, size 0x324, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_Content Parse(::StringW versionCore, ::StringW pattern);

  /// @brief Method ParseOnStartOf, addr 0x3196368, size 0x7c, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_Content ParseOnStartOf(::StringW versionCode);

  /// @brief Method ReadFromApplicationVersion, addr 0x31963e4, size 0x94, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_Content ReadFromApplicationVersion();

  /// @brief Method ToString, addr 0x31959a4, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3196038, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t major, uint32_t minor, uint32_t patch);

  static inline ::BeatSaber::Init::GameVersion_Content getStaticF_kZero();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>* i___System__IComparable_1___BeatSaber__Init__GameVersion_Content_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>* i___System__IEquatable_1___BeatSaber__Init__GameVersion_Content_();

  static inline void setStaticF_kZero(::BeatSaber::Init::GameVersion_Content value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersion_Content();

  // Ctor Parameters [CppParam { name: "major", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "patch",
  // ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GameVersion_Content(uint32_t major, uint32_t minor, uint32_t patch) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field kMajorGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMajorGroupName{ u"major" };

  /// @brief Field kMinorGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMinorGroupName{ u"minor" };

  /// @brief Field kPatchGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPatchGroupName{ u"patch" };

  /// @brief Field kVersionCorePattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kVersionCorePattern{ u"^(?<major>0|[1-9]\\d*)\\.(?<minor>0|[1-9]\\d*)\\.(?<patch>0|[1-9]\\d*)$" };

  /// @brief Field kVersionCorePatternOnStartOfString offset 0xffffffff size 0x8
  static constexpr ::ConstString kVersionCorePatternOnStartOfString{ u"^(?<major>0|[1-9]\\d*)\\.(?<minor>0|[1-9]\\d*)\\.(?<patch>0|[1-9]\\d*)" };

  /// @brief Field major, offset: 0x0, size: 0x4, def value: None
  uint32_t major;

  /// @brief Field minor, offset: 0x4, size: 0x4, def value: None
  uint32_t minor;

  /// @brief Field patch, offset: 0x8, size: 0x4, def value: None
  uint32_t patch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersion_Content, major) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion_Content, minor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion_Content, patch) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersion_Content, 0xc>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies System.Object
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.GameVersion/PreReleaseLabel/<>c
class CORDL_TYPE PreReleaseLabel_GameVersion___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatSaber::Init::PreReleaseLabel_GameVersion___c* __9;

  static inline ::BeatSaber::Init::PreReleaseLabel_GameVersion___c* New_ctor();

  /// @brief Method <.cctor>b__16_0, addr 0x31970d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__16_0(::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW> el);

  /// @brief Method .ctor, addr 0x31970d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::Init::PreReleaseLabel_GameVersion___c* getStaticF___9();

  static inline void setStaticF___9(::BeatSaber::Init::PreReleaseLabel_GameVersion___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreReleaseLabel_GameVersion___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreReleaseLabel_GameVersion___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreReleaseLabel_GameVersion___c(PreReleaseLabel_GameVersion___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreReleaseLabel_GameVersion___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreReleaseLabel_GameVersion___c(PreReleaseLabel_GameVersion___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22362 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::PreReleaseLabel_GameVersion___c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies System.Object
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.GameVersion/PreReleaseLabel/<>c__DisplayClass10_0
class CORDL_TYPE PreReleaseLabel_GameVersion___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field preReleasePrefixGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_preReleasePrefixGroup, put = __cordl_internal_set_preReleasePrefixGroup)) ::System::Text::RegularExpressions::Group* preReleasePrefixGroup;

  static inline ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0* New_ctor();

  /// @brief Method <Parse>b__0, addr 0x31970e0, size 0x2c, virtual false, abstract: false, final false
  inline bool _Parse_b__0(::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW> tuple);

  constexpr ::System::Text::RegularExpressions::Group* const& __cordl_internal_get_preReleasePrefixGroup() const;

  constexpr ::System::Text::RegularExpressions::Group*& __cordl_internal_get_preReleasePrefixGroup();

  constexpr void __cordl_internal_set_preReleasePrefixGroup(::System::Text::RegularExpressions::Group* value);

  /// @brief Method .ctor, addr 0x31969f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreReleaseLabel_GameVersion___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreReleaseLabel_GameVersion___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreReleaseLabel_GameVersion___c__DisplayClass10_0(PreReleaseLabel_GameVersion___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreReleaseLabel_GameVersion___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreReleaseLabel_GameVersion___c__DisplayClass10_0(PreReleaseLabel_GameVersion___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22363 };

  /// @brief Field preReleasePrefixGroup, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Group* ___preReleasePrefixGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0, ___preReleasePrefixGroup) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies BeatSaber.Init.GameVersion::PreReleasePrefix, System.Object
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.GameVersion/PreReleaseLabel/<>c__DisplayClass11_0
class CORDL_TYPE PreReleaseLabel_GameVersion___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentPreReleasePrefix, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_currentPreReleasePrefix, put = __cordl_internal_set_currentPreReleasePrefix)) ::BeatSaber::Init::GameVersion_PreReleasePrefix currentPreReleasePrefix;

  static inline ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0* New_ctor();

  /// @brief Method <GetPrefixText>b__0, addr 0x319710c, size 0x10, virtual false, abstract: false, final false
  inline bool _GetPrefixText_b__0(::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW> tuple);

  constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix const& __cordl_internal_get_currentPreReleasePrefix() const;

  constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix& __cordl_internal_get_currentPreReleasePrefix();

  constexpr void __cordl_internal_set_currentPreReleasePrefix(::BeatSaber::Init::GameVersion_PreReleasePrefix value);

  /// @brief Method .ctor, addr 0x3196b38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreReleaseLabel_GameVersion___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreReleaseLabel_GameVersion___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreReleaseLabel_GameVersion___c__DisplayClass11_0(PreReleaseLabel_GameVersion___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreReleaseLabel_GameVersion___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreReleaseLabel_GameVersion___c__DisplayClass11_0(PreReleaseLabel_GameVersion___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22364 };

  /// @brief Field currentPreReleasePrefix, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Init::GameVersion_PreReleasePrefix ___currentPreReleasePrefix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0, ___currentPreReleasePrefix) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies BeatSaber.Init.GameVersion::PreReleasePrefix
namespace BeatSaber::Init {
// Is value type: true
// CS Name: BeatSaber.Init.GameVersion/PreReleaseLabel
struct CORDL_TYPE GameVersion_PreReleaseLabel {
public:
  // Declarations
  using __c = ::BeatSaber::Init::PreReleaseLabel_GameVersion___c;

  using __c__DisplayClass10_0 = ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0;

  using __c__DisplayClass11_0 = ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0;

  /// @brief Field kDefault, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kDefault, put = setStaticF_kDefault)) ::BeatSaber::Init::GameVersion_PreReleaseLabel kDefault;

  /// @brief Field kPreReleasePrefixLabelMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kPreReleasePrefixLabelMap,
                      put = setStaticF_kPreReleasePrefixLabelMap)) ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>*
      kPreReleasePrefixLabelMap;

  /// @brief Field kPrereleasePattern, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kPrereleasePattern, put = setStaticF_kPrereleasePattern)) ::StringW kPrereleasePattern;

  /// @brief Field kRelease, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kRelease, put = setStaticF_kRelease)) ::BeatSaber::Init::GameVersion_PreReleaseLabel kRelease;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*();

  /// @brief Method CompareTo, addr 0x3196bb0, size 0x2c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::GameVersion_PreReleaseLabel other);

  /// @brief Method Equals, addr 0x3196bdc, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::GameVersion_PreReleaseLabel other);

  /// @brief Method FirstLetterToUpper, addr 0x31965d0, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW FirstLetterToUpper(::ByRef<::StringW> value);

  /// @brief Method GetPrefixText, addr 0x31969f4, size 0x144, virtual false, abstract: false, final false
  inline ::StringW GetPrefixText();

  /// @brief Method Parse, addr 0x31966e8, size 0x308, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_PreReleaseLabel Parse(::StringW releaseLabel);

  /// @brief Method ToString, addr 0x3196b3c, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x319655c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::GameVersion_PreReleasePrefix prefix, ::StringW label);

  static inline ::BeatSaber::Init::GameVersion_PreReleaseLabel getStaticF_kDefault();

  static inline ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>* getStaticF_kPreReleasePrefixLabelMap();

  static inline ::StringW getStaticF_kPrereleasePattern();

  static inline ::BeatSaber::Init::GameVersion_PreReleaseLabel getStaticF_kRelease();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>* i___System__IComparable_1___BeatSaber__Init__GameVersion_PreReleaseLabel_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>* i___System__IEquatable_1___BeatSaber__Init__GameVersion_PreReleaseLabel_();

  static inline void setStaticF_kDefault(::BeatSaber::Init::GameVersion_PreReleaseLabel value);

  static inline void setStaticF_kPreReleasePrefixLabelMap(::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>* value);

  static inline void setStaticF_kPrereleasePattern(::StringW value);

  static inline void setStaticF_kRelease(::BeatSaber::Init::GameVersion_PreReleaseLabel value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersion_PreReleaseLabel();

  // Ctor Parameters [CppParam { name: "prefix", ty: "::BeatSaber::Init::GameVersion_PreReleasePrefix", modifiers: "", def_value: None }, CppParam { name: "label", ty: "::StringW", modifiers: "",
  // def_value: None }]
  constexpr GameVersion_PreReleaseLabel(::BeatSaber::Init::GameVersion_PreReleasePrefix prefix, ::StringW label) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22365 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kPrereleaseLabelGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPrereleaseLabelGroupName{ u"prereleaselabel" };

  /// @brief Field kPrereleasePrefixGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPrereleasePrefixGroupName{ u"prereleaseprefix" };

  /// @brief Field prefix, offset: 0x0, size: 0x4, def value: None
  ::BeatSaber::Init::GameVersion_PreReleasePrefix prefix;

  /// @brief Field label, offset: 0x8, size: 0x8, def value: None
  ::StringW label;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersion_PreReleaseLabel, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion_PreReleaseLabel, label) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersion_PreReleaseLabel, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies BeatSaber.Init.RuntimePlatformType
namespace BeatSaber::Init {
// Is value type: true
// CS Name: BeatSaber.Init.GameVersion/BuildInfo
struct CORDL_TYPE GameVersion_BuildInfo {
public:
  // Declarations
  /// @brief Field kBuildIdPattern, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kBuildIdPattern, put = setStaticF_kBuildIdPattern)) ::StringW kBuildIdPattern;

  /// @brief Field kBuildMetadataPattern, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kBuildMetadataPattern, put = setStaticF_kBuildMetadataPattern)) ::StringW kBuildMetadataPattern;

  /// @brief Field kPlatformIdPattern, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kPlatformIdPattern, put = setStaticF_kPlatformIdPattern)) ::StringW kPlatformIdPattern;

  /// @brief Field kPlatformLabel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kPlatformLabel, put = setStaticF_kPlatformLabel)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* kPlatformLabel;

  /// @brief Field kPlatformPattern, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kPlatformPattern, put = setStaticF_kPlatformPattern)) ::StringW kPlatformPattern;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>*();

  /// @brief Method CompareTo, addr 0x3197784, size 0xc0, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::GameVersion_BuildInfo other);

  /// @brief Method Equals, addr 0x3197938, size 0x84, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::GameVersion_BuildInfo other);

  /// @brief Method ExtractNumberFromPlatformId, addr 0x31978dc, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ExtractNumberFromPlatformId(::StringW inputPlatformId);

  /// @brief Method Parse, addr 0x319750c, size 0x278, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_BuildInfo Parse(::StringW buildMetadataValue);

  /// @brief Method ToString, addr 0x31972d0, size 0x168, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3195e04, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::RuntimePlatformType platform, ::StringW platformId, uint64_t buildId);

  static inline ::StringW getStaticF_kBuildIdPattern();

  static inline ::StringW getStaticF_kBuildMetadataPattern();

  static inline ::StringW getStaticF_kPlatformIdPattern();

  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF_kPlatformLabel();

  static inline ::StringW getStaticF_kPlatformPattern();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>* i___System__IComparable_1___BeatSaber__Init__GameVersion_BuildInfo_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>* i___System__IEquatable_1___BeatSaber__Init__GameVersion_BuildInfo_();

  static inline void setStaticF_kBuildIdPattern(::StringW value);

  static inline void setStaticF_kBuildMetadataPattern(::StringW value);

  static inline void setStaticF_kPlatformIdPattern(::StringW value);

  static inline void setStaticF_kPlatformLabel(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  static inline void setStaticF_kPlatformPattern(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersion_BuildInfo();

  // Ctor Parameters [CppParam { name: "buildId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "::BeatSaber::Init::RuntimePlatformType", modifiers: "", def_value:
  // None }, CppParam { name: "platformId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platformIdIntValue", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameVersion_BuildInfo(uint64_t buildId, ::BeatSaber::Init::RuntimePlatformType platform, ::StringW platformId, int32_t platformIdIntValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22367 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field kBuildIdGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kBuildIdGroupName{ u"buildid" };

  /// @brief Field kBuildMetadataGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kBuildMetadataGroupName{ u"buildmetadata" };

  /// @brief Field kPlatformGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlatformGroupName{ u"platform" };

  /// @brief Field kPlatformIdGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlatformIdGroupName{ u"platformid" };

  /// @brief Field buildId, offset: 0x0, size: 0x8, def value: None
  uint64_t buildId;

  /// @brief Field platform, offset: 0x8, size: 0x4, def value: None
  ::BeatSaber::Init::RuntimePlatformType platform;

  /// @brief Field platformId, offset: 0x10, size: 0x8, def value: None
  ::StringW platformId;

  /// @brief Field platformIdIntValue, offset: 0x18, size: 0x4, def value: None
  int32_t platformIdIntValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersion_BuildInfo, buildId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion_BuildInfo, platform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion_BuildInfo, platformId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion_BuildInfo, platformIdIntValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersion_BuildInfo, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies BeatSaber.Init.GameVersion::BuildInfo, BeatSaber.Init.GameVersion::PreReleaseLabel, System.Nullable`1<T>
namespace BeatSaber::Init {
// Is value type: true
// CS Name: BeatSaber.Init.GameVersion/Metadata
struct CORDL_TYPE GameVersion_Metadata {
public:
  // Declarations
  /// @brief Field kDefault, offset 0xffffffff, size 0x38
  __declspec(property(get = getStaticF_kDefault, put = setStaticF_kDefault)) ::BeatSaber::Init::GameVersion_Metadata kDefault;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>*();

  /// @brief Method BuildInfoText, addr 0x31971e8, size 0xe8, virtual false, abstract: false, final false
  inline ::StringW BuildInfoText();

  /// @brief Method CompareTo, addr 0x3195740, size 0x130, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::GameVersion_Metadata other);

  /// @brief Method Equals, addr 0x3197844, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::GameVersion_Metadata other);

  /// @brief Method ExtractSubStrings, addr 0x3197438, size 0xd4, virtual false, abstract: false, final false
  static inline void ExtractSubStrings(::StringW versionMetadata, ::ByRef<::StringW> preReleaseLabelString, ::ByRef<::StringW> buildInfoString);

  /// @brief Method Parse, addr 0x31953fc, size 0x1a4, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_Metadata Parse(::StringW versionMetadata);

  /// @brief Method ToString, addr 0x3195a7c, size 0xf0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x319711c, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo> buildInfo);

  /// @brief Method .ctor, addr 0x3195ec8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::GameVersion_PreReleaseLabel preReleaseLabel, ::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo> buildInfo);

  static inline ::BeatSaber::Init::GameVersion_Metadata getStaticF_kDefault();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>* i___System__IComparable_1___BeatSaber__Init__GameVersion_Metadata_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>* i___System__IEquatable_1___BeatSaber__Init__GameVersion_Metadata_();

  static inline void setStaticF_kDefault(::BeatSaber::Init::GameVersion_Metadata value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersion_Metadata();

  // Ctor Parameters [CppParam { name: "preReleaseLabel", ty: "::BeatSaber::Init::GameVersion_PreReleaseLabel", modifiers: "", def_value: None }, CppParam { name: "buildInfo", ty:
  // "::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo>", modifiers: "", def_value: None }]
  constexpr GameVersion_Metadata(::BeatSaber::Init::GameVersion_PreReleaseLabel preReleaseLabel, ::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo> buildInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22366 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field preReleaseLabel, offset: 0x0, size: 0x10, def value: None
  ::BeatSaber::Init::GameVersion_PreReleaseLabel preReleaseLabel;

  /// @brief Field buildInfo, offset: 0x10, size: 0x28, def value: None
  ::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo> buildInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersion_Metadata, preReleaseLabel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion_Metadata, buildInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersion_Metadata, 0x38>, "Size mismatch!");

} // namespace BeatSaber::Init
// Dependencies BeatSaber.Init.GameVersion::Content, BeatSaber.Init.GameVersion::Metadata, System.Nullable`1<T>, System.Object
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.GameVersion
class CORDL_TYPE GameVersion : public ::System::Object {
public:
  // Declarations
  using BuildInfo = ::BeatSaber::Init::GameVersion_BuildInfo;

  using Content = ::BeatSaber::Init::GameVersion_Content;

  using Metadata = ::BeatSaber::Init::GameVersion_Metadata;

  using PreReleaseLabel = ::BeatSaber::Init::GameVersion_PreReleaseLabel;

  using PreReleasePrefix = ::BeatSaber::Init::GameVersion_PreReleasePrefix;

  __declspec(property(get = get_IsReleasable)) bool IsReleasable;

  /// @brief Field content, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::BeatSaber::Init::GameVersion_Content content;

  /// @brief Field kZero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kZero, put = setStaticF_kZero)) ::BeatSaber::Init::GameVersion* kZero;

  /// @brief Field metadata, offset 0x20, size 0x40
  __declspec(property(get = __cordl_internal_get_metadata, put = __cordl_internal_set_metadata)) ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> metadata;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion*>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::GameVersion*>*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion*>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion*>*() noexcept;

  /// @brief Method CompareTo, addr 0x31955a0, size 0x160, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::GameVersion* other);

  /// @brief Method Equals, addr 0x3195870, size 0x18, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::GameVersion* other);

  static inline ::BeatSaber::Init::GameVersion* New_ctor(::BeatSaber::Init::GameVersion_Content content, ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> metadata);

  /// @brief Method Parse, addr 0x3195138, size 0x248, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion* Parse(::StringW version);

  /// @brief Method ToString, addr 0x3195888, size 0x11c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdatePlatformId, addr 0x3195c14, size 0x1f0, virtual false, abstract: false, final false
  inline ::BeatSaber::Init::GameVersion* UpdatePlatformId(::StringW newPlatformId);

  constexpr ::BeatSaber::Init::GameVersion_Content const& __cordl_internal_get_content() const;

  constexpr ::BeatSaber::Init::GameVersion_Content& __cordl_internal_get_content();

  constexpr ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> const& __cordl_internal_get_metadata() const;

  constexpr ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata>& __cordl_internal_get_metadata();

  constexpr void __cordl_internal_set_content(::BeatSaber::Init::GameVersion_Content value);

  constexpr void __cordl_internal_set_metadata(::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> value);

  /// @brief Method .ctor, addr 0x319511c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::GameVersion_Content content, ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> metadata);

  static inline ::BeatSaber::Init::GameVersion* getStaticF_kZero();

  /// @brief Method get_IsReleasable, addr 0x3195b6c, size 0xa8, virtual false, abstract: false, final false
  inline bool get_IsReleasable();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion*>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion*>* i___System__IComparable_1___BeatSaber__Init__GameVersion__() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion*>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion*>* i___System__IEquatable_1___BeatSaber__Init__GameVersion__() noexcept;

  static inline void setStaticF_kZero(::BeatSaber::Init::GameVersion* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameVersion(GameVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameVersion(GameVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22368 };

  /// @brief Field kNumericPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kNumericPattern{ u"0|[1-9]\\d*" };

  /// @brief Field kPascalCasePattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kPascalCasePattern{ u"(?:[A-Z][a-zA-Z]*)?" };

  /// @brief Field content, offset: 0x10, size: 0xc, def value: None
  ::BeatSaber::Init::GameVersion_Content ___content;

  /// @brief Field metadata, offset: 0x20, size: 0x40, def value: None
  ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> ___metadata;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersion, ___content) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion, ___metadata) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersion, 0x60>, "Size mismatch!");

} // namespace BeatSaber::Init
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersion_PreReleasePrefix, "BeatSaber.Init", "GameVersion/PreReleasePrefix");
NEED_NO_BOX(::BeatSaber::Init::GameVersion);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersion*, "BeatSaber.Init", "GameVersion");
NEED_NO_BOX(::BeatSaber::Init::PreReleaseLabel_GameVersion___c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::PreReleaseLabel_GameVersion___c*, "BeatSaber.Init", "GameVersion/PreReleaseLabel/<>c");
NEED_NO_BOX(::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0*, "BeatSaber.Init", "GameVersion/PreReleaseLabel/<>c__DisplayClass10_0");
NEED_NO_BOX(::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0*, "BeatSaber.Init", "GameVersion/PreReleaseLabel/<>c__DisplayClass11_0");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersion_BuildInfo, "BeatSaber.Init", "GameVersion/BuildInfo");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersion_Content, "BeatSaber.Init", "GameVersion/Content");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersion_Metadata, "BeatSaber.Init", "GameVersion/Metadata");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersion_PreReleaseLabel, "BeatSaber.Init", "GameVersion/PreReleaseLabel");

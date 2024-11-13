#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "BeatSaber/Init/zzzz__RuntimePlatformType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameVersion)
namespace BeatSaber::Init {
struct RuntimePlatformType;
}
namespace BeatSaber::Init {
struct __GameVersion__BuildInfo;
}
namespace BeatSaber::Init {
struct __GameVersion__Content;
}
namespace BeatSaber::Init {
struct __GameVersion__Metadata;
}
namespace BeatSaber::Init {
struct __GameVersion__PreReleaseLabel;
}
namespace BeatSaber::Init {
struct __GameVersion__PreReleasePrefix;
}
namespace GlobalNamespace {
class __GameVersion__PreReleaseLabel____c;
}
namespace GlobalNamespace {
class __GameVersion__PreReleaseLabel____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __GameVersion__PreReleaseLabel____c__DisplayClass11_0;
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
struct __GameVersion__PreReleasePrefix;
}
namespace BeatSaber::Init {
class GameVersion;
}
namespace GlobalNamespace {
class __GameVersion__PreReleaseLabel____c;
}
namespace GlobalNamespace {
class __GameVersion__PreReleaseLabel____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __GameVersion__PreReleaseLabel____c__DisplayClass11_0;
}
namespace BeatSaber::Init {
struct __GameVersion__BuildInfo;
}
namespace BeatSaber::Init {
struct __GameVersion__Content;
}
namespace BeatSaber::Init {
struct __GameVersion__Metadata;
}
namespace BeatSaber::Init {
struct __GameVersion__PreReleaseLabel;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Init::__GameVersion__PreReleasePrefix);
MARK_REF_PTR_T(::BeatSaber::Init::GameVersion);
MARK_REF_PTR_T(::GlobalNamespace::__GameVersion__PreReleaseLabel____c);
MARK_REF_PTR_T(::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0);
MARK_VAL_T(::BeatSaber::Init::__GameVersion__BuildInfo);
MARK_VAL_T(::BeatSaber::Init::__GameVersion__Content);
MARK_VAL_T(::BeatSaber::Init::__GameVersion__Metadata);
MARK_VAL_T(::BeatSaber::Init::__GameVersion__PreReleaseLabel);
// Type: ::PreReleasePrefix
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: true
// CS Name: ::GameVersion::PreReleasePrefix
struct CORDL_TYPE __GameVersion__PreReleasePrefix {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GameVersion__PreReleasePrefix_Unwrapped
  enum struct ____GameVersion__PreReleasePrefix_Unwrapped : int32_t {
    __E_Alpha = static_cast<int32_t>(0x0),
    __E_Beta = static_cast<int32_t>(0xa),
    __E_Nightly = static_cast<int32_t>(0x14),
    __E_ReleaseCandidate = static_cast<int32_t>(0x1e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameVersion__PreReleasePrefix_Unwrapped() const noexcept {
    return static_cast<____GameVersion__PreReleasePrefix_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__PreReleasePrefix();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameVersion__PreReleasePrefix(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Alpha value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Init::__GameVersion__PreReleasePrefix const Alpha;

  /// @brief Field Beta value: static_cast<int32_t>(0xa)
  static ::BeatSaber::Init::__GameVersion__PreReleasePrefix const Beta;

  /// @brief Field Nightly value: static_cast<int32_t>(0x14)
  static ::BeatSaber::Init::__GameVersion__PreReleasePrefix const Nightly;

  /// @brief Field ReleaseCandidate value: static_cast<int32_t>(0x1e)
  static ::BeatSaber::Init::__GameVersion__PreReleasePrefix const ReleaseCandidate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18294 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::__GameVersion__PreReleasePrefix, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__PreReleasePrefix, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Init
// Type: ::Content
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: true
// CS Name: ::GameVersion::Content
struct CORDL_TYPE __GameVersion__Content {
public:
  // Declarations
  /// @brief Field kZero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_kZero, put = setStaticF_kZero)) ::BeatSaber::Init::__GameVersion__Content kZero;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>*();

  /// @brief Method CompareTo, addr 0x223f90c, size 0x3c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::__GameVersion__Content other);

  /// @brief Method Equals, addr 0x2240644, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::__GameVersion__Content other);

  /// @brief Method Parse, addr 0x223f5a0, size 0x74, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::__GameVersion__Content Parse(::StringW versionCode);

  /// @brief Method Parse, addr 0x2240230, size 0x314, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::__GameVersion__Content Parse(::StringW versionCore, ::StringW pattern);

  /// @brief Method ParseOnStartOf, addr 0x2240544, size 0x74, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::__GameVersion__Content ParseOnStartOf(::StringW versionCode);

  /// @brief Method ReadFromApplicationVersion, addr 0x22405b8, size 0x8c, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::__GameVersion__Content ReadFromApplicationVersion();

  /// @brief Method ToString, addr 0x223fb9c, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2240224, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t major, uint32_t minor, uint32_t patch);

  static inline ::BeatSaber::Init::__GameVersion__Content getStaticF_kZero();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>* i___System__IComparable_1___BeatSaber__Init____GameVersion__Content_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>* i___System__IEquatable_1___BeatSaber__Init____GameVersion__Content_();

  static inline void setStaticF_kZero(::BeatSaber::Init::__GameVersion__Content value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__Content();

  // Ctor Parameters [CppParam { name: "major", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "patch",
  // ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __GameVersion__Content(uint32_t major, uint32_t minor, uint32_t patch) noexcept;

  /// @brief Field major, offset: 0x0, size: 0x4, def value: None
  uint32_t major;

  /// @brief Field minor, offset: 0x4, size: 0x4, def value: None
  uint32_t minor;

  /// @brief Field patch, offset: 0x8, size: 0x4, def value: None
  uint32_t patch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18295 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::__GameVersion__Content, 0xc>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Content, major) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Content, minor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Content, patch) == 0x8, "Offset mismatch!");

} // namespace BeatSaber::Init
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameVersion::PreReleaseLabel::<>c*
class CORDL_TYPE __GameVersion__PreReleaseLabel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__GameVersion__PreReleaseLabel____c* __9;

  static inline ::GlobalNamespace::__GameVersion__PreReleaseLabel____c* New_ctor();

  /// @brief Method <.cctor>b__16_0, addr 0x2241234, size 0x8, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__16_0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> el);

  /// @brief Method .ctor, addr 0x224122c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__GameVersion__PreReleaseLabel____c* getStaticF___9();

  static inline void setStaticF___9(::GlobalNamespace::__GameVersion__PreReleaseLabel____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__PreReleaseLabel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__PreReleaseLabel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameVersion__PreReleaseLabel____c(__GameVersion__PreReleaseLabel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__PreReleaseLabel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameVersion__PreReleaseLabel____c(__GameVersion__PreReleaseLabel____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18296 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameVersion__PreReleaseLabel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameVersion::PreReleaseLabel::<>c__DisplayClass10_0*
class CORDL_TYPE __GameVersion__PreReleaseLabel____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field preReleasePrefixGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_preReleasePrefixGroup, put = __cordl_internal_set_preReleasePrefixGroup)) ::System::Text::RegularExpressions::Group* preReleasePrefixGroup;

  static inline ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0* New_ctor();

  /// @brief Method <Parse>b__0, addr 0x224123c, size 0x30, virtual false, abstract: false, final false
  inline bool _Parse_b__0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> tuple);

  constexpr ::System::Text::RegularExpressions::Group*& __cordl_internal_get_preReleasePrefixGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Group*> const& __cordl_internal_get_preReleasePrefixGroup() const;

  constexpr void __cordl_internal_set_preReleasePrefixGroup(::System::Text::RegularExpressions::Group* value);

  /// @brief Method .ctor, addr 0x2240b7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__PreReleaseLabel____c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__PreReleaseLabel____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameVersion__PreReleaseLabel____c__DisplayClass10_0(__GameVersion__PreReleaseLabel____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__PreReleaseLabel____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameVersion__PreReleaseLabel____c__DisplayClass10_0(__GameVersion__PreReleaseLabel____c__DisplayClass10_0 const&) = delete;

  /// @brief Field preReleasePrefixGroup, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Group* ___preReleasePrefixGroup;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18297 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0, ___preReleasePrefixGroup) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameVersion::PreReleaseLabel::<>c__DisplayClass11_0*
class CORDL_TYPE __GameVersion__PreReleaseLabel____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentPreReleasePrefix, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_currentPreReleasePrefix,
                      put = __cordl_internal_set_currentPreReleasePrefix)) ::BeatSaber::Init::__GameVersion__PreReleasePrefix currentPreReleasePrefix;

  static inline ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0* New_ctor();

  /// @brief Method <GetPrefixText>b__0, addr 0x224126c, size 0x10, virtual false, abstract: false, final false
  inline bool _GetPrefixText_b__0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> tuple);

  constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix const& __cordl_internal_get_currentPreReleasePrefix() const;

  constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix& __cordl_internal_get_currentPreReleasePrefix();

  constexpr void __cordl_internal_set_currentPreReleasePrefix(::BeatSaber::Init::__GameVersion__PreReleasePrefix value);

  /// @brief Method .ctor, addr 0x2240c8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__PreReleaseLabel____c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__PreReleaseLabel____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameVersion__PreReleaseLabel____c__DisplayClass11_0(__GameVersion__PreReleaseLabel____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__PreReleaseLabel____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameVersion__PreReleaseLabel____c__DisplayClass11_0(__GameVersion__PreReleaseLabel____c__DisplayClass11_0 const&) = delete;

  /// @brief Field currentPreReleasePrefix, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Init::__GameVersion__PreReleasePrefix ___currentPreReleasePrefix;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18298 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0, ___currentPreReleasePrefix) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PreReleaseLabel
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: true
// CS Name: ::GameVersion::PreReleaseLabel
struct CORDL_TYPE __GameVersion__PreReleaseLabel {
public:
  // Declarations
  using __c = ::GlobalNamespace::__GameVersion__PreReleaseLabel____c;

  using __c__DisplayClass10_0 = ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0;

  using __c__DisplayClass11_0 = ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0;

  /// @brief Field kDefault, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kDefault, put = setStaticF_kDefault)) ::BeatSaber::Init::__GameVersion__PreReleaseLabel kDefault;

  /// @brief Field kPreReleasePrefixLabelMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kPreReleasePrefixLabelMap, put = setStaticF_kPreReleasePrefixLabelMap)) ::System::Collections::Generic::IReadOnlyList_1<
      ::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>* kPreReleasePrefixLabelMap;

  /// @brief Field kPrereleasePattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kPrereleasePattern, put = setStaticF_kPrereleasePattern)) ::StringW kPrereleasePattern;

  /// @brief Field kRelease, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kRelease, put = setStaticF_kRelease)) ::BeatSaber::Init::__GameVersion__PreReleaseLabel kRelease;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*();

  /// @brief Method CompareTo, addr 0x2240d04, size 0x2c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::__GameVersion__PreReleaseLabel other);

  /// @brief Method Equals, addr 0x2240d30, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::__GameVersion__PreReleaseLabel other);

  /// @brief Method FirstLetterToUpper, addr 0x2240778, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW FirstLetterToUpper(ByRef<::StringW> value);

  /// @brief Method GetPrefixText, addr 0x2240b84, size 0x108, virtual false, abstract: false, final false
  inline ::StringW GetPrefixText();

  /// @brief Method Parse, addr 0x22408a0, size 0x2dc, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::__GameVersion__PreReleaseLabel Parse(::StringW releaseLabel);

  /// @brief Method ToString, addr 0x2240c94, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2240708, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::__GameVersion__PreReleasePrefix prefix, ::StringW label);

  static inline ::BeatSaber::Init::__GameVersion__PreReleaseLabel getStaticF_kDefault();

  static inline ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>* getStaticF_kPreReleasePrefixLabelMap();

  static inline ::StringW getStaticF_kPrereleasePattern();

  static inline ::BeatSaber::Init::__GameVersion__PreReleaseLabel getStaticF_kRelease();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>* i___System__IComparable_1___BeatSaber__Init____GameVersion__PreReleaseLabel_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>* i___System__IEquatable_1___BeatSaber__Init____GameVersion__PreReleaseLabel_();

  static inline void setStaticF_kDefault(::BeatSaber::Init::__GameVersion__PreReleaseLabel value);

  static inline void
  setStaticF_kPreReleasePrefixLabelMap(::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>* value);

  static inline void setStaticF_kPrereleasePattern(::StringW value);

  static inline void setStaticF_kRelease(::BeatSaber::Init::__GameVersion__PreReleaseLabel value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__PreReleaseLabel();

  // Ctor Parameters [CppParam { name: "prefix", ty: "::BeatSaber::Init::__GameVersion__PreReleasePrefix", modifiers: "", def_value: None }, CppParam { name: "label", ty: "::StringW", modifiers: "",
  // def_value: None }]
  constexpr __GameVersion__PreReleaseLabel(::BeatSaber::Init::__GameVersion__PreReleasePrefix prefix, ::StringW label) noexcept;

  /// @brief Field prefix, offset: 0x0, size: 0x4, def value: None
  ::BeatSaber::Init::__GameVersion__PreReleasePrefix prefix;

  /// @brief Field label, offset: 0x8, size: 0x8, def value: None
  ::StringW label;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18299 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kPrereleaseLabelGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPrereleaseLabelGroupName{ u"prereleaselabel" };

  /// @brief Field kPrereleasePrefixGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPrereleasePrefixGroupName{ u"prereleaseprefix" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::__GameVersion__PreReleaseLabel, 0x10>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__PreReleaseLabel, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__PreReleaseLabel, label) == 0x8, "Offset mismatch!");

} // namespace BeatSaber::Init
// Type: ::BuildInfo
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: true
// CS Name: ::GameVersion::BuildInfo
struct CORDL_TYPE __GameVersion__BuildInfo {
public:
  // Declarations
  /// @brief Field kBuildIdPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kBuildIdPattern, put = setStaticF_kBuildIdPattern)) ::StringW kBuildIdPattern;

  /// @brief Field kBuildMetadataPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kBuildMetadataPattern, put = setStaticF_kBuildMetadataPattern)) ::StringW kBuildMetadataPattern;

  /// @brief Field kPlatformIdPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kPlatformIdPattern, put = setStaticF_kPlatformIdPattern)) ::StringW kPlatformIdPattern;

  /// @brief Field kPlatformLabel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kPlatformLabel, put = setStaticF_kPlatformLabel)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* kPlatformLabel;

  /// @brief Field kPlatformPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kPlatformPattern, put = setStaticF_kPlatformPattern)) ::StringW kPlatformPattern;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>*();

  /// @brief Method CompareTo, addr 0x22418b4, size 0xc8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::__GameVersion__BuildInfo other);

  /// @brief Method Equals, addr 0x2241adc, size 0x88, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::__GameVersion__BuildInfo other);

  /// @brief Method ExtractNumberFromPlatformId, addr 0x2241a28, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW ExtractNumberFromPlatformId(::BeatSaber::Init::RuntimePlatformType platform, ::StringW inputPlatformId);

  /// @brief Method FormatPlatformId, addr 0x2241b64, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW FormatPlatformId(::BeatSaber::Init::RuntimePlatformType platform, ::StringW inputPlatformId);

  /// @brief Method Parse, addr 0x2241644, size 0x270, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::__GameVersion__BuildInfo Parse(::StringW buildMetadataValue);

  /// @brief Method ToString, addr 0x2241420, size 0x158, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x223ffe8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::RuntimePlatformType platform, ::StringW platformId, uint64_t buildId);

  static inline ::StringW getStaticF_kBuildIdPattern();

  static inline ::StringW getStaticF_kBuildMetadataPattern();

  static inline ::StringW getStaticF_kPlatformIdPattern();

  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF_kPlatformLabel();

  static inline ::StringW getStaticF_kPlatformPattern();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>* i___System__IComparable_1___BeatSaber__Init____GameVersion__BuildInfo_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>* i___System__IEquatable_1___BeatSaber__Init____GameVersion__BuildInfo_();

  static inline void setStaticF_kBuildIdPattern(::StringW value);

  static inline void setStaticF_kBuildMetadataPattern(::StringW value);

  static inline void setStaticF_kPlatformIdPattern(::StringW value);

  static inline void setStaticF_kPlatformLabel(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  static inline void setStaticF_kPlatformPattern(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__BuildInfo();

  // Ctor Parameters [CppParam { name: "buildId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "::BeatSaber::Init::RuntimePlatformType", modifiers: "", def_value:
  // None }, CppParam { name: "platformId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platformIdIntValue", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameVersion__BuildInfo(uint64_t buildId, ::BeatSaber::Init::RuntimePlatformType platform, ::StringW platformId, int32_t platformIdIntValue) noexcept;

  /// @brief Field buildId, offset: 0x0, size: 0x8, def value: None
  uint64_t buildId;

  /// @brief Field platform, offset: 0x8, size: 0x4, def value: None
  ::BeatSaber::Init::RuntimePlatformType platform;

  /// @brief Field platformId, offset: 0x10, size: 0x8, def value: None
  ::StringW platformId;

  /// @brief Field platformIdIntValue, offset: 0x18, size: 0x4, def value: None
  int32_t platformIdIntValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18301 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::__GameVersion__BuildInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__BuildInfo, buildId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__BuildInfo, platform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__BuildInfo, platformId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__BuildInfo, platformIdIntValue) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::Init
// Type: ::Metadata
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: true
// CS Name: ::GameVersion::Metadata
struct CORDL_TYPE __GameVersion__Metadata {
public:
  // Declarations
  /// @brief Field kDefault, offset 0xffffffff, size 0x38
  static __declspec(property(get = getStaticF_kDefault, put = setStaticF_kDefault)) ::BeatSaber::Init::__GameVersion__Metadata kDefault;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>*();

  /// @brief Method BuildInfoText, addr 0x2241334, size 0xec, virtual false, abstract: false, final false
  inline ::StringW BuildInfoText();

  /// @brief Method CompareTo, addr 0x223f948, size 0x12c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::__GameVersion__Metadata other);

  /// @brief Method Equals, addr 0x224197c, size 0xa8, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::__GameVersion__Metadata other);

  /// @brief Method ExtractSubStrings, addr 0x2241578, size 0xcc, virtual false, abstract: false, final false
  static inline void ExtractSubStrings(::StringW versionMetadata, ByRef<::StringW> preReleaseLabelString, ByRef<::StringW> buildInfoString);

  /// @brief Method Parse, addr 0x223f614, size 0x170, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::__GameVersion__Metadata Parse(::StringW versionMetadata);

  /// @brief Method ToString, addr 0x223fc60, size 0xe0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x224127c, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo> buildInfo);

  /// @brief Method .ctor, addr 0x22400bc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::__GameVersion__PreReleaseLabel preReleaseLabel, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo> buildInfo);

  static inline ::BeatSaber::Init::__GameVersion__Metadata getStaticF_kDefault();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>* i___System__IComparable_1___BeatSaber__Init____GameVersion__Metadata_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>* i___System__IEquatable_1___BeatSaber__Init____GameVersion__Metadata_();

  static inline void setStaticF_kDefault(::BeatSaber::Init::__GameVersion__Metadata value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__Metadata();

  // Ctor Parameters [CppParam { name: "preReleaseLabel", ty: "::BeatSaber::Init::__GameVersion__PreReleaseLabel", modifiers: "", def_value: None }, CppParam { name: "buildInfo", ty:
  // "::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo>", modifiers: "", def_value: None }]
  constexpr __GameVersion__Metadata(::BeatSaber::Init::__GameVersion__PreReleaseLabel preReleaseLabel, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo> buildInfo) noexcept;

  /// @brief Field preReleaseLabel, offset: 0x0, size: 0x10, def value: None
  ::BeatSaber::Init::__GameVersion__PreReleaseLabel preReleaseLabel;

  /// @brief Field buildInfo, offset: 0x10, size: 0x28, def value: None
  ::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo> buildInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18300 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::__GameVersion__Metadata, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Metadata, preReleaseLabel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Metadata, buildInfo) == 0x10, "Offset mismatch!");

} // namespace BeatSaber::Init
// Type: BeatSaber.Init::GameVersion
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: false
// CS Name: ::BeatSaber.Init::GameVersion*
class CORDL_TYPE GameVersion : public ::System::Object {
public:
  // Declarations
  using BuildInfo = ::BeatSaber::Init::__GameVersion__BuildInfo;

  using Content = ::BeatSaber::Init::__GameVersion__Content;

  using Metadata = ::BeatSaber::Init::__GameVersion__Metadata;

  using PreReleaseLabel = ::BeatSaber::Init::__GameVersion__PreReleaseLabel;

  using PreReleasePrefix = ::BeatSaber::Init::__GameVersion__PreReleasePrefix;

  __declspec(property(get = get_IsReleasable)) bool IsReleasable;

  /// @brief Field content, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::BeatSaber::Init::__GameVersion__Content content;

  /// @brief Field kZero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kZero, put = setStaticF_kZero)) ::BeatSaber::Init::GameVersion* kZero;

  /// @brief Field metadata, offset 0x20, size 0x40
  __declspec(property(get = __cordl_internal_get_metadata, put = __cordl_internal_set_metadata)) ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> metadata;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion*>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::GameVersion*>*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion*>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion*>*() noexcept;

  /// @brief Method CompareTo, addr 0x223f784, size 0x188, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::GameVersion* other);

  /// @brief Method Equals, addr 0x223fa74, size 0x18, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::GameVersion* other);

  static inline ::BeatSaber::Init::GameVersion* New_ctor(::BeatSaber::Init::__GameVersion__Content content, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> metadata);

  /// @brief Method Parse, addr 0x223f370, size 0x230, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion* Parse(::StringW version);

  /// @brief Method ToString, addr 0x223fa8c, size 0x110, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdatePlatformId, addr 0x223fdd8, size 0x210, virtual false, abstract: false, final false
  inline ::BeatSaber::Init::GameVersion* UpdatePlatformId(::StringW newPlatformId);

  constexpr ::BeatSaber::Init::__GameVersion__Content const& __cordl_internal_get_content() const;

  constexpr ::BeatSaber::Init::__GameVersion__Content& __cordl_internal_get_content();

  constexpr ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> const& __cordl_internal_get_metadata() const;

  constexpr ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata>& __cordl_internal_get_metadata();

  constexpr void __cordl_internal_set_content(::BeatSaber::Init::__GameVersion__Content value);

  constexpr void __cordl_internal_set_metadata(::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> value);

  /// @brief Method .ctor, addr 0x223f324, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::__GameVersion__Content content, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> metadata);

  static inline ::BeatSaber::Init::GameVersion* getStaticF_kZero();

  /// @brief Method get_IsReleasable, addr 0x223fd40, size 0x98, virtual false, abstract: false, final false
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

  /// @brief Field content, offset: 0x10, size: 0xc, def value: None
  ::BeatSaber::Init::__GameVersion__Content ___content;

  /// @brief Field metadata, offset: 0x20, size: 0x40, def value: None
  ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> ___metadata;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18302 };

  /// @brief Field kNumericPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kNumericPattern{ u"0|[1-9]\\d*" };

  /// @brief Field kPascalCasePattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kPascalCasePattern{ u"(?:[A-Z][a-zA-Z]*)?" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersion, 0x60>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion, ___content) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion, ___metadata) == 0x20, "Offset mismatch!");

} // namespace BeatSaber::Init
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::__GameVersion__PreReleasePrefix, "BeatSaber.Init", "GameVersion/PreReleasePrefix");
NEED_NO_BOX(::BeatSaber::Init::GameVersion);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersion*, "BeatSaber.Init", "GameVersion");
NEED_NO_BOX(::GlobalNamespace::__GameVersion__PreReleaseLabel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameVersion__PreReleaseLabel____c*, "BeatSaber.Init", "GameVersion/PreReleaseLabel/<>c");
NEED_NO_BOX(::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0*, "BeatSaber.Init", "GameVersion/PreReleaseLabel/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0*, "BeatSaber.Init", "GameVersion/PreReleaseLabel/<>c__DisplayClass11_0");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::__GameVersion__BuildInfo, "BeatSaber.Init", "GameVersion/BuildInfo");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::__GameVersion__Content, "BeatSaber.Init", "GameVersion/Content");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::__GameVersion__Metadata, "BeatSaber.Init", "GameVersion/Metadata");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::__GameVersion__PreReleaseLabel, "BeatSaber.Init", "GameVersion/PreReleaseLabel");

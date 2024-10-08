#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameVersion)
namespace BeatSaber::Init {
struct __GameVersion__Content;
}
namespace BeatSaber::Init {
struct __GameVersion__Metadata;
}
namespace BeatSaber::Init {
struct __GameVersion__Platform;
}
namespace BeatSaber::Init {
struct __GameVersion__PreReleasePrefix;
}
namespace GlobalNamespace {
class __GameVersion__Content____c;
}
namespace GlobalNamespace {
class __GameVersion__Content____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __GameVersion__Content____c__DisplayClass17_0;
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
struct __GameVersion__Platform;
}
namespace BeatSaber::Init {
struct __GameVersion__PreReleasePrefix;
}
namespace BeatSaber::Init {
class GameVersion;
}
namespace GlobalNamespace {
class __GameVersion__Content____c;
}
namespace GlobalNamespace {
class __GameVersion__Content____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __GameVersion__Content____c__DisplayClass17_0;
}
namespace BeatSaber::Init {
struct __GameVersion__Content;
}
namespace BeatSaber::Init {
struct __GameVersion__Metadata;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Init::__GameVersion__Platform);
MARK_VAL_T(::BeatSaber::Init::__GameVersion__PreReleasePrefix);
MARK_REF_PTR_T(::BeatSaber::Init::GameVersion);
MARK_REF_PTR_T(::GlobalNamespace::__GameVersion__Content____c);
MARK_REF_PTR_T(::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0);
MARK_VAL_T(::BeatSaber::Init::__GameVersion__Content);
MARK_VAL_T(::BeatSaber::Init::__GameVersion__Metadata);
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18654 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::__GameVersion__PreReleasePrefix, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__PreReleasePrefix, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Init
// Type: ::Platform
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: true
// CS Name: ::GameVersion::Platform
struct CORDL_TYPE __GameVersion__Platform {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GameVersion__Platform_Unwrapped
  enum struct ____GameVersion__Platform_Unwrapped : int32_t {
    __E_PS4 = static_cast<int32_t>(0x0),
    __E_PS5 = static_cast<int32_t>(0x1),
    __E_Quest = static_cast<int32_t>(0x2),
    __E_Rift = static_cast<int32_t>(0x3),
    __E_Steam = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameVersion__Platform_Unwrapped() const noexcept {
    return static_cast<____GameVersion__Platform_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__Platform();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameVersion__Platform(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field PS4 value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Init::__GameVersion__Platform const PS4;

  /// @brief Field PS5 value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Init::__GameVersion__Platform const PS5;

  /// @brief Field Quest value: static_cast<int32_t>(0x2)
  static ::BeatSaber::Init::__GameVersion__Platform const Quest;

  /// @brief Field Rift value: static_cast<int32_t>(0x3)
  static ::BeatSaber::Init::__GameVersion__Platform const Rift;

  /// @brief Field Steam value: static_cast<int32_t>(0x4)
  static ::BeatSaber::Init::__GameVersion__Platform const Steam;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18655 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::__GameVersion__Platform, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Platform, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Init
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameVersion::Content::<>c*
class CORDL_TYPE __GameVersion__Content____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__GameVersion__Content____c* __9;

  static inline ::GlobalNamespace::__GameVersion__Content____c* New_ctor();

  /// @brief Method <.cctor>b__23_0, addr 0x2237c84, size 0x8, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__23_0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> el);

  /// @brief Method .ctor, addr 0x2237c7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__GameVersion__Content____c* getStaticF___9();

  static inline void setStaticF___9(::GlobalNamespace::__GameVersion__Content____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__Content____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__Content____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameVersion__Content____c(__GameVersion__Content____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__Content____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameVersion__Content____c(__GameVersion__Content____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18656 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameVersion__Content____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameVersion::Content::<>c__DisplayClass16_0*
class CORDL_TYPE __GameVersion__Content____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentPreReleasePrefix, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_currentPreReleasePrefix,
                      put = __cordl_internal_set_currentPreReleasePrefix)) ::BeatSaber::Init::__GameVersion__PreReleasePrefix currentPreReleasePrefix;

  static inline ::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0* New_ctor();

  /// @brief Method <GetPreReleasePrefixText>b__0, addr 0x2237c8c, size 0x10, virtual false, abstract: false, final false
  inline bool _GetPreReleasePrefixText_b__0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> tuple);

  constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix const& __cordl_internal_get_currentPreReleasePrefix() const;

  constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix& __cordl_internal_get_currentPreReleasePrefix();

  constexpr void __cordl_internal_set_currentPreReleasePrefix(::BeatSaber::Init::__GameVersion__PreReleasePrefix value);

  /// @brief Method .ctor, addr 0x2237664, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__Content____c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__Content____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameVersion__Content____c__DisplayClass16_0(__GameVersion__Content____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__Content____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameVersion__Content____c__DisplayClass16_0(__GameVersion__Content____c__DisplayClass16_0 const&) = delete;

  /// @brief Field currentPreReleasePrefix, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Init::__GameVersion__PreReleasePrefix ___currentPreReleasePrefix;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0, ___currentPreReleasePrefix) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameVersion::Content::<>c__DisplayClass17_0*
class CORDL_TYPE __GameVersion__Content____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field preReleasePrefixGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_preReleasePrefixGroup, put = __cordl_internal_set_preReleasePrefixGroup)) ::System::Text::RegularExpressions::Group* preReleasePrefixGroup;

  static inline ::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0* New_ctor();

  /// @brief Method <Parse>b__0, addr 0x2237c9c, size 0x30, virtual false, abstract: false, final false
  inline bool _Parse_b__0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> tuple);

  constexpr ::System::Text::RegularExpressions::Group*& __cordl_internal_get_preReleasePrefixGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Group*> const& __cordl_internal_get_preReleasePrefixGroup() const;

  constexpr void __cordl_internal_set_preReleasePrefixGroup(::System::Text::RegularExpressions::Group* value);

  /// @brief Method .ctor, addr 0x223766c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__Content____c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__Content____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameVersion__Content____c__DisplayClass17_0(__GameVersion__Content____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameVersion__Content____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameVersion__Content____c__DisplayClass17_0(__GameVersion__Content____c__DisplayClass17_0 const&) = delete;

  /// @brief Field preReleasePrefixGroup, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Group* ___preReleasePrefixGroup;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0, ___preReleasePrefixGroup) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Content
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: true
// CS Name: ::GameVersion::Content
struct CORDL_TYPE __GameVersion__Content {
public:
  // Declarations
  using __c = ::GlobalNamespace::__GameVersion__Content____c;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0;

  using __c__DisplayClass17_0 = ::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0;

  /// @brief Field kContentVersionPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kContentVersionPattern, put = setStaticF_kContentVersionPattern)) ::StringW kContentVersionPattern;

  /// @brief Field kDefault, offset 0xffffffff, size 0x20
  static __declspec(property(get = getStaticF_kDefault, put = setStaticF_kDefault)) ::BeatSaber::Init::__GameVersion__Content kDefault;

  /// @brief Field kPreReleasePrefixLabelMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kPreReleasePrefixLabelMap, put = setStaticF_kPreReleasePrefixLabelMap)) ::System::Collections::Generic::IReadOnlyList_1<
      ::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>* kPreReleasePrefixLabelMap;

  /// @brief Field kPrereleasePattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kPrereleasePattern, put = setStaticF_kPrereleasePattern)) ::StringW kPrereleasePattern;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>*();

  /// @brief Method CompareTo, addr 0x22371bc, size 0x60, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::__GameVersion__Content other);

  /// @brief Method Equals, addr 0x2237674, size 0x88, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::__GameVersion__Content other);

  /// @brief Method GetPreReleasePrefixText, addr 0x223755c, size 0x108, virtual false, abstract: false, final false
  inline ::StringW GetPreReleasePrefixText();

  /// @brief Method GetVersionCore, addr 0x22376fc, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW GetVersionCore();

  /// @brief Method Parse, addr 0x2236a28, size 0x3e4, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::__GameVersion__Content Parse(::StringW contentVersion);

  /// @brief Method ToString, addr 0x22373cc, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x223751c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t major, int32_t minor, int32_t patch, ::BeatSaber::Init::__GameVersion__PreReleasePrefix preReleasePrefix, ::StringW preReleaseLabel);

  static inline ::StringW getStaticF_kContentVersionPattern();

  static inline ::BeatSaber::Init::__GameVersion__Content getStaticF_kDefault();

  static inline ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>* getStaticF_kPreReleasePrefixLabelMap();

  static inline ::StringW getStaticF_kPrereleasePattern();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>* i___System__IComparable_1___BeatSaber__Init____GameVersion__Content_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>* i___System__IEquatable_1___BeatSaber__Init____GameVersion__Content_();

  static inline void setStaticF_kContentVersionPattern(::StringW value);

  static inline void setStaticF_kDefault(::BeatSaber::Init::__GameVersion__Content value);

  static inline void
  setStaticF_kPreReleasePrefixLabelMap(::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>* value);

  static inline void setStaticF_kPrereleasePattern(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__Content();

  // Ctor Parameters [CppParam { name: "major", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "patch",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "preReleaseLabel", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "preReleasePrefix", ty:
  // "::BeatSaber::Init::__GameVersion__PreReleasePrefix", modifiers: "", def_value: None }]
  constexpr __GameVersion__Content(int32_t major, int32_t minor, int32_t patch, ::StringW preReleaseLabel, ::BeatSaber::Init::__GameVersion__PreReleasePrefix preReleasePrefix) noexcept;

  /// @brief Field major, offset: 0x0, size: 0x4, def value: None
  int32_t major;

  /// @brief Field minor, offset: 0x4, size: 0x4, def value: None
  int32_t minor;

  /// @brief Field patch, offset: 0x8, size: 0x4, def value: None
  int32_t patch;

  /// @brief Field preReleaseLabel, offset: 0x10, size: 0x8, def value: None
  ::StringW preReleaseLabel;

  /// @brief Field preReleasePrefix, offset: 0x18, size: 0x4, def value: None
  ::BeatSaber::Init::__GameVersion__PreReleasePrefix preReleasePrefix;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18659 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field kMajorGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMajorGroupName{ u"major" };

  /// @brief Field kMinorGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kMinorGroupName{ u"minor" };

  /// @brief Field kPatchGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPatchGroupName{ u"patch" };

  /// @brief Field kPrereleaseLabelGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPrereleaseLabelGroupName{ u"prereleaselabel" };

  /// @brief Field kPrereleasePrefixGroupName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPrereleasePrefixGroupName{ u"prereleaseprefix" };

  /// @brief Field kVersionCorePattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kVersionCorePattern{ u"(?<major>0|[1-9]\\d*)\\.(?<minor>0|[1-9]\\d*)\\.(?<patch>0|[1-9]\\d*)" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::__GameVersion__Content, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Content, major) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Content, minor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Content, patch) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Content, preReleaseLabel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Content, preReleasePrefix) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::Init
// Type: ::Metadata
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: true
// CS Name: ::GameVersion::Metadata
struct CORDL_TYPE __GameVersion__Metadata {
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

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>*();

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>*();

  /// @brief Method CompareTo, addr 0x223721c, size 0xc4, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::__GameVersion__Metadata other);

  /// @brief Method Equals, addr 0x2237cf4, size 0x98, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::__GameVersion__Metadata other);

  /// @brief Method Parse, addr 0x2236e0c, size 0x260, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::__GameVersion__Metadata Parse(::StringW buildMetadataValue);

  /// @brief Method ToString, addr 0x2237d8c, size 0x148, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2237ccc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::__GameVersion__Platform platform, ::StringW platformId, int32_t buildId);

  static inline ::StringW getStaticF_kBuildIdPattern();

  static inline ::StringW getStaticF_kBuildMetadataPattern();

  static inline ::StringW getStaticF_kPlatformIdPattern();

  static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF_kPlatformLabel();

  static inline ::StringW getStaticF_kPlatformPattern();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>* i___System__IComparable_1___BeatSaber__Init____GameVersion__Metadata_();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>* i___System__IEquatable_1___BeatSaber__Init____GameVersion__Metadata_();

  static inline void setStaticF_kBuildIdPattern(::StringW value);

  static inline void setStaticF_kBuildMetadataPattern(::StringW value);

  static inline void setStaticF_kPlatformIdPattern(::StringW value);

  static inline void setStaticF_kPlatformLabel(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  static inline void setStaticF_kPlatformPattern(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameVersion__Metadata();

  // Ctor Parameters [CppParam { name: "buildId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "::BeatSaber::Init::__GameVersion__Platform", modifiers: "",
  // def_value: None }, CppParam { name: "platformId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platformIdIntValue", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameVersion__Metadata(int32_t buildId, ::BeatSaber::Init::__GameVersion__Platform platform, ::StringW platformId, int32_t platformIdIntValue) noexcept;

  /// @brief Field buildId, offset: 0x0, size: 0x4, def value: None
  int32_t buildId;

  /// @brief Field platform, offset: 0x4, size: 0x4, def value: None
  ::BeatSaber::Init::__GameVersion__Platform platform;

  /// @brief Field platformId, offset: 0x8, size: 0x8, def value: None
  ::StringW platformId;

  /// @brief Field platformIdIntValue, offset: 0x10, size: 0x4, def value: None
  int32_t platformIdIntValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18660 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

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
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::__GameVersion__Metadata, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Metadata, buildId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Metadata, platform) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Metadata, platformId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::__GameVersion__Metadata, platformIdIntValue) == 0x10, "Offset mismatch!");

} // namespace BeatSaber::Init
// Type: BeatSaber.Init::GameVersion
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: false
// CS Name: ::BeatSaber.Init::GameVersion*
class CORDL_TYPE GameVersion : public ::System::Object {
public:
  // Declarations
  using Content = ::BeatSaber::Init::__GameVersion__Content;

  using Metadata = ::BeatSaber::Init::__GameVersion__Metadata;

  using Platform = ::BeatSaber::Init::__GameVersion__Platform;

  using PreReleasePrefix = ::BeatSaber::Init::__GameVersion__PreReleasePrefix;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::BeatSaber::Init::GameVersion* Zero;

  /// @brief Field buildMetadata, offset 0x30, size 0x20
  __declspec(property(get = __cordl_internal_get_buildMetadata, put = __cordl_internal_set_buildMetadata)) ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> buildMetadata;

  /// @brief Field content, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::BeatSaber::Init::__GameVersion__Content content;

  /// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion*>"
  constexpr operator ::System::IComparable_1<::BeatSaber::Init::GameVersion*>*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion*>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion*>*() noexcept;

  /// @brief Method CompareTo, addr 0x223706c, size 0x150, virtual true, abstract: false, final true
  inline int32_t CompareTo(::BeatSaber::Init::GameVersion* other);

  /// @brief Method Equals, addr 0x22372e0, size 0x18, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::Init::GameVersion* other);

  static inline ::BeatSaber::Init::GameVersion* New_ctor(::BeatSaber::Init::__GameVersion__Content content, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> buildMetadata);

  /// @brief Method Parse, addr 0x2236854, size 0x1d4, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion* Parse(::StringW version);

  /// @brief Method ToString, addr 0x22372f8, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> const& __cordl_internal_get_buildMetadata() const;

  constexpr ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata>& __cordl_internal_get_buildMetadata();

  constexpr ::BeatSaber::Init::__GameVersion__Content const& __cordl_internal_get_content() const;

  constexpr ::BeatSaber::Init::__GameVersion__Content& __cordl_internal_get_content();

  constexpr void __cordl_internal_set_buildMetadata(::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> value);

  constexpr void __cordl_internal_set_content(::BeatSaber::Init::__GameVersion__Content value);

  /// @brief Method .ctor, addr 0x223681c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Init::__GameVersion__Content content, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> buildMetadata);

  static inline ::BeatSaber::Init::GameVersion* getStaticF_Zero();

  /// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion*>"
  constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion*>* i___System__IComparable_1___BeatSaber__Init__GameVersion__() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion*>"
  constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion*>* i___System__IEquatable_1___BeatSaber__Init__GameVersion__() noexcept;

  static inline void setStaticF_Zero(::BeatSaber::Init::GameVersion* value);

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

  /// @brief Field content, offset: 0x10, size: 0x20, def value: None
  ::BeatSaber::Init::__GameVersion__Content ___content;

  /// @brief Field buildMetadata, offset: 0x30, size: 0x20, def value: None
  ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> ___buildMetadata;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18661 };

  /// @brief Field kNumericPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kNumericPattern{ u"0|[1-9]\\d*" };

  /// @brief Field kPascalCasePattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kPascalCasePattern{ u"(?:[A-Z][a-zA-Z]*)?" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersion, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion, ___content) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersion, ___buildMetadata) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::Init
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::__GameVersion__Platform, "BeatSaber.Init", "GameVersion/Platform");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::__GameVersion__PreReleasePrefix, "BeatSaber.Init", "GameVersion/PreReleasePrefix");
NEED_NO_BOX(::BeatSaber::Init::GameVersion);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersion*, "BeatSaber.Init", "GameVersion");
NEED_NO_BOX(::GlobalNamespace::__GameVersion__Content____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameVersion__Content____c*, "BeatSaber.Init", "GameVersion/Content/<>c");
NEED_NO_BOX(::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0*, "BeatSaber.Init", "GameVersion/Content/<>c__DisplayClass16_0");
NEED_NO_BOX(::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0*, "BeatSaber.Init", "GameVersion/Content/<>c__DisplayClass17_0");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::__GameVersion__Content, "BeatSaber.Init", "GameVersion/Content");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::__GameVersion__Metadata, "BeatSaber.Init", "GameVersion/Metadata");

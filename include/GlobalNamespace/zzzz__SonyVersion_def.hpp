#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyVersion)
namespace GlobalNamespace {
struct SonyVersion_VersionFormat;
}
// Forward declare root types
namespace GlobalNamespace {
struct SonyVersion_VersionFormat;
}
namespace GlobalNamespace {
class SonyVersion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SonyVersion_VersionFormat);
MARK_REF_PTR_T(::GlobalNamespace::SonyVersion);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SonyVersion/VersionFormat
struct CORDL_TYPE SonyVersion_VersionFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SonyVersion_VersionFormat_Unwrapped
  enum struct __SonyVersion_VersionFormat_Unwrapped : int32_t {
    __E_FullLong = static_cast<int32_t>(0x0),
    __E_Long = static_cast<int32_t>(0x1),
    __E_FullShort = static_cast<int32_t>(0x2),
    __E_Short = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SonyVersion_VersionFormat_Unwrapped() const noexcept {
    return static_cast<__SonyVersion_VersionFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyVersion_VersionFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SonyVersion_VersionFormat(int32_t value__) noexcept;

  /// @brief Field FullLong value: I32(0)
  static ::GlobalNamespace::SonyVersion_VersionFormat const FullLong;

  /// @brief Field FullShort value: I32(2)
  static ::GlobalNamespace::SonyVersion_VersionFormat const FullShort;

  /// @brief Field Long value: I32(1)
  static ::GlobalNamespace::SonyVersion_VersionFormat const Long;

  /// @brief Field Short value: I32(3)
  static ::GlobalNamespace::SonyVersion_VersionFormat const Short;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13212 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyVersion_VersionFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyVersion_VersionFormat, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyVersion
class CORDL_TYPE SonyVersion : public ::System::Object {
public:
  // Declarations
  using VersionFormat = ::GlobalNamespace::SonyVersion_VersionFormat;

  /// @brief Field _majorVersion, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__majorVersion, put = __cordl_internal_set__majorVersion)) uint32_t _majorVersion;

  /// @brief Field _minorVersion, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__minorVersion, put = __cordl_internal_set__minorVersion)) uint32_t _minorVersion;

  __declspec(property(get = get_majorVersion)) uint32_t majorVersion;

  __declspec(property(get = get_minorVersion)) uint32_t minorVersion;

  /// @brief Method CopyValueFrom, addr 0x26e95d0, size 0x1c, virtual false, abstract: false, final false
  inline void CopyValueFrom(::GlobalNamespace::SonyVersion* other);

  /// @brief Method Get, addr 0x26ef3c8, size 0x228, virtual false, abstract: false, final false
  inline ::StringW Get(::GlobalNamespace::SonyVersion_VersionFormat format);

  /// @brief Method GetFromString, addr 0x26eede8, size 0x550, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SonyVersion* GetFromString(::StringW versionString);

  /// @brief Method IncreaseVersion, addr 0x26e9624, size 0x24, virtual false, abstract: false, final false
  inline void IncreaseVersion();

  /// @brief Method IsVersionFormatValid, addr 0x26ef338, size 0x90, virtual false, abstract: false, final false
  static inline bool IsVersionFormatValid(::StringW versionString);

  static inline ::GlobalNamespace::SonyVersion* New_ctor(uint32_t majorVersion, uint32_t minorVersion);

  /// @brief Method ToString, addr 0x26ef5f0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr uint32_t const& __cordl_internal_get__majorVersion() const;

  constexpr uint32_t& __cordl_internal_get__majorVersion();

  constexpr uint32_t const& __cordl_internal_get__minorVersion() const;

  constexpr uint32_t& __cordl_internal_get__minorVersion();

  constexpr void __cordl_internal_set__majorVersion(uint32_t value);

  constexpr void __cordl_internal_set__minorVersion(uint32_t value);

  /// @brief Method .ctor, addr 0x26eedbc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t majorVersion, uint32_t minorVersion);

  /// @brief Method get_majorVersion, addr 0x26eedac, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_majorVersion();

  /// @brief Method get_minorVersion, addr 0x26eedb4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_minorVersion();

  /// @brief Method op_Implicit, addr 0x26ef5f8, size 0x14, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::GlobalNamespace::SonyVersion* version);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyVersion(SonyVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyVersion(SonyVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13213 };

  /// @brief Field _majorVersion, offset: 0x10, size: 0x4, def value: None
  uint32_t ____majorVersion;

  /// @brief Field _minorVersion, offset: 0x14, size: 0x4, def value: None
  uint32_t ____minorVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyVersion, ____majorVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyVersion, ____minorVersion) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyVersion, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyVersion_VersionFormat, "", "SonyVersion/VersionFormat");
NEED_NO_BOX(::GlobalNamespace::SonyVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyVersion*, "", "SonyVersion");

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
struct __SonyVersion__VersionFormat;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SonyVersion__VersionFormat;
}
namespace GlobalNamespace {
class SonyVersion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SonyVersion__VersionFormat);
MARK_REF_PTR_T(::GlobalNamespace::SonyVersion);
// Type: ::VersionFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyVersion::VersionFormat
struct CORDL_TYPE __SonyVersion__VersionFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SonyVersion__VersionFormat_Unwrapped
  enum struct ____SonyVersion__VersionFormat_Unwrapped : int32_t {
    __E_FullLong = static_cast<int32_t>(0x0),
    __E_Long = static_cast<int32_t>(0x1),
    __E_FullShort = static_cast<int32_t>(0x2),
    __E_Short = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SonyVersion__VersionFormat_Unwrapped() const noexcept {
    return static_cast<____SonyVersion__VersionFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyVersion__VersionFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SonyVersion__VersionFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FullLong value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SonyVersion__VersionFormat const FullLong;

  /// @brief Field FullShort value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SonyVersion__VersionFormat const FullShort;

  /// @brief Field Long value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SonyVersion__VersionFormat const Long;

  /// @brief Field Short value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SonyVersion__VersionFormat const Short;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyVersion__VersionFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyVersion__VersionFormat, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyVersion
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyVersion*
class CORDL_TYPE SonyVersion : public ::System::Object {
public:
  // Declarations
  using VersionFormat = ::GlobalNamespace::__SonyVersion__VersionFormat;

  /// @brief Field _majorVersion, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__majorVersion, put = __cordl_internal_set__majorVersion)) uint32_t _majorVersion;

  /// @brief Field _minorVersion, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__minorVersion, put = __cordl_internal_set__minorVersion)) uint32_t _minorVersion;

  __declspec(property(get = get_majorVersion)) uint32_t majorVersion;

  __declspec(property(get = get_minorVersion)) uint32_t minorVersion;

  /// @brief Method Get, addr 0x14f3cb4, size 0x200, virtual false, abstract: false, final false
  inline ::StringW Get(::GlobalNamespace::__SonyVersion__VersionFormat format);

  /// @brief Method GetFromString, addr 0x14f36d4, size 0x550, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SonyVersion* GetFromString(::StringW versionString);

  /// @brief Method IsVersionFormatValid, addr 0x14f3c24, size 0x90, virtual false, abstract: false, final false
  static inline bool IsVersionFormatValid(::StringW versionString);

  static inline ::GlobalNamespace::SonyVersion* New_ctor(uint32_t majorVersion, uint32_t minorVersion);

  constexpr uint32_t const& __cordl_internal_get__majorVersion() const;

  constexpr uint32_t& __cordl_internal_get__majorVersion();

  constexpr uint32_t const& __cordl_internal_get__minorVersion() const;

  constexpr uint32_t& __cordl_internal_get__minorVersion();

  constexpr void __cordl_internal_set__majorVersion(uint32_t value);

  constexpr void __cordl_internal_set__minorVersion(uint32_t value);

  /// @brief Method .ctor, addr 0x14f36a8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t majorVersion, uint32_t minorVersion);

  /// @brief Method get_majorVersion, addr 0x14f3698, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_majorVersion();

  /// @brief Method get_minorVersion, addr 0x14f36a0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_minorVersion();

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

  /// @brief Field _majorVersion, offset: 0x10, size: 0x4, def value: None
  uint32_t ____majorVersion;

  /// @brief Field _minorVersion, offset: 0x14, size: 0x4, def value: None
  uint32_t ____minorVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyVersion, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyVersion, ____majorVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyVersion, ____minorVersion) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyVersion__VersionFormat, "", "SonyVersion/VersionFormat");
NEED_NO_BOX(::GlobalNamespace::SonyVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyVersion*, "", "SonyVersion");

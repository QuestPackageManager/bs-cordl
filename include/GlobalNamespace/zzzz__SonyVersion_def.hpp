#pragma once
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4693))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SonyVersion__VersionFormat(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyVersion__VersionFormat();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FullLong value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SonyVersion__VersionFormat const FullLong;

  /// @brief Field Long value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SonyVersion__VersionFormat const Long;

  /// @brief Field FullShort value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SonyVersion__VersionFormat const FullShort;

  /// @brief Field Short value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SonyVersion__VersionFormat const Short;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4694))
// CS Name: ::SonyVersion*
class CORDL_TYPE SonyVersion : public ::System::Object {
public:
  // Declarations
  using VersionFormat = ::GlobalNamespace::__SonyVersion__VersionFormat;

  /// @brief Field _majorVersion, offset 0x10, size 0x4
  __declspec(property(get = __get__majorVersion, put = __set__majorVersion)) uint32_t _majorVersion;

  /// @brief Field _minorVersion, offset 0x14, size 0x4
  __declspec(property(get = __get__minorVersion, put = __set__minorVersion)) uint32_t _minorVersion;

  __declspec(property(get = get_majorVersion)) uint32_t majorVersion;

  __declspec(property(get = get_minorVersion)) uint32_t minorVersion;

  constexpr uint32_t& __get__majorVersion();

  constexpr uint32_t const& __get__majorVersion() const;

  constexpr void __set__majorVersion(uint32_t value);

  constexpr uint32_t& __get__minorVersion();

  constexpr uint32_t const& __get__minorVersion() const;

  constexpr void __set__minorVersion(uint32_t value);

  /// @brief Method get_majorVersion addr 0x2230028 size 0x8 virtual false final false
  inline uint32_t get_majorVersion();

  /// @brief Method get_minorVersion addr 0x2230030 size 0x8 virtual false final false
  inline uint32_t get_minorVersion();

  static inline ::GlobalNamespace::SonyVersion* New_ctor(uint32_t majorVersion, uint32_t minorVersion);

  /// @brief Method .ctor addr 0x2230038 size 0x2c virtual false final false
  inline void _ctor(uint32_t majorVersion, uint32_t minorVersion);

  /// @brief Method GetFromString addr 0x2230064 size 0x550 virtual false final false
  static inline ::GlobalNamespace::SonyVersion* GetFromString(::StringW versionString);

  /// @brief Method IsVersionFormatValid addr 0x22305b4 size 0x90 virtual false final false
  static inline bool IsVersionFormatValid(::StringW versionString);

  /// @brief Method Get addr 0x2230644 size 0x200 virtual false final false
  inline ::StringW Get(::GlobalNamespace::__SonyVersion__VersionFormat format);

  // Ctor Parameters [CppParam { name: "", ty: "SonyVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyVersion(SonyVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyVersion(SonyVersion const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyVersion();

public:
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

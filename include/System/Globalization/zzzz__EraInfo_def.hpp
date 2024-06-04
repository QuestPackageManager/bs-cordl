#pragma once
// IWYU pragma private; include "System/Globalization/EraInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EraInfo)
// Forward declare root types
namespace System::Globalization {
class EraInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::EraInfo);
// Type: System.Globalization::EraInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::EraInfo*
class CORDL_TYPE EraInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field abbrevEraName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_abbrevEraName, put = __cordl_internal_set_abbrevEraName))::StringW abbrevEraName;

  /// @brief Field englishEraName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_englishEraName, put = __cordl_internal_set_englishEraName))::StringW englishEraName;

  /// @brief Field era, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_era, put = __cordl_internal_set_era)) int32_t era;

  /// @brief Field eraName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_eraName, put = __cordl_internal_set_eraName))::StringW eraName;

  /// @brief Field maxEraYear, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_maxEraYear, put = __cordl_internal_set_maxEraYear)) int32_t maxEraYear;

  /// @brief Field minEraYear, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_minEraYear, put = __cordl_internal_set_minEraYear)) int32_t minEraYear;

  /// @brief Field ticks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ticks, put = __cordl_internal_set_ticks)) int64_t ticks;

  /// @brief Field yearOffset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_yearOffset, put = __cordl_internal_set_yearOffset)) int32_t yearOffset;

  static inline ::System::Globalization::EraInfo* New_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear);

  static inline ::System::Globalization::EraInfo* New_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear,
                                                           ::StringW eraName, ::StringW abbrevEraName, ::StringW englishEraName);

  constexpr ::StringW const& __cordl_internal_get_abbrevEraName() const;

  constexpr ::StringW& __cordl_internal_get_abbrevEraName();

  constexpr ::StringW const& __cordl_internal_get_englishEraName() const;

  constexpr ::StringW& __cordl_internal_get_englishEraName();

  constexpr int32_t const& __cordl_internal_get_era() const;

  constexpr int32_t& __cordl_internal_get_era();

  constexpr ::StringW const& __cordl_internal_get_eraName() const;

  constexpr ::StringW& __cordl_internal_get_eraName();

  constexpr int32_t const& __cordl_internal_get_maxEraYear() const;

  constexpr int32_t& __cordl_internal_get_maxEraYear();

  constexpr int32_t const& __cordl_internal_get_minEraYear() const;

  constexpr int32_t& __cordl_internal_get_minEraYear();

  constexpr int64_t const& __cordl_internal_get_ticks() const;

  constexpr int64_t& __cordl_internal_get_ticks();

  constexpr int32_t const& __cordl_internal_get_yearOffset() const;

  constexpr int32_t& __cordl_internal_get_yearOffset();

  constexpr void __cordl_internal_set_abbrevEraName(::StringW value);

  constexpr void __cordl_internal_set_englishEraName(::StringW value);

  constexpr void __cordl_internal_set_era(int32_t value);

  constexpr void __cordl_internal_set_eraName(::StringW value);

  constexpr void __cordl_internal_set_maxEraYear(int32_t value);

  constexpr void __cordl_internal_set_minEraYear(int32_t value);

  constexpr void __cordl_internal_set_ticks(int64_t value);

  constexpr void __cordl_internal_set_yearOffset(int32_t value);

  /// @brief Method .ctor, addr 0x2901d60, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear);

  /// @brief Method .ctor, addr 0x2901dfc, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear, ::StringW eraName, ::StringW abbrevEraName,
                    ::StringW englishEraName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EraInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EraInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EraInfo(EraInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EraInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EraInfo(EraInfo const&) = delete;

  /// @brief Field era, offset: 0x10, size: 0x4, def value: None
  int32_t ___era;

  /// @brief Field ticks, offset: 0x18, size: 0x8, def value: None
  int64_t ___ticks;

  /// @brief Field yearOffset, offset: 0x20, size: 0x4, def value: None
  int32_t ___yearOffset;

  /// @brief Field minEraYear, offset: 0x24, size: 0x4, def value: None
  int32_t ___minEraYear;

  /// @brief Field maxEraYear, offset: 0x28, size: 0x4, def value: None
  int32_t ___maxEraYear;

  /// @brief Field eraName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___eraName;

  /// @brief Field abbrevEraName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___abbrevEraName;

  /// @brief Field englishEraName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___englishEraName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::EraInfo, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::EraInfo, ___era) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::EraInfo, ___ticks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::EraInfo, ___yearOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::EraInfo, ___minEraYear) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::EraInfo, ___maxEraYear) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::EraInfo, ___eraName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::EraInfo, ___abbrevEraName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::EraInfo, ___englishEraName) == 0x40, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::EraInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::EraInfo*, "System.Globalization", "EraInfo");

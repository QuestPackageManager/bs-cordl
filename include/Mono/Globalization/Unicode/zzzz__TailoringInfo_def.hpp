#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/TailoringInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TailoringInfo)
// Forward declare root types
namespace Mono::Globalization::Unicode {
class TailoringInfo;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::TailoringInfo);
// Dependencies System.Object
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: Mono.Globalization.Unicode.TailoringInfo
class CORDL_TYPE TailoringInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field FrenchSort, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_FrenchSort, put = __cordl_internal_set_FrenchSort)) bool FrenchSort;

  /// @brief Field LCID, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_LCID, put = __cordl_internal_set_LCID)) int32_t LCID;

  /// @brief Field TailoringCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_TailoringCount, put = __cordl_internal_set_TailoringCount)) int32_t TailoringCount;

  /// @brief Field TailoringIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_TailoringIndex, put = __cordl_internal_set_TailoringIndex)) int32_t TailoringIndex;

  static inline ::Mono::Globalization::Unicode::TailoringInfo* New_ctor(int32_t lcid, int32_t tailoringIndex, int32_t tailoringCount, bool frenchSort);

  constexpr bool const& __cordl_internal_get_FrenchSort() const;

  constexpr bool& __cordl_internal_get_FrenchSort();

  constexpr int32_t const& __cordl_internal_get_LCID() const;

  constexpr int32_t& __cordl_internal_get_LCID();

  constexpr int32_t const& __cordl_internal_get_TailoringCount() const;

  constexpr int32_t& __cordl_internal_get_TailoringCount();

  constexpr int32_t const& __cordl_internal_get_TailoringIndex() const;

  constexpr int32_t& __cordl_internal_get_TailoringIndex();

  constexpr void __cordl_internal_set_FrenchSort(bool value);

  constexpr void __cordl_internal_set_LCID(int32_t value);

  constexpr void __cordl_internal_set_TailoringCount(int32_t value);

  constexpr void __cordl_internal_set_TailoringIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3c65c44, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t lcid, int32_t tailoringIndex, int32_t tailoringCount, bool frenchSort);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TailoringInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TailoringInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TailoringInfo(TailoringInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TailoringInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TailoringInfo(TailoringInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2259 };

  /// @brief Field LCID, offset: 0x10, size: 0x4, def value: None
  int32_t ___LCID;

  /// @brief Field TailoringIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___TailoringIndex;

  /// @brief Field TailoringCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___TailoringCount;

  /// @brief Field FrenchSort, offset: 0x1c, size: 0x1, def value: None
  bool ___FrenchSort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::TailoringInfo, ___LCID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::TailoringInfo, ___TailoringIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::TailoringInfo, ___TailoringCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::TailoringInfo, ___FrenchSort) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::TailoringInfo, 0x20>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::TailoringInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::TailoringInfo*, "Mono.Globalization.Unicode", "TailoringInfo");

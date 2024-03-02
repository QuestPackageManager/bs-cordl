#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlphabetScrollInfo)
namespace GlobalNamespace {
class __AlphabetScrollInfo__Data;
}
// Forward declare root types
namespace GlobalNamespace {
class AlphabetScrollInfo;
}
namespace GlobalNamespace {
class __AlphabetScrollInfo__Data;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlphabetScrollInfo);
MARK_REF_PTR_T(::GlobalNamespace::__AlphabetScrollInfo__Data);
// Type: ::Data
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AlphabetScrollInfo::Data*
class CORDL_TYPE __AlphabetScrollInfo__Data : public ::System::Object {
public:
  // Declarations
  /// @brief Field cellIdx, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_cellIdx, put = __cordl_internal_set_cellIdx)) int32_t cellIdx;

  /// @brief Field character, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_character, put = __cordl_internal_set_character)) char16_t character;

  static inline ::GlobalNamespace::__AlphabetScrollInfo__Data* New_ctor(char16_t character, int32_t cellIdx);

  constexpr int32_t const& __cordl_internal_get_cellIdx() const;

  constexpr int32_t& __cordl_internal_get_cellIdx();

  constexpr char16_t const& __cordl_internal_get_character() const;

  constexpr char16_t& __cordl_internal_get_character();

  constexpr void __cordl_internal_set_cellIdx(int32_t value);

  constexpr void __cordl_internal_set_character(char16_t value);

  /// @brief Method .ctor, addr 0x2253a24, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(char16_t character, int32_t cellIdx);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AlphabetScrollInfo__Data();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollInfo__Data", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AlphabetScrollInfo__Data(__AlphabetScrollInfo__Data&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollInfo__Data", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AlphabetScrollInfo__Data(__AlphabetScrollInfo__Data const&) = delete;

  /// @brief Field character, offset: 0x10, size: 0x2, def value: None
  char16_t ___character;

  /// @brief Field cellIdx, offset: 0x14, size: 0x4, def value: None
  int32_t ___cellIdx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AlphabetScrollInfo__Data, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AlphabetScrollInfo__Data, ___character) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AlphabetScrollInfo__Data, ___cellIdx) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AlphabetScrollInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AlphabetScrollInfo*
class CORDL_TYPE AlphabetScrollInfo : public ::System::Object {
public:
  // Declarations
  using Data = ::GlobalNamespace::__AlphabetScrollInfo__Data;

  static inline ::GlobalNamespace::AlphabetScrollInfo* New_ctor();

  /// @brief Method .ctor, addr 0x2253a1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphabetScrollInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphabetScrollInfo(AlphabetScrollInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphabetScrollInfo(AlphabetScrollInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphabetScrollInfo, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlphabetScrollInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphabetScrollInfo*, "", "AlphabetScrollInfo");
NEED_NO_BOX(::GlobalNamespace::__AlphabetScrollInfo__Data);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AlphabetScrollInfo__Data*, "", "AlphabetScrollInfo/Data");

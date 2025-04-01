#pragma once
// IWYU pragma private; include "GlobalNamespace/AlphabetScrollInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlphabetScrollInfo)
namespace GlobalNamespace {
class AlphabetScrollInfo_Data;
}
// Forward declare root types
namespace GlobalNamespace {
class AlphabetScrollInfo;
}
namespace GlobalNamespace {
class AlphabetScrollInfo_Data;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlphabetScrollInfo);
MARK_REF_PTR_T(::GlobalNamespace::AlphabetScrollInfo_Data);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AlphabetScrollInfo/Data
class CORDL_TYPE AlphabetScrollInfo_Data : public ::System::Object {
public:
  // Declarations
  /// @brief Field cellIdx, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_cellIdx, put = __cordl_internal_set_cellIdx)) int32_t cellIdx;

  /// @brief Field character, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_character, put = __cordl_internal_set_character)) char16_t character;

  static inline ::GlobalNamespace::AlphabetScrollInfo_Data* New_ctor(char16_t character, int32_t cellIdx);

  constexpr int32_t const& __cordl_internal_get_cellIdx() const;

  constexpr int32_t& __cordl_internal_get_cellIdx();

  constexpr char16_t const& __cordl_internal_get_character() const;

  constexpr char16_t& __cordl_internal_get_character();

  constexpr void __cordl_internal_set_cellIdx(int32_t value);

  constexpr void __cordl_internal_set_character(char16_t value);

  /// @brief Method .ctor, addr 0x39bba94, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(char16_t character, int32_t cellIdx);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphabetScrollInfo_Data();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollInfo_Data", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphabetScrollInfo_Data(AlphabetScrollInfo_Data&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollInfo_Data", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphabetScrollInfo_Data(AlphabetScrollInfo_Data const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16407 };

  /// @brief Field character, offset: 0x10, size: 0x2, def value: None
  char16_t ___character;

  /// @brief Field cellIdx, offset: 0x14, size: 0x4, def value: None
  int32_t ___cellIdx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AlphabetScrollInfo_Data, ___character) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphabetScrollInfo_Data, ___cellIdx) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphabetScrollInfo_Data, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AlphabetScrollInfo
class CORDL_TYPE AlphabetScrollInfo : public ::System::Object {
public:
  // Declarations
  using Data = ::GlobalNamespace::AlphabetScrollInfo_Data;

  static inline ::GlobalNamespace::AlphabetScrollInfo* New_ctor();

  /// @brief Method .ctor, addr 0x39bba8c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16408 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphabetScrollInfo, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlphabetScrollInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphabetScrollInfo*, "", "AlphabetScrollInfo");
NEED_NO_BOX(::GlobalNamespace::AlphabetScrollInfo_Data);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphabetScrollInfo_Data*, "", "AlphabetScrollInfo/Data");

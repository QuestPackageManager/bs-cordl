#pragma once
// IWYU pragma private; include "BGLib/Polyglot/Language.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Language)
// Forward declare root types
namespace BGLib::Polyglot {
struct Language;
}
// Write type traits
MARK_VAL_T(::BGLib::Polyglot::Language);
// Dependencies
namespace BGLib::Polyglot {
// Is value type: true
// CS Name: BGLib.Polyglot.Language
struct CORDL_TYPE Language {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Language_Unwrapped
  enum struct __Language_Unwrapped : int32_t {
    __E_English = static_cast<int32_t>(0x0),
    __E_French = static_cast<int32_t>(0x1),
    __E_Spanish = static_cast<int32_t>(0x2),
    __E_German = static_cast<int32_t>(0x3),
    __E_Italian = static_cast<int32_t>(0x4),
    __E_Portuguese_Brazil = static_cast<int32_t>(0x5),
    __E_Portuguese = static_cast<int32_t>(0x6),
    __E_Russian = static_cast<int32_t>(0x7),
    __E_Greek = static_cast<int32_t>(0x8),
    __E_Turkish = static_cast<int32_t>(0x9),
    __E_Danish = static_cast<int32_t>(0xa),
    __E_Norwegian = static_cast<int32_t>(0xb),
    __E_Swedish = static_cast<int32_t>(0xc),
    __E_Dutch = static_cast<int32_t>(0xd),
    __E_Polish = static_cast<int32_t>(0xe),
    __E_Finnish = static_cast<int32_t>(0xf),
    __E_Japanese = static_cast<int32_t>(0x10),
    __E_Simplified_Chinese = static_cast<int32_t>(0x11),
    __E_Traditional_Chinese = static_cast<int32_t>(0x12),
    __E_Korean = static_cast<int32_t>(0x13),
    __E_Czech = static_cast<int32_t>(0x14),
    __E_Hungarian = static_cast<int32_t>(0x15),
    __E_Romanian = static_cast<int32_t>(0x16),
    __E_Thai = static_cast<int32_t>(0x17),
    __E_Bulgarian = static_cast<int32_t>(0x18),
    __E_Hebrew = static_cast<int32_t>(0x19),
    __E_Arabic = static_cast<int32_t>(0x1a),
    __E_Bosnian = static_cast<int32_t>(0x1b),
    __E_Debug_Keys = static_cast<int32_t>(0x1c),
    __E_Debug_English_Reverted = static_cast<int32_t>(0x1d),
    __E_Debug_Word_With_Max_Lenght = static_cast<int32_t>(0x1e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Language_Unwrapped() const noexcept {
    return static_cast<__Language_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Language();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Language(int32_t value__) noexcept;

  /// @brief Field Arabic value: I32(26)
  static ::BGLib::Polyglot::Language const Arabic;

  /// @brief Field Bosnian value: I32(27)
  static ::BGLib::Polyglot::Language const Bosnian;

  /// @brief Field Bulgarian value: I32(24)
  static ::BGLib::Polyglot::Language const Bulgarian;

  /// @brief Field Czech value: I32(20)
  static ::BGLib::Polyglot::Language const Czech;

  /// @brief Field Danish value: I32(10)
  static ::BGLib::Polyglot::Language const Danish;

  /// @brief Field Debug_English_Reverted value: I32(29)
  static ::BGLib::Polyglot::Language const Debug_English_Reverted;

  /// @brief Field Debug_Keys value: I32(28)
  static ::BGLib::Polyglot::Language const Debug_Keys;

  /// @brief Field Debug_Word_With_Max_Lenght value: I32(30)
  static ::BGLib::Polyglot::Language const Debug_Word_With_Max_Lenght;

  /// @brief Field Dutch value: I32(13)
  static ::BGLib::Polyglot::Language const Dutch;

  /// @brief Field English value: I32(0)
  static ::BGLib::Polyglot::Language const English;

  /// @brief Field Finnish value: I32(15)
  static ::BGLib::Polyglot::Language const Finnish;

  /// @brief Field French value: I32(1)
  static ::BGLib::Polyglot::Language const French;

  /// @brief Field German value: I32(3)
  static ::BGLib::Polyglot::Language const German;

  /// @brief Field Greek value: I32(8)
  static ::BGLib::Polyglot::Language const Greek;

  /// @brief Field Hebrew value: I32(25)
  static ::BGLib::Polyglot::Language const Hebrew;

  /// @brief Field Hungarian value: I32(21)
  static ::BGLib::Polyglot::Language const Hungarian;

  /// @brief Field Italian value: I32(4)
  static ::BGLib::Polyglot::Language const Italian;

  /// @brief Field Japanese value: I32(16)
  static ::BGLib::Polyglot::Language const Japanese;

  /// @brief Field Korean value: I32(19)
  static ::BGLib::Polyglot::Language const Korean;

  /// @brief Field Norwegian value: I32(11)
  static ::BGLib::Polyglot::Language const Norwegian;

  /// @brief Field Polish value: I32(14)
  static ::BGLib::Polyglot::Language const Polish;

  /// @brief Field Portuguese value: I32(6)
  static ::BGLib::Polyglot::Language const Portuguese;

  /// @brief Field Portuguese_Brazil value: I32(5)
  static ::BGLib::Polyglot::Language const Portuguese_Brazil;

  /// @brief Field Romanian value: I32(22)
  static ::BGLib::Polyglot::Language const Romanian;

  /// @brief Field Russian value: I32(7)
  static ::BGLib::Polyglot::Language const Russian;

  /// @brief Field Simplified_Chinese value: I32(17)
  static ::BGLib::Polyglot::Language const Simplified_Chinese;

  /// @brief Field Spanish value: I32(2)
  static ::BGLib::Polyglot::Language const Spanish;

  /// @brief Field Swedish value: I32(12)
  static ::BGLib::Polyglot::Language const Swedish;

  /// @brief Field Thai value: I32(23)
  static ::BGLib::Polyglot::Language const Thai;

  /// @brief Field Traditional_Chinese value: I32(18)
  static ::BGLib::Polyglot::Language const Traditional_Chinese;

  /// @brief Field Turkish value: I32(9)
  static ::BGLib::Polyglot::Language const Turkish;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18051 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::Polyglot::Language, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::Language, 0x4>, "Size mismatch!");

} // namespace BGLib::Polyglot
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::Language, "BGLib.Polyglot", "Language");

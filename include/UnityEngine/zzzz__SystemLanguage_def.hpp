#pragma once
// IWYU pragma private; include "UnityEngine/SystemLanguage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemLanguage)
// Forward declare root types
namespace UnityEngine {
struct SystemLanguage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SystemLanguage);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SystemLanguage
struct CORDL_TYPE SystemLanguage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SystemLanguage_Unwrapped
  enum struct __SystemLanguage_Unwrapped : int32_t {
    __E_Afrikaans = static_cast<int32_t>(0x0),
    __E_Arabic = static_cast<int32_t>(0x1),
    __E_Basque = static_cast<int32_t>(0x2),
    __E_Belarusian = static_cast<int32_t>(0x3),
    __E_Bulgarian = static_cast<int32_t>(0x4),
    __E_Catalan = static_cast<int32_t>(0x5),
    __E_Chinese = static_cast<int32_t>(0x6),
    __E_Czech = static_cast<int32_t>(0x7),
    __E_Danish = static_cast<int32_t>(0x8),
    __E_Dutch = static_cast<int32_t>(0x9),
    __E_English = static_cast<int32_t>(0xa),
    __E_Estonian = static_cast<int32_t>(0xb),
    __E_Faroese = static_cast<int32_t>(0xc),
    __E_Finnish = static_cast<int32_t>(0xd),
    __E_French = static_cast<int32_t>(0xe),
    __E_German = static_cast<int32_t>(0xf),
    __E_Greek = static_cast<int32_t>(0x10),
    __E_Hebrew = static_cast<int32_t>(0x11),
    __E_Icelandic = static_cast<int32_t>(0x13),
    __E_Indonesian = static_cast<int32_t>(0x14),
    __E_Italian = static_cast<int32_t>(0x15),
    __E_Japanese = static_cast<int32_t>(0x16),
    __E_Korean = static_cast<int32_t>(0x17),
    __E_Latvian = static_cast<int32_t>(0x18),
    __E_Lithuanian = static_cast<int32_t>(0x19),
    __E_Norwegian = static_cast<int32_t>(0x1a),
    __E_Polish = static_cast<int32_t>(0x1b),
    __E_Portuguese = static_cast<int32_t>(0x1c),
    __E_Romanian = static_cast<int32_t>(0x1d),
    __E_Russian = static_cast<int32_t>(0x1e),
    __E_SerboCroatian = static_cast<int32_t>(0x1f),
    __E_Slovak = static_cast<int32_t>(0x20),
    __E_Slovenian = static_cast<int32_t>(0x21),
    __E_Spanish = static_cast<int32_t>(0x22),
    __E_Swedish = static_cast<int32_t>(0x23),
    __E_Thai = static_cast<int32_t>(0x24),
    __E_Turkish = static_cast<int32_t>(0x25),
    __E_Ukrainian = static_cast<int32_t>(0x26),
    __E_Vietnamese = static_cast<int32_t>(0x27),
    __E_ChineseSimplified = static_cast<int32_t>(0x28),
    __E_ChineseTraditional = static_cast<int32_t>(0x29),
    __E_Hindi = static_cast<int32_t>(0x2a),
    __E_Unknown = static_cast<int32_t>(0x2b),
    __E_Hungarian = static_cast<int32_t>(0x12),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SystemLanguage_Unwrapped() const noexcept {
    return static_cast<__SystemLanguage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemLanguage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SystemLanguage(int32_t value__) noexcept;

  /// @brief Field Afrikaans value: I32(0)
  static ::UnityEngine::SystemLanguage const Afrikaans;

  /// @brief Field Arabic value: I32(1)
  static ::UnityEngine::SystemLanguage const Arabic;

  /// @brief Field Basque value: I32(2)
  static ::UnityEngine::SystemLanguage const Basque;

  /// @brief Field Belarusian value: I32(3)
  static ::UnityEngine::SystemLanguage const Belarusian;

  /// @brief Field Bulgarian value: I32(4)
  static ::UnityEngine::SystemLanguage const Bulgarian;

  /// @brief Field Catalan value: I32(5)
  static ::UnityEngine::SystemLanguage const Catalan;

  /// @brief Field Chinese value: I32(6)
  static ::UnityEngine::SystemLanguage const Chinese;

  /// @brief Field ChineseSimplified value: I32(40)
  static ::UnityEngine::SystemLanguage const ChineseSimplified;

  /// @brief Field ChineseTraditional value: I32(41)
  static ::UnityEngine::SystemLanguage const ChineseTraditional;

  /// @brief Field Czech value: I32(7)
  static ::UnityEngine::SystemLanguage const Czech;

  /// @brief Field Danish value: I32(8)
  static ::UnityEngine::SystemLanguage const Danish;

  /// @brief Field Dutch value: I32(9)
  static ::UnityEngine::SystemLanguage const Dutch;

  /// @brief Field English value: I32(10)
  static ::UnityEngine::SystemLanguage const English;

  /// @brief Field Estonian value: I32(11)
  static ::UnityEngine::SystemLanguage const Estonian;

  /// @brief Field Faroese value: I32(12)
  static ::UnityEngine::SystemLanguage const Faroese;

  /// @brief Field Finnish value: I32(13)
  static ::UnityEngine::SystemLanguage const Finnish;

  /// @brief Field French value: I32(14)
  static ::UnityEngine::SystemLanguage const French;

  /// @brief Field German value: I32(15)
  static ::UnityEngine::SystemLanguage const German;

  /// @brief Field Greek value: I32(16)
  static ::UnityEngine::SystemLanguage const Greek;

  /// @brief Field Hebrew value: I32(17)
  static ::UnityEngine::SystemLanguage const Hebrew;

  /// @brief Field Hindi value: I32(42)
  static ::UnityEngine::SystemLanguage const Hindi;

  /// @brief Field Hungarian value: I32(18)
  static ::UnityEngine::SystemLanguage const Hungarian;

  /// @brief Field Icelandic value: I32(19)
  static ::UnityEngine::SystemLanguage const Icelandic;

  /// @brief Field Indonesian value: I32(20)
  static ::UnityEngine::SystemLanguage const Indonesian;

  /// @brief Field Italian value: I32(21)
  static ::UnityEngine::SystemLanguage const Italian;

  /// @brief Field Japanese value: I32(22)
  static ::UnityEngine::SystemLanguage const Japanese;

  /// @brief Field Korean value: I32(23)
  static ::UnityEngine::SystemLanguage const Korean;

  /// @brief Field Latvian value: I32(24)
  static ::UnityEngine::SystemLanguage const Latvian;

  /// @brief Field Lithuanian value: I32(25)
  static ::UnityEngine::SystemLanguage const Lithuanian;

  /// @brief Field Norwegian value: I32(26)
  static ::UnityEngine::SystemLanguage const Norwegian;

  /// @brief Field Polish value: I32(27)
  static ::UnityEngine::SystemLanguage const Polish;

  /// @brief Field Portuguese value: I32(28)
  static ::UnityEngine::SystemLanguage const Portuguese;

  /// @brief Field Romanian value: I32(29)
  static ::UnityEngine::SystemLanguage const Romanian;

  /// @brief Field Russian value: I32(30)
  static ::UnityEngine::SystemLanguage const Russian;

  /// @brief Field SerboCroatian value: I32(31)
  static ::UnityEngine::SystemLanguage const SerboCroatian;

  /// @brief Field Slovak value: I32(32)
  static ::UnityEngine::SystemLanguage const Slovak;

  /// @brief Field Slovenian value: I32(33)
  static ::UnityEngine::SystemLanguage const Slovenian;

  /// @brief Field Spanish value: I32(34)
  static ::UnityEngine::SystemLanguage const Spanish;

  /// @brief Field Swedish value: I32(35)
  static ::UnityEngine::SystemLanguage const Swedish;

  /// @brief Field Thai value: I32(36)
  static ::UnityEngine::SystemLanguage const Thai;

  /// @brief Field Turkish value: I32(37)
  static ::UnityEngine::SystemLanguage const Turkish;

  /// @brief Field Ukrainian value: I32(38)
  static ::UnityEngine::SystemLanguage const Ukrainian;

  /// @brief Field Unknown value: I32(43)
  static ::UnityEngine::SystemLanguage const Unknown;

  /// @brief Field Vietnamese value: I32(39)
  static ::UnityEngine::SystemLanguage const Vietnamese;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10050 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SystemLanguage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SystemLanguage, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemLanguage, "UnityEngine", "SystemLanguage");

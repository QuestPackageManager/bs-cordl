#pragma once
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
// Type: UnityEngine::SystemLanguage
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8767))
// CS Name: ::UnityEngine::SystemLanguage
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
    __E_Unknown = static_cast<int32_t>(0x2a),
    __E_Hungarian = static_cast<int32_t>(0x12),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SystemLanguage_Unwrapped() const noexcept {
    return static_cast<__SystemLanguage_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SystemLanguage(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemLanguage();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Afrikaans value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SystemLanguage const Afrikaans;

  /// @brief Field Arabic value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SystemLanguage const Arabic;

  /// @brief Field Basque value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SystemLanguage const Basque;

  /// @brief Field Belarusian value: static_cast<int32_t>(0x3)
  static ::UnityEngine::SystemLanguage const Belarusian;

  /// @brief Field Bulgarian value: static_cast<int32_t>(0x4)
  static ::UnityEngine::SystemLanguage const Bulgarian;

  /// @brief Field Catalan value: static_cast<int32_t>(0x5)
  static ::UnityEngine::SystemLanguage const Catalan;

  /// @brief Field Chinese value: static_cast<int32_t>(0x6)
  static ::UnityEngine::SystemLanguage const Chinese;

  /// @brief Field Czech value: static_cast<int32_t>(0x7)
  static ::UnityEngine::SystemLanguage const Czech;

  /// @brief Field Danish value: static_cast<int32_t>(0x8)
  static ::UnityEngine::SystemLanguage const Danish;

  /// @brief Field Dutch value: static_cast<int32_t>(0x9)
  static ::UnityEngine::SystemLanguage const Dutch;

  /// @brief Field English value: static_cast<int32_t>(0xa)
  static ::UnityEngine::SystemLanguage const English;

  /// @brief Field Estonian value: static_cast<int32_t>(0xb)
  static ::UnityEngine::SystemLanguage const Estonian;

  /// @brief Field Faroese value: static_cast<int32_t>(0xc)
  static ::UnityEngine::SystemLanguage const Faroese;

  /// @brief Field Finnish value: static_cast<int32_t>(0xd)
  static ::UnityEngine::SystemLanguage const Finnish;

  /// @brief Field French value: static_cast<int32_t>(0xe)
  static ::UnityEngine::SystemLanguage const French;

  /// @brief Field German value: static_cast<int32_t>(0xf)
  static ::UnityEngine::SystemLanguage const German;

  /// @brief Field Greek value: static_cast<int32_t>(0x10)
  static ::UnityEngine::SystemLanguage const Greek;

  /// @brief Field Hebrew value: static_cast<int32_t>(0x11)
  static ::UnityEngine::SystemLanguage const Hebrew;

  /// @brief Field Icelandic value: static_cast<int32_t>(0x13)
  static ::UnityEngine::SystemLanguage const Icelandic;

  /// @brief Field Indonesian value: static_cast<int32_t>(0x14)
  static ::UnityEngine::SystemLanguage const Indonesian;

  /// @brief Field Italian value: static_cast<int32_t>(0x15)
  static ::UnityEngine::SystemLanguage const Italian;

  /// @brief Field Japanese value: static_cast<int32_t>(0x16)
  static ::UnityEngine::SystemLanguage const Japanese;

  /// @brief Field Korean value: static_cast<int32_t>(0x17)
  static ::UnityEngine::SystemLanguage const Korean;

  /// @brief Field Latvian value: static_cast<int32_t>(0x18)
  static ::UnityEngine::SystemLanguage const Latvian;

  /// @brief Field Lithuanian value: static_cast<int32_t>(0x19)
  static ::UnityEngine::SystemLanguage const Lithuanian;

  /// @brief Field Norwegian value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::SystemLanguage const Norwegian;

  /// @brief Field Polish value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::SystemLanguage const Polish;

  /// @brief Field Portuguese value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::SystemLanguage const Portuguese;

  /// @brief Field Romanian value: static_cast<int32_t>(0x1d)
  static ::UnityEngine::SystemLanguage const Romanian;

  /// @brief Field Russian value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::SystemLanguage const Russian;

  /// @brief Field SerboCroatian value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::SystemLanguage const SerboCroatian;

  /// @brief Field Slovak value: static_cast<int32_t>(0x20)
  static ::UnityEngine::SystemLanguage const Slovak;

  /// @brief Field Slovenian value: static_cast<int32_t>(0x21)
  static ::UnityEngine::SystemLanguage const Slovenian;

  /// @brief Field Spanish value: static_cast<int32_t>(0x22)
  static ::UnityEngine::SystemLanguage const Spanish;

  /// @brief Field Swedish value: static_cast<int32_t>(0x23)
  static ::UnityEngine::SystemLanguage const Swedish;

  /// @brief Field Thai value: static_cast<int32_t>(0x24)
  static ::UnityEngine::SystemLanguage const Thai;

  /// @brief Field Turkish value: static_cast<int32_t>(0x25)
  static ::UnityEngine::SystemLanguage const Turkish;

  /// @brief Field Ukrainian value: static_cast<int32_t>(0x26)
  static ::UnityEngine::SystemLanguage const Ukrainian;

  /// @brief Field Vietnamese value: static_cast<int32_t>(0x27)
  static ::UnityEngine::SystemLanguage const Vietnamese;

  /// @brief Field ChineseSimplified value: static_cast<int32_t>(0x28)
  static ::UnityEngine::SystemLanguage const ChineseSimplified;

  /// @brief Field ChineseTraditional value: static_cast<int32_t>(0x29)
  static ::UnityEngine::SystemLanguage const ChineseTraditional;

  /// @brief Field Unknown value: static_cast<int32_t>(0x2a)
  static ::UnityEngine::SystemLanguage const Unknown;

  /// @brief Field Hungarian value: static_cast<int32_t>(0x12)
  static ::UnityEngine::SystemLanguage const Hungarian;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SystemLanguage, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SystemLanguage, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemLanguage, "UnityEngine", "SystemLanguage");

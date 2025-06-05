#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreFormatter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreFormatter)
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreFormatter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreFormatter);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoreFormatter
class CORDL_TYPE ScoreFormatter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _numberFormatInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__numberFormatInfo, put = setStaticF__numberFormatInfo)) ::System::Globalization::NumberFormatInfo* _numberFormatInfo;

  /// @brief Method Format, addr 0x26ffab0, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW Format(int32_t score);

  static inline ::GlobalNamespace::ScoreFormatter* New_ctor();

  /// @brief Method .ctor, addr 0x26ffb30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Globalization::NumberFormatInfo* getStaticF__numberFormatInfo();

  static inline void setStaticF__numberFormatInfo(::System::Globalization::NumberFormatInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreFormatter(ScoreFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreFormatter(ScoreFormatter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13310 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreFormatter, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreFormatter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreFormatter*, "", "ScoreFormatter");

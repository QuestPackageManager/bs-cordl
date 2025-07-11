#pragma once
// IWYU pragma private; include "System/Globalization/IdnMapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IdnMapping)
namespace System::Globalization {
class Punycode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Globalization {
class IdnMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::IdnMapping);
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.IdnMapping
class CORDL_TYPE IdnMapping : public ::System::Object {
public:
  // Declarations
  /// @brief Field allow_unassigned, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_allow_unassigned, put = __cordl_internal_set_allow_unassigned)) bool allow_unassigned;

  /// @brief Field puny, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_puny, put = __cordl_internal_set_puny)) ::System::Globalization::Punycode* puny;

  /// @brief Field use_std3, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_use_std3, put = __cordl_internal_set_use_std3)) bool use_std3;

  /// @brief Method Convert, addr 0x3db4700, size 0x1f8, virtual false, abstract: false, final false
  inline ::StringW Convert(::StringW input, int32_t index, int32_t count, bool toAscii);

  /// @brief Method Equals, addr 0x3db453c, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetAscii, addr 0x3db45d8, size 0x60, virtual false, abstract: false, final false
  inline ::StringW GetAscii(::StringW unicode);

  /// @brief Method GetAscii, addr 0x3db4638, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW GetAscii(::StringW unicode, int32_t index, int32_t count);

  /// @brief Method GetHashCode, addr 0x3db45c8, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnicode, addr 0x3db5648, size 0x60, virtual false, abstract: false, final false
  inline ::StringW GetUnicode(::StringW ascii);

  /// @brief Method GetUnicode, addr 0x3db56a8, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW GetUnicode(::StringW ascii, int32_t index, int32_t count);

  /// @brief Method NamePrep, addr 0x3db4cf8, size 0x144, virtual false, abstract: false, final false
  inline ::StringW NamePrep(::StringW s, int32_t offset);

  static inline ::System::Globalization::IdnMapping* New_ctor();

  /// @brief Method ToAscii, addr 0x3db48f8, size 0x234, virtual false, abstract: false, final false
  inline ::StringW ToAscii(::StringW s, int32_t offset);

  /// @brief Method ToUnicode, addr 0x3db4b2c, size 0x1cc, virtual false, abstract: false, final false
  inline ::StringW ToUnicode(::StringW s, int32_t offset);

  /// @brief Method VerifyLength, addr 0x3db534c, size 0xc4, virtual false, abstract: false, final false
  inline void VerifyLength(::StringW s, int32_t offset);

  /// @brief Method VerifyProhibitedCharacters, addr 0x3db5410, size 0x238, virtual false, abstract: false, final false
  inline void VerifyProhibitedCharacters(::StringW s, int32_t offset);

  /// @brief Method VerifyStd3AsciiRules, addr 0x3db4e3c, size 0x1c8, virtual false, abstract: false, final false
  inline void VerifyStd3AsciiRules(::StringW s, int32_t offset);

  constexpr bool const& __cordl_internal_get_allow_unassigned() const;

  constexpr bool& __cordl_internal_get_allow_unassigned();

  constexpr ::System::Globalization::Punycode* const& __cordl_internal_get_puny() const;

  constexpr ::System::Globalization::Punycode*& __cordl_internal_get_puny();

  constexpr bool const& __cordl_internal_get_use_std3() const;

  constexpr bool& __cordl_internal_get_use_std3();

  constexpr void __cordl_internal_set_allow_unassigned(bool value);

  constexpr void __cordl_internal_set_puny(::System::Globalization::Punycode* value);

  constexpr void __cordl_internal_set_use_std3(bool value);

  /// @brief Method .ctor, addr 0x3db44dc, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdnMapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdnMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdnMapping(IdnMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdnMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdnMapping(IdnMapping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3729 };

  /// @brief Field allow_unassigned, offset: 0x10, size: 0x1, def value: None
  bool ___allow_unassigned;

  /// @brief Field use_std3, offset: 0x11, size: 0x1, def value: None
  bool ___use_std3;

  /// @brief Field puny, offset: 0x18, size: 0x8, def value: None
  ::System::Globalization::Punycode* ___puny;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::IdnMapping, ___allow_unassigned) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::IdnMapping, ___use_std3) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::IdnMapping, ___puny) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::IdnMapping, 0x20>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::IdnMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::IdnMapping*, "System.Globalization", "IdnMapping");

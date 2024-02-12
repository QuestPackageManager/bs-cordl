#pragma once
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
// Type: System.Globalization::IdnMapping
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3721))
// CS Name: ::System.Globalization::IdnMapping*
class CORDL_TYPE IdnMapping : public ::System::Object {
public:
  // Declarations
  /// @brief Field allow_unassigned, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_allow_unassigned, put = __cordl_internal_set_allow_unassigned)) bool allow_unassigned;

  /// @brief Field use_std3, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_use_std3, put = __cordl_internal_set_use_std3)) bool use_std3;

  /// @brief Field puny, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_puny, put = __cordl_internal_set_puny))::System::Globalization::Punycode* puny;

  constexpr bool& __cordl_internal_get_allow_unassigned();

  constexpr bool const& __cordl_internal_get_allow_unassigned() const;

  constexpr void __cordl_internal_set_allow_unassigned(bool value);

  constexpr bool& __cordl_internal_get_use_std3();

  constexpr bool const& __cordl_internal_get_use_std3() const;

  constexpr void __cordl_internal_set_use_std3(bool value);

  constexpr ::System::Globalization::Punycode*& __cordl_internal_get_puny();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::Punycode*> const& __cordl_internal_get_puny() const;

  constexpr void __cordl_internal_set_puny(::System::Globalization::Punycode* value);

  static inline ::System::Globalization::IdnMapping* New_ctor();

  /// @brief Method .ctor, addr 0x259abac, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Equals, addr 0x259ac7c, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x259ad08, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetAscii, addr 0x259ad18, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetAscii(::StringW unicode);

  /// @brief Method GetAscii, addr 0x259ad7c, size 0xd4, virtual false, abstract: false, final false
  inline ::StringW GetAscii(::StringW unicode, int32_t index, int32_t count);

  /// @brief Method Convert, addr 0x259ae50, size 0x228, virtual false, abstract: false, final false
  inline ::StringW Convert(::StringW input, int32_t index, int32_t count, bool toAscii);

  /// @brief Method ToAscii, addr 0x259b078, size 0x23c, virtual false, abstract: false, final false
  inline ::StringW ToAscii(::StringW s, int32_t offset);

  /// @brief Method VerifyLength, addr 0x259bae8, size 0xcc, virtual false, abstract: false, final false
  inline void VerifyLength(::StringW s, int32_t offset);

  /// @brief Method NamePrep, addr 0x259b488, size 0x14c, virtual false, abstract: false, final false
  inline ::StringW NamePrep(::StringW s, int32_t offset);

  /// @brief Method VerifyProhibitedCharacters, addr 0x259bbb4, size 0x240, virtual false, abstract: false, final false
  inline void VerifyProhibitedCharacters(::StringW s, int32_t offset);

  /// @brief Method VerifyStd3AsciiRules, addr 0x259b5d4, size 0x1d0, virtual false, abstract: false, final false
  inline void VerifyStd3AsciiRules(::StringW s, int32_t offset);

  /// @brief Method GetUnicode, addr 0x259bdf4, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetUnicode(::StringW ascii);

  /// @brief Method GetUnicode, addr 0x259be58, size 0xd4, virtual false, abstract: false, final false
  inline ::StringW GetUnicode(::StringW ascii, int32_t index, int32_t count);

  /// @brief Method ToUnicode, addr 0x259b2b4, size 0x1d4, virtual false, abstract: false, final false
  inline ::StringW ToUnicode(::StringW s, int32_t offset);

  // Ctor Parameters [CppParam { name: "", ty: "IdnMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdnMapping(IdnMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdnMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdnMapping(IdnMapping const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdnMapping();

public:
  /// @brief Field allow_unassigned, offset: 0x10, size: 0x1, def value: None
  bool ___allow_unassigned;

  /// @brief Field use_std3, offset: 0x11, size: 0x1, def value: None
  bool ___use_std3;

  /// @brief Field puny, offset: 0x18, size: 0x8, def value: None
  ::System::Globalization::Punycode* ___puny;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::IdnMapping, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::IdnMapping, ___allow_unassigned) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::IdnMapping, ___use_std3) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::IdnMapping, ___puny) == 0x18, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::IdnMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::IdnMapping*, "System.Globalization", "IdnMapping");

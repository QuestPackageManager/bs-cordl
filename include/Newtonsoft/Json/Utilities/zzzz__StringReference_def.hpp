#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringReference)
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct StringReference;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::StringReference);
// Type: Newtonsoft.Json.Utilities::StringReference
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: ::Newtonsoft.Json.Utilities::StringReference
struct CORDL_TYPE StringReference {
public:
  // Declarations
  __declspec(property(get = get_Chars))::ArrayW<char16_t, ::Array<char16_t>*> Chars;

  __declspec(property(get = get_Item)) char16_t Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_StartIndex)) int32_t StartIndex;

  /// @brief Method ToString, addr 0x274e374, size 0x14, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x274e368, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startIndex, int32_t length);

  /// @brief Method get_Chars, addr 0x274e350, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> get_Chars();

  /// @brief Method get_Item, addr 0x274e320, size 0x30, virtual false, abstract: false, final false
  inline char16_t get_Item(int32_t i);

  /// @brief Method get_Length, addr 0x274e360, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_StartIndex, addr 0x274e358, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_StartIndex();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StringReference();

  // Ctor Parameters [CppParam { name: "_chars", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "_startIndex", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StringReference(::ArrayW<char16_t, ::Array<char16_t>*> _chars, int32_t _startIndex, int32_t _length) noexcept;

  /// @brief Field _chars, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> _chars;

  /// @brief Field _startIndex, offset: 0x8, size: 0x4, def value: None
  int32_t _startIndex;

  /// @brief Field _length, offset: 0xc, size: 0x4, def value: None
  int32_t _length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::StringReference, 0x10>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::StringReference, _chars) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::StringReference, _startIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::StringReference, _length) == 0xc, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringReference, "Newtonsoft.Json.Utilities", "StringReference");

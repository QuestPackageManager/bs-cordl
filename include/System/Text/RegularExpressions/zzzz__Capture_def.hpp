#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Capture)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class Capture;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::Capture);
// Type: System.Text.RegularExpressions::Capture
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7737))
// CS Name: ::System.Text.RegularExpressions::Capture*
class CORDL_TYPE Capture : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Index>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__Index_k__BackingField, put = __set__Index_k__BackingField)) int32_t _Index_k__BackingField;

  /// @brief Field <Length>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__Length_k__BackingField, put = __set__Length_k__BackingField)) int32_t _Length_k__BackingField;

  /// @brief Field <Text>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Text_k__BackingField, put = __set__Text_k__BackingField))::StringW _Text_k__BackingField;

  __declspec(property(get = get_Index, put = set_Index)) int32_t Index;

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  __declspec(property(get = get_Text, put = set_Text))::StringW Text;

  __declspec(property(get = get_Value))::StringW Value;

  constexpr int32_t& __get__Index_k__BackingField();

  constexpr int32_t const& __get__Index_k__BackingField() const;

  constexpr void __set__Index_k__BackingField(int32_t value);

  constexpr int32_t& __get__Length_k__BackingField();

  constexpr int32_t const& __get__Length_k__BackingField() const;

  constexpr void __set__Length_k__BackingField(int32_t value);

  constexpr ::StringW& __get__Text_k__BackingField();

  constexpr ::StringW const& __get__Text_k__BackingField() const;

  constexpr void __set__Text_k__BackingField(::StringW value);

  static inline ::System::Text::RegularExpressions::Capture* New_ctor(::StringW text, int32_t index, int32_t length);

  /// @brief Method .ctor addr 0x27d1268 size 0x3c virtual false final false
  inline void _ctor(::StringW text, int32_t index, int32_t length);

  /// @brief Method get_Index addr 0x27d12a4 size 0x8 virtual false final false
  inline int32_t get_Index();

  /// @brief Method set_Index addr 0x27d12ac size 0x8 virtual false final false
  inline void set_Index(int32_t value);

  /// @brief Method get_Length addr 0x27d12b4 size 0x8 virtual false final false
  inline int32_t get_Length();

  /// @brief Method set_Length addr 0x27d12bc size 0x8 virtual false final false
  inline void set_Length(int32_t value);

  /// @brief Method get_Text addr 0x27d12c4 size 0x8 virtual false final false
  inline ::StringW get_Text();

  /// @brief Method set_Text addr 0x27d12cc size 0x8 virtual false final false
  inline void set_Text(::StringW value);

  /// @brief Method get_Value addr 0x27d12d4 size 0x24 virtual false final false
  inline ::StringW get_Value();

  /// @brief Method ToString addr 0x27d12f8 size 0x4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetLeftSubstring addr 0x27d12fc size 0x88 virtual false final false
  inline ::System::ReadOnlySpan_1<char16_t> GetLeftSubstring();

  /// @brief Method GetRightSubstring addr 0x27d1384 size 0x90 virtual false final false
  inline ::System::ReadOnlySpan_1<char16_t> GetRightSubstring();

  // Ctor Parameters [CppParam { name: "", ty: "Capture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Capture(Capture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Capture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Capture(Capture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Capture();

public:
  /// @brief Field <Index>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____Index_k__BackingField;

  /// @brief Field <Length>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____Length_k__BackingField;

  /// @brief Field <Text>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Text_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::Capture, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Capture, ____Index_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Capture, ____Length_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Capture, ____Text_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::Capture);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Capture*, "System.Text.RegularExpressions", "Capture");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Style)
// Forward declare root types
namespace TMPro {
class TMP_Style;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Style);
// Type: TMPro::TMP_Style
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12424))
// CS Name: ::TMPro::TMP_Style*
class CORDL_TYPE TMP_Style : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Name, put = __set_m_Name))::StringW m_Name;

  /// @brief Field m_HashCode, offset 0x18, size 0x4
  __declspec(property(get = __get_m_HashCode, put = __set_m_HashCode)) int32_t m_HashCode;

  /// @brief Field m_OpeningDefinition, offset 0x20, size 0x8
  __declspec(property(get = __get_m_OpeningDefinition, put = __set_m_OpeningDefinition))::StringW m_OpeningDefinition;

  /// @brief Field m_ClosingDefinition, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ClosingDefinition, put = __set_m_ClosingDefinition))::StringW m_ClosingDefinition;

  /// @brief Field m_OpeningTagArray, offset 0x30, size 0x8
  __declspec(property(get = __get_m_OpeningTagArray, put = __set_m_OpeningTagArray))::ArrayW<int32_t, ::Array<int32_t>*> m_OpeningTagArray;

  /// @brief Field m_ClosingTagArray, offset 0x38, size 0x8
  __declspec(property(get = __get_m_ClosingTagArray, put = __set_m_ClosingTagArray))::ArrayW<int32_t, ::Array<int32_t>*> m_ClosingTagArray;

  /// @brief Field m_OpeningTagUnicodeArray, offset 0x40, size 0x8
  __declspec(property(get = __get_m_OpeningTagUnicodeArray, put = __set_m_OpeningTagUnicodeArray))::ArrayW<uint32_t, ::Array<uint32_t>*> m_OpeningTagUnicodeArray;

  /// @brief Field m_ClosingTagUnicodeArray, offset 0x48, size 0x8
  __declspec(property(get = __get_m_ClosingTagUnicodeArray, put = __set_m_ClosingTagUnicodeArray))::ArrayW<uint32_t, ::Array<uint32_t>*> m_ClosingTagUnicodeArray;

  /// @brief Field k_NormalStyle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_NormalStyle, put = setStaticF_k_NormalStyle))::TMPro::TMP_Style* k_NormalStyle;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_hashCode, put = set_hashCode)) int32_t hashCode;

  __declspec(property(get = get_styleOpeningDefinition))::StringW styleOpeningDefinition;

  __declspec(property(get = get_styleClosingDefinition))::StringW styleClosingDefinition;

  __declspec(property(get = get_styleOpeningTagArray))::ArrayW<int32_t, ::Array<int32_t>*> styleOpeningTagArray;

  __declspec(property(get = get_styleClosingTagArray))::ArrayW<int32_t, ::Array<int32_t>*> styleClosingTagArray;

  constexpr ::StringW& __get_m_Name();

  constexpr ::StringW const& __get_m_Name() const;

  constexpr void __set_m_Name(::StringW value);

  constexpr int32_t& __get_m_HashCode();

  constexpr int32_t const& __get_m_HashCode() const;

  constexpr void __set_m_HashCode(int32_t value);

  constexpr ::StringW& __get_m_OpeningDefinition();

  constexpr ::StringW const& __get_m_OpeningDefinition() const;

  constexpr void __set_m_OpeningDefinition(::StringW value);

  constexpr ::StringW& __get_m_ClosingDefinition();

  constexpr ::StringW const& __get_m_ClosingDefinition() const;

  constexpr void __set_m_ClosingDefinition(::StringW value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_OpeningTagArray();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_OpeningTagArray() const;

  constexpr void __set_m_OpeningTagArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_ClosingTagArray();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_ClosingTagArray() const;

  constexpr void __set_m_ClosingTagArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_m_OpeningTagUnicodeArray();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_m_OpeningTagUnicodeArray() const;

  constexpr void __set_m_OpeningTagUnicodeArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_m_ClosingTagUnicodeArray();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_m_ClosingTagUnicodeArray() const;

  constexpr void __set_m_ClosingTagUnicodeArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_k_NormalStyle(::TMPro::TMP_Style* value);

  static inline ::TMPro::TMP_Style* getStaticF_k_NormalStyle();

  /// @brief Method get_NormalStyle addr 0x2c44b30 size 0xbc virtual false final false
  static inline ::TMPro::TMP_Style* get_NormalStyle();

  /// @brief Method get_name addr 0x2c44c7c size 0x8 virtual false final false
  inline ::StringW get_name();

  /// @brief Method set_name addr 0x2c44c84 size 0x38 virtual false final false
  inline void set_name(::StringW value);

  /// @brief Method get_hashCode addr 0x2c44cbc size 0x8 virtual false final false
  inline int32_t get_hashCode();

  /// @brief Method set_hashCode addr 0x2c44cc4 size 0x14 virtual false final false
  inline void set_hashCode(int32_t value);

  /// @brief Method get_styleOpeningDefinition addr 0x2c44cd8 size 0x8 virtual false final false
  inline ::StringW get_styleOpeningDefinition();

  /// @brief Method get_styleClosingDefinition addr 0x2c44ce0 size 0x8 virtual false final false
  inline ::StringW get_styleClosingDefinition();

  /// @brief Method get_styleOpeningTagArray addr 0x2c44ce8 size 0x8 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_styleOpeningTagArray();

  /// @brief Method get_styleClosingTagArray addr 0x2c44cf0 size 0x8 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_styleClosingTagArray();

  static inline ::TMPro::TMP_Style* New_ctor(::StringW styleName, ::StringW styleOpeningDefinition, ::StringW styleClosingDefinition);

  /// @brief Method .ctor addr 0x2c44bec size 0x90 virtual false final false
  inline void _ctor(::StringW styleName, ::StringW styleOpeningDefinition, ::StringW styleClosingDefinition);

  /// @brief Method RefreshStyle addr 0x2c44db4 size 0x1f8 virtual false final false
  inline void RefreshStyle();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Style", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Style(TMP_Style&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Style", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Style(TMP_Style const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Style();

public:
  /// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_HashCode, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_HashCode;

  /// @brief Field m_OpeningDefinition, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_OpeningDefinition;

  /// @brief Field m_ClosingDefinition, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_ClosingDefinition;

  /// @brief Field m_OpeningTagArray, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_OpeningTagArray;

  /// @brief Field m_ClosingTagArray, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_ClosingTagArray;

  /// @brief Field m_OpeningTagUnicodeArray, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_OpeningTagUnicodeArray;

  /// @brief Field m_ClosingTagUnicodeArray, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_ClosingTagUnicodeArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Style, 0x50>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Style);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Style*, "TMPro", "TMP_Style");

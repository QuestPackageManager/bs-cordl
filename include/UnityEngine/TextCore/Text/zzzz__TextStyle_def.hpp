#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextStyle)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextStyle);
// Type: UnityEngine.TextCore.Text::TextStyle
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::TextStyle*
class CORDL_TYPE TextStyle : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_hashCode)) int32_t hashCode;

  /// @brief Field k_NormalStyle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_NormalStyle, put = setStaticF_k_NormalStyle))::UnityEngine::TextCore::Text::TextStyle* k_NormalStyle;

  /// @brief Field m_ClosingDefinition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClosingDefinition, put = __cordl_internal_set_m_ClosingDefinition))::StringW m_ClosingDefinition;

  /// @brief Field m_ClosingTagArray, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClosingTagArray, put = __cordl_internal_set_m_ClosingTagArray))::ArrayW<int32_t, ::Array<int32_t>*> m_ClosingTagArray;

  /// @brief Field m_ClosingTagUnicodeArray, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClosingTagUnicodeArray, put = __cordl_internal_set_m_ClosingTagUnicodeArray))::ArrayW<uint32_t, ::Array<uint32_t>*> m_ClosingTagUnicodeArray;

  /// @brief Field m_HashCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HashCode, put = __cordl_internal_set_m_HashCode)) int32_t m_HashCode;

  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::StringW m_Name;

  /// @brief Field m_OpeningDefinition, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OpeningDefinition, put = __cordl_internal_set_m_OpeningDefinition))::StringW m_OpeningDefinition;

  /// @brief Field m_OpeningTagArray, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OpeningTagArray, put = __cordl_internal_set_m_OpeningTagArray))::ArrayW<int32_t, ::Array<int32_t>*> m_OpeningTagArray;

  /// @brief Field m_OpeningTagUnicodeArray, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OpeningTagUnicodeArray, put = __cordl_internal_set_m_OpeningTagUnicodeArray))::ArrayW<uint32_t, ::Array<uint32_t>*> m_OpeningTagUnicodeArray;

  __declspec(property(get = get_styleClosingTagArray))::ArrayW<int32_t, ::Array<int32_t>*> styleClosingTagArray;

  __declspec(property(get = get_styleOpeningTagArray))::ArrayW<int32_t, ::Array<int32_t>*> styleOpeningTagArray;

  /// @brief Method RefreshStyle, addr 0x3290f3c, size 0x1e4, virtual false, abstract: false, final false
  inline void RefreshStyle();

  constexpr ::StringW const& __cordl_internal_get_m_ClosingDefinition() const;

  constexpr ::StringW& __cordl_internal_get_m_ClosingDefinition();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_ClosingTagArray() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_ClosingTagArray();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_m_ClosingTagUnicodeArray() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_m_ClosingTagUnicodeArray();

  constexpr int32_t const& __cordl_internal_get_m_HashCode() const;

  constexpr int32_t& __cordl_internal_get_m_HashCode();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::StringW const& __cordl_internal_get_m_OpeningDefinition() const;

  constexpr ::StringW& __cordl_internal_get_m_OpeningDefinition();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_OpeningTagArray() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_OpeningTagArray();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_m_OpeningTagUnicodeArray() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_m_OpeningTagUnicodeArray();

  constexpr void __cordl_internal_set_m_ClosingDefinition(::StringW value);

  constexpr void __cordl_internal_set_m_ClosingTagArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_ClosingTagUnicodeArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_m_HashCode(int32_t value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_OpeningDefinition(::StringW value);

  constexpr void __cordl_internal_set_m_OpeningTagArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_OpeningTagUnicodeArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::UnityEngine::TextCore::Text::TextStyle* getStaticF_k_NormalStyle();

  /// @brief Method get_hashCode, addr 0x3290f24, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_hashCode();

  /// @brief Method get_styleClosingTagArray, addr 0x3290f34, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_styleClosingTagArray();

  /// @brief Method get_styleOpeningTagArray, addr 0x3290f2c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_styleOpeningTagArray();

  static inline void setStaticF_k_NormalStyle(::UnityEngine::TextCore::Text::TextStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextStyle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextStyle(TextStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextStyle(TextStyle const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextStyle, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyle, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyle, ___m_HashCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyle, ___m_OpeningDefinition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyle, ___m_ClosingDefinition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyle, ___m_OpeningTagArray) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyle, ___m_ClosingTagArray) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyle, ___m_OpeningTagUnicodeArray) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextStyle, ___m_ClosingTagUnicodeArray) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextStyle*, "UnityEngine.TextCore.Text", "TextStyle");

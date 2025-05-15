#pragma once
// IWYU pragma private; include "GlobalNamespace/CreditsData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreditsData)
namespace GlobalNamespace {
class CreditsData_ChildCreditsItem;
}
namespace GlobalNamespace {
class CreditsData_RootCreditsItem;
}
namespace GlobalNamespace {
struct CreditsData_TextStyle;
}
namespace GlobalNamespace {
class CreditsData_Text;
}
// Forward declare root types
namespace GlobalNamespace {
struct CreditsData_TextStyle;
}
namespace GlobalNamespace {
class CreditsData;
}
namespace GlobalNamespace {
class CreditsData_ChildCreditsItem;
}
namespace GlobalNamespace {
class CreditsData_RootCreditsItem;
}
namespace GlobalNamespace {
class CreditsData_Text;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CreditsData_TextStyle);
MARK_REF_PTR_T(::GlobalNamespace::CreditsData);
MARK_REF_PTR_T(::GlobalNamespace::CreditsData_ChildCreditsItem);
MARK_REF_PTR_T(::GlobalNamespace::CreditsData_RootCreditsItem);
MARK_REF_PTR_T(::GlobalNamespace::CreditsData_Text);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: CreditsData/TextStyle
struct CORDL_TYPE CreditsData_TextStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CreditsData_TextStyle_Unwrapped
  enum struct __CreditsData_TextStyle_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Title = static_cast<int32_t>(0x1),
    __E_Header = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CreditsData_TextStyle_Unwrapped() const noexcept {
    return static_cast<__CreditsData_TextStyle_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsData_TextStyle();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CreditsData_TextStyle(int32_t value__) noexcept;

  /// @brief Field Header value: I32(2)
  static ::GlobalNamespace::CreditsData_TextStyle const Header;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::CreditsData_TextStyle const Normal;

  /// @brief Field Title value: I32(1)
  static ::GlobalNamespace::CreditsData_TextStyle const Title;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18820 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsData_TextStyle, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsData_TextStyle, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies CreditsData::TextStyle, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsData/Text
class CORDL_TYPE CreditsData_Text : public ::System::Object {
public:
  // Declarations
  /// @brief Field localized, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_localized, put = __cordl_internal_set_localized)) bool localized;

  /// @brief Field style, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_style, put = __cordl_internal_set_style)) ::GlobalNamespace::CreditsData_TextStyle style;

  /// @brief Field text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text)) ::StringW text;

  /// @brief Method IsEmpty, addr 0x225f7f4, size 0x20, virtual false, abstract: false, final false
  inline bool IsEmpty();

  static inline ::GlobalNamespace::CreditsData_Text* New_ctor();

  /// @brief Method ToString, addr 0x225f814, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_localized() const;

  constexpr bool& __cordl_internal_get_localized();

  constexpr ::GlobalNamespace::CreditsData_TextStyle const& __cordl_internal_get_style() const;

  constexpr ::GlobalNamespace::CreditsData_TextStyle& __cordl_internal_get_style();

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr void __cordl_internal_set_localized(bool value);

  constexpr void __cordl_internal_set_style(::GlobalNamespace::CreditsData_TextStyle value);

  constexpr void __cordl_internal_set_text(::StringW value);

  /// @brief Method .ctor, addr 0x225f8d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsData_Text();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsData_Text", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsData_Text(CreditsData_Text&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsData_Text", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsData_Text(CreditsData_Text const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18821 };

  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field localized, offset: 0x18, size: 0x1, def value: None
  bool ___localized;

  /// @brief Field style, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::CreditsData_TextStyle ___style;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsData_Text, ___text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsData_Text, ___localized) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsData_Text, ___style) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsData_Text, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsData/RootCreditsItem
class CORDL_TYPE CreditsData_RootCreditsItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field creditsItems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_creditsItems,
                      put = __cordl_internal_set_creditsItems)) ::ArrayW<::GlobalNamespace::CreditsData_ChildCreditsItem*, ::Array<::GlobalNamespace::CreditsData_ChildCreditsItem*>*>
      creditsItems;

  /// @brief Field rowCountOverride, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_rowCountOverride, put = __cordl_internal_set_rowCountOverride)) int32_t rowCountOverride;

  /// @brief Field text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text)) ::GlobalNamespace::CreditsData_Text* text;

  /// @brief Field title, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_title, put = __cordl_internal_set_title)) ::GlobalNamespace::CreditsData_Text* title;

  /// @brief Method HasRowItems, addr 0x225f900, size 0x20, virtual false, abstract: false, final false
  inline bool HasRowItems();

  /// @brief Method HasText, addr 0x225f8f0, size 0x10, virtual false, abstract: false, final false
  inline bool HasText();

  /// @brief Method HasTitle, addr 0x225f8e0, size 0x10, virtual false, abstract: false, final false
  inline bool HasTitle();

  static inline ::GlobalNamespace::CreditsData_RootCreditsItem* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::CreditsData_ChildCreditsItem*, ::Array<::GlobalNamespace::CreditsData_ChildCreditsItem*>*> const& __cordl_internal_get_creditsItems() const;

  constexpr ::ArrayW<::GlobalNamespace::CreditsData_ChildCreditsItem*, ::Array<::GlobalNamespace::CreditsData_ChildCreditsItem*>*>& __cordl_internal_get_creditsItems();

  constexpr int32_t const& __cordl_internal_get_rowCountOverride() const;

  constexpr int32_t& __cordl_internal_get_rowCountOverride();

  constexpr ::GlobalNamespace::CreditsData_Text* const& __cordl_internal_get_text() const;

  constexpr ::GlobalNamespace::CreditsData_Text*& __cordl_internal_get_text();

  constexpr ::GlobalNamespace::CreditsData_Text* const& __cordl_internal_get_title() const;

  constexpr ::GlobalNamespace::CreditsData_Text*& __cordl_internal_get_title();

  constexpr void __cordl_internal_set_creditsItems(::ArrayW<::GlobalNamespace::CreditsData_ChildCreditsItem*, ::Array<::GlobalNamespace::CreditsData_ChildCreditsItem*>*> value);

  constexpr void __cordl_internal_set_rowCountOverride(int32_t value);

  constexpr void __cordl_internal_set_text(::GlobalNamespace::CreditsData_Text* value);

  constexpr void __cordl_internal_set_title(::GlobalNamespace::CreditsData_Text* value);

  /// @brief Method .ctor, addr 0x225f920, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsData_RootCreditsItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsData_RootCreditsItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsData_RootCreditsItem(CreditsData_RootCreditsItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsData_RootCreditsItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsData_RootCreditsItem(CreditsData_RootCreditsItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18822 };

  /// @brief Field title, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::CreditsData_Text* ___title;

  /// @brief Field text, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::CreditsData_Text* ___text;

  /// @brief Field rowCountOverride, offset: 0x20, size: 0x4, def value: None
  int32_t ___rowCountOverride;

  /// @brief Field creditsItems, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::CreditsData_ChildCreditsItem*, ::Array<::GlobalNamespace::CreditsData_ChildCreditsItem*>*> ___creditsItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsData_RootCreditsItem, ___title) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsData_RootCreditsItem, ___text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsData_RootCreditsItem, ___rowCountOverride) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsData_RootCreditsItem, ___creditsItems) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsData_RootCreditsItem, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsData/ChildCreditsItem
class CORDL_TYPE CreditsData_ChildCreditsItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text)) ::GlobalNamespace::CreditsData_Text* text;

  /// @brief Field title, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_title, put = __cordl_internal_set_title)) ::GlobalNamespace::CreditsData_Text* title;

  /// @brief Method HasText, addr 0x225f938, size 0x10, virtual false, abstract: false, final false
  inline bool HasText();

  /// @brief Method HasTitle, addr 0x225f928, size 0x10, virtual false, abstract: false, final false
  inline bool HasTitle();

  static inline ::GlobalNamespace::CreditsData_ChildCreditsItem* New_ctor();

  constexpr ::GlobalNamespace::CreditsData_Text* const& __cordl_internal_get_text() const;

  constexpr ::GlobalNamespace::CreditsData_Text*& __cordl_internal_get_text();

  constexpr ::GlobalNamespace::CreditsData_Text* const& __cordl_internal_get_title() const;

  constexpr ::GlobalNamespace::CreditsData_Text*& __cordl_internal_get_title();

  constexpr void __cordl_internal_set_text(::GlobalNamespace::CreditsData_Text* value);

  constexpr void __cordl_internal_set_title(::GlobalNamespace::CreditsData_Text* value);

  /// @brief Method .ctor, addr 0x225f948, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsData_ChildCreditsItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsData_ChildCreditsItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsData_ChildCreditsItem(CreditsData_ChildCreditsItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsData_ChildCreditsItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsData_ChildCreditsItem(CreditsData_ChildCreditsItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18823 };

  /// @brief Field title, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::CreditsData_Text* ___title;

  /// @brief Field text, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::CreditsData_Text* ___text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsData_ChildCreditsItem, ___title) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsData_ChildCreditsItem, ___text) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsData_ChildCreditsItem, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsData
class CORDL_TYPE CreditsData : public ::System::Object {
public:
  // Declarations
  using ChildCreditsItem = ::GlobalNamespace::CreditsData_ChildCreditsItem;

  using RootCreditsItem = ::GlobalNamespace::CreditsData_RootCreditsItem;

  using Text = ::GlobalNamespace::CreditsData_Text;

  using TextStyle = ::GlobalNamespace::CreditsData_TextStyle;

  /// @brief Field creditsItems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_creditsItems,
                      put = __cordl_internal_set_creditsItems)) ::ArrayW<::GlobalNamespace::CreditsData_RootCreditsItem*, ::Array<::GlobalNamespace::CreditsData_RootCreditsItem*>*>
      creditsItems;

  /// @brief Method Deserialize, addr 0x225f6e8, size 0x104, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::CreditsData* Deserialize(::StringW text);

  static inline ::GlobalNamespace::CreditsData* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::CreditsData_RootCreditsItem*, ::Array<::GlobalNamespace::CreditsData_RootCreditsItem*>*> const& __cordl_internal_get_creditsItems() const;

  constexpr ::ArrayW<::GlobalNamespace::CreditsData_RootCreditsItem*, ::Array<::GlobalNamespace::CreditsData_RootCreditsItem*>*>& __cordl_internal_get_creditsItems();

  constexpr void __cordl_internal_set_creditsItems(::ArrayW<::GlobalNamespace::CreditsData_RootCreditsItem*, ::Array<::GlobalNamespace::CreditsData_RootCreditsItem*>*> value);

  /// @brief Method .ctor, addr 0x225f7ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsData(CreditsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsData(CreditsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18824 };

  /// @brief Field creditsItems, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::CreditsData_RootCreditsItem*, ::Array<::GlobalNamespace::CreditsData_RootCreditsItem*>*> ___creditsItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsData, ___creditsItems) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData_TextStyle, "", "CreditsData/TextStyle");
NEED_NO_BOX(::GlobalNamespace::CreditsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData*, "", "CreditsData");
NEED_NO_BOX(::GlobalNamespace::CreditsData_ChildCreditsItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData_ChildCreditsItem*, "", "CreditsData/ChildCreditsItem");
NEED_NO_BOX(::GlobalNamespace::CreditsData_RootCreditsItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData_RootCreditsItem*, "", "CreditsData/RootCreditsItem");
NEED_NO_BOX(::GlobalNamespace::CreditsData_Text);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData_Text*, "", "CreditsData/Text");

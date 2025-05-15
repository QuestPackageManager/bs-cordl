#pragma once
// IWYU pragma private; include "System/Globalization/CodePageDataItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodePageDataItem)
// Forward declare root types
namespace System::Globalization {
class CodePageDataItem;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CodePageDataItem);
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.CodePageDataItem
class CORDL_TYPE CodePageDataItem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_WebName)) ::StringW WebName;

  /// @brief Field m_dataIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_dataIndex, put = __cordl_internal_set_m_dataIndex)) int32_t m_dataIndex;

  /// @brief Field m_flags, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_flags, put = __cordl_internal_set_m_flags)) uint32_t m_flags;

  /// @brief Field m_uiFamilyCodePage, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_uiFamilyCodePage, put = __cordl_internal_set_m_uiFamilyCodePage)) int32_t m_uiFamilyCodePage;

  /// @brief Field m_webName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_webName, put = __cordl_internal_set_m_webName)) ::StringW m_webName;

  /// @brief Field sep, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sep, put = setStaticF_sep)) ::ArrayW<char16_t, ::Array<char16_t>*> sep;

  /// @brief Method CreateString, addr 0x3da8fd0, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW CreateString(::StringW pStrings, uint32_t index);

  static inline ::System::Globalization::CodePageDataItem* New_ctor(int32_t dataIndex);

  constexpr int32_t const& __cordl_internal_get_m_dataIndex() const;

  constexpr int32_t& __cordl_internal_get_m_dataIndex();

  constexpr uint32_t const& __cordl_internal_get_m_flags() const;

  constexpr uint32_t& __cordl_internal_get_m_flags();

  constexpr int32_t const& __cordl_internal_get_m_uiFamilyCodePage() const;

  constexpr int32_t& __cordl_internal_get_m_uiFamilyCodePage();

  constexpr ::StringW const& __cordl_internal_get_m_webName() const;

  constexpr ::StringW& __cordl_internal_get_m_webName();

  constexpr void __cordl_internal_set_m_dataIndex(int32_t value);

  constexpr void __cordl_internal_set_m_flags(uint32_t value);

  constexpr void __cordl_internal_set_m_uiFamilyCodePage(int32_t value);

  constexpr void __cordl_internal_set_m_webName(::StringW value);

  /// @brief Method .ctor, addr 0x3da8f2c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t dataIndex);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_sep();

  /// @brief Method get_WebName, addr 0x3da9084, size 0xbc, virtual false, abstract: false, final false
  inline ::StringW get_WebName();

  static inline void setStaticF_sep(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodePageDataItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodePageDataItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodePageDataItem(CodePageDataItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodePageDataItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodePageDataItem(CodePageDataItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3720 };

  /// @brief Field m_dataIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_dataIndex;

  /// @brief Field m_uiFamilyCodePage, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_uiFamilyCodePage;

  /// @brief Field m_webName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_webName;

  /// @brief Field m_flags, offset: 0x20, size: 0x4, def value: None
  uint32_t ___m_flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::CodePageDataItem, ___m_dataIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CodePageDataItem, ___m_uiFamilyCodePage) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CodePageDataItem, ___m_webName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CodePageDataItem, ___m_flags) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::CodePageDataItem, 0x28>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::CodePageDataItem);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CodePageDataItem*, "System.Globalization", "CodePageDataItem");

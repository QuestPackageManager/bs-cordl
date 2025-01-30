#pragma once
// IWYU pragma private; include "System/Linq/Expressions/SymbolDocumentInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SymbolDocumentInfo)
// Forward declare root types
namespace System::Linq::Expressions {
class SymbolDocumentInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::SymbolDocumentInfo);
// Dependencies System.Guid, System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.SymbolDocumentInfo
class CORDL_TYPE SymbolDocumentInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field DocumentType_Text, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DocumentType_Text, put = setStaticF_DocumentType_Text)) ::System::Guid DocumentType_Text;

  __declspec(property(get = get_FileName)) ::StringW FileName;

  /// @brief Field <FileName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__FileName_k__BackingField, put = __cordl_internal_set__FileName_k__BackingField)) ::StringW _FileName_k__BackingField;

  constexpr ::StringW const& __cordl_internal_get__FileName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FileName_k__BackingField();

  constexpr void __cordl_internal_set__FileName_k__BackingField(::StringW value);

  static inline ::System::Guid getStaticF_DocumentType_Text();

  /// @brief Method get_FileName, addr 0x40be974, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FileName();

  static inline void setStaticF_DocumentType_Text(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymbolDocumentInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SymbolDocumentInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymbolDocumentInfo(SymbolDocumentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymbolDocumentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymbolDocumentInfo(SymbolDocumentInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13736 };

  /// @brief Field <FileName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____FileName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::SymbolDocumentInfo, ____FileName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::SymbolDocumentInfo, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::SymbolDocumentInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::SymbolDocumentInfo*, "System.Linq.Expressions", "SymbolDocumentInfo");

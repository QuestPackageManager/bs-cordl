#pragma once
// IWYU pragma private; include "System/Globalization/EncodingTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncodingTable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Globalization {
class CodePageDataItem;
}
namespace System::Globalization {
struct InternalCodePageDataItem;
}
namespace System::Globalization {
struct InternalEncodingDataItem;
}
// Forward declare root types
namespace System::Globalization {
class EncodingTable;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::EncodingTable);
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.EncodingTable
class CORDL_TYPE EncodingTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field codePageDataPtr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_codePageDataPtr,
                      put = setStaticF_codePageDataPtr)) ::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*>
      codePageDataPtr;

  /// @brief Field encodingDataPtr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encodingDataPtr,
                      put = setStaticF_encodingDataPtr)) ::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*>
      encodingDataPtr;

  /// @brief Field hashByCodePage, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hashByCodePage,
                      put = setStaticF_hashByCodePage)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* hashByCodePage;

  /// @brief Field hashByName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hashByName, put = setStaticF_hashByName)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* hashByName;

  /// @brief Field lastEncodingItem, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_lastEncodingItem, put = setStaticF_lastEncodingItem)) int32_t lastEncodingItem;

  /// @brief Method ENC, addr 0x3dad8b4, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Globalization::InternalEncodingDataItem ENC(::StringW name, uint16_t cp);

  /// @brief Method GetCodePageDataItem, addr 0x3db326c, size 0x2bc, virtual false, abstract: false, final false
  static inline ::System::Globalization::CodePageDataItem* GetCodePageDataItem(int32_t codepage);

  /// @brief Method GetCodePageFromName, addr 0x3db2ff0, size 0x27c, virtual false, abstract: false, final false
  static inline int32_t GetCodePageFromName(::StringW name);

  /// @brief Method GetNumEncodingItems, addr 0x3dad850, size 0x64, virtual false, abstract: false, final false
  static inline int32_t GetNumEncodingItems();

  /// @brief Method MapCodePageDataItem, addr 0x3dad8bc, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Globalization::InternalCodePageDataItem MapCodePageDataItem(uint16_t cp, uint16_t fcp, ::StringW names, uint32_t flags);

  static inline ::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*> getStaticF_codePageDataPtr();

  static inline ::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*> getStaticF_encodingDataPtr();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* getStaticF_hashByCodePage();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* getStaticF_hashByName();

  static inline int32_t getStaticF_lastEncodingItem();

  /// @brief Method internalGetCodePageFromName, addr 0x3db2d80, size 0x250, virtual false, abstract: false, final false
  static inline int32_t internalGetCodePageFromName(::StringW name);

  static inline void setStaticF_codePageDataPtr(::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*> value);

  static inline void setStaticF_encodingDataPtr(::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*> value);

  static inline void setStaticF_hashByCodePage(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* value);

  static inline void setStaticF_hashByName(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  static inline void setStaticF_lastEncodingItem(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncodingTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncodingTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncodingTable(EncodingTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncodingTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncodingTable(EncodingTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::EncodingTable, 0x10>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::EncodingTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::EncodingTable*, "System.Globalization", "EncodingTable");

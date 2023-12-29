#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HeaderInfoTable)
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class HeaderParser;
}
namespace System::Net {
class HeaderInfo;
}
// Forward declare root types
namespace System::Net {
class HeaderInfoTable;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HeaderInfoTable);
// Type: System.Net::HeaderInfoTable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7940))
// CS Name: ::System.Net::HeaderInfoTable*
class CORDL_TYPE HeaderInfoTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field HeaderHashTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HeaderHashTable, put = setStaticF_HeaderHashTable))::System::Collections::Hashtable* HeaderHashTable;

  /// @brief Field UnknownHeaderInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnknownHeaderInfo, put = setStaticF_UnknownHeaderInfo))::System::Net::HeaderInfo* UnknownHeaderInfo;

  /// @brief Field SingleParser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SingleParser, put = setStaticF_SingleParser))::System::Net::HeaderParser* SingleParser;

  /// @brief Field MultiParser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MultiParser, put = setStaticF_MultiParser))::System::Net::HeaderParser* MultiParser;

  __declspec(property(get = get_Item))::System::Net::HeaderInfo* Item[];

  static inline void setStaticF_HeaderHashTable(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_HeaderHashTable();

  static inline void setStaticF_UnknownHeaderInfo(::System::Net::HeaderInfo* value);

  static inline ::System::Net::HeaderInfo* getStaticF_UnknownHeaderInfo();

  static inline void setStaticF_SingleParser(::System::Net::HeaderParser* value);

  static inline ::System::Net::HeaderParser* getStaticF_SingleParser();

  static inline void setStaticF_MultiParser(::System::Net::HeaderParser* value);

  static inline ::System::Net::HeaderParser* getStaticF_MultiParser();

  /// @brief Method ParseSingleValue addr 0x28286e0 size 0x90 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> ParseSingleValue(::StringW value);

  /// @brief Method ParseMultiValue addr 0x2828770 size 0x1f8 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> ParseMultiValue(::StringW value);

  /// @brief Method get_Item addr 0x282270c size 0xdc virtual false final false
  inline ::System::Net::HeaderInfo* get_Item(::StringW name);

  static inline ::System::Net::HeaderInfoTable* New_ctor();

  /// @brief Method .ctor addr 0x2824e6c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfoTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderInfoTable(HeaderInfoTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfoTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderInfoTable(HeaderInfoTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderInfoTable();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HeaderInfoTable, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HeaderInfoTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderInfoTable*, "System.Net", "HeaderInfoTable");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HeaderInfo_HeaderTypeInfo_2)
namespace System::Net::Http::Headers {
template <typename T> class TryParseDelegate_1;
}
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class HeaderInfo;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template <typename T, typename U> class __HeaderInfo__HeaderTypeInfo_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2);
// Type: ::HeaderTypeInfo`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// cpp template
template <typename T, typename U>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14671))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14669))
// CS Name: ::HeaderInfo::HeaderTypeInfo`2<T,U>*
class CORDL_TYPE __HeaderInfo__HeaderTypeInfo_2 : public ::System::Net::Http::Headers::HeaderInfo {
public:
  // Declarations
  /// @brief Field parser, offset 0x28, size 0x8
  __declspec(property(get = __get_parser, put = __set_parser))::System::Net::Http::Headers::TryParseDelegate_1<T>* parser;

  constexpr ::System::Net::Http::Headers::TryParseDelegate_1<T>*& __get_parser();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<T>*> const& __get_parser() const;

  constexpr void __set_parser(::System::Net::Http::Headers::TryParseDelegate_1<T>* value);

  static inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>* New_ctor(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser,
                                                                                             ::System::Net::Http::Headers::HttpHeaderKind headerKind);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser, ::System::Net::Http::Headers::HttpHeaderKind headerKind);

  /// @brief Method AddToCollection addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void AddToCollection(::System::Object* collection, ::System::Object* value);

  /// @brief Method CreateCollection addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers, ::System::Net::Http::Headers::HeaderInfo* headerInfo);

  /// @brief Method ToStringCollection addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::List_1<::StringW>* ToStringCollection(::System::Object* collection);

  /// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryParse(::StringW value, ByRef<::System::Object*> result);

  // Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__HeaderTypeInfo_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HeaderInfo__HeaderTypeInfo_2(__HeaderInfo__HeaderTypeInfo_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HeaderInfo__HeaderTypeInfo_2();

public:
  /// @brief Field parser, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Http::Headers::TryParseDelegate_1<T>* ___parser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2, "System.Net.Http.Headers", "HeaderInfo/HeaderTypeInfo`2");

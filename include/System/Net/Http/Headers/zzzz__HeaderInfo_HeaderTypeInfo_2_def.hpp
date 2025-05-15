#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HeaderInfo_HeaderTypeInfo_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HeaderInfo_HeaderTypeInfo_2)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class HeaderInfo;
}
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System::Net::Http::Headers {
template <typename T> class TryParseDelegate_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T, typename U> class HeaderInfo_HeaderTypeInfo_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2);
// Dependencies System.Net.Http.Headers.HeaderInfo
namespace GlobalNamespace {
// cpp template
template <typename T, typename U>
// Is value type: false
// CS Name: System.Net.Http.Headers.HeaderInfo/HeaderTypeInfo`2<T,U>
class CORDL_TYPE HeaderInfo_HeaderTypeInfo_2 : public ::System::Net::Http::Headers::HeaderInfo {
public:
  // Declarations
  /// @brief Field parser, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_parser, put = __cordl_internal_set_parser)) ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser;

  /// @brief Method AddToCollection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddToCollection(::System::Object* collection, ::System::Object* value);

  /// @brief Method CreateCollection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers, ::System::Net::Http::Headers::HeaderInfo* headerInfo);

  static inline ::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>* New_ctor(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser,
                                                                               ::System::Net::Http::Headers::HttpHeaderKind headerKind);

  /// @brief Method ToStringCollection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* ToStringCollection(::System::Object* collection);

  /// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryParse(::StringW value, ::ByRef<::System::Object*> result);

  constexpr ::System::Net::Http::Headers::TryParseDelegate_1<T>* const& __cordl_internal_get_parser() const;

  constexpr ::System::Net::Http::Headers::TryParseDelegate_1<T>*& __cordl_internal_get_parser();

  constexpr void __cordl_internal_set_parser(::System::Net::Http::Headers::TryParseDelegate_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser, ::System::Net::Http::Headers::HttpHeaderKind headerKind);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderInfo_HeaderTypeInfo_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfo_HeaderTypeInfo_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderInfo_HeaderTypeInfo_2(HeaderInfo_HeaderTypeInfo_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfo_HeaderTypeInfo_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderInfo_HeaderTypeInfo_2(HeaderInfo_HeaderTypeInfo_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16715 };

  /// @brief Field parser, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Http::Headers::TryParseDelegate_1<T>* ___parser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2, "System.Net.Http.Headers", "HeaderInfo/HeaderTypeInfo`2");

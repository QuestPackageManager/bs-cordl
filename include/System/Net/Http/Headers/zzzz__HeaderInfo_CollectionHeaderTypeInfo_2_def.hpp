#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HeaderInfo_CollectionHeaderTypeInfo_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HeaderInfo_HeaderTypeInfo_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeaderInfo_CollectionHeaderTypeInfo_2)
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
namespace System::Net::Http::Headers {
template <typename T> class TryParseListDelegate_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T, typename U> class HeaderInfo_CollectionHeaderTypeInfo_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2);
// Dependencies System.Net.Http.Headers.HeaderInfo::HeaderTypeInfo`2<T, U>
namespace GlobalNamespace {
// cpp template
template <typename T, typename U>
// Is value type: false
// CS Name: System.Net.Http.Headers.HeaderInfo/CollectionHeaderTypeInfo`2<T,U>
class CORDL_TYPE HeaderInfo_CollectionHeaderTypeInfo_2 : public ::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U> {
public:
  // Declarations
  __declspec(property(get = get_Separator)) ::StringW Separator;

  /// @brief Field minimalCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_minimalCount, put = __cordl_internal_set_minimalCount)) int32_t minimalCount;

  /// @brief Field parser, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_parser, put = __cordl_internal_set_parser)) ::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser;

  /// @brief Field separator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_separator, put = __cordl_internal_set_separator)) ::StringW separator;

  static inline ::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>* New_ctor(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser,
                                                                                         ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount, ::StringW separator);

  /// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryParse(::StringW value, ::ByRef<::System::Object*> result);

  constexpr int32_t const& __cordl_internal_get_minimalCount() const;

  constexpr int32_t& __cordl_internal_get_minimalCount();

  constexpr ::System::Net::Http::Headers::TryParseListDelegate_1<T>* const& __cordl_internal_get_parser() const;

  constexpr ::System::Net::Http::Headers::TryParseListDelegate_1<T>*& __cordl_internal_get_parser();

  constexpr ::StringW const& __cordl_internal_get_separator() const;

  constexpr ::StringW& __cordl_internal_get_separator();

  constexpr void __cordl_internal_set_minimalCount(int32_t value);

  constexpr void __cordl_internal_set_parser(::System::Net::Http::Headers::TryParseListDelegate_1<T>* value);

  constexpr void __cordl_internal_set_separator(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser, ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount,
                    ::StringW separator);

  /// @brief Method get_Separator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Separator();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderInfo_CollectionHeaderTypeInfo_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfo_CollectionHeaderTypeInfo_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderInfo_CollectionHeaderTypeInfo_2(HeaderInfo_CollectionHeaderTypeInfo_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderInfo_CollectionHeaderTypeInfo_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderInfo_CollectionHeaderTypeInfo_2(HeaderInfo_CollectionHeaderTypeInfo_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20075 };

  /// @brief Field minimalCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___minimalCount;

  /// @brief Field separator, offset: 0x38, size: 0x8, def value: None
  ::StringW ___separator;

  /// @brief Field parser, offset: 0x40, size: 0x8, def value: None
  ::System::Net::Http::Headers::TryParseListDelegate_1<T>* ___parser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2, "System.Net.Http.Headers", "HeaderInfo/CollectionHeaderTypeInfo`2");

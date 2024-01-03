#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HeaderInfo_HeaderTypeInfo_2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
namespace System::Net::Http::Headers {
template <typename T, typename U> class __HeaderInfo__CollectionHeaderTypeInfo_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2);
// Type: ::CollectionHeaderTypeInfo`2
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// cpp template
template <typename T, typename U>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14669), inst: 2613 }), TypeDefinitionIndex(TypeDefinitionIndex(14669))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14670))
// CS Name: ::HeaderInfo::CollectionHeaderTypeInfo`2<T,U>*
class CORDL_TYPE __HeaderInfo__CollectionHeaderTypeInfo_2 : public ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U> {
public:
  // Declarations
  /// @brief Field minimalCount, offset 0x30, size 0x4
  __declspec(property(get = __get_minimalCount, put = __set_minimalCount)) int32_t minimalCount;

  /// @brief Field separator, offset 0x38, size 0x8
  __declspec(property(get = __get_separator, put = __set_separator))::StringW separator;

  /// @brief Field parser, offset 0x40, size 0x8
  __declspec(property(get = __get_parser, put = __set_parser))::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser;

  __declspec(property(get = get_Separator))::StringW Separator;

  constexpr int32_t& __get_minimalCount();

  constexpr int32_t const& __get_minimalCount() const;

  constexpr void __set_minimalCount(int32_t value);

  constexpr ::StringW& __get_separator();

  constexpr ::StringW const& __get_separator() const;

  constexpr void __set_separator(::StringW value);

  constexpr ::System::Net::Http::Headers::TryParseListDelegate_1<T>*& __get_parser();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseListDelegate_1<T>*> const& __get_parser() const;

  constexpr void __set_parser(::System::Net::Http::Headers::TryParseListDelegate_1<T>* value);

  static inline ::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>*
  New_ctor(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser, ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount, ::StringW separator);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser, ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount,
                    ::StringW separator);

  /// @brief Method get_Separator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Separator();

  /// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryParse(::StringW value, ByRef<::System::Object*> result);

  // Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__CollectionHeaderTypeInfo_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HeaderInfo__CollectionHeaderTypeInfo_2(__HeaderInfo__CollectionHeaderTypeInfo_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HeaderInfo__CollectionHeaderTypeInfo_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HeaderInfo__CollectionHeaderTypeInfo_2(__HeaderInfo__CollectionHeaderTypeInfo_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HeaderInfo__CollectionHeaderTypeInfo_2();

public:
  /// @brief Field minimalCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___minimalCount;

  /// @brief Field separator, offset: 0x38, size: 0x8, def value: None
  ::StringW ___separator;

  /// @brief Field parser, offset: 0x40, size: 0x8, def value: None
  ::System::Net::Http::Headers::TryParseListDelegate_1<T>* ___parser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2, "System.Net.Http.Headers", "HeaderInfo/CollectionHeaderTypeInfo`2");

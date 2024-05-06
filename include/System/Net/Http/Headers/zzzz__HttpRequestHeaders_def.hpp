#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpRequestHeaders)
namespace System::Net::Http::Headers {
class AuthenticationHeaderValue;
}
namespace System::Net::Http::Headers {
template <typename T> class HttpHeaderValueCollection_1;
}
namespace System::Net::Http::Headers {
class TransferCodingHeaderValue;
}
namespace System::Net::Http::Headers {
class __HttpRequestHeaders____c;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System::Net::Http::Headers {
class __HttpRequestHeaders____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::HttpRequestHeaders);
MARK_REF_PTR_T(::System::Net::Http::Headers::__HttpRequestHeaders____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::HttpRequestHeaders::<>c*
class CORDL_TYPE __HttpRequestHeaders____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::Http::Headers::__HttpRequestHeaders____c* __9;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0))::System::Predicate_1<::StringW>* __9__19_0;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__29_0, put = setStaticF___9__29_0))::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* __9__29_0;

  /// @brief Field <>9__71_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__71_0, put = setStaticF___9__71_0))::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* __9__71_0;

  static inline ::System::Net::Http::Headers::__HttpRequestHeaders____c* New_ctor();

  /// @brief Method .ctor, addr 0x2d73930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_ConnectionClose>b__19_0, addr 0x2d73938, size 0x50, virtual false, abstract: false, final false
  inline bool _get_ConnectionClose_b__19_0(::StringW l);

  /// @brief Method <get_ExpectContinue>b__29_0, addr 0x2d73988, size 0x58, virtual false, abstract: false, final false
  inline bool _get_ExpectContinue_b__29_0(::System::Net::Http::Headers::TransferCodingHeaderValue* l);

  /// @brief Method <get_TransferEncodingChunked>b__71_0, addr 0x2d739e0, size 0x58, virtual false, abstract: false, final false
  inline bool _get_TransferEncodingChunked_b__71_0(::System::Net::Http::Headers::TransferCodingHeaderValue* l);

  static inline ::System::Net::Http::Headers::__HttpRequestHeaders____c* getStaticF___9();

  static inline ::System::Predicate_1<::StringW>* getStaticF___9__19_0();

  static inline ::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* getStaticF___9__29_0();

  static inline ::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* getStaticF___9__71_0();

  static inline void setStaticF___9(::System::Net::Http::Headers::__HttpRequestHeaders____c* value);

  static inline void setStaticF___9__19_0(::System::Predicate_1<::StringW>* value);

  static inline void setStaticF___9__29_0(::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* value);

  static inline void setStaticF___9__71_0(::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpRequestHeaders____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HttpRequestHeaders____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HttpRequestHeaders____c(__HttpRequestHeaders____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HttpRequestHeaders____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HttpRequestHeaders____c(__HttpRequestHeaders____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__HttpRequestHeaders____c, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: System.Net.Http.Headers::HttpRequestHeaders
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::System.Net.Http.Headers::HttpRequestHeaders*
class CORDL_TYPE HttpRequestHeaders : public ::System::Net::Http::Headers::HttpHeaders {
public:
  // Declarations
  using __c = ::System::Net::Http::Headers::__HttpRequestHeaders____c;

  __declspec(property(put = set_Authorization))::System::Net::Http::Headers::AuthenticationHeaderValue* Authorization;

  __declspec(property(get = get_Connection))::System::Net::Http::Headers::HttpHeaderValueCollection_1<::StringW>* Connection;

  __declspec(property(get = get_ConnectionClose))::System::Nullable_1<bool> ConnectionClose;

  __declspec(property(get = get_ExpectContinue))::System::Nullable_1<bool> ExpectContinue;

  __declspec(property(get = get_Host))::StringW Host;

  __declspec(property(get = get_TransferEncoding))::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* TransferEncoding;

  __declspec(property(get = get_TransferEncodingChunked))::System::Nullable_1<bool> TransferEncodingChunked;

  /// @brief Field expectContinue, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get_expectContinue, put = __cordl_internal_set_expectContinue))::System::Nullable_1<bool> expectContinue;

  /// @brief Method AddHeaders, addr 0x2d68770, size 0x298, virtual false, abstract: false, final false
  inline void AddHeaders(::System::Net::Http::Headers::HttpRequestHeaders* headers);

  static inline ::System::Net::Http::Headers::HttpRequestHeaders* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_expectContinue() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_expectContinue();

  constexpr void __cordl_internal_set_expectContinue(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x2d6ae40, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Connection, addr 0x2d647a4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<::StringW>* get_Connection();

  /// @brief Method get_ConnectionClose, addr 0x2d65094, size 0x184, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_ConnectionClose();

  /// @brief Method get_ExpectContinue, addr 0x2d65218, size 0x164, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_ExpectContinue();

  /// @brief Method get_Host, addr 0x2d653e4, size 0x68, virtual false, abstract: false, final false
  inline ::StringW get_Host();

  /// @brief Method get_TransferEncoding, addr 0x2d73864, size 0x68, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* get_TransferEncoding();

  /// @brief Method get_TransferEncodingChunked, addr 0x2d67528, size 0x164, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_TransferEncodingChunked();

  /// @brief Method set_Authorization, addr 0x2d737f0, size 0x74, virtual false, abstract: false, final false
  inline void set_Authorization(::System::Net::Http::Headers::AuthenticationHeaderValue* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestHeaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestHeaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequestHeaders(HttpRequestHeaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestHeaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequestHeaders(HttpRequestHeaders const&) = delete;

  /// @brief Field expectContinue, offset: 0x20, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___expectContinue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpRequestHeaders, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpRequestHeaders, ___expectContinue) == 0x20, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::HttpRequestHeaders);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpRequestHeaders*, "System.Net.Http.Headers", "HttpRequestHeaders");
NEED_NO_BOX(::System::Net::Http::Headers::__HttpRequestHeaders____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__HttpRequestHeaders____c*, "System.Net.Http.Headers", "HttpRequestHeaders/<>c");

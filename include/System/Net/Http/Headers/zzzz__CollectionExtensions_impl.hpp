#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\CollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__CollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::CollectionExtensions.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*, ::StringW, ::StringW)>(
    &::System::Net::Http::Headers::CollectionExtensions::SetValue)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x60e4ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionExtensions*>(),
                                                             { "SetValue",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
template <typename TSource>
inline bool System::Net::Http::Headers::CollectionExtensions::SequenceEqual(::System::Collections::Generic::List_1<TSource>* first, ::System::Collections::Generic::List_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionExtensions*>(),
                                              { "SequenceEqual",
                                                { ::i2c::class_of<TSource>() },
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<TSource>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, first, second);
}
inline void System::Net::Http::Headers::CollectionExtensions::SetValue(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters, ::StringW key,
                                                                       ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionExtensions*>(),
                                                           { "SetValue",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, key, value);
}
template <typename T> inline ::StringW System::Net::Http::Headers::CollectionExtensions::ToString(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionExtensions*>(),
                                                           { "ToString", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, list);
}
template <typename T> inline void System::Net::Http::Headers::CollectionExtensions::ToStringBuilder(::System::Collections::Generic::List_1<T>* list, ::System::Text::StringBuilder* sb) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionExtensions*>(),
                          { "ToStringBuilder", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, sb);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::CollectionExtensions::CollectionExtensions() {}

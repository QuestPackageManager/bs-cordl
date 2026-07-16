#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/MatchSparse.hpp"
#include "System/Text/RegularExpressions/zzzz__Match_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__MatchSparse_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__GroupCollection_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchSparse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::MatchSparse::*)(
    ::System::Text::RegularExpressions::Regex*, ::System::Collections::Hashtable*, int32_t, ::StringW, int32_t, int32_t, int32_t)>(&::System::Text::RegularExpressions::MatchSparse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6379868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::MatchSparse*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Text::RegularExpressions::Regex*>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchSparse.get_Groups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::GroupCollection* (::System::Text::RegularExpressions::MatchSparse::*)()>(
    &::System::Text::RegularExpressions::MatchSparse::get_Groups)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x637991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::MatchSparse*>(), { ::i2c::class_of<::System::Text::RegularExpressions::MatchSparse*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::MatchSparse::__cordl_internal_get__caps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr ::System::Collections::Hashtable* const& System::Text::RegularExpressions::MatchSparse::__cordl_internal_get__caps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr void System::Text::RegularExpressions::MatchSparse::__cordl_internal_set__caps(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caps = value;
}
inline void System::Text::RegularExpressions::MatchSparse::_ctor(::System::Text::RegularExpressions::Regex* regex, ::System::Collections::Hashtable* caps, int32_t capcount, ::StringW text,
                                                                 int32_t begpos, int32_t len, int32_t startpos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::MatchSparse*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Text::RegularExpressions::Regex*>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regex, caps, capcount, text, begpos, len, startpos);
}
inline ::System::Text::RegularExpressions::GroupCollection* System::Text::RegularExpressions::MatchSparse::get_Groups() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::RegularExpressions::MatchSparse*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::GroupCollection*>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::MatchSparse* System::Text::RegularExpressions::MatchSparse::New_ctor(::System::Text::RegularExpressions::Regex* regex,
                                                                                                                ::System::Collections::Hashtable* caps, int32_t capcount, ::StringW text,
                                                                                                                int32_t begpos, int32_t len, int32_t startpos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::MatchSparse*>(regex, caps, capcount, text, begpos, len, startpos));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::MatchSparse::MatchSparse() {}

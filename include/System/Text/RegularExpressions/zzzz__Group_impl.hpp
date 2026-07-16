#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/Group.hpp"
#include "System/Text/RegularExpressions/zzzz__Capture_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "System/Text/RegularExpressions/zzzz__CaptureCollection_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::Group._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::Group::*)(::StringW, ::ArrayW<int32_t>, int32_t, ::StringW)>(
    &::System::Text::RegularExpressions::Group::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6377830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::Group*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::Group.get_Success
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::Group::*)()>(&::System::Text::RegularExpressions::Group::get_Success)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x637788c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::Group*>(), { "get_Success", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::Group._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::Group::*)()>(&::System::Text::RegularExpressions::Group::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6377994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::Group*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& System::Text::RegularExpressions::Group::__cordl_internal_get__caps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr ::ArrayW<int32_t> const& System::Text::RegularExpressions::Group::__cordl_internal_get__caps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr void System::Text::RegularExpressions::Group::__cordl_internal_set__caps(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caps = value;
}
constexpr int32_t& System::Text::RegularExpressions::Group::__cordl_internal_get__capcount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr int32_t const& System::Text::RegularExpressions::Group::__cordl_internal_get__capcount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr void System::Text::RegularExpressions::Group::__cordl_internal_set__capcount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capcount = value;
}
constexpr ::System::Text::RegularExpressions::CaptureCollection*& System::Text::RegularExpressions::Group::__cordl_internal_get__capcoll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcoll;
}
constexpr ::System::Text::RegularExpressions::CaptureCollection* const& System::Text::RegularExpressions::Group::__cordl_internal_get__capcoll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcoll;
}
constexpr void System::Text::RegularExpressions::Group::__cordl_internal_set__capcoll(::System::Text::RegularExpressions::CaptureCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capcoll = value;
}
constexpr ::StringW& System::Text::RegularExpressions::Group::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Text::RegularExpressions::Group::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::Text::RegularExpressions::Group::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
inline void System::Text::RegularExpressions::Group::setStaticF_s_emptyGroup(::System::Text::RegularExpressions::Group* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Group*, "s_emptyGroup", ::System::Text::RegularExpressions::Group*>(
      std::forward<::System::Text::RegularExpressions::Group*>(value));
}
inline ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::Group::getStaticF_s_emptyGroup() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Group*, "s_emptyGroup", ::System::Text::RegularExpressions::Group*>();
}
inline void System::Text::RegularExpressions::Group::_ctor(::StringW text, ::ArrayW<int32_t> caps, int32_t capcount, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::Group*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, caps, capcount, name);
}
inline bool System::Text::RegularExpressions::Group::get_Success() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::Group*>(), { "get_Success", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::Group::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::Group*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::Group::New_ctor(::StringW text, ::ArrayW<int32_t> caps, int32_t capcount, ::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::Group*>(text, caps, capcount, name));
}
inline ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::Group::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::Group*>());
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::Group::Group() {}

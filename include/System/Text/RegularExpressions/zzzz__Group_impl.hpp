#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/Group.hpp"
#include "System/Text/RegularExpressions/zzzz__Capture_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "System/Text/RegularExpressions/zzzz__CaptureCollection_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::Group._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Text::RegularExpressions::Group::*)(::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, ::StringW)>(&::System::Text::RegularExpressions::Group::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x440bd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::Group.get_Success
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::Group::*)()>(&::System::Text::RegularExpressions::Group::get_Success)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x440bdd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(), "get_Success",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::Group._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::Group::*)()>(&::System::Text::RegularExpressions::Group::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x440beec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Text::RegularExpressions::Group::__cordl_internal_get__caps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Text::RegularExpressions::Group::__cordl_internal_get__caps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr void System::Text::RegularExpressions::Group::__cordl_internal_set__caps(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____caps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capcoll)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Text::RegularExpressions::Group::setStaticF_s_emptyGroup(::System::Text::RegularExpressions::Group* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Group*, "s_emptyGroup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get>(
      std::forward<::System::Text::RegularExpressions::Group*>(value));
}
inline ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::Group::getStaticF_s_emptyGroup() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Group*, "s_emptyGroup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get>();
}
inline void System::Text::RegularExpressions::Group::_ctor(::StringW text, ::ArrayW<int32_t, ::Array<int32_t>*> caps, int32_t capcount, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, caps, capcount, name);
}
inline bool System::Text::RegularExpressions::Group::get_Success() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(), "get_Success",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::Group::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::Group::New_ctor(::StringW text, ::ArrayW<int32_t, ::Array<int32_t>*> caps, int32_t capcount, ::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::Group*>(text, caps, capcount, name));
}
inline ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::Group::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::Group*>());
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::Group::Group() {}

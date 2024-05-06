#pragma once
#include "System/Xml/Schema/zzzz__ActiveAxis_impl.hpp"
#include "System/Xml/Schema/zzzz__LocatedActiveAxis_def.hpp"
#include "System/Xml/Schema/zzzz__Asttree_def.hpp"
#include "System/Xml/Schema/zzzz__KeySequence_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::LocatedActiveAxis.get_Column
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::LocatedActiveAxis::*)()>(&::System::Xml::Schema::LocatedActiveAxis::get_Column)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef68cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LocatedActiveAxis*>::get(), "get_Column",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LocatedActiveAxis._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::LocatedActiveAxis::*)(::System::Xml::Schema::Asttree*, ::System::Xml::Schema::KeySequence*, int32_t)>(&::System::Xml::Schema::LocatedActiveAxis::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ef68d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LocatedActiveAxis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Asttree*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::KeySequence*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LocatedActiveAxis.Reactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::LocatedActiveAxis::*)(::System::Xml::Schema::KeySequence*)>(
    &::System::Xml::Schema::LocatedActiveAxis::Reactivate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ef6904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LocatedActiveAxis*>::get(), "Reactivate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::KeySequence*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr int32_t const& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr void System::Xml::Schema::LocatedActiveAxis::__cordl_internal_set_column(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___column = value;
}
constexpr bool& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_isMatched() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMatched;
}
constexpr bool const& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_isMatched() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMatched;
}
constexpr void System::Xml::Schema::LocatedActiveAxis::__cordl_internal_set_isMatched(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMatched = value;
}
constexpr ::System::Xml::Schema::KeySequence*& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_Ks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::KeySequence*> const& System::Xml::Schema::LocatedActiveAxis::__cordl_internal_get_Ks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ks;
}
constexpr void System::Xml::Schema::LocatedActiveAxis::__cordl_internal_set_Ks(::System::Xml::Schema::KeySequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Ks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t System::Xml::Schema::LocatedActiveAxis::get_Column() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LocatedActiveAxis*>::get(), "get_Column",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::LocatedActiveAxis* System::Xml::Schema::LocatedActiveAxis::New_ctor(::System::Xml::Schema::Asttree* astfield, ::System::Xml::Schema::KeySequence* ks, int32_t column) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::LocatedActiveAxis*>(astfield, ks, column));
}
inline void System::Xml::Schema::LocatedActiveAxis::_ctor(::System::Xml::Schema::Asttree* astfield, ::System::Xml::Schema::KeySequence* ks, int32_t column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LocatedActiveAxis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Asttree*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::KeySequence*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, astfield, ks, column);
}
inline void System::Xml::Schema::LocatedActiveAxis::Reactivate(::System::Xml::Schema::KeySequence* ks) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LocatedActiveAxis*>::get(), "Reactivate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::KeySequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ks);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::LocatedActiveAxis::LocatedActiveAxis() {}

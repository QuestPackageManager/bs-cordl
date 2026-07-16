#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchySearchQueryDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchFilter_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchQueryDescriptor_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchFilter_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchQueryDescriptor_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchySearchQueryDescriptor___c::*)()>(&::Unity::Hierarchy::HierarchySearchQueryDescriptor___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b381b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c.__ctor_b__33_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchySearchQueryDescriptor___c::*)(::Unity::Hierarchy::HierarchySearchFilter)>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor___c::__ctor_b__33_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b381b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(),
                                                                                           { "<.ctor>b__33_0", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchySearchFilter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c.__ctor_b__33_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchySearchQueryDescriptor___c::*)(::Unity::Hierarchy::HierarchySearchFilter)>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor___c::__ctor_b__33_1)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b3827c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(),
                                                                                           { "<.ctor>b__33_1", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchySearchFilter>() } })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor___c::setStaticF___9(::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*, "<>9", ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(
      std::forward<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(value));
}
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* Unity::Hierarchy::HierarchySearchQueryDescriptor___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*, "<>9", ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>();
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor___c::setStaticF___9__33_0(::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>*, "<>9__33_0", ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(
      std::forward<::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>*>(value));
}
inline ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* Unity::Hierarchy::HierarchySearchQueryDescriptor___c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>*, "<>9__33_0", ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>();
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor___c::setStaticF___9__33_1(::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>*, "<>9__33_1", ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(
      std::forward<::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>*>(value));
}
inline ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* Unity::Hierarchy::HierarchySearchQueryDescriptor___c::getStaticF___9__33_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>*, "<>9__33_1", ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>();
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchySearchQueryDescriptor___c::__ctor_b__33_0(::Unity::Hierarchy::HierarchySearchFilter f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(),
                                                                                         { "<.ctor>b__33_0", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchySearchFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline bool Unity::Hierarchy::HierarchySearchQueryDescriptor___c::__ctor_b__33_1(::Unity::Hierarchy::HierarchySearchFilter f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>(),
                                                                                         { "<.ctor>b__33_1", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchySearchFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* Unity::Hierarchy::HierarchySearchQueryDescriptor___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c::HierarchySearchQueryDescriptor___c() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.get_SystemFilters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)()>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor::get_SystemFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b378c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "get_SystemFilters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.set_SystemFilters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>)>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor::set_SystemFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b378c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(),
                                                                                           { "set_SystemFilters", {}, { ::i2c::type_of<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.get_Filters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)()>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor::get_Filters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b378d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "get_Filters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.set_Filters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>)>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor::set_Filters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b378d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(),
                                                                                           { "set_Filters", {}, { ::i2c::type_of<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.get_TextValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)()>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor::get_TextValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b378e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "get_TextValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.set_TextValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)(::ArrayW<::StringW>)>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor::set_TextValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b378e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "set_TextValues", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.set_Strict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)(bool)>(&::Unity::Hierarchy::HierarchySearchQueryDescriptor::set_Strict)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b378f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "set_Strict", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.set_Invalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)(bool)>(&::Unity::Hierarchy::HierarchySearchQueryDescriptor::set_Invalid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b378f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "set_Invalid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>, ::ArrayW<::StringW>)>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x6b37900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)()>(&::Unity::Hierarchy::HierarchySearchQueryDescriptor::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b37ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.BuildFilterQuery
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)()>(&::Unity::Hierarchy::HierarchySearchQueryDescriptor::BuildFilterQuery)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b37de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "BuildFilterQuery", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.BuildSystemFilterQuery
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)()>(
    &::Unity::Hierarchy::HierarchySearchQueryDescriptor::BuildSystemFilterQuery)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b37e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "BuildSystemFilterQuery", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.BuildTextQuery
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)()>(&::Unity::Hierarchy::HierarchySearchQueryDescriptor::BuildTextQuery)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6b37eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "BuildTextQuery", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchQueryDescriptor.BuildQuery
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchySearchQueryDescriptor::*)()>(&::Unity::Hierarchy::HierarchySearchQueryDescriptor::BuildQuery)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6b37ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "BuildQuery", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__SystemFilters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemFilters_k__BackingField;
}
constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> const& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__SystemFilters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemFilters_k__BackingField;
}
constexpr void Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_set__SystemFilters_k__BackingField(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SystemFilters_k__BackingField = value;
}
constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__Filters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Filters_k__BackingField;
}
constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> const& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__Filters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Filters_k__BackingField;
}
constexpr void Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_set__Filters_k__BackingField(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Filters_k__BackingField = value;
}
constexpr ::ArrayW<::StringW>& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__TextValues_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TextValues_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__TextValues_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TextValues_k__BackingField;
}
constexpr void Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_set__TextValues_k__BackingField(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TextValues_k__BackingField = value;
}
constexpr bool& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__Strict_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Strict_k__BackingField;
}
constexpr bool const& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__Strict_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Strict_k__BackingField;
}
constexpr void Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_set__Strict_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Strict_k__BackingField = value;
}
constexpr bool& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__Invalid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Invalid_k__BackingField;
}
constexpr bool const& Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_get__Invalid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Invalid_k__BackingField;
}
constexpr void Unity::Hierarchy::HierarchySearchQueryDescriptor::__cordl_internal_set__Invalid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Invalid_k__BackingField = value;
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor::setStaticF_s_SystemFilters(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "s_SystemFilters", ::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Unity::Hierarchy::HierarchySearchQueryDescriptor::getStaticF_s_SystemFilters() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "s_SystemFilters", ::Unity::Hierarchy::HierarchySearchQueryDescriptor*>();
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor::setStaticF_s_Empty(::Unity::Hierarchy::HierarchySearchQueryDescriptor* value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::HierarchySearchQueryDescriptor*, "s_Empty", ::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(
      std::forward<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(value));
}
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* Unity::Hierarchy::HierarchySearchQueryDescriptor::getStaticF_s_Empty() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::HierarchySearchQueryDescriptor*, "s_Empty", ::Unity::Hierarchy::HierarchySearchQueryDescriptor*>();
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor::setStaticF_s_InvalidQuery(::Unity::Hierarchy::HierarchySearchQueryDescriptor* value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::HierarchySearchQueryDescriptor*, "s_InvalidQuery", ::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(
      std::forward<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(value));
}
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* Unity::Hierarchy::HierarchySearchQueryDescriptor::getStaticF_s_InvalidQuery() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::HierarchySearchQueryDescriptor*, "s_InvalidQuery", ::Unity::Hierarchy::HierarchySearchQueryDescriptor*>();
}
inline ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> Unity::Hierarchy::HierarchySearchQueryDescriptor::get_SystemFilters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "get_SystemFilters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor::set_SystemFilters(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(),
                                                                                         { "set_SystemFilters", {}, { ::i2c::type_of<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> Unity::Hierarchy::HierarchySearchQueryDescriptor::get_Filters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "get_Filters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor::set_Filters(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(),
                                                                                         { "set_Filters", {}, { ::i2c::type_of<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> Unity::Hierarchy::HierarchySearchQueryDescriptor::get_TextValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "get_TextValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor::set_TextValues(::ArrayW<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "set_TextValues", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor::set_Strict(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "set_Strict", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor::set_Invalid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "set_Invalid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchySearchQueryDescriptor::_ctor(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> filters, ::ArrayW<::StringW> textValues) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filters, textValues);
}
inline ::StringW Unity::Hierarchy::HierarchySearchQueryDescriptor::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Unity::Hierarchy::HierarchySearchQueryDescriptor::BuildFilterQuery() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "BuildFilterQuery", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Unity::Hierarchy::HierarchySearchQueryDescriptor::BuildSystemFilterQuery() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "BuildSystemFilterQuery", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Unity::Hierarchy::HierarchySearchQueryDescriptor::BuildTextQuery() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "BuildTextQuery", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Unity::Hierarchy::HierarchySearchQueryDescriptor::BuildQuery() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(), { "BuildQuery", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T> Unity::Hierarchy::HierarchySearchQueryDescriptor::Where(::System::Collections::Generic::IEnumerable_1<T>* src, ::System::Func_2<T, bool>* pred) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(),
                                       { "Where", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_2<T, bool>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, src, pred);
}
inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* Unity::Hierarchy::HierarchySearchQueryDescriptor::New_ctor(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> filters,
                                                                                                                      ::ArrayW<::StringW> textValues) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>(filters, textValues));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchySearchQueryDescriptor::HierarchySearchQueryDescriptor() {}

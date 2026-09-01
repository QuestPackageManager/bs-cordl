#pragma once
// IWYU pragma private; include "Unity\Hierarchy\HierarchySearchFilter.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchFilterOperator_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchFilter_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchFilterOperator_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchFilter.get_Invalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchySearchFilter> (*)()>(&::Unity::Hierarchy::HierarchySearchFilter::get_Invalid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b3a984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_Invalid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchFilter.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchySearchFilter::*)()>(&::Unity::Hierarchy::HierarchySearchFilter::get_IsValid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b3a9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchFilter.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchySearchFilter::*)()>(&::Unity::Hierarchy::HierarchySearchFilter::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3aa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchFilter.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchySearchFilter::*)()>(&::Unity::Hierarchy::HierarchySearchFilter::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3aa58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchFilter.get_NumValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Hierarchy::HierarchySearchFilter::*)()>(&::Unity::Hierarchy::HierarchySearchFilter::get_NumValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3aa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_NumValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchFilter.get_Op
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchySearchFilterOperator (::Unity::Hierarchy::HierarchySearchFilter::*)()>(
    &::Unity::Hierarchy::HierarchySearchFilter::get_Op)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3aa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_Op", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchFilter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Unity::Hierarchy::HierarchySearchFilterOperator)>(&::Unity::Hierarchy::HierarchySearchFilter::ToString)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6b3aa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "ToString", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchySearchFilterOperator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchFilter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchySearchFilter::*)()>(&::Unity::Hierarchy::HierarchySearchFilter::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b3abcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchySearchFilter.QuoteStringIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Unity::Hierarchy::HierarchySearchFilter::QuoteStringIfNeeded)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b3accc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "QuoteStringIfNeeded", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchySearchFilter::setStaticF_s_WhiteSpaces(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_WhiteSpaces", ::Unity::Hierarchy::HierarchySearchFilter>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Unity::Hierarchy::HierarchySearchFilter::getStaticF_s_WhiteSpaces() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_WhiteSpaces", ::Unity::Hierarchy::HierarchySearchFilter>();
}
inline void Unity::Hierarchy::HierarchySearchFilter::setStaticF_s_Invalid(::Unity::Hierarchy::HierarchySearchFilter value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::HierarchySearchFilter, "s_Invalid", ::Unity::Hierarchy::HierarchySearchFilter>(std::forward<::Unity::Hierarchy::HierarchySearchFilter>(value));
}
inline ::Unity::Hierarchy::HierarchySearchFilter Unity::Hierarchy::HierarchySearchFilter::getStaticF_s_Invalid() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::HierarchySearchFilter, "s_Invalid", ::Unity::Hierarchy::HierarchySearchFilter>();
}
inline ::by_ref<::Unity::Hierarchy::HierarchySearchFilter> Unity::Hierarchy::HierarchySearchFilter::get_Invalid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_Invalid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchySearchFilter>>(nullptr, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchySearchFilter::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW Unity::Hierarchy::HierarchySearchFilter::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Hierarchy::HierarchySearchFilter::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline float_t Unity::Hierarchy::HierarchySearchFilter::get_NumValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_NumValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchySearchFilterOperator Unity::Hierarchy::HierarchySearchFilter::get_Op() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "get_Op", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchySearchFilterOperator>(*this, ___internal_method);
}
inline ::StringW Unity::Hierarchy::HierarchySearchFilter::ToString(::Unity::Hierarchy::HierarchySearchFilterOperator op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "ToString", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchySearchFilterOperator>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, op);
}
inline ::StringW Unity::Hierarchy::HierarchySearchFilter::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Hierarchy::HierarchySearchFilter::QuoteStringIfNeeded(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchySearchFilter>(), { "QuoteStringIfNeeded", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_NumValue_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Op_k__BackingField", ty:
// "::Unity::Hierarchy::HierarchySearchFilterOperator", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchySearchFilter::HierarchySearchFilter(::StringW _Name_k__BackingField, ::StringW _Value_k__BackingField, float_t _NumValue_k__BackingField,
                                                                           ::Unity::Hierarchy::HierarchySearchFilterOperator _Op_k__BackingField) noexcept {
  this->_Name_k__BackingField = _Name_k__BackingField;
  this->_Value_k__BackingField = _Value_k__BackingField;
  this->_NumValue_k__BackingField = _NumValue_k__BackingField;
  this->_Op_k__BackingField = _Op_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchySearchFilter::HierarchySearchFilter() {}

#pragma once
// IWYU pragma private; include "System\Globalization\ISimpleCollator.hpp"
#include "System/Globalization/zzzz__ISimpleCollator_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Globalization/zzzz__SortKey_def.hpp"
//  Writing Method size for method: ::System::Globalization::ISimpleCollator.GetSortKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::System::Globalization::ISimpleCollator::*)(::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::ISimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ISimpleCollator*>(), { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ISimpleCollator.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ISimpleCollator::*)(
    ::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::ISimpleCollator::Compare)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ISimpleCollator*>(), { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ISimpleCollator.IsPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::ISimpleCollator::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::ISimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ISimpleCollator*>(), { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ISimpleCollator.IsSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::ISimpleCollator::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::ISimpleCollator::IsSuffix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ISimpleCollator*>(), { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ISimpleCollator.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ISimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::ISimpleCollator::IndexOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ISimpleCollator*>(), { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ISimpleCollator.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ISimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::ISimpleCollator::LastIndexOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ISimpleCollator*>(), { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 5 }));
    return ___internal_method;
  }
};
inline ::System::Globalization::SortKey* System::Globalization::ISimpleCollator::GetSortKey(::StringW source, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, source, options);
}
inline int32_t System::Globalization::ISimpleCollator::Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, idx1, len1, s2, idx2, len2, options);
}
inline bool System::Globalization::ISimpleCollator::IsPrefix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, src, target, opt);
}
inline bool System::Globalization::ISimpleCollator::IsSuffix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, src, target, opt);
}
inline int32_t System::Globalization::ISimpleCollator::IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length, opt);
}
inline int32_t System::Globalization::ISimpleCollator::LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ISimpleCollator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length, opt);
}

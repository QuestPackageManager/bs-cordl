#pragma once
// IWYU pragma private; include "Unity/Collections/Long1024.hpp"
#include "Unity/Collections/zzzz__Long512_impl.hpp"
#include "Unity/Collections/zzzz__Long1024_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
//  Writing Method size for method: ::Unity::Collections::Long1024.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::Long1024::*)()>(&::Unity::Collections::Long1024::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a6d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Long1024>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Long1024.set_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::Long1024::*)(int32_t)>(&::Unity::Collections::Long1024::set_Length)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a6d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Long1024>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Long1024.ElementAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int64_t> (::Unity::Collections::Long1024::*)(int32_t)>(&::Unity::Collections::Long1024::ElementAt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64a3610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Long1024>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t Unity::Collections::Long1024::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Long1024>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::Long1024::set_Length(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Long1024>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::by_ref<int64_t> Unity::Collections::Long1024::ElementAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Long1024>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int64_t>>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<int64_t>"
constexpr Unity::Collections::Long1024::operator ::Unity::Collections::IIndexable_1<int64_t>*() {
  return static_cast<::Unity::Collections::IIndexable_1<int64_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<int64_t>"
constexpr ::Unity::Collections::IIndexable_1<int64_t>* Unity::Collections::Long1024::i___Unity__Collections__IIndexable_1_int64_t_() {
  return static_cast<::Unity::Collections::IIndexable_1<int64_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::Long512", modifiers: "", def_value: Some("{}") }, CppParam { name: "f1", ty: "::Unity::Collections::Long512", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Collections::Long1024::Long1024(::Unity::Collections::Long512 f0, ::Unity::Collections::Long512 f1) noexcept {
  this->f0 = f0;
  this->f1 = f1;
}
// Ctor Parameters []
constexpr ::Unity::Collections::Long1024::Long1024() {}

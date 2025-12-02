#pragma once
// IWYU pragma private; include "Unity/Collections/Long1024.hpp"
#include "Unity/Collections/zzzz__Long512_impl.hpp"
#include "Unity/Collections/zzzz__Long1024_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
//  Writing Method size for method: ::Unity::Collections::Long1024.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::Long1024::*)()>(&::Unity::Collections::Long1024::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x628e354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::Long1024>::get(), "get_Length",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Long1024.set_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::Long1024::*)(int32_t)>(&::Unity::Collections::Long1024::set_Length)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x628e35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::Long1024>::get(), "set_Length", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Long1024.ElementAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int64_t> (::Unity::Collections::Long1024::*)(int32_t)>(&::Unity::Collections::Long1024::ElementAt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x628ac20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::Long1024>::get(), "ElementAt", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t Unity::Collections::Long1024::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::Long1024>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::Long1024::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::Long1024>::get(), "set_Length", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ByRef<int64_t> Unity::Collections::Long1024::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::Long1024>::get(), "ElementAt", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int64_t>, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<int64_t>"
constexpr Unity::Collections::Long1024::operator ::Unity::Collections::IIndexable_1<int64_t>*() {
  return static_cast<::Unity::Collections::IIndexable_1<int64_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<int64_t>"
constexpr ::Unity::Collections::IIndexable_1<int64_t>* Unity::Collections::Long1024::i___Unity__Collections__IIndexable_1_int64_t_() {
  return static_cast<::Unity::Collections::IIndexable_1<int64_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::Long512", modifiers: "", def_value: Some("{}") }, CppParam { name: "f1", ty: "::Unity::Collections::Long512", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Collections::Long1024::Long1024(::Unity::Collections::Long512 f0, ::Unity::Collections::Long512 f1) noexcept {
  this->f0 = f0;
  this->f1 = f1;
}
// Ctor Parameters []
constexpr ::Unity::Collections::Long1024::Long1024() {}

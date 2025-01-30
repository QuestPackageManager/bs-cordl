#pragma once
// IWYU pragma private; include "Tayx/Graphy/Utils/NumString/G_IntString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Tayx/Graphy/Utils/NumString/zzzz__G_IntString_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.get_MinValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Tayx::Graphy::Utils::NumString::G_IntString::get_MinValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x44d3d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(),
                                                                               "get_MinValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.get_MaxValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Tayx::Graphy::Utils::NumString::G_IntString::get_MaxValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x44d3de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(),
                                                                               "get_MaxValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::Tayx::Graphy::Utils::NumString::G_IntString::Init)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x44d3e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Tayx::Graphy::Utils::NumString::G_IntString::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x44cfb7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.ToStringNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::Tayx::Graphy::Utils::NumString::G_IntString::ToStringNonAlloc)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x44d407c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(), "ToStringNonAlloc",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::Utils::NumString::G_IntString::setStaticF_m_negativeBuffer(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "m_negativeBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Tayx::Graphy::Utils::NumString::G_IntString::getStaticF_m_negativeBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "m_negativeBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get>();
}
inline void Tayx::Graphy::Utils::NumString::G_IntString::setStaticF_m_positiveBuffer(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "m_positiveBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Tayx::Graphy::Utils::NumString::G_IntString::getStaticF_m_positiveBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "m_positiveBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get>();
}
inline int32_t Tayx::Graphy::Utils::NumString::G_IntString::get_MinValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(),
                                                                             "get_MinValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t Tayx::Graphy::Utils::NumString::G_IntString::get_MaxValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(),
                                                                             "get_MaxValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Tayx::Graphy::Utils::NumString::G_IntString::Init(int32_t minNegativeValue, int32_t maxPositiveValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, minNegativeValue, maxPositiveValue);
}
inline void Tayx::Graphy::Utils::NumString::G_IntString::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW Tayx::Graphy::Utils::NumString::G_IntString::ToStringNonAlloc(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::NumString::G_IntString*>::get(), "ToStringNonAlloc",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Utils::NumString::G_IntString::G_IntString() {}

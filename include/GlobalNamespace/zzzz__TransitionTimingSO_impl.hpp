#pragma once
// IWYU pragma private; include "GlobalNamespace/TransitionTimingSO.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TransitionTimingSO_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO.get_easeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EaseType (::GlobalNamespace::TransitionTimingSO::*)()>(
    &::GlobalNamespace::TransitionTimingSO::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27552d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO*>::get(), "get_easeType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO.get_easeDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TransitionTimingSO::*)()>(&::GlobalNamespace::TransitionTimingSO::get_easeDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27552dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO*>::get(),
                                                                               "get_easeDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TransitionTimingSO::*)()>(&::GlobalNamespace::TransitionTimingSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27552e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType;
}
constexpr void GlobalNamespace::TransitionTimingSO::__cordl_internal_set__easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easeType = value;
}
constexpr float_t& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__easeDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeDuration;
}
constexpr float_t const& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__easeDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeDuration;
}
constexpr void GlobalNamespace::TransitionTimingSO::__cordl_internal_set__easeDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easeDuration = value;
}
inline ::GlobalNamespace::EaseType GlobalNamespace::TransitionTimingSO::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO*>::get(), "get_easeType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::TransitionTimingSO::get_easeDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO*>::get(), "get_easeDuration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TransitionTimingSO* GlobalNamespace::TransitionTimingSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TransitionTimingSO*>());
}
inline void GlobalNamespace::TransitionTimingSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransitionTimingSO::TransitionTimingSO() {}

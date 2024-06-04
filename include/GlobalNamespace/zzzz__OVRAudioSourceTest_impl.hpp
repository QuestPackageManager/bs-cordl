#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAudioSourceTest.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAudioSourceTest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRAudioSourceTest.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAudioSourceTest::*)()>(&::GlobalNamespace::OVRAudioSourceTest::Start)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2b99404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAudioSourceTest*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAudioSourceTest.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAudioSourceTest::*)()>(&::GlobalNamespace::OVRAudioSourceTest::Update)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2b99504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAudioSourceTest*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAudioSourceTest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAudioSourceTest::*)()>(&::GlobalNamespace::OVRAudioSourceTest::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b996c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAudioSourceTest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OVRAudioSourceTest::__cordl_internal_get_period() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period;
}
constexpr float_t const& GlobalNamespace::OVRAudioSourceTest::__cordl_internal_get_period() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period;
}
constexpr void GlobalNamespace::OVRAudioSourceTest::__cordl_internal_set_period(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___period = value;
}
constexpr float_t& GlobalNamespace::OVRAudioSourceTest::__cordl_internal_get_nextActionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextActionTime;
}
constexpr float_t const& GlobalNamespace::OVRAudioSourceTest::__cordl_internal_get_nextActionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextActionTime;
}
constexpr void GlobalNamespace::OVRAudioSourceTest::__cordl_internal_set_nextActionTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextActionTime = value;
}
inline void GlobalNamespace::OVRAudioSourceTest::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAudioSourceTest*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAudioSourceTest::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAudioSourceTest*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRAudioSourceTest* GlobalNamespace::OVRAudioSourceTest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRAudioSourceTest*>());
}
inline void GlobalNamespace::OVRAudioSourceTest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAudioSourceTest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAudioSourceTest::OVRAudioSourceTest() {}

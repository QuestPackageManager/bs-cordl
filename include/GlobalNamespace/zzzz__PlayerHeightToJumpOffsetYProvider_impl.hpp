#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightToJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(
    &::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2261628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(),
                                                                               "get_jumpOffsetY", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(
    &::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Initialize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2261630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(),
                                                                               "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(
    &::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2261794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(),
                                                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.HandlePlayerHeightDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)(float_t)>(
    &::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::HandlePlayerHeightDidChange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x226175c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(), "HandlePlayerHeightDidChange",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider.JumpOffsetYForPlayerHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::JumpOffsetYForPlayerHeight)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2261728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(), "JumpOffsetYForPlayerHeight",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::*)()>(
    &::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2261864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr GlobalNamespace::PlayerHeightToJumpOffsetYProvider::operator ::GlobalNamespace::IJumpOffsetYProvider*() noexcept {
  return static_cast<::GlobalNamespace::IJumpOffsetYProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::PlayerHeightToJumpOffsetYProvider::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::PlayerHeightToJumpOffsetYProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::PlayerHeightDetector*& GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__get__playerHeightDetector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetector;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightDetector*> const& GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__get__playerHeightDetector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetector;
}
constexpr void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__set__playerHeightDetector(::GlobalNamespace::PlayerHeightDetector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeightDetector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__get__jumpOffsetY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetY;
}
constexpr float_t const& GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__get__jumpOffsetY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetY;
}
constexpr void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::__set__jumpOffsetY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpOffsetY = value;
}
inline float_t GlobalNamespace::PlayerHeightToJumpOffsetYProvider::get_jumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(),
                                                                             "get_jumpOffsetY", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(),
                                                                             "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::HandlePlayerHeightDidChange(float_t playerHeight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(), "HandlePlayerHeightDidChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerHeight);
}
inline float_t GlobalNamespace::PlayerHeightToJumpOffsetYProvider::JumpOffsetYForPlayerHeight(float_t playerHeight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(), "JumpOffsetYForPlayerHeight",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, playerHeight);
}
inline ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider* GlobalNamespace::PlayerHeightToJumpOffsetYProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>());
}
inline void GlobalNamespace::PlayerHeightToJumpOffsetYProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightToJumpOffsetYProvider*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeightToJumpOffsetYProvider::PlayerHeightToJumpOffsetYProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

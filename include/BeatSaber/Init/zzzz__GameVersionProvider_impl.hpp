#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersionProvider.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/zzzz__GameVersionProvider_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::BeatSaber::Init::GameVersionProvider::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3197cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(),
                                                                               "NoDomainReloadInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.GetContentVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion_Content (*)()>(&::BeatSaber::Init::GameVersionProvider::GetContentVersion)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3197d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(),
                                                                               "GetContentVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.GetBuildId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::BeatSaber::Init::GameVersionProvider::GetBuildId)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3197e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(), "GetBuildId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.GetBuildTimeGameVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion* (*)()>(&::BeatSaber::Init::GameVersionProvider::GetBuildTimeGameVersion)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3197ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(),
                                                                               "GetBuildTimeGameVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider.GetVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion* (::BeatSaber::Init::GameVersionProvider::*)()>(
    &::BeatSaber::Init::GameVersionProvider::GetVersion)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x3198040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(), "GetVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersionProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::GameVersionProvider::*)()>(&::BeatSaber::Init::GameVersionProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3198818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>*& BeatSaber::Init::GameVersionProvider::__cordl_internal_get__versionTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionTask;
}
constexpr ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* const& BeatSaber::Init::GameVersionProvider::__cordl_internal_get__versionTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionTask;
}
constexpr void BeatSaber::Init::GameVersionProvider::__cordl_internal_set__versionTask(::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____versionTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& BeatSaber::Init::GameVersionProvider::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& BeatSaber::Init::GameVersionProvider::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void BeatSaber::Init::GameVersionProvider::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Init::GameVersionProvider::setStaticF__contentVersion(::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<::BeatSaber::Init::GameVersion_Content>, "_contentVersion",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get>(
      std::forward<::System::Nullable_1<::BeatSaber::Init::GameVersion_Content>>(value));
}
inline ::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> BeatSaber::Init::GameVersionProvider::getStaticF__contentVersion() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<::BeatSaber::Init::GameVersion_Content>, "_contentVersion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get>();
}
inline void BeatSaber::Init::GameVersionProvider::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(),
                                                                             "NoDomainReloadInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion_Content BeatSaber::Init::GameVersionProvider::GetContentVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(),
                                                                             "GetContentVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion_Content, false>(nullptr, ___internal_method);
}
inline uint64_t BeatSaber::Init::GameVersionProvider::GetBuildId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(), "GetBuildId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersionProvider::GetBuildTimeGameVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(),
                                                                             "GetBuildTimeGameVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion*, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersionProvider::GetVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(), "GetVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion*, false>(this, ___internal_method);
}
inline void BeatSaber::Init::GameVersionProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersionProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Init::GameVersionProvider* BeatSaber::Init::GameVersionProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Init::GameVersionProvider*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersionProvider::GameVersionProvider() {}

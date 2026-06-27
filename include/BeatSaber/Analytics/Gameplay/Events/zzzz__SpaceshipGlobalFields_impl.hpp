#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipGlobalFields.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipGlobalFields_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields.SetGlobalAppID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::SetGlobalAppID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x31d0f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get(),
                        "SetGlobalAppID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields.get_buildVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_buildVersion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x31d0f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get(),
                        "get_buildVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields.get_appId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_appId)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x31d0fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get(),
                        "get_appId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields.get_userType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_userType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x31d1030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get(),
                        "get_userType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::setStaticF__appId(uint64_t  value)  {
::cordl_internals::setStaticField<uint64_t, "_appId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get>(std::forward<uint64_t>(value));
}
inline uint64_t BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::getStaticF__appId()  {
return ::cordl_internals::getStaticField<uint64_t, "_appId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::SetGlobalAppID(uint64_t  appId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get(),
                        "SetGlobalAppID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, appId);
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_buildVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get(),
                        "get_buildVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline uint64_t BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_appId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get(),
                        "get_appId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::get_userType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*>::get(),
                        "get_userType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields::SpaceshipGlobalFields()   {
}

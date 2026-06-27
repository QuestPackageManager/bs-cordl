#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/NoopHMDSessionEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__NoopHMDSessionEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IHMDSessionEventSender_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender.SendHMDSessionStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::*)()>(&::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::SendHMDSessionStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31d0d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>::get(),
                        "SendHMDSessionStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender.SendHMDSessionEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::*)()>(&::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::SendHMDSessionEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31d0d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>::get(),
                        "SendHMDSessionEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::*)()>(&::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31ceef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::SendHMDSessionStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>::get(),
                        "SendHMDSessionStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::SendHMDSessionEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>::get(),
                        "SendHMDSessionEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender* BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*>());
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
constexpr  BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::operator ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*() noexcept {
return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::i___BeatSaber__Analytics__Gameplay__EventSenders__IHMDSessionEventSender() noexcept {
return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender::NoopHMDSessionEventSender()   {
}

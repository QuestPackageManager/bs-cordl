#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipCustomEvent.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipCustomEvent_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x31ce77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_set_payload(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___payload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_event_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___event_type;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_event_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___event_type;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_set_event_type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___event_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent* BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::SpaceshipCustomEvent()   {
}

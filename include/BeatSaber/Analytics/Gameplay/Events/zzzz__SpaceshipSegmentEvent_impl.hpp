#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipSegmentEvent.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentEvent_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentEventSettingsField_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x31cde18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent.ApplyBasicFields
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x31d1588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_build_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___build_version;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_build_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___build_version;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_set_build_version(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___build_version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_seg_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seg_name;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_seg_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seg_name;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_set_seg_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seg_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_seg_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seg_type;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_seg_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seg_type;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_set_seg_type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seg_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_duration_s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration_s;
}
constexpr uint32_t const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_duration_s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration_s;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_set_duration_s(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration_s = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_event_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___event_type;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_event_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___event_type;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_set_event_type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___event_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::__cordl_internal_set_settings(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager*  manager)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent*>::get(),
                            13
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent::SpaceshipSegmentEvent()   {
}

#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipMetricEvent.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipMetricEvent_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x31ce5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent.ApplyBasicFields
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x31d1074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_build_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___build_version;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_build_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___build_version;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_set_build_version(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___build_version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_metric_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metric_name;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_metric_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metric_name;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_set_metric_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___metric_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_metric_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metric_type;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_metric_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metric_type;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_set_metric_type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___metric_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr float_t const& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_set_value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager*  manager)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>::get(),
                            13
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::SpaceshipMetricEvent()   {
}

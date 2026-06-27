#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/SegmentState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__SegmentState_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentEventSettingsField_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentType_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::SegmentState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::SegmentState::*)(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*)>(&::BeatSaber::Analytics::Gameplay::SegmentState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31ced14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::SegmentState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* const& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_set_Type(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* const& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_set_Settings(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_SeqNum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SeqNum;
}
constexpr int32_t const& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_SeqNum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SeqNum;
}
constexpr void BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_set_SeqNum(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SeqNum = value;
}
inline void BeatSaber::Analytics::Gameplay::SegmentState::_ctor(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::SegmentState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::BeatSaber::Analytics::Gameplay::SegmentState* BeatSaber::Analytics::Gameplay::SegmentState::New_ctor(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  type)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::SegmentState*>(type));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::SegmentState::SegmentState()   {
}

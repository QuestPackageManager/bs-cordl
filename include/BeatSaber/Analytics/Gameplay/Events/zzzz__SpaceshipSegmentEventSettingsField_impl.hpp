#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipSegmentEventSettingsField.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentEventSettingsField_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::*)()>(&::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31cfc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_difficulty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___difficulty;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_difficulty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___difficulty;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_set_difficulty(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___difficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_game_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___game_mode;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_game_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___game_mode;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_set_game_mode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___game_mode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_match_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match_id;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_match_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___match_id;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_set_match_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___match_id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_cosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_cosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_set_cosmetics(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::SpaceshipSegmentEventSettingsField()   {
}

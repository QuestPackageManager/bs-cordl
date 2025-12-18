#pragma once
// IWYU pragma private; include "MidiParser/MidiTrack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MidiParser/zzzz__MidiTrack_def.hpp"
#include "MidiParser/zzzz__MidiEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::MidiParser::MidiTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MidiParser::MidiTrack::*)()>(&::MidiParser::MidiTrack::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58d3634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiTrack*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& MidiParser::MidiTrack::__cordl_internal_get_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr int32_t const& MidiParser::MidiTrack::__cordl_internal_get_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr void MidiParser::MidiTrack::__cordl_internal_set_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Index = value;
}
constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*& MidiParser::MidiTrack::__cordl_internal_get_MidiEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MidiEvents;
}
constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* const& MidiParser::MidiTrack::__cordl_internal_get_MidiEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MidiEvents;
}
constexpr void MidiParser::MidiTrack::__cordl_internal_set_MidiEvents(::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MidiEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void MidiParser::MidiTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiTrack*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::MidiParser::MidiTrack* MidiParser::MidiTrack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MidiParser::MidiTrack*>());
}
// Ctor Parameters []
constexpr ::MidiParser::MidiTrack::MidiTrack() {}

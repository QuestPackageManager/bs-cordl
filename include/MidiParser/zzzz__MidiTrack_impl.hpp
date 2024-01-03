#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "MidiParser/zzzz__MidiTrack_def.hpp"
#include "MidiParser/zzzz__MidiEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::MidiParser::MidiTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MidiParser::MidiTrack::*)()>(&::MidiParser::MidiTrack::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23e6444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiTrack*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& MidiParser::MidiTrack::__get_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr int32_t const& MidiParser::MidiTrack::__get_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr void MidiParser::MidiTrack::__set_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Index = value;
}
constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*& MidiParser::MidiTrack::__get_MidiEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MidiEvents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*> const& MidiParser::MidiTrack::__get_MidiEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MidiEvents;
}
constexpr void MidiParser::MidiTrack::__set_MidiEvents(::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MidiEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::MidiParser::MidiTrack* MidiParser::MidiTrack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::MidiParser::MidiTrack*>());
}
inline void MidiParser::MidiTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiTrack*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::MidiParser::MidiTrack::MidiTrack() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

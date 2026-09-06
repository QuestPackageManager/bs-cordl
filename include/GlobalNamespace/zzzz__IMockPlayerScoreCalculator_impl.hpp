#pragma once
// IWYU pragma private; include "GlobalNamespace/IMockPlayerScoreCalculator.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMockPlayerScoreCalculator.GetScoreForNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IMockPlayerScoreCalculator::*)(::GlobalNamespace::MockNoteData*)>(
    &::GlobalNamespace::IMockPlayerScoreCalculator::GetScoreForNote)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMockPlayerScoreCalculator*>(), { ::i2c::class_of<::GlobalNamespace::IMockPlayerScoreCalculator*>(), 0 }));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::IMockPlayerScoreCalculator::GetScoreForNote(::GlobalNamespace::MockNoteData* noteData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMockPlayerScoreCalculator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, noteData);
}

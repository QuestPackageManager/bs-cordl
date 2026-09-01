#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\Vector3MagnitudeComparer.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Vector3MagnitudeComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::Compare)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6500d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::Compare(::UnityEngine::Vector3 x, ::UnityEngine::Vector3 y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>"
constexpr UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>*
UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__Vector3_() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::Vector3MagnitudeComparer() {}

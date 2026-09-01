#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\Vector2MagnitudeComparer.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Vector2MagnitudeComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer::Compare)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6500cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer::Compare(::UnityEngine::Vector2 x, ::UnityEngine::Vector2 y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>"
constexpr UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*
UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__Vector2_() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer::Vector2MagnitudeComparer() {}

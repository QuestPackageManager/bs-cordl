#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/Vector3MagnitudeComparer.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Vector3MagnitudeComparer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::Compare)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4567a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::Compare(::UnityEngine::Vector3 x, ::UnityEngine::Vector3 y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>"
constexpr UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>*
UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__Vector3_() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector3>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::Vector3MagnitudeComparer() {}

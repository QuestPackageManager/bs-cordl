#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\ExceptionHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ExceptionHelpers_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ExceptionHelpers.IsExceptionIndicatingBugInCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::UnityEngine::InputSystem::Utilities::ExceptionHelpers::IsExceptionIndicatingBugInCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x65014cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ExceptionHelpers*>(),
                                                                                           { "IsExceptionIndicatingBugInCode", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::Utilities::ExceptionHelpers::IsExceptionIndicatingBugInCode(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ExceptionHelpers*>(),
                                                                                         { "IsExceptionIndicatingBugInCode", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::ExceptionHelpers::ExceptionHelpers() {}

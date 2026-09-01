#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidSupport_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceExecuteCommandDelegate_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidSupport.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Android::AndroidSupport::Initialize)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x65abcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidSupport*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidSupport.OnFindLayoutForDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::StringW (*)(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*)>(
        &::UnityEngine::InputSystem::Android::AndroidSupport::OnFindLayoutForDevice)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x65ac624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidSupport*>(),
                                                             { "OnFindLayoutForDevice",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidSupport._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidSupport::*)()>(&::UnityEngine::InputSystem::Android::AndroidSupport::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65ac940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidSupport*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidSupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidSupport*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Android::AndroidSupport::OnFindLayoutForDevice(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                                                          ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidSupport*>(),
                                                           { "OnFindLayoutForDevice",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, description, matchedLayout, executeCommandDelegate);
}
inline void UnityEngine::InputSystem::Android::AndroidSupport::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidSupport*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidSupport* UnityEngine::InputSystem::Android::AndroidSupport::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidSupport*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidSupport::AndroidSupport() {}

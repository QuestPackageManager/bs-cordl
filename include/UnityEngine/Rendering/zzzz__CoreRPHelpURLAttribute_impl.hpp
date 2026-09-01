#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CoreRPHelpURLAttribute.hpp"
#include "UnityEngine/zzzz__HelpURLAttribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CoreRPHelpURLAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CoreRPHelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CoreRPHelpURLAttribute::*)(::StringW, ::StringW)>(&::UnityEngine::Rendering::CoreRPHelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6787928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreRPHelpURLAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreRPHelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CoreRPHelpURLAttribute::*)(::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::Rendering::CoreRPHelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6787b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreRPHelpURLAttribute*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CoreRPHelpURLAttribute::_ctor(::StringW pageName, ::StringW packageName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreRPHelpURLAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageName, packageName);
}
inline void UnityEngine::Rendering::CoreRPHelpURLAttribute::_ctor(::StringW pageName, ::StringW pageHash, ::StringW packageName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreRPHelpURLAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageName, pageHash, packageName);
}
inline ::UnityEngine::Rendering::CoreRPHelpURLAttribute* UnityEngine::Rendering::CoreRPHelpURLAttribute::New_ctor(::StringW pageName, ::StringW packageName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CoreRPHelpURLAttribute*>(pageName, packageName));
}
inline ::UnityEngine::Rendering::CoreRPHelpURLAttribute* UnityEngine::Rendering::CoreRPHelpURLAttribute::New_ctor(::StringW pageName, ::StringW pageHash, ::StringW packageName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CoreRPHelpURLAttribute*>(pageName, pageHash, packageName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreRPHelpURLAttribute::CoreRPHelpURLAttribute() {}

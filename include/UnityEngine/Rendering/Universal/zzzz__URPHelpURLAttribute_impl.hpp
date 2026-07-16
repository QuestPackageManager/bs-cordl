#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPHelpURLAttribute.hpp"
#include "UnityEngine/Rendering/zzzz__CoreRPHelpURLAttribute_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPHelpURLAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPHelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::URPHelpURLAttribute::*)(::StringW, ::StringW)>(
    &::UnityEngine::Rendering::Universal::URPHelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x686f2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPHelpURLAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::URPHelpURLAttribute::_ctor(::StringW pageName, ::StringW pageHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPHelpURLAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageName, pageHash);
}
inline ::UnityEngine::Rendering::Universal::URPHelpURLAttribute* UnityEngine::Rendering::Universal::URPHelpURLAttribute::New_ctor(::StringW pageName, ::StringW pageHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::URPHelpURLAttribute*>(pageName, pageHash));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPHelpURLAttribute::URPHelpURLAttribute() {}

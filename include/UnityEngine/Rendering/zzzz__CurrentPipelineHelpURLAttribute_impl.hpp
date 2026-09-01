#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CurrentPipelineHelpURLAttribute.hpp"
#include "UnityEngine/zzzz__HelpURLAttribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CurrentPipelineHelpURLAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute.get_pageName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::*)()>(
    &::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::get_pageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6787be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(), { "get_pageName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute.get_pageHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::*)()>(
    &::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::get_pageHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6787bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(), { "get_pageHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::*)(::StringW, ::StringW)>(
    &::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6787bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute.get_URL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::*)()>(
    &::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::get_URL)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6787c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::__cordl_internal_get__pageName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::__cordl_internal_get__pageName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageName_k__BackingField;
}
constexpr void UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::__cordl_internal_set__pageName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageName_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::__cordl_internal_get__pageHash_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageHash_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::__cordl_internal_get__pageHash_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageHash_k__BackingField;
}
constexpr void UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::__cordl_internal_set__pageHash_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageHash_k__BackingField = value;
}
inline ::StringW UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::get_pageName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(), { "get_pageName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::get_pageHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(), { "get_pageHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::_ctor(::StringW pageName, ::StringW pageHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageName, pageHash);
}
inline ::StringW UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::get_URL() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute* UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::New_ctor(::StringW pageName, ::StringW pageHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute*>(pageName, pageHash));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CurrentPipelineHelpURLAttribute::CurrentPipelineHelpURLAttribute() {}

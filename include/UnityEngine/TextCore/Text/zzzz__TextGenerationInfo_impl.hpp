#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerationInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationInfo.get_CurrentGenerationIteration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::TextCore::Text::TextGenerationInfo::get_CurrentGenerationIteration)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x705f9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "get_CurrentGenerationIteration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationInfo.set_CurrentGenerationIteration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::TextCore::Text::TextGenerationInfo::set_CurrentGenerationIteration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x705fa04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "set_CurrentGenerationIteration", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationInfo.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(bool)>(&::UnityEngine::TextCore::Text::TextGenerationInfo::Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x705fa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "Create", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationInfo.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TextCore::Text::TextGenerationInfo::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x705fa90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationInfo.OnRepaintEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::TextGenerationInfo::OnRepaintEnd)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x705facc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "OnRepaintEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationInfo.DestroyAllTempAllocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::TextGenerationInfo::DestroyAllTempAllocations)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x705fb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "DestroyAllTempAllocations", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextGenerationInfo::setStaticF__CurrentGenerationIteration_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<CurrentGenerationIteration>k__BackingField", ::UnityEngine::TextCore::Text::TextGenerationInfo*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TextCore::Text::TextGenerationInfo::getStaticF__CurrentGenerationIteration_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<CurrentGenerationIteration>k__BackingField", ::UnityEngine::TextCore::Text::TextGenerationInfo*>();
}
inline int32_t UnityEngine::TextCore::Text::TextGenerationInfo::get_CurrentGenerationIteration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "get_CurrentGenerationIteration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerationInfo::set_CurrentGenerationIteration(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "set_CurrentGenerationIteration", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::TextCore::Text::TextGenerationInfo::Create(bool isPermanent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "Create", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, isPermanent);
}
inline void UnityEngine::TextCore::Text::TextGenerationInfo::Destroy(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::TextCore::Text::TextGenerationInfo::OnRepaintEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "OnRepaintEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerationInfo::DestroyAllTempAllocations() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationInfo*>(), { "DestroyAllTempAllocations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextGenerationInfo::TextGenerationInfo() {}

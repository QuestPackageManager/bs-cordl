#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRLoaderHelper.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoader_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Management::XRLoaderHelper.Deinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Management::XRLoaderHelper::*)()>(&::UnityEngine::XR::Management::XRLoaderHelper::Deinitialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69e50a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(), { ::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRLoaderHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRLoaderHelper::*)()>(&::UnityEngine::XR::Management::XRLoaderHelper::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69e50fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>*& UnityEngine::XR::Management::XRLoaderHelper::__cordl_internal_get_m_SubsystemInstanceMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubsystemInstanceMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* const&
UnityEngine::XR::Management::XRLoaderHelper::__cordl_internal_get_m_SubsystemInstanceMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubsystemInstanceMap;
}
constexpr void
UnityEngine::XR::Management::XRLoaderHelper::__cordl_internal_set_m_SubsystemInstanceMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubsystemInstanceMap = value;
}
template <typename T> inline T UnityEngine::XR::Management::XRLoaderHelper::GetLoadedSubsystem() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(), 8 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Management::XRLoaderHelper::StartSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(), { "StartSubsystem", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Management::XRLoaderHelper::StopSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(), { "StopSubsystem", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Management::XRLoaderHelper::DestroySubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(), { "DestroySubsystem", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::Management::XRLoaderHelper::CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(),
                                                           { "CreateSubsystem",
                                                             { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TSubsystem>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<TDescriptor>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TSubsystem>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptors, id);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::Management::XRLoaderHelper::CreateIntegratedSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(),
                                                           { "CreateIntegratedSubsystem",
                                                             { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TSubsystem>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<TDescriptor>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TSubsystem>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptors, id);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::Management::XRLoaderHelper::CreateStandaloneSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(),
                                                           { "CreateStandaloneSubsystem",
                                                             { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TSubsystem>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<TDescriptor>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TSubsystem>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptors, id);
}
inline bool UnityEngine::XR::Management::XRLoaderHelper::Deinitialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRLoaderHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Management::XRLoaderHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Management::XRLoaderHelper* UnityEngine::XR::Management::XRLoaderHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Management::XRLoaderHelper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::XRLoaderHelper::XRLoaderHelper() {}

#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\DefaultAllocationStrategy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__DefaultAllocationStrategy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy.New
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)(::System::Type*, int32_t)>(
    &::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69177ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>(),
                                                                                           { "New", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)(int32_t, ::System::Object*)>(
    &::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69177bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>(),
                                                                                           { "Release", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)()>(
    &::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69177c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New(::System::Type* type, int32_t typeHash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>(),
                                                                                         { "New", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, typeHash);
}
inline void UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::Release(int32_t typeHash, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>(),
                                                                                         { "Release", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeHash, obj);
}
inline void UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy* UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
constexpr UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::operator ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*
UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::i___UnityEngine__ResourceManagement__Util__IAllocationStrategy() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::DefaultAllocationStrategy() {}

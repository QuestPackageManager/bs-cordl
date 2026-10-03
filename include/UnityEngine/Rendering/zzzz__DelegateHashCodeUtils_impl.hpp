#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DelegateHashCodeUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DelegateHashCodeUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DelegateHashCodeUtils_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DelegateHashCodeUtils___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DelegateHashCodeUtils___c::*)()>(&::UnityEngine::Rendering::DelegateHashCodeUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6be3ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DelegateHashCodeUtils___c.__cctor_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, bool>* (::UnityEngine::Rendering::DelegateHashCodeUtils___c::*)()>(
    &::UnityEngine::Rendering::DelegateHashCodeUtils___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6be3ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils___c*>(), { "<.cctor>b__4_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DelegateHashCodeUtils___c::setStaticF___9(::UnityEngine::Rendering::DelegateHashCodeUtils___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DelegateHashCodeUtils___c*, "<>9", ::UnityEngine::Rendering::DelegateHashCodeUtils___c*>(
      std::forward<::UnityEngine::Rendering::DelegateHashCodeUtils___c*>(value));
}
inline ::UnityEngine::Rendering::DelegateHashCodeUtils___c* UnityEngine::Rendering::DelegateHashCodeUtils___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DelegateHashCodeUtils___c*, "<>9", ::UnityEngine::Rendering::DelegateHashCodeUtils___c*>();
}
inline void UnityEngine::Rendering::DelegateHashCodeUtils___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, bool>* UnityEngine::Rendering::DelegateHashCodeUtils___c::__cctor_b__4_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils___c*>(), { "<.cctor>b__4_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, bool>*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DelegateHashCodeUtils___c* UnityEngine::Rendering::DelegateHashCodeUtils___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DelegateHashCodeUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DelegateHashCodeUtils___c::DelegateHashCodeUtils___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DelegateHashCodeUtils.GetFuncHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Delegate*)>(&::UnityEngine::Rendering::DelegateHashCodeUtils::GetFuncHashCode)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6be38f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils*>(), { "GetFuncHashCode", {}, { ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DelegateHashCodeUtils.GetTotalCacheCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::DelegateHashCodeUtils::GetTotalCacheCount)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6be3b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils*>(), { "GetTotalCacheCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DelegateHashCodeUtils.ClearCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::DelegateHashCodeUtils::ClearCache)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6be3c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils*>(), { "ClearCache", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DelegateHashCodeUtils::setStaticF_s_MethodHashCodeToSkipTargetHashMap(::System::Lazy_1<::System::Collections::Generic::Dictionary_2<int32_t, bool>*>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<::System::Collections::Generic::Dictionary_2<int32_t, bool>*>*, "s_MethodHashCodeToSkipTargetHashMap",
                                    ::UnityEngine::Rendering::DelegateHashCodeUtils*>(std::forward<::System::Lazy_1<::System::Collections::Generic::Dictionary_2<int32_t, bool>*>*>(value));
}
inline ::System::Lazy_1<::System::Collections::Generic::Dictionary_2<int32_t, bool>*>* UnityEngine::Rendering::DelegateHashCodeUtils::getStaticF_s_MethodHashCodeToSkipTargetHashMap() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<::System::Collections::Generic::Dictionary_2<int32_t, bool>*>*, "s_MethodHashCodeToSkipTargetHashMap",
                                           ::UnityEngine::Rendering::DelegateHashCodeUtils*>();
}
inline int32_t UnityEngine::Rendering::DelegateHashCodeUtils::GetFuncHashCode(::System::Delegate* del) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils*>(), { "GetFuncHashCode", {}, { ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, del);
}
inline int32_t UnityEngine::Rendering::DelegateHashCodeUtils::GetTotalCacheCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils*>(), { "GetTotalCacheCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::DelegateHashCodeUtils::ClearCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DelegateHashCodeUtils*>(), { "ClearCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DelegateHashCodeUtils::DelegateHashCodeUtils() {}

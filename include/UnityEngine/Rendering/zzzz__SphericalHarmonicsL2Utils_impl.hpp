#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SphericalHarmonicsL2Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2Utils_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils.GetL1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::SphericalHarmonicsL2, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Rendering::SphericalHarmonicsL2Utils::GetL1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x679989c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                             { "GetL1",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils.GetL2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::SphericalHarmonicsL2, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Rendering::SphericalHarmonicsL2Utils::GetL2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67998d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                             { "GetL2",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils.SetL0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6799938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                { "SetL0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils.SetL1R
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL1R)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6799948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                { "SetL1R", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils.SetL1G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL1G)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6799954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                { "SetL1G", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils.SetL1B
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL1B)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6799960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                { "SetL1B", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils.SetL1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x679996c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                             { "SetL1",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils.SetCoefficient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>, int32_t, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetCoefficient)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6799990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
            { "SetCoefficient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils.GetCoefficient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Rendering::SphericalHarmonicsL2, int32_t)>(
    &::UnityEngine::Rendering::SphericalHarmonicsL2Utils::GetCoefficient)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67999f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                             { "GetCoefficient", {}, { ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2Utils._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SphericalHarmonicsL2Utils::*)()>(&::UnityEngine::Rendering::SphericalHarmonicsL2Utils::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6799a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SphericalHarmonicsL2Utils::GetL1(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, ::by_ref<::UnityEngine::Vector3> L1_R, ::by_ref<::UnityEngine::Vector3> L1_G,
                                                                     ::by_ref<::UnityEngine::Vector3> L1_B) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                           { "GetL1",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, L1_R, L1_G, L1_B);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2Utils::GetL2(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, ::by_ref<::UnityEngine::Vector3> L2_0, ::by_ref<::UnityEngine::Vector3> L2_1,
                                                                     ::by_ref<::UnityEngine::Vector3> L2_2, ::by_ref<::UnityEngine::Vector3> L2_3, ::by_ref<::UnityEngine::Vector3> L2_4) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                          { "GetL2",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, L2_0, L2_1, L2_2, L2_3, L2_4);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL0(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                           { "SetL0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, L0);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL1R(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_R) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                              { "SetL1R", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, L1_R);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL1G(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_G) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                              { "SetL1G", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, L1_G);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL1B(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_B) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                              { "SetL1B", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, L1_B);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetL1(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, ::UnityEngine::Vector3 L1_R, ::UnityEngine::Vector3 L1_G,
                                                                     ::UnityEngine::Vector3 L1_B) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                           { "SetL1",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, L1_R, L1_G, L1_B);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2Utils::SetCoefficient(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> sh, int32_t index, ::UnityEngine::Vector3 coefficient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                       { "SetCoefficient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, index, coefficient);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::SphericalHarmonicsL2Utils::GetCoefficient(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(),
                                                           { "GetCoefficient", {}, { ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, sh, index);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2Utils::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SphericalHarmonicsL2Utils* UnityEngine::Rendering::SphericalHarmonicsL2Utils::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SphericalHarmonicsL2Utils*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2Utils::SphericalHarmonicsL2Utils() {}

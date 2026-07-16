#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureId.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextureId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextureId::*)(int32_t)>(&::UnityEngine::UIElements::TextureId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd476c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureId.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TextureId::*)()>(&::UnityEngine::UIElements::TextureId::get_index)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd4778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureId.ConvertToGpu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::TextureId::*)()>(&::UnityEngine::UIElements::TextureId::ConvertToGpu)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6dd4784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(), { "ConvertToGpu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextureId::*)(::System::Object*)>(&::UnityEngine::UIElements::TextureId::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6dd47e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(), { ::i2c::class_of<::UnityEngine::UIElements::TextureId>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureId.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TextureId::*)()>(&::UnityEngine::UIElements::TextureId::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd4894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(), { ::i2c::class_of<::UnityEngine::UIElements::TextureId>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureId.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::TextureId, ::UnityEngine::UIElements::TextureId)>(&::UnityEngine::UIElements::TextureId::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd489c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureId.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::TextureId, ::UnityEngine::UIElements::TextureId)>(&::UnityEngine::UIElements::TextureId::op_Inequality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dd48a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TextureId::setStaticF_invalid(::UnityEngine::UIElements::TextureId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::TextureId, "invalid", ::UnityEngine::UIElements::TextureId>(std::forward<::UnityEngine::UIElements::TextureId>(value));
}
inline ::UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureId::getStaticF_invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::TextureId, "invalid", ::UnityEngine::UIElements::TextureId>();
}
inline void UnityEngine::UIElements::TextureId::_ctor(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline int32_t UnityEngine::UIElements::TextureId::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::TextureId::ConvertToGpu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(), { "ConvertToGpu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextureId::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextureId>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::TextureId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextureId>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextureId::op_Equality(::UnityEngine::UIElements::TextureId left, ::UnityEngine::UIElements::TextureId right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::UIElements::TextureId::op_Inequality(::UnityEngine::UIElements::TextureId left, ::UnityEngine::UIElements::TextureId right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureId>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TextureId::TextureId(int32_t m_Index) noexcept {
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextureId::TextureId() {}

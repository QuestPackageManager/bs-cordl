#pragma once
// IWYU pragma private; include "UnityEngine/SecondarySpriteTexture.hpp"
#include "UnityEngine/zzzz__SecondarySpriteTexture_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::SecondarySpriteTexture.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SecondarySpriteTexture::*)(::UnityEngine::SecondarySpriteTexture)>(&::UnityEngine::SecondarySpriteTexture::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6eb4530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SecondarySpriteTexture.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SecondarySpriteTexture::*)(::System::Object*)>(&::UnityEngine::SecondarySpriteTexture::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb4598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(), { ::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SecondarySpriteTexture.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::SecondarySpriteTexture::*)()>(&::UnityEngine::SecondarySpriteTexture::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6eb4618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(), { ::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SecondarySpriteTexture.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SecondarySpriteTexture, ::UnityEngine::SecondarySpriteTexture)>(&::UnityEngine::SecondarySpriteTexture::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eb4694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>(), ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SecondarySpriteTexture.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SecondarySpriteTexture, ::UnityEngine::SecondarySpriteTexture)>(&::UnityEngine::SecondarySpriteTexture::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6eb46c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>(), ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::SecondarySpriteTexture::Equals(::UnityEngine::SecondarySpriteTexture other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::SecondarySpriteTexture::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::SecondarySpriteTexture::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::SecondarySpriteTexture::op_Equality(::UnityEngine::SecondarySpriteTexture lhs, ::UnityEngine::SecondarySpriteTexture rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>(), ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::SecondarySpriteTexture::op_Inequality(::UnityEngine::SecondarySpriteTexture lhs, ::UnityEngine::SecondarySpriteTexture rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SecondarySpriteTexture>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>(), ::i2c::type_of<::UnityEngine::SecondarySpriteTexture>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>"
constexpr UnityEngine::SecondarySpriteTexture::operator ::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>"
constexpr ::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>* UnityEngine::SecondarySpriteTexture::i___System__IEquatable_1___UnityEngine__SecondarySpriteTexture_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers:
// "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::SecondarySpriteTexture::SecondarySpriteTexture(::StringW name, ::UnityW<::UnityEngine::Texture2D> texture) noexcept {
  this->name = name;
  this->texture = texture;
}
// Ctor Parameters []
constexpr ::UnityEngine::SecondarySpriteTexture::SecondarySpriteTexture() {}

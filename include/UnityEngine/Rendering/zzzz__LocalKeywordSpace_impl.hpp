#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LocalKeywordSpace.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.GetKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::LocalKeyword> (::UnityEngine::Rendering::LocalKeywordSpace::*)()>(
    &::UnityEngine::Rendering::LocalKeywordSpace::GetKeywords)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2a624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), { "GetKeywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.get_keywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::LocalKeyword> (::UnityEngine::Rendering::LocalKeywordSpace::*)()>(
    &::UnityEngine::Rendering::LocalKeywordSpace::get_keywords)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2a660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), { "get_keywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LocalKeywordSpace::*)(::System::Object*)>(&::UnityEngine::Rendering::LocalKeywordSpace::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b2a69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), { ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LocalKeywordSpace::*)(::UnityEngine::Rendering::LocalKeywordSpace)>(
    &::UnityEngine::Rendering::LocalKeywordSpace::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b2a718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::LocalKeywordSpace, ::UnityEngine::Rendering::LocalKeywordSpace)>(
    &::UnityEngine::Rendering::LocalKeywordSpace::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b2a600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LocalKeywordSpace::*)()>(&::UnityEngine::Rendering::LocalKeywordSpace::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2a61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), { ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), 2 }));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> UnityEngine::Rendering::LocalKeywordSpace::GetKeywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), { "GetKeywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::LocalKeyword>>(*this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::LocalKeyword> UnityEngine::Rendering::LocalKeywordSpace::get_keywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), { "get_keywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::LocalKeyword>>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::LocalKeywordSpace::Equals(::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline bool UnityEngine::Rendering::LocalKeywordSpace::Equals(::UnityEngine::Rendering::LocalKeywordSpace rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool UnityEngine::Rendering::LocalKeywordSpace::op_Equality(::UnityEngine::Rendering::LocalKeywordSpace lhs, ::UnityEngine::Rendering::LocalKeywordSpace rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeywordSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t UnityEngine::Rendering::LocalKeywordSpace::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LocalKeywordSpace>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr UnityEngine::Rendering::LocalKeywordSpace::operator ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>* UnityEngine::Rendering::LocalKeywordSpace::i___System__IEquatable_1___UnityEngine__Rendering__LocalKeywordSpace_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_KeywordSpace", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LocalKeywordSpace::LocalKeywordSpace(::System::IntPtr m_KeywordSpace) noexcept {
  this->m_KeywordSpace = m_KeywordSpace;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LocalKeywordSpace::LocalKeywordSpace() {}
